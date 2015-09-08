#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
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
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityString_Format_m9475 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t700* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t700* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m3839(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m9476 (AsyncOperation_t2703 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m9603(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m9477 (AsyncOperation_t2703 * __this, const MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m9477_ftn) (AsyncOperation_t2703 *);
	static AsyncOperation_InternalDestroy_m9477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m9477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m9478 (AsyncOperation_t2703 * __this, const MethodInfo* method)
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
		AsyncOperation_InternalDestroy_m9477(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t2703_marshal(const AsyncOperation_t2703& unmarshaled, AsyncOperation_t2703_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t2703_marshal_back(const AsyncOperation_t2703_marshaled& marshaled, AsyncOperation_t2703& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t2703_marshal_cleanup(AsyncOperation_t2703_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LogCallback__ctor_m380 (LogCallback_t54 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern "C" void LogCallback_Invoke_m9479 (LogCallback_t54 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m9479((LogCallback_t54 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t54(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern TypeInfo* LogType_t101_il2cpp_TypeInfo_var;
extern "C" Object_t * LogCallback_BeginInvoke_m9480 (LogCallback_t54 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(LogType_t101_il2cpp_TypeInfo_var, &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern "C" void LogCallback_EndInvoke_m9481 (LogCallback_t54 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Globalization.NumberFormatInfo
#include "mscorlib_System_Globalization_NumberFormatInfo.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1533_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern "C" void Application_add_logMessageReceived_m4302 (Object_t * __this /* static, unused */, LogCallback_t54 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2714);
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t54 * L_0 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		LogCallback_t54 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0 = ((LogCallback_t54 *)Castclass(L_2, LogCallback_t54_il2cpp_TypeInfo_var));
		LogCallback_t54 * L_3 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		Application_SetLogCallbackDefined_m9489(NULL /*static, unused*/, 1, ((((int32_t)((((Object_t*)(LogCallback_t54 *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1533_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern "C" void Application_remove_logMessageReceived_m4352 (Object_t * __this /* static, unused */, LogCallback_t54 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2714);
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t54 * L_0 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		LogCallback_t54 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0 = ((LogCallback_t54 *)Castclass(L_2, LogCallback_t54_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1533_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern "C" void Application_add_logMessageReceivedThreaded_m9482 (Object_t * __this /* static, unused */, LogCallback_t54 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2714);
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t54 * L_0 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		LogCallback_t54 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1 = ((LogCallback_t54 *)Castclass(L_2, LogCallback_t54_il2cpp_TypeInfo_var));
		Application_SetLogCallbackDefined_m9489(NULL /*static, unused*/, 1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
extern TypeInfo* Application_t1533_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern "C" void Application_remove_logMessageReceivedThreaded_m9483 (Object_t * __this /* static, unused */, LogCallback_t54 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2714);
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t54 * L_0 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		LogCallback_t54 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1 = ((LogCallback_t54 *)Castclass(L_2, LogCallback_t54_il2cpp_TypeInfo_var));
		return;
	}
}
// System.String UnityEngine.Application::get_loadedLevelName()
extern "C" String_t* Application_get_loadedLevelName_m3915 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_loadedLevelName_m3915_ftn) ();
	static Application_get_loadedLevelName_m3915_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevelName_m3915_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevelName()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C" void Application_LoadLevel_m4177 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Application_LoadLevelAsync_m9484(NULL /*static, unused*/, L_0, (-1), 0, 1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t2703 * Application_LoadLevelAsync_m9484 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method)
{
	typedef AsyncOperation_t2703 * (*Application_LoadLevelAsync_m9484_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m9484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m9484_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" bool Application_get_isPlaying_m4300 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m4300_ftn) ();
	static Application_get_isPlaying_m4300_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m4300_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" bool Application_get_isEditor_m6245 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m6245_ftn) ();
	static Application_get_isEditor_m6245_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m6245_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isWebPlayer()
extern "C" bool Application_get_isWebPlayer_m4226 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Application_get_isWebPlayer_m4226_ftn) ();
	static Application_get_isWebPlayer_m4226_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isWebPlayer_m4226_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isWebPlayer()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m3929 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m3929_ftn) ();
	static Application_get_platform_m3929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m3929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" String_t* Application_get_persistentDataPath_m7947 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_persistentDataPath_m7947_ftn) ();
	static Application_get_persistentDataPath_m7947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_persistentDataPath_m7947_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_persistentDataPath()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::ObjectToJSString(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t760_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t758_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t761_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t759_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t786_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t90_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t704_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t772_il2cpp_TypeInfo_var;
extern "C" String_t* Application_ObjectToJSString_m9485 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Int16_t760_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(272);
		UInt32_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		UInt16_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		Byte_t759_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		CultureInfo_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Double_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		IList_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		ICollection_t772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	NumberFormatInfo_t452 * V_1 = {0};
	NumberFormatInfo_t452 * V_2 = {0};
	Object_t * V_3 = {0};
	StringBuilder_t261 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	double V_8 = 0.0;
	{
		Object_t * L_0 = ___o;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (String_t*) &_stringLiteral501;
	}

IL_000c:
	{
		Object_t * L_1 = ___o;
		if (!((String_t*)IsInst(L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		Object_t * L_2 = ___o;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m3903(L_3, (String_t*) &_stringLiteral1915, (String_t*) &_stringLiteral108, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = String_Replace_m3903(L_5, (String_t*) &_stringLiteral125, (String_t*) &_stringLiteral109, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = String_Replace_m3903(L_7, (String_t*) &_stringLiteral75, (String_t*) &_stringLiteral110, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = String_Replace_m3903(L_9, (String_t*) &_stringLiteral1916, (String_t*) &_stringLiteral111, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_11);
		String_t* L_13 = String_Replace_m3903(L_11, (String_t*) &_stringLiteral1917, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = V_0;
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m3903(L_14, (String_t*) &_stringLiteral1918, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = V_0;
		String_t* L_18 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_17);
		String_t* L_19 = String_Replace_m3903(L_17, (String_t*) &_stringLiteral1919, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		uint16_t L_20 = ((int32_t)34);
		Object_t * L_21 = Box(Char_t60_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = V_0;
		uint16_t L_23 = ((int32_t)34);
		Object_t * L_24 = Box(Char_t60_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25 = String_Concat_m4033(NULL /*static, unused*/, L_21, L_22, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_00a8:
	{
		Object_t * L_26 = ___o;
		if (((Object_t *)IsInst(L_26, Int32_t82_il2cpp_TypeInfo_var)))
		{
			goto IL_00df;
		}
	}
	{
		Object_t * L_27 = ___o;
		if (((Object_t *)IsInst(L_27, Int16_t760_il2cpp_TypeInfo_var)))
		{
			goto IL_00df;
		}
	}
	{
		Object_t * L_28 = ___o;
		if (((Object_t *)IsInst(L_28, UInt32_t758_il2cpp_TypeInfo_var)))
		{
			goto IL_00df;
		}
	}
	{
		Object_t * L_29 = ___o;
		if (((Object_t *)IsInst(L_29, UInt16_t761_il2cpp_TypeInfo_var)))
		{
			goto IL_00df;
		}
	}
	{
		Object_t * L_30 = ___o;
		if (!((Object_t *)IsInst(L_30, Byte_t759_il2cpp_TypeInfo_var)))
		{
			goto IL_00e6;
		}
	}

IL_00df:
	{
		Object_t * L_31 = ___o;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		return L_32;
	}

IL_00e6:
	{
		Object_t * L_33 = ___o;
		if (!((Object_t *)IsInst(L_33, Single_t87_il2cpp_TypeInfo_var)))
		{
			goto IL_010d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t786_il2cpp_TypeInfo_var);
		CultureInfo_t786 * L_34 = CultureInfo_get_InvariantCulture_m4222(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_34);
		NumberFormatInfo_t452 * L_35 = (NumberFormatInfo_t452 *)VirtFuncInvoker0< NumberFormatInfo_t452 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_34);
		V_1 = L_35;
		Object_t * L_36 = ___o;
		V_7 = ((*(float*)((float*)UnBox (L_36, Single_t87_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t452 * L_37 = V_1;
		String_t* L_38 = Single_ToString_m10280((&V_7), L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_010d:
	{
		Object_t * L_39 = ___o;
		if (!((Object_t *)IsInst(L_39, Double_t90_il2cpp_TypeInfo_var)))
		{
			goto IL_0134;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t786_il2cpp_TypeInfo_var);
		CultureInfo_t786 * L_40 = CultureInfo_get_InvariantCulture_m4222(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		NumberFormatInfo_t452 * L_41 = (NumberFormatInfo_t452 *)VirtFuncInvoker0< NumberFormatInfo_t452 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_40);
		V_2 = L_41;
		Object_t * L_42 = ___o;
		V_8 = ((*(double*)((double*)UnBox (L_42, Double_t90_il2cpp_TypeInfo_var))));
		NumberFormatInfo_t452 * L_43 = V_2;
		String_t* L_44 = Double_ToString_m10281((&V_8), L_43, /*hidden argument*/NULL);
		return L_44;
	}

IL_0134:
	{
		Object_t * L_45 = ___o;
		if (!((Object_t *)IsInst(L_45, Char_t60_il2cpp_TypeInfo_var)))
		{
			goto IL_016c;
		}
	}
	{
		Object_t * L_46 = ___o;
		if ((!(((uint32_t)((*(uint16_t*)((uint16_t*)UnBox (L_46, Char_t60_il2cpp_TypeInfo_var))))) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0152;
		}
	}
	{
		return (String_t*) &_stringLiteral1920;
	}

IL_0152:
	{
		uint16_t L_47 = ((int32_t)34);
		Object_t * L_48 = Box(Char_t60_il2cpp_TypeInfo_var, &L_47);
		Object_t * L_49 = ___o;
		NullCheck(L_49);
		String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		uint16_t L_51 = ((int32_t)34);
		Object_t * L_52 = Box(Char_t60_il2cpp_TypeInfo_var, &L_51);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_53 = String_Concat_m4033(NULL /*static, unused*/, L_48, L_50, L_52, /*hidden argument*/NULL);
		return L_53;
	}

IL_016c:
	{
		Object_t * L_54 = ___o;
		if (!((Object_t *)IsInst(L_54, IList_t704_il2cpp_TypeInfo_var)))
		{
			goto IL_01ef;
		}
	}
	{
		Object_t * L_55 = ___o;
		V_3 = ((Object_t *)Castclass(L_55, IList_t704_il2cpp_TypeInfo_var));
		StringBuilder_t261 * L_56 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4000(L_56, /*hidden argument*/NULL);
		V_4 = L_56;
		StringBuilder_t261 * L_57 = V_4;
		NullCheck(L_57);
		StringBuilder_Append_m4007(L_57, (String_t*) &_stringLiteral1921, /*hidden argument*/NULL);
		Object_t * L_58 = V_3;
		NullCheck(L_58);
		int32_t L_59 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t772_il2cpp_TypeInfo_var, L_58);
		V_5 = L_59;
		V_6 = 0;
		goto IL_01d1;
	}

IL_01a2:
	{
		int32_t L_60 = V_6;
		if (!L_60)
		{
			goto IL_01b6;
		}
	}
	{
		StringBuilder_t261 * L_61 = V_4;
		NullCheck(L_61);
		StringBuilder_Append_m4007(L_61, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
	}

IL_01b6:
	{
		StringBuilder_t261 * L_62 = V_4;
		Object_t * L_63 = V_3;
		int32_t L_64 = V_6;
		NullCheck(L_63);
		Object_t * L_65 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t704_il2cpp_TypeInfo_var, L_63, L_64);
		String_t* L_66 = Application_ObjectToJSString_m9485(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		StringBuilder_Append_m4007(L_62, L_66, /*hidden argument*/NULL);
		int32_t L_67 = V_6;
		V_6 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01d1:
	{
		int32_t L_68 = V_6;
		int32_t L_69 = V_5;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_01a2;
		}
	}
	{
		StringBuilder_t261 * L_70 = V_4;
		NullCheck(L_70);
		StringBuilder_Append_m4007(L_70, (String_t*) &_stringLiteral1260, /*hidden argument*/NULL);
		StringBuilder_t261 * L_71 = V_4;
		NullCheck(L_71);
		String_t* L_72 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_71);
		return L_72;
	}

IL_01ef:
	{
		Object_t * L_73 = ___o;
		NullCheck(L_73);
		String_t* L_74 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_73);
		String_t* L_75 = Application_ObjectToJSString_m9485(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// System.Void UnityEngine.Application::ExternalCall(System.String,System.Object[])
extern "C" void Application_ExternalCall_m4227 (Object_t * __this /* static, unused */, String_t* ___functionName, ObjectU5BU5D_t700* ___args, const MethodInfo* method)
{
	{
		String_t* L_0 = ___functionName;
		ObjectU5BU5D_t700* L_1 = ___args;
		String_t* L_2 = Application_BuildInvocationForArguments_m9486(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Application_Internal_ExternalCall_m9487(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Application::BuildInvocationForArguments(System.String,System.Object[])
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" String_t* Application_BuildInvocationForArguments_m9486 (Object_t * __this /* static, unused */, String_t* ___functionName, ObjectU5BU5D_t700* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4000(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t261 * L_1 = V_0;
		String_t* L_2 = ___functionName;
		NullCheck(L_1);
		StringBuilder_Append_m4007(L_1, L_2, /*hidden argument*/NULL);
		StringBuilder_t261 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_Append_m4001(L_3, ((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_t700* L_4 = ___args;
		NullCheck(L_4);
		V_1 = (((int32_t)(((Array_t *)L_4)->max_length)));
		V_2 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		StringBuilder_t261 * L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_Append_m4007(L_6, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
	}

IL_0034:
	{
		StringBuilder_t261 * L_7 = V_0;
		ObjectU5BU5D_t700* L_8 = ___args;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		String_t* L_11 = Application_ObjectToJSString_m9485(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_10)), /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_Append_m4007(L_7, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t261 * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m4001(L_15, ((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t261 * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m4001(L_16, ((int32_t)59), /*hidden argument*/NULL);
		StringBuilder_t261 * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_17);
		return L_18;
	}
}
// System.Void UnityEngine.Application::ExternalEval(System.String)
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Application_ExternalEval_m4255 (Object_t * __this /* static, unused */, String_t* ___script, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___script;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m410(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_2 = ___script;
		String_t* L_3 = ___script;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m410(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint16_t L_5 = String_get_Chars_m407(L_2, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)59))))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_6 = ___script;
		uint16_t L_7 = ((int32_t)59);
		Object_t * L_8 = Box(Char_t60_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m409(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		___script = L_9;
	}

IL_0030:
	{
		String_t* L_10 = ___script;
		Application_Internal_ExternalCall_m9487(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::Internal_ExternalCall(System.String)
extern "C" void Application_Internal_ExternalCall_m9487 (Object_t * __this /* static, unused */, String_t* ___script, const MethodInfo* method)
{
	typedef void (*Application_Internal_ExternalCall_m9487_ftn) (String_t*);
	static Application_Internal_ExternalCall_m9487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_Internal_ExternalCall_m9487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Internal_ExternalCall(System.String)");
	_il2cpp_icall_func(___script);
}
// System.String UnityEngine.Application::get_unityVersion()
extern "C" String_t* Application_get_unityVersion_m4304 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Application_get_unityVersion_m4304_ftn) ();
	static Application_get_unityVersion_m4304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_unityVersion_m4304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_unityVersion()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C" void Application_OpenURL_m4120 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method)
{
	typedef void (*Application_OpenURL_m4120_ftn) (String_t*);
	static Application_OpenURL_m4120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_OpenURL_m4120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::OpenURL(System.String)");
	_il2cpp_icall_func(___url);
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern TypeInfo* Application_t1533_il2cpp_TypeInfo_var;
extern "C" void Application_CallLogCallback_m9488 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2714);
		s_Il2CppMethodIntialized = true;
	}
	LogCallback_t54 * V_0 = {0};
	LogCallback_t54 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t54 * L_1 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t54 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t54 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(12 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t54 * L_7 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t54 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t54 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(12 /* System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType) */, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)
extern "C" void Application_SetLogCallbackDefined_m9489 (Object_t * __this /* static, unused */, bool ___defined, bool ___threaded, const MethodInfo* method)
{
	typedef void (*Application_SetLogCallbackDefined_m9489_ftn) (bool, bool);
	static Application_SetLogCallbackDefined_m9489_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_SetLogCallbackDefined_m9489_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::SetLogCallbackDefined(System.Boolean,System.Boolean)");
	_il2cpp_icall_func(___defined, ___threaded);
}
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback)
extern "C" void Application_RegisterLogCallback_m381 (Object_t * __this /* static, unused */, LogCallback_t54 * ___handler, const MethodInfo* method)
{
	{
		LogCallback_t54 * L_0 = ___handler;
		Application_RegisterLogCallback_m9490(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Application::RegisterLogCallback(UnityEngine.Application/LogCallback,System.Boolean)
extern TypeInfo* Application_t1533_il2cpp_TypeInfo_var;
extern "C" void Application_RegisterLogCallback_m9490 (Object_t * __this /* static, unused */, LogCallback_t54 * ___handler, bool ___threaded, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2714);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogCallback_t54 * L_0 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		LogCallback_t54 * L_1 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		Application_remove_logMessageReceived_m4352(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LogCallback_t54 * L_2 = ((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2;
		il2cpp_codegen_memory_barrier();
		Application_remove_logMessageReceivedThreaded_m9483(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		LogCallback_t54 * L_3 = ___handler;
		il2cpp_codegen_memory_barrier();
		((Application_t1533_StaticFields*)Application_t1533_il2cpp_TypeInfo_var->static_fields)->___s_RegisterLogCallbackDeprecated_2 = L_3;
		LogCallback_t54 * L_4 = ___handler;
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		bool L_5 = ___threaded;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		LogCallback_t54 * L_6 = ___handler;
		Application_add_logMessageReceivedThreaded_m9482(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0043:
	{
		LogCallback_t54 * L_7 = ___handler;
		Application_add_logMessageReceived_m4302(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"


// System.Void UnityEngine.Behaviour::.ctor()
extern "C" void Behaviour__ctor_m9491 (Behaviour_t1114 * __this, const MethodInfo* method)
{
	{
		Component__ctor_m9568(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" bool Behaviour_get_enabled_m5977 (Behaviour_t1114 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m5977_ftn) (Behaviour_t1114 *);
	static Behaviour_get_enabled_m5977_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m5977_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" void Behaviour_set_enabled_m6215 (Behaviour_t1114 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m6215_ftn) (Behaviour_t1114 *, bool);
	static Behaviour_set_enabled_m6215_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m6215_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern "C" bool Behaviour_get_isActiveAndEnabled_m5978 (Behaviour_t1114 * __this, const MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m5978_ftn) (Behaviour_t1114 *);
	static Behaviour_get_isActiveAndEnabled_m5978_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m5978_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CameraCallback__ctor_m9492 (CameraCallback_t2769 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern "C" void CameraCallback_Invoke_m9493 (CameraCallback_t2769 * __this, Camera_t548 * ___cam, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m9493((CameraCallback_t2769 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t548 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t548 * ___cam, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t2769(Il2CppObject* delegate, Camera_t548 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t548 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern "C" Object_t * CameraCallback_BeginInvoke_m9494 (CameraCallback_t2769 * __this, Camera_t548 * ___cam, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern "C" void CameraCallback_EndInvoke_m9495 (CameraCallback_t2769 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"


// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m6031 (Camera_t548 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m6031_ftn) (Camera_t548 *);
	static Camera_get_nearClipPlane_m6031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m6031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m6030 (Camera_t548 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m6030_ftn) (Camera_t548 *);
	static Camera_get_farClipPlane_m6030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m6030_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" float Camera_get_orthographicSize_m4518 (Camera_t548 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_orthographicSize_m4518_ftn) (Camera_t548 *);
	static Camera_get_orthographicSize_m4518_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_orthographicSize_m4518_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_orthographicSize()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m4491 (Camera_t548 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m4491_ftn) (Camera_t548 *, float);
	static Camera_set_orthographicSize_m4491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m4491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m5943 (Camera_t548 * __this, const MethodInfo* method)
{
	typedef float (*Camera_get_depth_m5943_ftn) (Camera_t548 *);
	static Camera_get_depth_m5943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m5943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m6043 (Camera_t548 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m6043_ftn) (Camera_t548 *);
	static Camera_get_cullingMask_m6043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m6043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m9496 (Camera_t548 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m9496_ftn) (Camera_t548 *);
	static Camera_get_eventMask_m9496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m9496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m9497 (Camera_t548 * __this, Rect_t712 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_rect_m9497_ftn) (Camera_t548 *, Rect_t712 *);
	static Camera_INTERNAL_get_rect_m9497_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_rect_m9497_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m9498 (Camera_t548 * __this, Rect_t712 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_rect_m9498_ftn) (Camera_t548 *, Rect_t712 *);
	static Camera_INTERNAL_set_rect_m9498_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_rect_m9498_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C" Rect_t712  Camera_get_rect_m4311 (Camera_t548 * __this, const MethodInfo* method)
{
	Rect_t712  V_0 = {0};
	{
		Camera_INTERNAL_get_rect_m9497(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t712  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C" void Camera_set_rect_m4316 (Camera_t548 * __this, Rect_t712  ___value, const MethodInfo* method)
{
	{
		Camera_INTERNAL_set_rect_m9498(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m9499 (Camera_t548 * __this, Rect_t712 * ___value, const MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m9499_ftn) (Camera_t548 *, Rect_t712 *);
	static Camera_INTERNAL_get_pixelRect_m9499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m9499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t712  Camera_get_pixelRect_m9500 (Camera_t548 * __this, const MethodInfo* method)
{
	Rect_t712  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m9499(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t712  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t2723 * Camera_get_targetTexture_m9501 (Camera_t548 * __this, const MethodInfo* method)
{
	typedef RenderTexture_t2723 * (*Camera_get_targetTexture_m9501_ftn) (Camera_t548 *);
	static Camera_get_targetTexture_m9501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m9501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m9502 (Camera_t548 * __this, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m9502_ftn) (Camera_t548 *);
	static Camera_get_clearFlags_m9502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m9502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" Vector3_t538  Camera_WorldToScreenPoint_m4195 (Camera_t548 * __this, Vector3_t538  ___position, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = Camera_INTERNAL_CALL_WorldToScreenPoint_m9503(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t538  Camera_INTERNAL_CALL_WorldToScreenPoint_m9503 (Object_t * __this /* static, unused */, Camera_t548 * ___self, Vector3_t538 * ___position, const MethodInfo* method)
{
	typedef Vector3_t538  (*Camera_INTERNAL_CALL_WorldToScreenPoint_m9503_ftn) (Camera_t548 *, Vector3_t538 *);
	static Camera_INTERNAL_CALL_WorldToScreenPoint_m9503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToScreenPoint_m9503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t538  Camera_ScreenToWorldPoint_m4202 (Camera_t548 * __this, Vector3_t538  ___position, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = Camera_INTERNAL_CALL_ScreenToWorldPoint_m9504(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t538  Camera_INTERNAL_CALL_ScreenToWorldPoint_m9504 (Object_t * __this /* static, unused */, Camera_t548 * ___self, Vector3_t538 * ___position, const MethodInfo* method)
{
	typedef Vector3_t538  (*Camera_INTERNAL_CALL_ScreenToWorldPoint_m9504_ftn) (Camera_t548 *, Vector3_t538 *);
	static Camera_INTERNAL_CALL_ScreenToWorldPoint_m9504_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToWorldPoint_m9504_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t538  Camera_ScreenToViewportPoint_m4517 (Camera_t548 * __this, Vector3_t538  ___position, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m9505(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t538  Camera_INTERNAL_CALL_ScreenToViewportPoint_m9505 (Object_t * __this /* static, unused */, Camera_t548 * ___self, Vector3_t538 * ___position, const MethodInfo* method)
{
	typedef Vector3_t538  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m9505_ftn) (Camera_t548 *, Vector3_t538 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m9505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m9505_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t780  Camera_ScreenPointToRay_m4169 (Camera_t548 * __this, Vector3_t538  ___position, const MethodInfo* method)
{
	{
		Ray_t780  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m9506(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t780  Camera_INTERNAL_CALL_ScreenPointToRay_m9506 (Object_t * __this /* static, unused */, Camera_t548 * ___self, Vector3_t538 * ___position, const MethodInfo* method)
{
	typedef Ray_t780  (*Camera_INTERNAL_CALL_ScreenPointToRay_m9506_ftn) (Camera_t548 *, Vector3_t538 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m9506_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m9506_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t548 * Camera_get_main_m4167 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Camera_t548 * (*Camera_get_main_m4167_ftn) ();
	static Camera_get_main_m4167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m4167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m9507 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m9507_ftn) ();
	static Camera_get_allCamerasCount_m9507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m9507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m9508 (Object_t * __this /* static, unused */, CameraU5BU5D_t2886* ___cameras, const MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m9508_ftn) (CameraU5BU5D_t2886*);
	static Camera_GetAllCameras_m9508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m9508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern TypeInfo* Camera_t548_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreCull_m9509 (Object_t * __this /* static, unused */, Camera_t548 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t2769 * L_0 = ((Camera_t548_StaticFields*)Camera_t548_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t2769 * L_1 = ((Camera_t548_StaticFields*)Camera_t548_il2cpp_TypeInfo_var->static_fields)->___onPreCull_2;
		Camera_t548 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t548 * >::Invoke(12 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern TypeInfo* Camera_t548_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPreRender_m9510 (Object_t * __this /* static, unused */, Camera_t548 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t2769 * L_0 = ((Camera_t548_StaticFields*)Camera_t548_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t2769 * L_1 = ((Camera_t548_StaticFields*)Camera_t548_il2cpp_TypeInfo_var->static_fields)->___onPreRender_3;
		Camera_t548 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t548 * >::Invoke(12 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern TypeInfo* Camera_t548_il2cpp_TypeInfo_var;
extern "C" void Camera_FireOnPostRender_m9511 (Object_t * __this /* static, unused */, Camera_t548 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Camera_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		CameraCallback_t2769 * L_0 = ((Camera_t548_StaticFields*)Camera_t548_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t2769 * L_1 = ((Camera_t548_StaticFields*)Camera_t548_il2cpp_TypeInfo_var->static_fields)->___onPostRender_4;
		Camera_t548 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t548 * >::Invoke(12 /* System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t352 * Camera_RaycastTry_m9512 (Camera_t548 * __this, Ray_t780  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t352 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m9513(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t352 * Camera_INTERNAL_CALL_RaycastTry_m9513 (Object_t * __this /* static, unused */, Camera_t548 * ___self, Ray_t780 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t352 * (*Camera_INTERNAL_CALL_RaycastTry_m9513_ftn) (Camera_t548 *, Ray_t780 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m9513_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m9513_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t352 * Camera_RaycastTry2D_m9514 (Camera_t548 * __this, Ray_t780  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t352 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m9515(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t352 * Camera_INTERNAL_CALL_RaycastTry2D_m9515 (Object_t * __this /* static, unused */, Camera_t548 * ___self, Ray_t780 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	typedef GameObject_t352 * (*Camera_INTERNAL_CALL_RaycastTry2D_m9515_ftn) (Camera_t548 *, Ray_t780 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m9515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m9515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"


// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m9516 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t721 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m9516_ftn) (int32_t, String_t*, Object_t721 *);
	static Debug_Internal_Log_m9516_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m9516_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m9517 (Object_t * __this /* static, unused */, Exception_t57 * ___exception, Object_t721 * ___obj, const MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m9517_ftn) (Exception_t57 *, Object_t721 *);
	static Debug_Internal_LogException_m9517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m9517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m382 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral1922;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m9516(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m393 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral1922;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m9516(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m6156 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t721 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t721 * L_2 = ___context;
		Debug_Internal_Log_m9516(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m7917 (Object_t * __this /* static, unused */, Exception_t57 * ___exception, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = ___exception;
		Debug_Internal_LogException_m9517(NULL /*static, unused*/, L_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m6064 (Object_t * __this /* static, unused */, Exception_t57 * ___exception, Object_t721 * ___context, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = ___exception;
		Object_t721 * L_1 = ___context;
		Debug_Internal_LogException_m9517(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m389 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Debug_Internal_Log_m9516(NULL /*static, unused*/, 1, L_1, (Object_t721 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m6303 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t721 * ___context, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		Object_t721 * L_2 = ___context;
		Debug_Internal_Log_m9516(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C" bool Debug_get_isDebugBuild_m4225 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Debug_get_isDebugBuild_m4225_ftn) ();
	static Debug_get_isDebugBuild_m4225_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_get_isDebugBuild_m4225_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::get_isDebugBuild()");
	return _il2cpp_icall_func();
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DisplaysUpdatedDelegate__ctor_m9518 (DisplaysUpdatedDelegate_t2771 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C" void DisplaysUpdatedDelegate_Invoke_m9519 (DisplaysUpdatedDelegate_t2771 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m9519((DisplaysUpdatedDelegate_t2771 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t2771(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m9520 (DisplaysUpdatedDelegate_t2771 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m9521 (DisplaysUpdatedDelegate_t2771 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m9522 (Display_t2773 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m10282(&L_0, 0, /*hidden argument*/NULL);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m9523 (Display_t2773 * __this, IntPtr_t ___nativeDisplay, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern TypeInfo* DisplayU5BU5D_t2772_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m9524 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t2772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4524);
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	{
		DisplayU5BU5D_t2772* L_0 = ((DisplayU5BU5D_t2772*)SZArrayNew(DisplayU5BU5D_t2772_il2cpp_TypeInfo_var, 1));
		Display_t2773 * L_1 = (Display_t2773 *)il2cpp_codegen_object_new (Display_t2773_il2cpp_TypeInfo_var);
		Display__ctor_m9522(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t2773 **)(Display_t2773 **)SZArrayLdElema(L_0, 0)) = (Display_t2773 *)L_1;
		((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t2772* L_2 = ((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t2773 **)(Display_t2773 **)SZArrayLdElema(L_2, L_3));
		((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t2771 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t2771_il2cpp_TypeInfo_var;
extern "C" void Display_add_onDisplaysUpdated_m9525 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t2771 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		DisplaysUpdatedDelegate_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4526);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t2771 * L_0 = ((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t2771 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t2771 *)Castclass(L_2, DisplaysUpdatedDelegate_t2771_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern TypeInfo* DisplaysUpdatedDelegate_t2771_il2cpp_TypeInfo_var;
extern "C" void Display_remove_onDisplaysUpdated_m9526 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t2771 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		DisplaysUpdatedDelegate_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4526);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t2771 * L_0 = ((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t2771 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t2771 *)Castclass(L_2, DisplaysUpdatedDelegate_t2771_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingWidth_m9527 (Display_t2773 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m9543(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_renderingHeight_m9528 (Display_t2773 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_GetRenderingExtImpl_m9543(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemWidth_m9529 (Display_t2773 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m9542(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" int32_t Display_get_systemHeight_m9530 (Display_t2773 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_GetSystemExtImpl_m9542(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t2870  Display_get_colorBuffer_m9531 (Display_t2773 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t2870  V_0 = {0};
	RenderBuffer_t2870  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m9544(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t2870  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" RenderBuffer_t2870  Display_get_depthBuffer_m9532 (Display_t2773 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	RenderBuffer_t2870  V_0 = {0};
	RenderBuffer_t2870  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_GetRenderingBuffersImpl_m9544(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		RenderBuffer_t2870  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m9533 (Display_t2773 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m9546(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" void Display_Activate_m9534 (Display_t2773 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_ActivateDisplayImpl_m9546(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" void Display_SetParams_m9535 (Display_t2773 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_SetParamsImpl_m9547(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" void Display_SetRenderingResolution_m9536 (Display_t2773 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_SetRenderingResolutionImpl_m9545(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" bool Display_MultiDisplayLicense_m9537 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		bool L_0 = Display_MultiDisplayLicenseImpl_m9548(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" Vector3_t538  Display_RelativeMouseAt_m9538 (Object_t * __this /* static, unused */, Vector3_t538  ___inputMouseCoordinates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t538  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		int32_t L_4 = Display_RelativeMouseAtImpl_m9549(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/NULL);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t538  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" Display_t2773 * Display_get_main_m9539 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		Display_t2773 * L_0 = ((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern TypeInfo* DisplayU5BU5D_t2772_il2cpp_TypeInfo_var;
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m9540 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t2926* ___nativeDisplay, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisplayU5BU5D_t2772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4524);
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t2926* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___displays_1 = ((DisplayU5BU5D_t2772*)SZArrayNew(DisplayU5BU5D_t2772_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t2772* L_1 = ((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t2926* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t2773 * L_6 = (Display_t2773 *)il2cpp_codegen_object_new (Display_t2773_il2cpp_TypeInfo_var);
		Display__ctor_m9523(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t2773 **)(Display_t2773 **)SZArrayLdElema(L_1, L_2)) = (Display_t2773 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t2926* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t2772* L_10 = ((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->____mainDisplay_2 = (*(Display_t2773 **)(Display_t2773 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern TypeInfo* Display_t2773_il2cpp_TypeInfo_var;
extern "C" void Display_FireDisplaysUpdated_m9541 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Display_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4525);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t2771 * L_0 = ((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t2773_il2cpp_TypeInfo_var);
		DisplaysUpdatedDelegate_t2771 * L_1 = ((Display_t2773_StaticFields*)Display_t2773_il2cpp_TypeInfo_var->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m9542 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m9542_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m9542_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m9542_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m9543 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m9543_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m9543_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m9543_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m9544 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t2870 * ___color, RenderBuffer_t2870 * ___depth, const MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m9544_ftn) (IntPtr_t, RenderBuffer_t2870 *, RenderBuffer_t2870 *);
	static Display_GetRenderingBuffersImpl_m9544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m9544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m9545 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, const MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m9545_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m9545_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m9545_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m9546 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, const MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m9546_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m9546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m9546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m9547 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m9547_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m9547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m9547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m9548 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m9548_ftn) ();
	static Display_MultiDisplayLicenseImpl_m9548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m9548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m9549 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, const MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m9549_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m9549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m9549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m379 (MonoBehaviour_t13 * __this, const MethodInfo* method)
{
	{
		Behaviour__ctor_m9491(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" void MonoBehaviour_Invoke_m4175 (MonoBehaviour_t13 * __this, String_t* ___methodName, float ___time, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_Invoke_m4175_ftn) (MonoBehaviour_t13 *, String_t*, float);
	static MonoBehaviour_Invoke_m4175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_Invoke_m4175_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___methodName, ___time);
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C" void MonoBehaviour_CancelInvoke_m4174 (MonoBehaviour_t13 * __this, String_t* ___methodName, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_CancelInvoke_m4174_ftn) (MonoBehaviour_t13 *, String_t*);
	static MonoBehaviour_CancelInvoke_m4174_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_CancelInvoke_m4174_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::CancelInvoke(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t972 * MonoBehaviour_StartCoroutine_m3879 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t972 * L_1 = MonoBehaviour_StartCoroutine_Auto_m9550(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t972 * MonoBehaviour_StartCoroutine_Auto_m9550 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef Coroutine_t972 * (*MonoBehaviour_StartCoroutine_Auto_m9550_ftn) (MonoBehaviour_t13 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m9550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m9550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m4340 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9551(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m6248 (MonoBehaviour_t13 * __this, Coroutine_t972 * ___routine, const MethodInfo* method)
{
	{
		Coroutine_t972 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m9552(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9551 (MonoBehaviour_t13 * __this, Object_t * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9551_ftn) (MonoBehaviour_t13 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9551_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m9551_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m9552 (MonoBehaviour_t13 * __this, Coroutine_t972 * ___routine, const MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m9552_ftn) (MonoBehaviour_t13 *, Coroutine_t972 *);
	static MonoBehaviour_StopCoroutine_Auto_m9552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m9552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" void MonoBehaviour_print_m4136 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		Debug_Log_m382(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" int32_t Touch_get_fingerId_m5993 (Touch_t724 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t110  Touch_get_position_m4381 (Touch_t724 * __this, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
extern "C" Vector2_t110  Touch_get_deltaPosition_m3852 (Touch_t724 * __this, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = (__this->___m_PositionDelta_3);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" int32_t Touch_get_phase_m3851 (Touch_t724 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t724_marshal(const Touch_t724& unmarshaled, Touch_t724_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t724_marshal_back(const Touch_t724_marshaled& marshaled, Touch_t724& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t724_marshal_cleanup(Touch_t724_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"



// System.Void UnityEngine.Input::.cctor()
extern "C" void Input__cctor_m9553 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" float Input_GetAxisRaw_m6022 (Object_t * __this /* static, unused */, String_t* ___axisName, const MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m6022_ftn) (String_t*);
	static Input_GetAxisRaw_m6022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m6022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" bool Input_GetButtonDown_m6021 (Object_t * __this /* static, unused */, String_t* ___buttonName, const MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m6021_ftn) (String_t*);
	static Input_GetButtonDown_m6021_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m6021_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" bool Input_GetMouseButton_m4384 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m4384_ftn) (int32_t);
	static Input_GetMouseButton_m4384_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m4384_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" bool Input_GetMouseButtonDown_m4170 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m4170_ftn) (int32_t);
	static Input_GetMouseButtonDown_m4170_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m4170_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C" bool Input_GetMouseButtonUp_m4383 (Object_t * __this /* static, unused */, int32_t ___button, const MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m4383_ftn) (int32_t);
	static Input_GetMouseButtonUp_m4383_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m4383_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" Vector3_t538  Input_get_mousePosition_m4168 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector3_t538  (*Input_get_mousePosition_m4168_ftn) ();
	static Input_get_mousePosition_m4168_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m4168_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern "C" Vector2_t110  Input_get_mouseScrollDelta_m5995 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Vector2_t110  (*Input_get_mouseScrollDelta_m5995_ftn) ();
	static Input_get_mouseScrollDelta_m5995_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m5995_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern "C" bool Input_get_mousePresent_m6020 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m6020_ftn) ();
	static Input_get_mousePresent_m6020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m6020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C" Touch_t724  Input_GetTouch_m3850 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef Touch_t724  (*Input_GetTouch_m3850_ftn) (int32_t);
	static Input_GetTouch_m3850_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m3850_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C" int32_t Input_get_touchCount_m3849 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m3849_ftn) ();
	static Input_get_touchCount_m3849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m3849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern "C" bool Input_get_touchSupported_m6027 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern "C" void Input_set_imeCompositionMode_m6243 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m6243_ftn) (int32_t);
	static Input_set_imeCompositionMode_m6243_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m6243_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern "C" String_t* Input_get_compositionString_m6184 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m6184_ftn) ();
	static Input_get_compositionString_m6184_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m6184_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m9554 (Object_t * __this /* static, unused */, Vector2_t110 * ___value, const MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m9554_ftn) (Vector2_t110 *);
	static Input_INTERNAL_set_compositionCursorPos_m9554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m9554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern TypeInfo* Input_t725_il2cpp_TypeInfo_var;
extern "C" void Input_set_compositionCursorPos_m6233 (Object_t * __this /* static, unused */, Vector2_t110  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t725_il2cpp_TypeInfo_var);
		Input_INTERNAL_set_compositionCursorPos_m9554(NULL /*static, unused*/, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void UnityEngine.Object::.ctor()
extern "C" void Object__ctor_m9555 (Object_t721 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t721 * Object_Internal_CloneSingle_m9556 (Object_t * __this /* static, unused */, Object_t721 * ___data, const MethodInfo* method)
{
	typedef Object_t721 * (*Object_Internal_CloneSingle_m9556_ftn) (Object_t721 *);
	static Object_Internal_CloneSingle_m9556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m9556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t721 * Object_Internal_InstantiateSingle_m9557 (Object_t * __this /* static, unused */, Object_t721 * ___data, Vector3_t538  ___pos, Quaternion_t806  ___rot, const MethodInfo* method)
{
	{
		Object_t721 * L_0 = ___data;
		Object_t721 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m9558(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t721 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m9558 (Object_t * __this /* static, unused */, Object_t721 * ___data, Vector3_t538 * ___pos, Quaternion_t806 * ___rot, const MethodInfo* method)
{
	typedef Object_t721 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m9558_ftn) (Object_t721 *, Vector3_t538 *, Quaternion_t806 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m9558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m9558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m9559 (Object_t * __this /* static, unused */, Object_t721 * ___obj, float ___t, const MethodInfo* method)
{
	typedef void (*Object_Destroy_m9559_ftn) (Object_t721 *, float);
	static Object_Destroy_m9559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m9559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" void Object_Destroy_m4060 (Object_t * __this /* static, unused */, Object_t721 * ___obj, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t721 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m9559(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m9560 (Object_t * __this /* static, unused */, Object_t721 * ___obj, bool ___allowDestroyingAssets, const MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m9560_ftn) (Object_t721 *, bool);
	static Object_DestroyImmediate_m9560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m9560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" void Object_DestroyImmediate_m6244 (Object_t * __this /* static, unused */, Object_t721 * ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t721 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m9560(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t2919* Object_FindObjectsOfType_m9561 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef ObjectU5BU5D_t2919* (*Object_FindObjectsOfType_m9561_ftn) (Type_t *);
	static Object_FindObjectsOfType_m9561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m9561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern "C" String_t* Object_get_name_m3917 (Object_t721 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m3917_ftn) (Object_t721 *);
	static Object_get_name_m3917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m3917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" void Object_set_name_m6304 (Object_t721 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*Object_set_name_m6304_ftn) (Object_t721 *, String_t*);
	static Object_set_name_m6304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m6304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" void Object_DontDestroyOnLoad_m385 (Object_t * __this /* static, unused */, Object_t721 * ___target, const MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m385_ftn) (Object_t721 *);
	static Object_DontDestroyOnLoad_m385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" void Object_set_hideFlags_m6218 (Object_t721 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m6218_ftn) (Object_t721 *, int32_t);
	static Object_set_hideFlags_m6218_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m6218_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern "C" String_t* Object_ToString_m527 (Object_t721 * __this, const MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m527_ftn) (Object_t721 *);
	static Object_ToString_m527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern TypeInfo* Object_t721_il2cpp_TypeInfo_var;
extern "C" bool Object_Equals_m525 (Object_t721 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1879);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m9562(NULL /*static, unused*/, __this, ((Object_t721 *)IsInst(L_0, Object_t721_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m526 (Object_t721 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m9564(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m9562 (Object_t * __this /* static, unused */, Object_t721 * ___lhs, Object_t721 * ___rhs, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t721 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t721 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t721 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t721 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t721 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m9563(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t721 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m9563(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t721 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t721 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool Object_IsNativeObjectAlive_m9563 (Object_t * __this /* static, unused */, Object_t721 * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t721 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m9565(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m10283(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m9564 (Object_t721 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m9565 (Object_t721 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t721 * Object_Instantiate_m4321 (Object_t * __this /* static, unused */, Object_t721 * ___original, Vector3_t538  ___position, Quaternion_t806  ___rotation, const MethodInfo* method)
{
	{
		Object_t721 * L_0 = ___original;
		Object_CheckNullArgument_m9566(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral1923, /*hidden argument*/NULL);
		Object_t721 * L_1 = ___original;
		Vector3_t538  L_2 = ___position;
		Quaternion_t806  L_3 = ___rotation;
		Object_t721 * L_4 = Object_Internal_InstantiateSingle_m9557(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern TypeInfo* ArgumentException_t729_il2cpp_TypeInfo_var;
extern "C" void Object_CheckNullArgument_m9566 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t729 * L_2 = (ArgumentException_t729 *)il2cpp_codegen_object_new (ArgumentException_t729_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C" Object_t721 * Object_FindObjectOfType_m9567 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	ObjectU5BU5D_t2919* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t2919* L_1 = Object_FindObjectsOfType_m9561(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ObjectU5BU5D_t2919* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t2919* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t721 **)(Object_t721 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (Object_t721 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" bool Object_op_Implicit_m4259 (Object_t * __this /* static, unused */, Object_t721 * ___exists, const MethodInfo* method)
{
	{
		Object_t721 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m9562(NULL /*static, unused*/, L_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Equality_m3941 (Object_t * __this /* static, unused */, Object_t721 * ___x, Object_t721 * ___y, const MethodInfo* method)
{
	{
		Object_t721 * L_0 = ___x;
		Object_t721 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m9562(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_op_Inequality_m3837 (Object_t * __this /* static, unused */, Object_t721 * ___x, Object_t721 * ___y, const MethodInfo* method)
{
	{
		Object_t721 * L_0 = ___x;
		Object_t721 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m9562(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t721_marshal(const Object_t721& unmarshaled, Object_t721_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t721_marshal_back(const Object_t721_marshaled& marshaled, Object_t721& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t721_marshal_cleanup(Object_t721_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_35.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m9568 (Component_t779 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m9555(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" Transform_t406 * Component_get_transform_m4196 (Component_t779 * __this, const MethodInfo* method)
{
	typedef Transform_t406 * (*Component_get_transform_m4196_ftn) (Component_t779 *);
	static Component_get_transform_m4196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m4196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t352 * Component_get_gameObject_m3916 (Component_t779 * __this, const MethodInfo* method)
{
	typedef GameObject_t352 * (*Component_get_gameObject_m3916_ftn) (Component_t779 *);
	static Component_get_gameObject_m3916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m3916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern "C" Component_t779 * Component_GetComponent_m6350 (Component_t779 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t779 * L_2 = GameObject_GetComponent_m9572(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void Component_GetComponentFastPath_m9569 (Component_t779 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m9569_ftn) (Component_t779 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m9569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m9569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m9570 (Component_t779 * __this, Type_t * ___searchType, Object_t * ___resultList, const MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m9570_ftn) (Component_t779 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m9570_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m9570_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void Component_GetComponents_m6080 (Component_t779 * __this, Type_t * ___type, List_1_t1068 * ___results, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t1068 * L_1 = ___results;
		Component_GetComponentsForListInternal_m9570(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Component::get_tag()
extern "C" String_t* Component_get_tag_m4379 (Component_t779 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3916(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = GameObject_get_tag_m4501(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" void GameObject__ctor_m4018 (GameObject_t352 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Object__ctor_m9555(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m9579(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor()
extern "C" void GameObject__ctor_m9571 (GameObject_t352 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m9555(__this, /*hidden argument*/NULL);
		GameObject_Internal_CreateGameObject_m9579(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t779 * GameObject_GetComponent_m9572 (GameObject_t352 * __this, Type_t * ___type, const MethodInfo* method)
{
	typedef Component_t779 * (*GameObject_GetComponent_m9572_ftn) (GameObject_t352 *, Type_t *);
	static GameObject_GetComponent_m9572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m9572_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m9573 (GameObject_t352 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m9573_ftn) (GameObject_t352 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m9573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m9573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t406_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Component_t779 * GameObject_GetComponentInChildren_m9574 (GameObject_t352 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Transform_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1202);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Component_t779 * V_0 = {0};
	Transform_t406 * V_1 = {0};
	Transform_t406 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t779 * V_4 = {0};
	Component_t779 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m5979(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t779 * L_2 = GameObject_GetComponent_m9572(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Component_t779 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_3, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t779 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t406 * L_6 = GameObject_get_transform_m4199(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t406 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_7, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t406 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_11);
			V_2 = ((Transform_t406 *)Castclass(L_12, Transform_t406_il2cpp_TypeInfo_var));
			Transform_t406 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t352 * L_14 = Component_get_gameObject_m3916(L_13, /*hidden argument*/NULL);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t779 * L_16 = GameObject_GetComponentInChildren_m9574(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			Component_t779 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_17, (Object_t721 *)NULL, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t779 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0095:
	{
		return (Component_t779 *)NULL;
	}

IL_0097:
	{
		Component_t779 * L_25 = V_5;
		return L_25;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern "C" Array_t * GameObject_GetComponentsInternal_m9575 (GameObject_t352 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, const MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m9575_ftn) (GameObject_t352 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m9575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m9575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t406 * GameObject_get_transform_m4199 (GameObject_t352 * __this, const MethodInfo* method)
{
	typedef Transform_t406 * (*GameObject_get_transform_m4199_ftn) (GameObject_t352 *);
	static GameObject_get_transform_m4199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m4199_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern "C" int32_t GameObject_get_layer_m6220 (GameObject_t352 * __this, const MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m6220_ftn) (GameObject_t352 *);
	static GameObject_get_layer_m6220_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m6220_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" void GameObject_set_layer_m6221 (GameObject_t352 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m6221_ftn) (GameObject_t352 *, int32_t);
	static GameObject_set_layer_m6221_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m6221_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" void GameObject_SetActive_m4116 (GameObject_t352 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m4116_ftn) (GameObject_t352 *, bool);
	static GameObject_SetActive_m4116_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m4116_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" bool GameObject_get_activeSelf_m4489 (GameObject_t352 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m4489_ftn) (GameObject_t352 *);
	static GameObject_get_activeSelf_m4489_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m4489_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m5979 (GameObject_t352 * __this, const MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m5979_ftn) (GameObject_t352 *);
	static GameObject_get_activeInHierarchy_m5979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m5979_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern "C" String_t* GameObject_get_tag_m4501 (GameObject_t352 * __this, const MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m4501_ftn) (GameObject_t352 *);
	static GameObject_get_tag_m4501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m4501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" GameObject_t352 * GameObject_FindGameObjectWithTag_m4380 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	typedef GameObject_t352 * (*GameObject_FindGameObjectWithTag_m4380_ftn) (String_t*);
	static GameObject_FindGameObjectWithTag_m4380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_FindGameObjectWithTag_m4380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::FindGameObjectWithTag(System.String)");
	return _il2cpp_icall_func(___tag);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
extern "C" GameObject_t352 * GameObject_FindWithTag_m4365 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		GameObject_t352 * L_1 = GameObject_FindGameObjectWithTag_m4380(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m9576 (GameObject_t352 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m9576_ftn) (GameObject_t352 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m9576_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m9576_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m4180 (GameObject_t352 * __this, String_t* ___methodName, int32_t ___options, const MethodInfo* method)
{
	{
		String_t* L_0 = ___methodName;
		int32_t L_1 = ___options;
		GameObject_SendMessage_m9576(__this, L_0, NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t779 * GameObject_Internal_AddComponentWithType_m9577 (GameObject_t352 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	typedef Component_t779 * (*GameObject_Internal_AddComponentWithType_m9577_ftn) (GameObject_t352 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m9577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m9577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t779 * GameObject_AddComponent_m9578 (GameObject_t352 * __this, Type_t * ___componentType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t779 * L_1 = GameObject_Internal_AddComponentWithType_m9577(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m9579 (Object_t * __this /* static, unused */, GameObject_t352 * ___mono, String_t* ___name, const MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m9579_ftn) (GameObject_t352 *, String_t*);
	static GameObject_Internal_CreateGameObject_m9579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m9579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"



// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m9580 (Enumerator_t2777 * __this, Transform_t406 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Transform_t406 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m9581 (Enumerator_t2777 * __this, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t406 * L_2 = Transform_GetChild_m4480(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m9582 (Enumerator_t2777 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t406 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m4481(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
// System.Void UnityEngine.Transform/Enumerator::Reset()
extern "C" void Enumerator_Reset_m9583 (Enumerator_t2777 * __this, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m9584 (Transform_t406 * __this, Vector3_t538 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m9584_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_get_position_m9584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m9584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m9585 (Transform_t406 * __this, Vector3_t538 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m9585_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_set_position_m9585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m9585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t538  Transform_get_position_m4201 (Transform_t406 * __this, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m9584(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t538  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m4203 (Transform_t406 * __this, Vector3_t538  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m9585(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m9586 (Transform_t406 * __this, Vector3_t538 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m9586_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_get_localPosition_m9586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m9586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m9587 (Transform_t406 * __this, Vector3_t538 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m9587_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_set_localPosition_m9587_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m9587_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" Vector3_t538  Transform_get_localPosition_m4358 (Transform_t406 * __this, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m9586(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t538  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" void Transform_set_localPosition_m4360 (Transform_t406 * __this, Vector3_t538  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m9587(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" Vector3_t538  Transform_get_eulerAngles_m4445 (Transform_t406 * __this, const MethodInfo* method)
{
	Quaternion_t806  V_0 = {0};
	{
		Quaternion_t806  L_0 = Transform_get_rotation_m4351(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Vector3_t538  L_1 = Quaternion_get_eulerAngles_m4444((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" Vector3_t538  Transform_get_forward_m6111 (Transform_t406 * __this, const MethodInfo* method)
{
	{
		Quaternion_t806  L_0 = Transform_get_rotation_m4351(__this, /*hidden argument*/NULL);
		Vector3_t538  L_1 = Vector3_get_forward_m4382(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t538  L_2 = Quaternion_op_Multiply_m4433(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m9588 (Transform_t406 * __this, Quaternion_t806 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m9588_ftn) (Transform_t406 *, Quaternion_t806 *);
	static Transform_INTERNAL_get_rotation_m9588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m9588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m9589 (Transform_t406 * __this, Quaternion_t806 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m9589_ftn) (Transform_t406 *, Quaternion_t806 *);
	static Transform_INTERNAL_set_rotation_m9589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m9589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t806  Transform_get_rotation_m4351 (Transform_t406 * __this, const MethodInfo* method)
{
	Quaternion_t806  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m9588(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t806  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m4309 (Transform_t406 * __this, Quaternion_t806  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m9589(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m9590 (Transform_t406 * __this, Quaternion_t806 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m9590_ftn) (Transform_t406 *, Quaternion_t806 *);
	static Transform_INTERNAL_get_localRotation_m9590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m9590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m9591 (Transform_t406 * __this, Quaternion_t806 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m9591_ftn) (Transform_t406 *, Quaternion_t806 *);
	static Transform_INTERNAL_set_localRotation_m9591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m9591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t806  Transform_get_localRotation_m4443 (Transform_t406 * __this, const MethodInfo* method)
{
	Quaternion_t806  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m9590(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t806  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m4374 (Transform_t406 * __this, Quaternion_t806  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m9591(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m9592 (Transform_t406 * __this, Vector3_t538 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m9592_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_get_localScale_m9592_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m9592_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m9593 (Transform_t406 * __this, Vector3_t538 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m9593_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_set_localScale_m9593_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m9593_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" Vector3_t538  Transform_get_localScale_m4204 (Transform_t406 * __this, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m9592(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t538  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m4205 (Transform_t406 * __this, Vector3_t538  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m9593(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t406 * Transform_get_parent_m4458 (Transform_t406 * __this, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = Transform_get_parentInternal_m9594(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern TypeInfo* RectTransform_t545_il2cpp_TypeInfo_var;
extern "C" void Transform_set_parent_m4254 (Transform_t406 * __this, Transform_t406 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		if (!((RectTransform_t545 *)IsInst(__this, RectTransform_t545_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m6303(NULL /*static, unused*/, (String_t*) &_stringLiteral1924, __this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Transform_t406 * L_0 = ___value;
		Transform_set_parentInternal_m9595(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t406 * Transform_get_parentInternal_m9594 (Transform_t406 * __this, const MethodInfo* method)
{
	typedef Transform_t406 * (*Transform_get_parentInternal_m9594_ftn) (Transform_t406 *);
	static Transform_get_parentInternal_m9594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m9594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m9595 (Transform_t406 * __this, Transform_t406 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m9595_ftn) (Transform_t406 *, Transform_t406 *);
	static Transform_set_parentInternal_m9595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m9595_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" void Transform_SetParent_m4440 (Transform_t406 * __this, Transform_t406 * ___parent, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = ___parent;
		Transform_SetParent_m4322(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m4322 (Transform_t406 * __this, Transform_t406 * ___parent, bool ___worldPositionStays, const MethodInfo* method)
{
	typedef void (*Transform_SetParent_m4322_ftn) (Transform_t406 *, Transform_t406 *, bool);
	static Transform_SetParent_m4322_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m4322_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m9596 (Transform_t406 * __this, Matrix4x4_t1104 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m9596_ftn) (Transform_t406 *, Matrix4x4_t1104 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m9596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m9596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" Matrix4x4_t1104  Transform_get_worldToLocalMatrix_m6274 (Transform_t406 * __this, const MethodInfo* method)
{
	Matrix4x4_t1104  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m9596(__this, (&V_0), /*hidden argument*/NULL);
		Matrix4x4_t1104  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" void Transform_Rotate_m4468 (Transform_t406 * __this, Vector3_t538  ___eulerAngles, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		Vector3_t538  L_0 = ___eulerAngles;
		int32_t L_1 = V_0;
		Transform_Rotate_m9597(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m9597 (Transform_t406 * __this, Vector3_t538  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method)
{
	Quaternion_t806  V_0 = {0};
	{
		float L_0 = ((&___eulerAngles)->___x_1);
		float L_1 = ((&___eulerAngles)->___y_2);
		float L_2 = ((&___eulerAngles)->___z_3);
		Quaternion_t806  L_3 = Quaternion_Euler_m4308(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___relativeTo;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_t806  L_5 = Transform_get_localRotation_m4443(__this, /*hidden argument*/NULL);
		Quaternion_t806  L_6 = V_0;
		Quaternion_t806  L_7 = Quaternion_op_Multiply_m9305(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Transform_set_localRotation_m4374(__this, L_7, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0039:
	{
		Quaternion_t806  L_8 = Transform_get_rotation_m4351(__this, /*hidden argument*/NULL);
		Quaternion_t806  L_9 = Transform_get_rotation_m4351(__this, /*hidden argument*/NULL);
		Quaternion_t806  L_10 = Quaternion_Inverse_m6293(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Quaternion_t806  L_11 = V_0;
		Quaternion_t806  L_12 = Quaternion_op_Multiply_m9305(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Quaternion_t806  L_13 = Transform_get_rotation_m4351(__this, /*hidden argument*/NULL);
		Quaternion_t806  L_14 = Quaternion_op_Multiply_m9305(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Quaternion_t806  L_15 = Quaternion_op_Multiply_m9305(NULL /*static, unused*/, L_8, L_14, /*hidden argument*/NULL);
		Transform_set_rotation_m4309(__this, L_15, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
extern "C" Vector3_t538  Transform_TransformVector_m4459 (Transform_t406 * __this, Vector3_t538  ___vector, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = Transform_INTERNAL_CALL_TransformVector_m9598(NULL /*static, unused*/, __this, (&___vector), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformVector(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t538  Transform_INTERNAL_CALL_TransformVector_m9598 (Object_t * __this /* static, unused */, Transform_t406 * ___self, Vector3_t538 * ___vector, const MethodInfo* method)
{
	typedef Vector3_t538  (*Transform_INTERNAL_CALL_TransformVector_m9598_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_CALL_TransformVector_m9598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformVector_m9598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformVector(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___vector);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t538  Transform_TransformPoint_m6294 (Transform_t406 * __this, Vector3_t538  ___position, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = Transform_INTERNAL_CALL_TransformPoint_m9599(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t538  Transform_INTERNAL_CALL_TransformPoint_m9599 (Object_t * __this /* static, unused */, Transform_t406 * ___self, Vector3_t538 * ___position, const MethodInfo* method)
{
	typedef Vector3_t538  (*Transform_INTERNAL_CALL_TransformPoint_m9599_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_CALL_TransformPoint_m9599_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m9599_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" Vector3_t538  Transform_InverseTransformPoint_m4467 (Transform_t406 * __this, Vector3_t538  ___position, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m9600(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t538  Transform_INTERNAL_CALL_InverseTransformPoint_m9600 (Object_t * __this /* static, unused */, Transform_t406 * ___self, Vector3_t538 * ___position, const MethodInfo* method)
{
	typedef Vector3_t538  (*Transform_INTERNAL_CALL_InverseTransformPoint_m9600_ftn) (Transform_t406 *, Vector3_t538 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m9600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m9600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m4481 (Transform_t406 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m4481_ftn) (Transform_t406 *);
	static Transform_get_childCount_m4481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m4481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" void Transform_SetAsFirstSibling_m6219 (Transform_t406 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m6219_ftn) (Transform_t406 *);
	static Transform_SetAsFirstSibling_m6219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m6219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsLastSibling()
extern "C" void Transform_SetAsLastSibling_m4323 (Transform_t406 * __this, const MethodInfo* method)
{
	typedef void (*Transform_SetAsLastSibling_m4323_ftn) (Transform_t406 *);
	static Transform_SetAsLastSibling_m4323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsLastSibling_m4323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsLastSibling()");
	_il2cpp_icall_func(__this);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern TypeInfo* Enumerator_t2777_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m9601 (Transform_t406 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t2777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4527);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2777 * L_0 = (Enumerator_t2777 *)il2cpp_codegen_object_new (Enumerator_t2777_il2cpp_TypeInfo_var);
		Enumerator__ctor_m9580(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t406 * Transform_GetChild_m4480 (Transform_t406 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t406 * (*Transform_GetChild_m4480_ftn) (Transform_t406 *, int32_t);
	static Transform_GetChild_m4480_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m4480_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_time()
extern "C" float Time_get_time_m4301 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_time_m4301_ftn) ();
	static Time_get_time_m4301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m4301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m4307 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m4307_ftn) ();
	static Time_get_deltaTime_m4307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m4307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" float Time_get_unscaledTime_m6024 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m6024_ftn) ();
	static Time_get_unscaledTime_m6024_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m6024_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" float Time_get_unscaledDeltaTime_m6055 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m6055_ftn) ();
	static Time_get_unscaledDeltaTime_m6055_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m6055_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" void Time_set_timeScale_m4121 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	typedef void (*Time_set_timeScale_m4121_ftn) (float);
	static Time_set_timeScale_m4121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_set_timeScale_m4121_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"



// System.Void UnityEngine.Random::set_seed(System.Int32)
extern "C" void Random_set_seed_m4408 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Random_set_seed_m4408_ftn) (int32_t);
	static Random_set_seed_m4408_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_set_seed_m4408_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::set_seed(System.Int32)");
	_il2cpp_icall_func(___value);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" float Random_Range_m4355 (Object_t * __this /* static, unused */, float ___min, float ___max, const MethodInfo* method)
{
	typedef float (*Random_Range_m4355_ftn) (float, float);
	static Random_Range_m4355_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_Range_m4355_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::Range(System.Single,System.Single)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m3925 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m9602(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m9602 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m9602_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m9602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m9602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m9603 (YieldInstruction_t2709 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t2709_marshal(const YieldInstruction_t2709& unmarshaled, YieldInstruction_t2709_marshaled& marshaled)
{
}
void YieldInstruction_t2709_marshal_back(const YieldInstruction_t2709_marshaled& marshaled, YieldInstruction_t2709& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t2709_marshal_cleanup(YieldInstruction_t2709_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void UnityEngine.PlayerPrefsException::.ctor(System.String)
extern "C" void PlayerPrefsException__ctor_m9604 (PlayerPrefsException_t2780 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m416(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"



// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
extern "C" bool PlayerPrefs_TrySetInt_m9605 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetInt_m9605_ftn) (String_t*, int32_t);
	static PlayerPrefs_TrySetInt_m9605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetInt_m9605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Boolean UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)
extern "C" bool PlayerPrefs_TrySetFloat_m9606 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetFloat_m9606_ftn) (String_t*, float);
	static PlayerPrefs_TrySetFloat_m9606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetFloat_m9606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Boolean UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)
extern "C" bool PlayerPrefs_TrySetSetString_m9607 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetSetString_m9607_ftn) (String_t*, String_t*);
	static PlayerPrefs_TrySetSetString_m9607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetSetString_m9607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetSetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern TypeInfo* PlayerPrefsException_t2780_il2cpp_TypeInfo_var;
extern "C" void PlayerPrefs_SetInt_m4463 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4528);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		int32_t L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetInt_m9605(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t2780 * L_3 = (PlayerPrefsException_t2780 *)il2cpp_codegen_object_new (PlayerPrefsException_t2780_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m9604(L_3, (String_t*) &_stringLiteral1925, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" int32_t PlayerPrefs_GetInt_m4464 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method)
{
	typedef int32_t (*PlayerPrefs_GetInt_m4464_ftn) (String_t*, int32_t);
	static PlayerPrefs_GetInt_m4464_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetInt_m4464_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
extern TypeInfo* PlayerPrefsException_t2780_il2cpp_TypeInfo_var;
extern "C" void PlayerPrefs_SetFloat_m4461 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4528);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		float L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetFloat_m9606(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t2780 * L_3 = (PlayerPrefsException_t2780 *)il2cpp_codegen_object_new (PlayerPrefsException_t2780_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m9604(L_3, (String_t*) &_stringLiteral1925, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
extern "C" float PlayerPrefs_GetFloat_m4462 (Object_t * __this /* static, unused */, String_t* ___key, float ___defaultValue, const MethodInfo* method)
{
	typedef float (*PlayerPrefs_GetFloat_m4462_ftn) (String_t*, float);
	static PlayerPrefs_GetFloat_m4462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetFloat_m4462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern TypeInfo* PlayerPrefsException_t2780_il2cpp_TypeInfo_var;
extern "C" void PlayerPrefs_SetString_m4077 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4528);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		String_t* L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetSetString_m9607(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t2780 * L_3 = (PlayerPrefsException_t2780 *)il2cpp_codegen_object_new (PlayerPrefsException_t2780_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m9604(L_3, (String_t*) &_stringLiteral1925, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m7902 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m7902_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m7902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m7902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PlayerPrefs_GetString_m4080 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m7902(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" bool PlayerPrefs_HasKey_m4079 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_HasKey_m4079_ftn) (String_t*);
	static PlayerPrefs_HasKey_m4079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_HasKey_m4079_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::HasKey(System.String)");
	return _il2cpp_icall_func(___key);
}
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
extern "C" void PlayerPrefs_DeleteAll_m4460 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_DeleteAll_m4460_ftn) ();
	static PlayerPrefs_DeleteAll_m4460_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_DeleteAll_m4460_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::DeleteAll()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C" void PlayerPrefs_Save_m7905 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*PlayerPrefs_Save_m7905_ftn) ();
	static PlayerPrefs_Save_m7905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_Save_m7905_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::Save()");
	_il2cpp_icall_func();
}
// UnityEngine.iOS.LocalNotification
#include "UnityEngine_UnityEngine_iOS_LocalNotification.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.iOS.LocalNotification
#include "UnityEngine_UnityEngine_iOS_LocalNotificationMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"


// System.Void UnityEngine.iOS.LocalNotification::.cctor()
extern TypeInfo* LocalNotification_t2782_il2cpp_TypeInfo_var;
extern "C" void LocalNotification__cctor_m9608 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LocalNotification_t2782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4529);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t287  V_0 = {0};
	{
		DateTime__ctor_m10284((&V_0), ((int32_t)2001), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		int64_t L_0 = DateTime_get_Ticks_m4101((&V_0), /*hidden argument*/NULL);
		((LocalNotification_t2782_StaticFields*)LocalNotification_t2782_il2cpp_TypeInfo_var->static_fields)->___m_NSReferenceDateTicks_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.iOS.LocalNotification::Destroy()
extern "C" void LocalNotification_Destroy_m9609 (LocalNotification_t2782 * __this, const MethodInfo* method)
{
	typedef void (*LocalNotification_Destroy_m9609_ftn) (LocalNotification_t2782 *);
	static LocalNotification_Destroy_m9609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LocalNotification_Destroy_m9609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.LocalNotification::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.iOS.LocalNotification::Finalize()
extern "C" void LocalNotification_Finalize_m9610 (LocalNotification_t2782 * __this, const MethodInfo* method)
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
		LocalNotification_Destroy_m9609(__this, /*hidden argument*/NULL);
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
// UnityEngine.iOS.RemoteNotification
#include "UnityEngine_UnityEngine_iOS_RemoteNotification.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.iOS.RemoteNotification
#include "UnityEngine_UnityEngine_iOS_RemoteNotificationMethodDeclarations.h"



// System.Void UnityEngine.iOS.RemoteNotification::Destroy()
extern "C" void RemoteNotification_Destroy_m9611 (RemoteNotification_t2783 * __this, const MethodInfo* method)
{
	typedef void (*RemoteNotification_Destroy_m9611_ftn) (RemoteNotification_t2783 *);
	static RemoteNotification_Destroy_m9611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteNotification_Destroy_m9611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.RemoteNotification::Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.iOS.RemoteNotification::Finalize()
extern "C" void RemoteNotification_Finalize_m9612 (RemoteNotification_t2783 * __this, const MethodInfo* method)
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
		RemoteNotification_Destroy_m9611(__this, /*hidden argument*/NULL);
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
// UnityEngine.iOS.NotificationType
#include "UnityEngine_UnityEngine_iOS_NotificationType.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.iOS.NotificationType
#include "UnityEngine_UnityEngine_iOS_NotificationTypeMethodDeclarations.h"



// UnityEngine.iOS.NotificationServices
#include "UnityEngine_UnityEngine_iOS_NotificationServices.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.iOS.NotificationServices
#include "UnityEngine_UnityEngine_iOS_NotificationServicesMethodDeclarations.h"



// System.Void UnityEngine.iOS.NotificationServices::.ctor()
extern "C" void NotificationServices__ctor_m9613 (NotificationServices_t2785 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.iOS.NotificationServices::get_localNotificationCount()
extern "C" int32_t NotificationServices_get_localNotificationCount_m9614 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*NotificationServices_get_localNotificationCount_m9614_ftn) ();
	static NotificationServices_get_localNotificationCount_m9614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_get_localNotificationCount_m9614_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::get_localNotificationCount()");
	return _il2cpp_icall_func();
}
// UnityEngine.iOS.LocalNotification UnityEngine.iOS.NotificationServices::GetLocalNotification(System.Int32)
extern "C" LocalNotification_t2782 * NotificationServices_GetLocalNotification_m9615 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef LocalNotification_t2782 * (*NotificationServices_GetLocalNotification_m9615_ftn) (int32_t);
	static NotificationServices_GetLocalNotification_m9615_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_GetLocalNotification_m9615_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::GetLocalNotification(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_localNotifications()
extern TypeInfo* LocalNotificationU5BU5D_t2927_il2cpp_TypeInfo_var;
extern "C" LocalNotificationU5BU5D_t2927* NotificationServices_get_localNotifications_m9616 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LocalNotificationU5BU5D_t2927_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4530);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	LocalNotificationU5BU5D_t2927* V_1 = {0};
	int32_t V_2 = 0;
	{
		int32_t L_0 = NotificationServices_get_localNotificationCount_m9614(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((LocalNotificationU5BU5D_t2927*)SZArrayNew(LocalNotificationU5BU5D_t2927_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_0021;
	}

IL_0014:
	{
		LocalNotificationU5BU5D_t2927* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = V_2;
		LocalNotification_t2782 * L_5 = NotificationServices_GetLocalNotification_m9615(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_5);
		*((LocalNotification_t2782 **)(LocalNotification_t2782 **)SZArrayLdElema(L_2, L_3)) = (LocalNotification_t2782 *)L_5;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		LocalNotificationU5BU5D_t2927* L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.iOS.NotificationServices::ScheduleLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_ScheduleLocalNotification_m9617 (Object_t * __this /* static, unused */, LocalNotification_t2782 * ___notification, const MethodInfo* method)
{
	typedef void (*NotificationServices_ScheduleLocalNotification_m9617_ftn) (LocalNotification_t2782 *);
	static NotificationServices_ScheduleLocalNotification_m9617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_ScheduleLocalNotification_m9617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::ScheduleLocalNotification(UnityEngine.iOS.LocalNotification)");
	_il2cpp_icall_func(___notification);
}
// System.Void UnityEngine.iOS.NotificationServices::PresentLocalNotificationNow(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_PresentLocalNotificationNow_m9618 (Object_t * __this /* static, unused */, LocalNotification_t2782 * ___notification, const MethodInfo* method)
{
	typedef void (*NotificationServices_PresentLocalNotificationNow_m9618_ftn) (LocalNotification_t2782 *);
	static NotificationServices_PresentLocalNotificationNow_m9618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_PresentLocalNotificationNow_m9618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::PresentLocalNotificationNow(UnityEngine.iOS.LocalNotification)");
	_il2cpp_icall_func(___notification);
}
// System.Void UnityEngine.iOS.NotificationServices::CancelLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C" void NotificationServices_CancelLocalNotification_m9619 (Object_t * __this /* static, unused */, LocalNotification_t2782 * ___notification, const MethodInfo* method)
{
	typedef void (*NotificationServices_CancelLocalNotification_m9619_ftn) (LocalNotification_t2782 *);
	static NotificationServices_CancelLocalNotification_m9619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_CancelLocalNotification_m9619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::CancelLocalNotification(UnityEngine.iOS.LocalNotification)");
	_il2cpp_icall_func(___notification);
}
// System.Void UnityEngine.iOS.NotificationServices::CancelAllLocalNotifications()
extern "C" void NotificationServices_CancelAllLocalNotifications_m9620 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*NotificationServices_CancelAllLocalNotifications_m9620_ftn) ();
	static NotificationServices_CancelAllLocalNotifications_m9620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_CancelAllLocalNotifications_m9620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::CancelAllLocalNotifications()");
	_il2cpp_icall_func();
}
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_scheduledLocalNotifications()
extern "C" LocalNotificationU5BU5D_t2927* NotificationServices_get_scheduledLocalNotifications_m9621 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef LocalNotificationU5BU5D_t2927* (*NotificationServices_get_scheduledLocalNotifications_m9621_ftn) ();
	static NotificationServices_get_scheduledLocalNotifications_m9621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_get_scheduledLocalNotifications_m9621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::get_scheduledLocalNotifications()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.iOS.NotificationServices::get_remoteNotificationCount()
extern "C" int32_t NotificationServices_get_remoteNotificationCount_m9622 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*NotificationServices_get_remoteNotificationCount_m9622_ftn) ();
	static NotificationServices_get_remoteNotificationCount_m9622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_get_remoteNotificationCount_m9622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::get_remoteNotificationCount()");
	return _il2cpp_icall_func();
}
// UnityEngine.iOS.RemoteNotification UnityEngine.iOS.NotificationServices::GetRemoteNotification(System.Int32)
extern "C" RemoteNotification_t2783 * NotificationServices_GetRemoteNotification_m9623 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method)
{
	typedef RemoteNotification_t2783 * (*NotificationServices_GetRemoteNotification_m9623_ftn) (int32_t);
	static NotificationServices_GetRemoteNotification_m9623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_GetRemoteNotification_m9623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::GetRemoteNotification(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// UnityEngine.iOS.RemoteNotification[] UnityEngine.iOS.NotificationServices::get_remoteNotifications()
extern TypeInfo* RemoteNotificationU5BU5D_t2928_il2cpp_TypeInfo_var;
extern "C" RemoteNotificationU5BU5D_t2928* NotificationServices_get_remoteNotifications_m9624 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemoteNotificationU5BU5D_t2928_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4531);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RemoteNotificationU5BU5D_t2928* V_1 = {0};
	int32_t V_2 = 0;
	{
		int32_t L_0 = NotificationServices_get_remoteNotificationCount_m9622(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((RemoteNotificationU5BU5D_t2928*)SZArrayNew(RemoteNotificationU5BU5D_t2928_il2cpp_TypeInfo_var, L_1));
		V_2 = 0;
		goto IL_0021;
	}

IL_0014:
	{
		RemoteNotificationU5BU5D_t2928* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = V_2;
		RemoteNotification_t2783 * L_5 = NotificationServices_GetRemoteNotification_m9623(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		ArrayElementTypeCheck (L_2, L_5);
		*((RemoteNotification_t2783 **)(RemoteNotification_t2783 **)SZArrayLdElema(L_2, L_3)) = (RemoteNotification_t2783 *)L_5;
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0014;
		}
	}
	{
		RemoteNotificationU5BU5D_t2928* L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.iOS.NotificationServices::ClearLocalNotifications()
extern "C" void NotificationServices_ClearLocalNotifications_m9625 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*NotificationServices_ClearLocalNotifications_m9625_ftn) ();
	static NotificationServices_ClearLocalNotifications_m9625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_ClearLocalNotifications_m9625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::ClearLocalNotifications()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.iOS.NotificationServices::ClearRemoteNotifications()
extern "C" void NotificationServices_ClearRemoteNotifications_m9626 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*NotificationServices_ClearRemoteNotifications_m9626_ftn) ();
	static NotificationServices_ClearRemoteNotifications_m9626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_ClearRemoteNotifications_m9626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::ClearRemoteNotifications()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType)
extern "C" void NotificationServices_RegisterForNotifications_m9627 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, const MethodInfo* method)
{
	{
		int32_t L_0 = ___notificationTypes;
		NotificationServices_RegisterForNotifications_m9628(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)
extern "C" void NotificationServices_RegisterForNotifications_m9628 (Object_t * __this /* static, unused */, int32_t ___notificationTypes, bool ___registerForRemote, const MethodInfo* method)
{
	typedef void (*NotificationServices_RegisterForNotifications_m9628_ftn) (int32_t, bool);
	static NotificationServices_RegisterForNotifications_m9628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_RegisterForNotifications_m9628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)");
	_il2cpp_icall_func(___notificationTypes, ___registerForRemote);
}
// System.Void UnityEngine.iOS.NotificationServices::UnregisterForRemoteNotifications()
extern "C" void NotificationServices_UnregisterForRemoteNotifications_m9629 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*NotificationServices_UnregisterForRemoteNotifications_m9629_ftn) ();
	static NotificationServices_UnregisterForRemoteNotifications_m9629_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_UnregisterForRemoteNotifications_m9629_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::UnregisterForRemoteNotifications()");
	_il2cpp_icall_func();
}
// UnityEngine.iOS.NotificationType UnityEngine.iOS.NotificationServices::get_enabledNotificationTypes()
extern "C" int32_t NotificationServices_get_enabledNotificationTypes_m9630 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*NotificationServices_get_enabledNotificationTypes_m9630_ftn) ();
	static NotificationServices_get_enabledNotificationTypes_m9630_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_get_enabledNotificationTypes_m9630_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::get_enabledNotificationTypes()");
	return _il2cpp_icall_func();
}
// System.Byte[] UnityEngine.iOS.NotificationServices::get_deviceToken()
extern "C" ByteU5BU5D_t66* NotificationServices_get_deviceToken_m9631 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef ByteU5BU5D_t66* (*NotificationServices_get_deviceToken_m9631_ftn) ();
	static NotificationServices_get_deviceToken_m9631_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_get_deviceToken_m9631_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::get_deviceToken()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.iOS.NotificationServices::get_registrationError()
extern "C" String_t* NotificationServices_get_registrationError_m9632 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*NotificationServices_get_registrationError_m9632_ftn) ();
	static NotificationServices_get_registrationError_m9632_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationServices_get_registrationError_m9632_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationServices::get_registrationError()");
	return _il2cpp_icall_func();
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t538  Particle_get_position_m9633 (Particle_t2786 * __this, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m9634 (Particle_t2786 * __this, Vector3_t538  ___value, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t538  Particle_get_velocity_m9635 (Particle_t2786 * __this, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m9636 (Particle_t2786 * __this, Vector3_t538  ___value, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m9637 (Particle_t2786 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern "C" void Particle_set_energy_m9638 (Particle_t2786 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m9639 (Particle_t2786 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m9640 (Particle_t2786 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m9641 (Particle_t2786 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m9642 (Particle_t2786 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m9643 (Particle_t2786 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m9644 (Particle_t2786 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m9645 (Particle_t2786 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m9646 (Particle_t2786 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t325  Particle_get_color_m9647 (Particle_t2786 * __this, const MethodInfo* method)
{
	{
		Color_t325  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern "C" void Particle_set_color_m9648 (Particle_t2786 * __this, Color_t325  ___value, const MethodInfo* method)
{
	{
		Color_t325  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m9649 (Object_t * __this /* static, unused */, Vector3_t538  ___origin, Vector3_t538  ___direction, RaycastHit_t781 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		RaycastHit_t781 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m9650(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m9650 (Object_t * __this /* static, unused */, Vector3_t538 * ___origin, Vector3_t538 * ___direction, RaycastHit_t781 * ___hitInfo, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m9650_ftn) (Vector3_t538 *, Vector3_t538 *, RaycastHit_t781 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m9650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m9650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m9651 (Object_t * __this /* static, unused */, Vector3_t538  ___origin, Vector3_t538  ___direction, RaycastHit_t781 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = ___origin;
		Vector3_t538  L_1 = ___direction;
		RaycastHit_t781 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m9649(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Physics_Raycast_m4171 (Object_t * __this /* static, unused */, Ray_t780  ___ray, RaycastHit_t781 * ___hitInfo, float ___maxDistance, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)-5);
		Ray_t780  L_0 = ___ray;
		RaycastHit_t781 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		int32_t L_3 = V_0;
		bool L_4 = Physics_Raycast_m6107(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m6107 (Object_t * __this /* static, unused */, Ray_t780  ___ray, RaycastHit_t781 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = Ray_get_origin_m6032((&___ray), /*hidden argument*/NULL);
		Vector3_t538  L_1 = Ray_get_direction_m6033((&___ray), /*hidden argument*/NULL);
		RaycastHit_t781 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m9651(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t1079* Physics_RaycastAll_m6045 (Object_t * __this /* static, unused */, Ray_t780  ___ray, float ___maxDistance, int32_t ___layerMask, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = Ray_get_origin_m6032((&___ray), /*hidden argument*/NULL);
		Vector3_t538  L_1 = Ray_get_direction_m6033((&___ray), /*hidden argument*/NULL);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t1079* L_4 = Physics_RaycastAll_m9652(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t1079* Physics_RaycastAll_m9652 (Object_t * __this /* static, unused */, Vector3_t538  ___origin, Vector3_t538  ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t1079* L_2 = Physics_INTERNAL_CALL_RaycastAll_m9653(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t1079* Physics_INTERNAL_CALL_RaycastAll_m9653 (Object_t * __this /* static, unused */, Vector3_t538 * ___origin, Vector3_t538 * ___direction, float ___maxDistance, int32_t ___layermask, const MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t1079* (*Physics_INTERNAL_CALL_RaycastAll_m9653_ftn) (Vector3_t538 *, Vector3_t538 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m9653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m9653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"



// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"



// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" void Collider_set_enabled_m4183 (Collider_t782 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Collider_set_enabled_m4183_ftn) (Collider_t782 *, bool);
	static Collider_set_enabled_m4183_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_enabled_m4183_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" Rigidbody_t2788 * Collider_get_attachedRigidbody_m9654 (Collider_t782 * __this, const MethodInfo* method)
{
	typedef Rigidbody_t2788 * (*Collider_get_attachedRigidbody_m9654_ftn) (Collider_t782 *);
	static Collider_get_attachedRigidbody_m9654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m9654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t538  RaycastHit_get_point_m6049 (RaycastHit_t781 * __this, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t538  RaycastHit_get_normal_m6050 (RaycastHit_t781 * __this, const MethodInfo* method)
{
	{
		Vector3_t538  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m6048 (RaycastHit_t781 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t782 * RaycastHit_get_collider_m6047 (RaycastHit_t781 * __this, const MethodInfo* method)
{
	{
		Collider_t782 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t2788 * RaycastHit_get_rigidbody_m9655 (RaycastHit_t781 * __this, const MethodInfo* method)
{
	Rigidbody_t2788 * G_B3_0 = {0};
	{
		Collider_t782 * L_0 = RaycastHit_get_collider_m6047(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider_t782 * L_2 = RaycastHit_get_collider_m6047(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_t2788 * L_3 = Collider_get_attachedRigidbody_m9654(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody_t2788 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t406 * RaycastHit_get_transform_m4172 (RaycastHit_t781 * __this, const MethodInfo* method)
{
	Rigidbody_t2788 * V_0 = {0};
	{
		Rigidbody_t2788 * L_0 = RaycastHit_get_rigidbody_m9655(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody_t2788 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_1, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody_t2788 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t406 * L_4 = Component_get_transform_m4196(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider_t782 * L_5 = RaycastHit_get_collider_m6047(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_5, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider_t782 * L_7 = RaycastHit_get_collider_m6047(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t406 * L_8 = Component_get_transform_m4196(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t406 *)NULL;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_54.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_54MethodDeclarations.h"


// System.Void UnityEngine.Physics2D::.cctor()
extern TypeInfo* List_1_t2789_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t814_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m10285_MethodInfo_var;
extern "C" void Physics2D__cctor_m9656 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4534);
		Physics2D_t814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		List_1__ctor_m10285_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485123);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t2789 * L_0 = (List_1_t2789 *)il2cpp_codegen_object_new (List_1_t2789_il2cpp_TypeInfo_var);
		List_1__ctor_m10285(L_0, /*hidden argument*/List_1__ctor_m10285_MethodInfo_var);
		((Physics2D_t814_StaticFields*)Physics2D_t814_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
extern "C" void Physics2D_IgnoreLayerCollision_m4385 (Object_t * __this /* static, unused */, int32_t ___layer1, int32_t ___layer2, bool ___ignore, const MethodInfo* method)
{
	typedef void (*Physics2D_IgnoreLayerCollision_m4385_ftn) (int32_t, int32_t, bool);
	static Physics2D_IgnoreLayerCollision_m4385_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_IgnoreLayerCollision_m4385_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___layer1, ___layer2, ___ignore);
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern TypeInfo* Physics2D_t814_il2cpp_TypeInfo_var;
extern "C" void Physics2D_Internal_Raycast_m9657 (Object_t * __this /* static, unused */, Vector2_t110  ___origin, Vector2_t110  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t1078 * ___raycastHit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t1078 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t814_il2cpp_TypeInfo_var);
		Physics2D_INTERNAL_CALL_Internal_Raycast_m9658(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m9658 (Object_t * __this /* static, unused */, Vector2_t110 * ___origin, Vector2_t110 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t1078 * ___raycastHit, const MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m9658_ftn) (Vector2_t110 *, Vector2_t110 *, float, int32_t, float, float, RaycastHit2D_t1078 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m9658_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m9658_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t814_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t1078  Physics2D_Raycast_m6108 (Object_t * __this /* static, unused */, Vector2_t110  ___origin, Vector2_t110  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t110  L_0 = ___origin;
		Vector2_t110  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t814_il2cpp_TypeInfo_var);
		RaycastHit2D_t1078  L_6 = Physics2D_Raycast_m9659(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern TypeInfo* Physics2D_t814_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t1078  Physics2D_Raycast_m9659 (Object_t * __this /* static, unused */, Vector2_t110  ___origin, Vector2_t110  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	RaycastHit2D_t1078  V_0 = {0};
	{
		Vector2_t110  L_0 = ___origin;
		Vector2_t110  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t814_il2cpp_TypeInfo_var);
		Physics2D_Internal_Raycast_m9657(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/NULL);
		RaycastHit2D_t1078  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern TypeInfo* Physics2D_t814_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t1077* Physics2D_RaycastAll_m6034 (Object_t * __this /* static, unused */, Vector2_t110  ___origin, Vector2_t110  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t814_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t1077* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m9660(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t1077* Physics2D_INTERNAL_CALL_RaycastAll_m9660 (Object_t * __this /* static, unused */, Vector2_t110 * ___origin, Vector2_t110 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t1077* (*Physics2D_INTERNAL_CALL_RaycastAll_m9660_ftn) (Vector2_t110 *, Vector2_t110 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m9660_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m9660_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2,System.Int32)
extern TypeInfo* Physics2D_t814_il2cpp_TypeInfo_var;
extern "C" Collider2D_t717 * Physics2D_OverlapPoint_m4378 (Object_t * __this /* static, unused */, Vector2_t110  ___point, int32_t ___layerMask, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(522);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___layerMask;
		float L_1 = V_1;
		float L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t814_il2cpp_TypeInfo_var);
		Collider2D_t717 * L_3 = Physics2D_INTERNAL_CALL_OverlapPoint_m9661(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapPoint(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C" Collider2D_t717 * Physics2D_INTERNAL_CALL_OverlapPoint_m9661 (Object_t * __this /* static, unused */, Vector2_t110 * ___point, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef Collider2D_t717 * (*Physics2D_INTERNAL_CALL_OverlapPoint_m9661_ftn) (Vector2_t110 *, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_OverlapPoint_m9661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_OverlapPoint_m9661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_OverlapPoint(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___point, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t110  RaycastHit2D_get_point_m6037 (RaycastHit2D_t1078 * __this, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t110  RaycastHit2D_get_normal_m6038 (RaycastHit2D_t1078 * __this, const MethodInfo* method)
{
	{
		Vector2_t110  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m6109 (RaycastHit2D_t1078 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t717 * RaycastHit2D_get_collider_m6035 (RaycastHit2D_t1078 * __this, const MethodInfo* method)
{
	{
		Collider2D_t717 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t2790 * RaycastHit2D_get_rigidbody_m9662 (RaycastHit2D_t1078 * __this, const MethodInfo* method)
{
	Rigidbody2D_t2790 * G_B3_0 = {0};
	{
		Collider2D_t717 * L_0 = RaycastHit2D_get_collider_m6035(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t717 * L_2 = RaycastHit2D_get_collider_m6035(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t2790 * L_3 = Collider2D_get_attachedRigidbody_m9663(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t2790 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t406 * RaycastHit2D_get_transform_m6036 (RaycastHit2D_t1078 * __this, const MethodInfo* method)
{
	Rigidbody2D_t2790 * V_0 = {0};
	{
		Rigidbody2D_t2790 * L_0 = RaycastHit2D_get_rigidbody_m9662(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t2790 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_1, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t2790 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t406 * L_4 = Component_get_transform_m4196(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t717 * L_5 = RaycastHit2D_get_collider_m6035(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_5, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t717 * L_7 = RaycastHit2D_get_collider_m6035(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t406 * L_8 = Component_get_transform_m4196(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t406 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Collider2D::set_isTrigger(System.Boolean)
extern "C" void Collider2D_set_isTrigger_m4455 (Collider2D_t717 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*Collider2D_set_isTrigger_m4455_ftn) (Collider2D_t717 *, bool);
	static Collider2D_set_isTrigger_m4455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_set_isTrigger_m4455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::set_isTrigger(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t2790 * Collider2D_get_attachedRigidbody_m9663 (Collider2D_t717 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t2790 * (*Collider2D_get_attachedRigidbody_m9663_ftn) (Collider2D_t717 *);
	static Collider2D_get_attachedRigidbody_m9663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m9663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CircleCollider2D
#include "UnityEngine_UnityEngine_CircleCollider2DMethodDeclarations.h"



// System.Single UnityEngine.CircleCollider2D::get_radius()
extern "C" float CircleCollider2D_get_radius_m4454 (CircleCollider2D_t624 * __this, const MethodInfo* method)
{
	typedef float (*CircleCollider2D_get_radius_m4454_ftn) (CircleCollider2D_t624 *);
	static CircleCollider2D_get_radius_m4454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CircleCollider2D_get_radius_m4454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CircleCollider2D::get_radius()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CircleCollider2D::set_radius(System.Single)
extern "C" void CircleCollider2D_set_radius_m4453 (CircleCollider2D_t624 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*CircleCollider2D_set_radius_m4453_ftn) (CircleCollider2D_t624 *, float);
	static CircleCollider2D_set_radius_m4453_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CircleCollider2D_set_radius_m4453_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CircleCollider2D::set_radius(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AudioConfigurationChangeHandler__ctor_m9664 (AudioConfigurationChangeHandler_t2791 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" void AudioConfigurationChangeHandler_Invoke_m9665 (AudioConfigurationChangeHandler_t2791 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m9665((AudioConfigurationChangeHandler_t2791 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t2791(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m9666 (AudioConfigurationChangeHandler_t2791 * __this, bool ___deviceWasChanged, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t59_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m9667 (AudioConfigurationChangeHandler_t2791 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern TypeInfo* AudioSettings_t2792_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m9668 (AudioSettings_t2792 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t2792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4535);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t2791 * L_0 = ((AudioSettings_t2792_StaticFields*)AudioSettings_t2792_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t2791 * L_1 = ((AudioSettings_t2792_StaticFields*)AudioSettings_t2792_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m9669 (PCMReaderCallback_t2793 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m9670 (PCMReaderCallback_t2793 * __this, SingleU5BU5D_t589* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m9670((PCMReaderCallback_t2793 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t589* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t589* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t2793(Il2CppObject* delegate, SingleU5BU5D_t589* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m9671 (PCMReaderCallback_t2793 * __this, SingleU5BU5D_t589* ___data, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m9672 (PCMReaderCallback_t2793 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMSetPositionCallback__ctor_m9673 (PCMSetPositionCallback_t2794 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m9674 (PCMSetPositionCallback_t2794 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m9674((PCMSetPositionCallback_t2794 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t2794(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m9675 (PCMSetPositionCallback_t2794 * __this, int32_t ___position, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m9676 (PCMSetPositionCallback_t2794 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"



// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m9677 (AudioClip_t395 * __this, SingleU5BU5D_t589* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t2793 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t2793 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t589* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t589* >::Invoke(12 /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m9678 (AudioClip_t395 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t2794 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t2794 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(12 /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"


// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" void AudioSource_set_clip_m4159 (AudioSource_t615 * __this, AudioClip_t395 * ___value, const MethodInfo* method)
{
	typedef void (*AudioSource_set_clip_m4159_ftn) (AudioSource_t615 *, AudioClip_t395 *);
	static AudioSource_set_clip_m4159_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_m4159_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m9679 (AudioSource_t615 * __this, uint64_t ___delay, const MethodInfo* method)
{
	typedef void (*AudioSource_Play_m9679_ftn) (AudioSource_t615 *, uint64_t);
	static AudioSource_Play_m9679_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m9679_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m4447 (AudioSource_t615 * __this, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m9679(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
extern "C" void AudioSource_PlayDelayed_m4479 (AudioSource_t615 * __this, float ___delay, const MethodInfo* method)
{
	typedef void (*AudioSource_PlayDelayed_m4479_ftn) (AudioSource_t615 *, float);
	static AudioSource_PlayDelayed_m4479_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayDelayed_m4479_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayDelayed(System.Single)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Stop()
extern "C" void AudioSource_Stop_m4160 (AudioSource_t615 * __this, const MethodInfo* method)
{
	typedef void (*AudioSource_Stop_m4160_ftn) (AudioSource_t615 *);
	static AudioSource_Stop_m4160_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_m4160_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::Pause()
extern "C" void AudioSource_Pause_m4448 (AudioSource_t615 * __this, const MethodInfo* method)
{
	{
		AudioSource_INTERNAL_CALL_Pause_m9680(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)
extern "C" void AudioSource_INTERNAL_CALL_Pause_m9680 (Object_t * __this /* static, unused */, AudioSource_t615 * ___self, const MethodInfo* method)
{
	typedef void (*AudioSource_INTERNAL_CALL_Pause_m9680_ftn) (AudioSource_t615 *);
	static AudioSource_INTERNAL_CALL_Pause_m9680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_INTERNAL_CALL_Pause_m9680_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::INTERNAL_CALL_Pause(UnityEngine.AudioSource)");
	_il2cpp_icall_func(___self);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m4449 (AudioSource_t615 * __this, const MethodInfo* method)
{
	typedef bool (*AudioSource_get_isPlaying_m4449_ftn) (AudioSource_t615 *);
	static AudioSource_get_isPlaying_m4449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m4449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m9681 (AudioSource_t615 * __this, AudioClip_t395 * ___clip, float ___volumeScale, const MethodInfo* method)
{
	typedef void (*AudioSource_PlayOneShot_m9681_ftn) (AudioSource_t615 *, AudioClip_t395 *, float);
	static AudioSource_PlayOneShot_m9681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayOneShot_m9681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)");
	_il2cpp_icall_func(__this, ___clip, ___volumeScale);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" void AudioSource_PlayOneShot_m4173 (AudioSource_t615 * __this, AudioClip_t395 * ___clip, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (1.0f);
		AudioClip_t395 * L_0 = ___clip;
		float L_1 = V_0;
		AudioSource_PlayOneShot_m9681(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m9682 (WebCamDevice_t2795 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m9683 (WebCamDevice_t2795 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t2795_marshal(const WebCamDevice_t2795& unmarshaled, WebCamDevice_t2795_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t2795_marshal_back(const WebCamDevice_t2795_marshaled& marshaled, WebCamDevice_t2795& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t2795_marshal_cleanup(WebCamDevice_t2795_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"


// System.Void UnityEngine.AnimationEvent::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m9684 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t721 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t2797 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m9685 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" void AnimationEvent_set_data_m9686 (AnimationEvent_t2798 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m9687 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m9688 (AnimationEvent_t2798 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m9689 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" void AnimationEvent_set_floatParameter_m9690 (AnimationEvent_t2798 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m9691 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" void AnimationEvent_set_intParameter_m9692 (AnimationEvent_t2798 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t721 * AnimationEvent_get_objectReferenceParameter_m9693 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		Object_t721 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" void AnimationEvent_set_objectReferenceParameter_m9694 (AnimationEvent_t2798 * __this, Object_t721 * ___value, const MethodInfo* method)
{
	{
		Object_t721 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m9695 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m9696 (AnimationEvent_t2798 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m9697 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m9698 (AnimationEvent_t2798 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m9699 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" void AnimationEvent_set_messageOptions_m9700 (AnimationEvent_t2798 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m9701 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m9702 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C" AnimationState_t2797 * AnimationEvent_get_animationState_m9703 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m9701(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m393(NULL /*static, unused*/, (String_t*) &_stringLiteral1926, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t2797 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C" AnimatorStateInfo_t2799  AnimationEvent_get_animatorStateInfo_m9704 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m9702(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m393(NULL /*static, unused*/, (String_t*) &_stringLiteral1927, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t2799  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C" AnimatorClipInfo_t2800  AnimationEvent_get_animatorClipInfo_m9705 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m9702(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m393(NULL /*static, unused*/, (String_t*) &_stringLiteral1928, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t2800  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C" int32_t AnimationEvent_GetHash_m9706 (AnimationEvent_t2798 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m9695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m9697(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m10253((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"



// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m9707 (AnimationCurve_t2802 * __this, KeyframeU5BU5D_t2929* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t2929* L_0 = ___keys;
		AnimationCurve_Init_m9711(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m9708 (AnimationCurve_t2802 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m9711(__this, (KeyframeU5BU5D_t2929*)(KeyframeU5BU5D_t2929*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m9709 (AnimationCurve_t2802 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m9709_ftn) (AnimationCurve_t2802 *);
	static AnimationCurve_Cleanup_m9709_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m9709_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m9710 (AnimationCurve_t2802 * __this, const MethodInfo* method)
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
		AnimationCurve_Cleanup_m9709(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m9711 (AnimationCurve_t2802 * __this, KeyframeU5BU5D_t2929* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m9711_ftn) (AnimationCurve_t2802 *, KeyframeU5BU5D_t2929*);
	static AnimationCurve_Init_m9711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m9711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t2802_marshal(const AnimationCurve_t2802& unmarshaled, AnimationCurve_t2802_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t2802_marshal_back(const AnimationCurve_t2802_marshaled& marshaled, AnimationCurve_t2802& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t2802_marshal_cleanup(AnimationCurve_t2802_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C" bool AnimatorStateInfo_IsName_m9712 (AnimatorStateInfo_t2799 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m9730(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m9713 (AnimatorStateInfo_t2799 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m9714 (AnimatorStateInfo_t2799 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m9715 (AnimatorStateInfo_t2799 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m9716 (AnimatorStateInfo_t2799 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m9717 (AnimatorStateInfo_t2799 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m9718 (AnimatorStateInfo_t2799 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m9719 (AnimatorStateInfo_t2799 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m9730(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m9720 (AnimatorStateInfo_t2799 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m9721 (AnimatorTransitionInfo_t2804 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m9730(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m9730(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m9722 (AnimatorTransitionInfo_t2804 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m9730(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m9723 (AnimatorTransitionInfo_t2804 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m9724 (AnimatorTransitionInfo_t2804 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m9725 (AnimatorTransitionInfo_t2804 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m9726 (AnimatorTransitionInfo_t2804 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m9727 (AnimatorTransitionInfo_t2804 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m9728 (AnimatorTransitionInfo_t2804 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m9729 (AnimatorTransitionInfo_t2804 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t2804_marshal(const AnimatorTransitionInfo_t2804& unmarshaled, AnimatorTransitionInfo_t2804_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t2804_marshal_back(const AnimatorTransitionInfo_t2804_marshaled& marshaled, AnimatorTransitionInfo_t2804& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t2804_marshal_cleanup(AnimatorTransitionInfo_t2804_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"


// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m6299 (Animator_t1065 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m9731(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m6298 (Animator_t1065 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m9732(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t1105 * Animator_get_runtimeAnimatorController_m6297 (Animator_t1065 * __this, const MethodInfo* method)
{
	typedef RuntimeAnimatorController_t1105 * (*Animator_get_runtimeAnimatorController_m6297_ftn) (Animator_t1065 *);
	static Animator_get_runtimeAnimatorController_m6297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m6297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m9730 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m9730_ftn) (String_t*);
	static Animator_StringToHash_m9730_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m9730_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m9731 (Animator_t1065 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m9731_ftn) (Animator_t1065 *, String_t*);
	static Animator_SetTriggerString_m9731_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m9731_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m9732 (Animator_t1065 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m9732_ftn) (Animator_t1065 *, String_t*);
	static Animator_ResetTriggerString_m9732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m9732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t2805_marshal(const SkeletonBone_t2805& unmarshaled, SkeletonBone_t2805_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t2805_marshal_back(const SkeletonBone_t2805_marshaled& marshaled, SkeletonBone_t2805& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t2805_marshal_cleanup(SkeletonBone_t2805_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m9733 (HumanBone_t2807 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m9734 (HumanBone_t2807 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m9735 (HumanBone_t2807 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m9736 (HumanBone_t2807 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t2807_marshal(const HumanBone_t2807& unmarshaled, HumanBone_t2807_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t2807_marshal_back(const HumanBone_t2807_marshaled& marshaled, HumanBone_t2807& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t2807_marshal_cleanup(HumanBone_t2807_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"



// System.String UnityEngine.TextMesh::get_text()
extern "C" String_t* TextMesh_get_text_m4165 (TextMesh_t403 * __this, const MethodInfo* method)
{
	typedef String_t* (*TextMesh_get_text_m4165_ftn) (TextMesh_t403 *);
	static TextMesh_get_text_m4165_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_get_text_m4165_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::get_text()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" void TextMesh_set_text_m4166 (TextMesh_t403 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_text_m4166_ftn) (TextMesh_t403 *, String_t*);
	static TextMesh_set_text_m4166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_text_m4166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m9737 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m9738 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m4197(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m9739 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m4198(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m9740 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m3842(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m9741 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t712 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m3841(L_1, /*hidden argument*/NULL);
		Rect_t712 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m4198(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m9742 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t712 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m3841(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m9743 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m3842(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m9744 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m3842(L_0, /*hidden argument*/NULL);
		Rect_t712 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m4197(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomLeftUnFlipped_m9745 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m3842(L_0, /*hidden argument*/NULL);
		Rect_t712 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m3841(L_2, /*hidden argument*/NULL);
		Vector2_t110  L_4 = {0};
		Vector2__ctor_m4367(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomRightUnFlipped_m9746 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m3842(L_0, /*hidden argument*/NULL);
		Rect_t712 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m4197(L_2, /*hidden argument*/NULL);
		Rect_t712 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m3841(L_4, /*hidden argument*/NULL);
		Vector2_t110  L_6 = {0};
		Vector2__ctor_m4367(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvTopRightUnFlipped_m9747 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m3842(L_0, /*hidden argument*/NULL);
		Rect_t712 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m4197(L_2, /*hidden argument*/NULL);
		Rect_t712 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m3841(L_4, /*hidden argument*/NULL);
		Rect_t712 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m4198(L_6, /*hidden argument*/NULL);
		Vector2_t110  L_8 = {0};
		Vector2__ctor_m4367(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t110  CharacterInfo_get_uvTopLeftUnFlipped_m9748 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	{
		Rect_t712 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m3842(L_0, /*hidden argument*/NULL);
		Rect_t712 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m3841(L_2, /*hidden argument*/NULL);
		Rect_t712 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m4198(L_4, /*hidden argument*/NULL);
		Vector2_t110  L_6 = {0};
		Vector2__ctor_m4367(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomLeft_m9749 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	Vector2_t110  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t110  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m9745(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t110  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m9745(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t110  CharacterInfo_get_uvBottomRight_m9750 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	Vector2_t110  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t110  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m9748(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t110  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m9746(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t110  CharacterInfo_get_uvTopRight_m9751 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	Vector2_t110  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t110  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m9747(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t110  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m9747(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t110  CharacterInfo_get_uvTopLeft_m9752 (CharacterInfo_t2808 * __this, const MethodInfo* method)
{
	Vector2_t110  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t110  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m9746(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t110  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m9748(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t2808_marshal(const CharacterInfo_t2808& unmarshaled, CharacterInfo_t2808_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t2808_marshal_back(const CharacterInfo_t2808_marshaled& marshaled, CharacterInfo_t2808& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t2808_marshal_cleanup(CharacterInfo_t2808_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FontTextureRebuildCallback__ctor_m9753 (FontTextureRebuildCallback_t2809 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m9754 (FontTextureRebuildCallback_t2809 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m9754((FontTextureRebuildCallback_t2809 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t2809(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m9755 (FontTextureRebuildCallback_t2809 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m9756 (FontTextureRebuildCallback_t2809 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_12.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_12MethodDeclarations.h"


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t933_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t1082_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m6069 (Object_t * __this /* static, unused */, Action_1_t1082 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t933_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1883);
		Action_1_t1082_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t1082 * L_0 = ((Font_t933_StaticFields*)Font_t933_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t1082 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t933_StaticFields*)Font_t933_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t1082 *)Castclass(L_2, Action_1_t1082_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern TypeInfo* Font_t933_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t1082_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m9757 (Object_t * __this /* static, unused */, Action_1_t1082 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t933_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1883);
		Action_1_t1082_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1887);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t1082 * L_0 = ((Font_t933_StaticFields*)Font_t933_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		Action_1_t1082 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Font_t933_StaticFields*)Font_t933_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2 = ((Action_1_t1082 *)Castclass(L_2, Action_1_t1082_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t526 * Font_get_material_m6308 (Font_t933 * __this, const MethodInfo* method)
{
	typedef Material_t526 * (*Font_get_material_m6308_ftn) (Font_t933 *);
	static Font_get_material_m6308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m6308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m6206 (Font_t933 * __this, uint16_t ___c, const MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m6206_ftn) (Font_t933 *, uint16_t);
	static Font_HasCharacter_m6206_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m6206_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern TypeInfo* Font_t933_il2cpp_TypeInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m9758 (Object_t * __this /* static, unused */, Font_t933 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t933_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1883);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1082 * V_0 = {0};
	{
		Action_1_t1082 * L_0 = ((Font_t933_StaticFields*)Font_t933_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t1082 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t1082 * L_2 = V_0;
		Font_t933 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t933 * >::Invoke(12 /* System.Void System.Action`1<UnityEngine.Font>::Invoke(!0) */, L_2, L_3);
	}

IL_0013:
	{
		Font_t933 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t2809 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t933 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t2809 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke() */, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m6310 (Font_t933 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m6310_ftn) (Font_t933 *);
	static Font_get_dynamic_m6310_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m6310_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m6311 (Font_t933 * __this, const MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m6311_ftn) (Font_t933 *);
	static Font_get_fontSize_m6311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m6311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_36.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_55.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_56.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_36MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_55MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_56MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"


// System.Void UnityEngine.TextGenerator::.ctor()
extern "C" void TextGenerator__ctor_m6180 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m6306(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t971_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2810_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2811_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m10286_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m10287_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m10288_MethodInfo_var;
extern "C" void TextGenerator__ctor_m6306 (TextGenerator_t970 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1890);
		List_1_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4536);
		List_1_t2811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4537);
		List_1__ctor_m10286_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485124);
		List_1__ctor_m10287_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485125);
		List_1__ctor_m10288_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485126);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t971 * L_1 = (List_1_t971 *)il2cpp_codegen_object_new (List_1_t971_il2cpp_TypeInfo_var);
		List_1__ctor_m10286(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m10286_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t2810 * L_3 = (List_1_t2810 *)il2cpp_codegen_object_new (List_1_t2810_il2cpp_TypeInfo_var);
		List_1__ctor_m10287(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m10287_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t2811 * L_4 = (List_1_t2811 *)il2cpp_codegen_object_new (List_1_t2811_il2cpp_TypeInfo_var);
		List_1__ctor_m10288(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m10288_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m9760(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m9759 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m9761(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m9760 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m9760_ftn) (TextGenerator_t970 *);
	static TextGenerator_Init_m9760_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m9760_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m9761 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m9761_ftn) (TextGenerator_t970 *);
	static TextGenerator_Dispose_cpp_m9761_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m9761_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m9762 (TextGenerator_t970 * __this, String_t* ___str, Font_t933 * ___font, Color_t325  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t110  ___extents, Vector2_t110  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t933 * L_1 = ___font;
		Color_t325  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m9763(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m9763 (TextGenerator_t970 * __this, String_t* ___str, Font_t933 * ___font, Color_t325  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t933 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9764(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9764 (Object_t * __this /* static, unused */, TextGenerator_t970 * ___self, String_t* ___str, Font_t933 * ___font, Color_t325 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9764_ftn) (TextGenerator_t970 *, String_t*, Font_t933 *, Color_t325 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m9764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t712  TextGenerator_get_rectExtents_m6217 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef Rect_t712  (*TextGenerator_get_rectExtents_m6217_ftn) (TextGenerator_t970 *);
	static TextGenerator_get_rectExtents_m6217_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m6217_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m9765 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m9765_ftn) (TextGenerator_t970 *);
	static TextGenerator_get_vertexCount_m9765_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m9765_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m9766 (TextGenerator_t970 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m9766_ftn) (TextGenerator_t970 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m9766_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m9766_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t968* TextGenerator_GetVerticesArray_m9767 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t968* (*TextGenerator_GetVerticesArray_m9767_ftn) (TextGenerator_t970 *);
	static TextGenerator_GetVerticesArray_m9767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m9767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m9768 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m9768_ftn) (TextGenerator_t970 *);
	static TextGenerator_get_characterCount_m9768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m9768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t745_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m6200 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Mathf_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m9765(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t745_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m6210(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m4498(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m9769 (TextGenerator_t970 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m9769_ftn) (TextGenerator_t970 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m9769_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m9769_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t2930* TextGenerator_GetCharactersArray_m9770 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t2930* (*TextGenerator_GetCharactersArray_m9770_ftn) (TextGenerator_t970 *);
	static TextGenerator_GetCharactersArray_m9770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m9770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m6199 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m6199_ftn) (TextGenerator_t970 *);
	static TextGenerator_get_lineCount_m6199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m6199_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m9771 (TextGenerator_t970 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m9771_ftn) (TextGenerator_t970 *, Object_t *);
	static TextGenerator_GetLinesInternal_m9771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m9771_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t2931* TextGenerator_GetLinesArray_m9772 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t2931* (*TextGenerator_GetLinesArray_m9772_ftn) (TextGenerator_t970 *);
	static TextGenerator_GetLinesArray_m9772_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m9772_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m6232 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m6232_ftn) (TextGenerator_t970 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m6232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m6232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m9773 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
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
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, __this);
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
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t1066  TextGenerator_ValidatedSettings_m9774 (TextGenerator_t970 * __this, TextGenerationSettings_t1066  ___settings, const MethodInfo* method)
{
	{
		Font_t933 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t933 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m6310(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t1066  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral1929, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral1930, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t1066  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m6309 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m9775 (TextGenerator_t970 * __this, List_1_t2810 * ___characters, const MethodInfo* method)
{
	{
		List_1_t2810 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m9769(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m9776 (TextGenerator_t970 * __this, List_1_t2811 * ___lines, const MethodInfo* method)
{
	{
		List_1_t2811 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m9771(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m9777 (TextGenerator_t970 * __this, List_1_t971 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t971 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m9766(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredWidth_m6313 (TextGenerator_t970 * __this, String_t* ___str, TextGenerationSettings_t1066  ___settings, const MethodInfo* method)
{
	Rect_t712  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t1066  L_1 = ___settings;
		TextGenerator_Populate_m6216(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t712  L_2 = TextGenerator_get_rectExtents_m6217(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m4197((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m6314 (TextGenerator_t970 * __this, String_t* ___str, TextGenerationSettings_t1066  ___settings, const MethodInfo* method)
{
	Rect_t712  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t1066  L_1 = ___settings;
		TextGenerator_Populate_m6216(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t712  L_2 = TextGenerator_get_rectExtents_m6217(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m4198((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m6216 (TextGenerator_t970 * __this, String_t* ___str, TextGenerationSettings_t1066  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m456(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t1066  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m10187((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t1066  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m9778(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m9778 (TextGenerator_t970 * __this, String_t* ___str, TextGenerationSettings_t1066  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t1066  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t1066  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t1066  L_2 = ___settings;
		TextGenerationSettings_t1066  L_3 = TextGenerator_ValidatedSettings_m9774(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t933 * L_5 = ((&V_0)->___font_0);
		Color_t325  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t110  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t110  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m9762(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m6312 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t971 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m9777(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t971 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m6201 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t2810 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m9775(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t2810 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m6198 (TextGenerator_t970 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t2811 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m9776(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t2811 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern "C" void WillRenderCanvases__ctor_m6058 (WillRenderCanvases_t1080 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m9779 (WillRenderCanvases_t1080 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m9779((WillRenderCanvases_t1080 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t1080(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m9780 (WillRenderCanvases_t1080 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m9781 (WillRenderCanvases_t1080 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"



// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t547_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t1080_il2cpp_TypeInfo_var;
extern "C" void Canvas_add_willRenderCanvases_m6059 (Object_t * __this /* static, unused */, WillRenderCanvases_t1080 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		WillRenderCanvases_t1080_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1876);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t1080 * L_0 = ((Canvas_t547_StaticFields*)Canvas_t547_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t1080 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Combine_m3919(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t547_StaticFields*)Canvas_t547_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t1080 *)Castclass(L_2, WillRenderCanvases_t1080_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern TypeInfo* Canvas_t547_il2cpp_TypeInfo_var;
extern TypeInfo* WillRenderCanvases_t1080_il2cpp_TypeInfo_var;
extern "C" void Canvas_remove_willRenderCanvases_m9782 (Object_t * __this /* static, unused */, WillRenderCanvases_t1080 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		WillRenderCanvases_t1080_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1876);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t1080 * L_0 = ((Canvas_t547_StaticFields*)Canvas_t547_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t1080 * L_1 = ___value;
		Delegate_t742 * L_2 = Delegate_Remove_m3927(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((Canvas_t547_StaticFields*)Canvas_t547_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t1080 *)Castclass(L_2, WillRenderCanvases_t1080_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" int32_t Canvas_get_renderMode_m6104 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m6104_ftn) (Canvas_t547 *);
	static Canvas_get_renderMode_m6104_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m6104_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C" bool Canvas_get_isRootCanvas_m6325 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m6325_ftn) (Canvas_t547 *);
	static Canvas_get_isRootCanvas_m6325_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m6325_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" Camera_t548 * Canvas_get_worldCamera_m4366 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef Camera_t548 * (*Canvas_get_worldCamera_m4366_ftn) (Canvas_t547 *);
	static Canvas_get_worldCamera_m4366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m4366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Canvas_INTERNAL_get_pixelRect_m9783 (Canvas_t547 * __this, Rect_t712 * ___value, const MethodInfo* method)
{
	typedef void (*Canvas_INTERNAL_get_pixelRect_m9783_ftn) (Canvas_t547 *, Rect_t712 *);
	static Canvas_INTERNAL_get_pixelRect_m9783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_INTERNAL_get_pixelRect_m9783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Canvas::get_pixelRect()
extern "C" Rect_t712  Canvas_get_pixelRect_m4514 (Canvas_t547 * __this, const MethodInfo* method)
{
	Rect_t712  V_0 = {0};
	{
		Canvas_INTERNAL_get_pixelRect_m9783(__this, (&V_0), /*hidden argument*/NULL);
		Rect_t712  L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C" float Canvas_get_scaleFactor_m4515 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m4515_ftn) (Canvas_t547 *);
	static Canvas_get_scaleFactor_m4515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m4515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C" void Canvas_set_scaleFactor_m6328 (Canvas_t547 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m6328_ftn) (Canvas_t547 *, float);
	static Canvas_set_scaleFactor_m6328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m6328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C" float Canvas_get_referencePixelsPerUnit_m6131 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m6131_ftn) (Canvas_t547 *);
	static Canvas_get_referencePixelsPerUnit_m6131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m6131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C" void Canvas_set_referencePixelsPerUnit_m6329 (Canvas_t547 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m6329_ftn) (Canvas_t547 *, float);
	static Canvas_set_referencePixelsPerUnit_m6329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m6329_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C" bool Canvas_get_pixelPerfect_m6091 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m6091_ftn) (Canvas_t547 *);
	static Canvas_get_pixelPerfect_m6091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m6091_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C" int32_t Canvas_get_renderOrder_m6106 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m6106_ftn) (Canvas_t547 *);
	static Canvas_get_renderOrder_m6106_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m6106_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C" int32_t Canvas_get_sortingOrder_m6105 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m6105_ftn) (Canvas_t547 *);
	static Canvas_get_sortingOrder_m6105_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m6105_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m6112 (Canvas_t547 * __this, const MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m6112_ftn) (Canvas_t547 *);
	static Canvas_get_cachedSortingLayerValue_m6112_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m6112_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C" Material_t526 * Canvas_GetDefaultCanvasMaterial_m6078 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t526 * (*Canvas_GetDefaultCanvasMaterial_m6078_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m6078_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m6078_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern "C" Material_t526 * Canvas_GetDefaultCanvasTextMaterial_m6307 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Material_t526 * (*Canvas_GetDefaultCanvasTextMaterial_m6307_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m6307_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m6307_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern TypeInfo* Canvas_t547_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m9784 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t547_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t1080 * L_0 = ((Canvas_t547_StaticFields*)Canvas_t547_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t1080 * L_1 = ((Canvas_t547_StaticFields*)Canvas_t547_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C" void Canvas_ForceUpdateCanvases_m6261 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m9784(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"



// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern "C" bool CanvasGroup_get_interactable_m6290 (CanvasGroup_t1086 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m6290_ftn) (CanvasGroup_t1086 *);
	static CanvasGroup_get_interactable_m6290_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m6290_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m9785 (CanvasGroup_t1086 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m9785_ftn) (CanvasGroup_t1086 *);
	static CanvasGroup_get_blocksRaycasts_m9785_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m9785_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern "C" bool CanvasGroup_get_ignoreParentGroups_m6090 (CanvasGroup_t1086 * __this, const MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m6090_ftn) (CanvasGroup_t1086 *);
	static CanvasGroup_get_ignoreParentGroups_m6090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m6090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool CanvasGroup_IsRaycastLocationValid_m9786 (CanvasGroup_t1086 * __this, Vector2_t110  ___sp, Camera_t548 * ___eventCamera, const MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m9785(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"


// System.Void UnityEngine.UIVertex::.cctor()
extern TypeInfo* UIVertex_t969_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m9787 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t969_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1891);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t969  V_0 = {0};
	{
		Color32_t773  L_0 = {0};
		Color32__ctor_m4087(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t969_StaticFields*)UIVertex_t969_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t1063  L_1 = {0};
		Vector4__ctor_m6087(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t969_StaticFields*)UIVertex_t969_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t969_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t538  L_2 = Vector3_get_zero_m4200(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t538  L_3 = Vector3_get_back_m9289(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t1063  L_4 = ((UIVertex_t969_StaticFields*)UIVertex_t969_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t773  L_5 = ((UIVertex_t969_StaticFields*)UIVertex_t969_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t110  L_6 = Vector2_get_zero_m3820(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t110  L_7 = Vector2_get_zero_m3820(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t969  L_8 = V_0;
		((UIVertex_t969_StaticFields*)UIVertex_t969_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m6096 (CanvasRenderer_t938 * __this, Color_t325  ___color, const MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m9788(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m9788 (Object_t * __this /* static, unused */, CanvasRenderer_t938 * ___self, Color_t325 * ___color, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m9788_ftn) (CanvasRenderer_t938 *, Color_t325 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m9788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m9788_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t325  CanvasRenderer_GetColor_m6094 (CanvasRenderer_t938 * __this, const MethodInfo* method)
{
	typedef Color_t325  (*CanvasRenderer_GetColor_m6094_ftn) (CanvasRenderer_t938 *);
	static CanvasRenderer_GetColor_m6094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m6094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern "C" void CanvasRenderer_set_isMask_m6360 (CanvasRenderer_t938 * __this, bool ___value, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m6360_ftn) (CanvasRenderer_t938 *, bool);
	static CanvasRenderer_set_isMask_m6360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m6360_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m6086 (CanvasRenderer_t938 * __this, Material_t526 * ___material, Texture_t394 * ___texture, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m6086_ftn) (CanvasRenderer_t938 *, Material_t526 *, Texture_t394 *);
	static CanvasRenderer_SetMaterial_m6086_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m6086_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t761_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m6084 (CanvasRenderer_t938 * __this, List_1_t971 * ___vertices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		UInt16_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t971 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count() */, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t700* L_2 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(UInt16_t761_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1931, L_2, /*hidden argument*/NULL);
		Debug_LogWarning_m6303(NULL /*static, unused*/, L_5, __this, /*hidden argument*/NULL);
		List_1_t971 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear() */, L_6);
	}

IL_0039:
	{
		List_1_t971 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m9789(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m9789 (CanvasRenderer_t938 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m9789_ftn) (CanvasRenderer_t938 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m9789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m9789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t761_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m6186 (CanvasRenderer_t938 * __this, UIVertexU5BU5D_t968* ___vertices, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		UInt16_t761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t700* L_1 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(UInt16_t761_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1931, L_1, /*hidden argument*/NULL);
		Debug_LogWarning_m6303(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t968* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m9790(__this, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m9790 (CanvasRenderer_t938 * __this, UIVertexU5BU5D_t968* ___vertices, int32_t ___size, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m9790_ftn) (CanvasRenderer_t938 *, UIVertexU5BU5D_t968*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m9790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m9790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m6082 (CanvasRenderer_t938 * __this, const MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m6082_ftn) (CanvasRenderer_t938 *);
	static CanvasRenderer_Clear_m6082_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m6082_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m6079 (CanvasRenderer_t938 * __this, const MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m6079_ftn) (CanvasRenderer_t938 *);
	static CanvasRenderer_get_absoluteDepth_m6079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m6079_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern TypeInfo* Vector3U5BU5D_t546_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t1088_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m9791 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t546_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		RectTransformUtility_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RectTransformUtility_t1088_StaticFields*)RectTransformUtility_t1088_il2cpp_TypeInfo_var->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t546*)SZArrayNew(Vector3U5BU5D_t546_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern TypeInfo* RectTransformUtility_t1088_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m6113 (Object_t * __this /* static, unused */, RectTransform_t545 * ___rect, Vector2_t110  ___screenPoint, Camera_t548 * ___cam, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	{
		RectTransform_t545 * L_0 = ___rect;
		Camera_t548 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9792(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9792 (Object_t * __this /* static, unused */, RectTransform_t545 * ___rect, Vector2_t110 * ___screenPoint, Camera_t548 * ___cam, const MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9792_ftn) (RectTransform_t545 *, Vector2_t110 *, Camera_t548 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m9792_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern TypeInfo* RectTransformUtility_t1088_il2cpp_TypeInfo_var;
extern "C" Vector2_t110  RectTransformUtility_PixelAdjustPoint_m6092 (Object_t * __this /* static, unused */, Vector2_t110  ___point, Transform_t406 * ___elementTransform, Canvas_t547 * ___canvas, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t110  V_0 = {0};
	{
		Vector2_t110  L_0 = ___point;
		Transform_t406 * L_1 = ___elementTransform;
		Canvas_t547 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		RectTransformUtility_PixelAdjustPoint_m9793(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/NULL);
		Vector2_t110  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t1088_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_PixelAdjustPoint_m9793 (Object_t * __this /* static, unused */, Vector2_t110  ___point, Transform_t406 * ___elementTransform, Canvas_t547 * ___canvas, Vector2_t110 * ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t406 * L_0 = ___elementTransform;
		Canvas_t547 * L_1 = ___canvas;
		Vector2_t110 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9794(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9794 (Object_t * __this /* static, unused */, Vector2_t110 * ___point, Transform_t406 * ___elementTransform, Canvas_t547 * ___canvas, Vector2_t110 * ___output, const MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9794_ftn) (Vector2_t110 *, Transform_t406 *, Canvas_t547 *, Vector2_t110 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m9794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t712  RectTransformUtility_PixelAdjustRect_m6093 (Object_t * __this /* static, unused */, RectTransform_t545 * ___rectTransform, Canvas_t547 * ___canvas, const MethodInfo* method)
{
	typedef Rect_t712  (*RectTransformUtility_PixelAdjustRect_m6093_ftn) (RectTransform_t545 *, Canvas_t547 *);
	static RectTransformUtility_PixelAdjustRect_m6093_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m6093_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern TypeInfo* RectTransformUtility_t1088_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m9795 (Object_t * __this /* static, unused */, RectTransform_t545 * ___rect, Vector2_t110  ___screenPoint, Camera_t548 * ___cam, Vector3_t538 * ___worldPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t780  V_0 = {0};
	Plane_t1096  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t538 * L_0 = ___worldPoint;
		Vector2_t110  L_1 = Vector2_get_zero_m3820(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t538  L_2 = Vector2_op_Implicit_m4368(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		*L_0 = L_2;
		Camera_t548 * L_3 = ___cam;
		Vector2_t110  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		Ray_t780  L_5 = RectTransformUtility_ScreenPointToRay_m9796(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RectTransform_t545 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t806  L_7 = Transform_get_rotation_m4351(L_6, /*hidden argument*/NULL);
		Vector3_t538  L_8 = Vector3_get_back_m9289(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t538  L_9 = Quaternion_op_Multiply_m4433(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		RectTransform_t545 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t538  L_11 = Transform_get_position_m4201(L_10, /*hidden argument*/NULL);
		Plane__ctor_m6195((&V_1), L_9, L_11, /*hidden argument*/NULL);
		Ray_t780  L_12 = V_0;
		bool L_13 = Plane_Raycast_m6196((&V_1), L_12, (&V_2), /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t538 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t538  L_16 = Ray_GetPoint_m6197((&V_0), L_15, /*hidden argument*/NULL);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern TypeInfo* RectTransformUtility_t1088_il2cpp_TypeInfo_var;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m6151 (Object_t * __this /* static, unused */, RectTransform_t545 * ___rect, Vector2_t110  ___screenPoint, Camera_t548 * ___cam, Vector2_t110 * ___localPoint, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransformUtility_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t538  V_0 = {0};
	{
		Vector2_t110 * L_0 = ___localPoint;
		Vector2_t110  L_1 = Vector2_get_zero_m3820(NULL /*static, unused*/, /*hidden argument*/NULL);
		*L_0 = L_1;
		RectTransform_t545 * L_2 = ___rect;
		Vector2_t110  L_3 = ___screenPoint;
		Camera_t548 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m9795(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t110 * L_6 = ___localPoint;
		RectTransform_t545 * L_7 = ___rect;
		Vector3_t538  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t538  L_9 = Transform_InverseTransformPoint_m4467(L_7, L_8, /*hidden argument*/NULL);
		Vector2_t110  L_10 = Vector2_op_Implicit_m4377(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t780  RectTransformUtility_ScreenPointToRay_m9796 (Object_t * __this /* static, unused */, Camera_t548 * ___cam, Vector2_t110  ___screenPos, const MethodInfo* method)
{
	Vector3_t538  V_0 = {0};
	{
		Camera_t548 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t548 * L_2 = ___cam;
		Vector2_t110  L_3 = ___screenPos;
		Vector3_t538  L_4 = Vector2_op_Implicit_m4368(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t780  L_5 = Camera_ScreenPointToRay_m4169(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0019:
	{
		Vector2_t110  L_6 = ___screenPos;
		Vector3_t538  L_7 = Vector2_op_Implicit_m4368(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_t538 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t538  L_10 = V_0;
		Vector3_t538  L_11 = Vector3_get_forward_m4382(NULL /*static, unused*/, /*hidden argument*/NULL);
		Ray_t780  L_12 = {0};
		Ray__ctor_m9380(&L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t545_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t1088_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m6256 (Object_t * __this /* static, unused */, RectTransform_t545 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		RectTransformUtility_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t545 * V_1 = {0};
	Vector2_t110  V_2 = {0};
	Vector2_t110  V_3 = {0};
	Vector2_t110  V_4 = {0};
	Vector2_t110  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t545 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m3941(NULL /*static, unused*/, L_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
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
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t545 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t406 * L_5 = Transform_GetChild_m4480(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t545 *)IsInst(L_5, RectTransform_t545_il2cpp_TypeInfo_var));
		RectTransform_t545 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_6, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t545 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutOnAxis_m6256(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/NULL);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t545 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m4481(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t545 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t110  L_15 = RectTransform_get_pivot_m6136(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m6148((&V_2), L_17, /*hidden argument*/NULL);
		Vector2_set_Item_m6157((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/NULL);
		RectTransform_t545 * L_19 = ___rect;
		Vector2_t110  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m6230(L_19, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t545 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t110  L_23 = RectTransform_get_anchoredPosition_m6227(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m6148((&V_3), L_25, /*hidden argument*/NULL);
		Vector2_set_Item_m6157((&V_3), L_24, ((-L_26)), /*hidden argument*/NULL);
		RectTransform_t545 * L_27 = ___rect;
		Vector2_t110  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m4499(L_27, L_28, /*hidden argument*/NULL);
		RectTransform_t545 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t110  L_30 = RectTransform_get_anchorMin_m6137(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		RectTransform_t545 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t110  L_32 = RectTransform_get_anchorMax_m6226(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m6148((&V_4), L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m6148((&V_5), L_36, /*hidden argument*/NULL);
		Vector2_set_Item_m6157((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/NULL);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m6157((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/NULL);
		RectTransform_t545 * L_40 = ___rect;
		Vector2_t110  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m6229(L_40, L_41, /*hidden argument*/NULL);
		RectTransform_t545 * L_42 = ___rect;
		Vector2_t110  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m6138(L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern TypeInfo* RectTransform_t545_il2cpp_TypeInfo_var;
extern TypeInfo* RectTransformUtility_t1088_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility_FlipLayoutAxes_m6255 (Object_t * __this /* static, unused */, RectTransform_t545 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RectTransform_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		RectTransformUtility_t1088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1906);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t545 * V_1 = {0};
	{
		RectTransform_t545 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m3941(NULL /*static, unused*/, L_0, (Object_t721 *)NULL, /*hidden argument*/NULL);
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
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t545 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t406 * L_5 = Transform_GetChild_m4480(L_3, L_4, /*hidden argument*/NULL);
		V_1 = ((RectTransform_t545 *)IsInst(L_5, RectTransform_t545_il2cpp_TypeInfo_var));
		RectTransform_t545 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m3837(NULL /*static, unused*/, L_6, (Object_t721 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t545 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		RectTransformUtility_FlipLayoutAxes_m6255(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t545 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m4481(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t545 * L_13 = ___rect;
		RectTransform_t545 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t110  L_15 = RectTransform_get_pivot_m6136(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		Vector2_t110  L_16 = RectTransformUtility_GetTransposed_m9797(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		RectTransform_set_pivot_m6230(L_13, L_16, /*hidden argument*/NULL);
		RectTransform_t545 * L_17 = ___rect;
		RectTransform_t545 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t110  L_19 = RectTransform_get_sizeDelta_m6228(L_18, /*hidden argument*/NULL);
		Vector2_t110  L_20 = RectTransformUtility_GetTransposed_m9797(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m4369(L_17, L_20, /*hidden argument*/NULL);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t545 * L_22 = ___rect;
		RectTransform_t545 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t110  L_24 = RectTransform_get_anchoredPosition_m6227(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t1088_il2cpp_TypeInfo_var);
		Vector2_t110  L_25 = RectTransformUtility_GetTransposed_m9797(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m4499(L_22, L_25, /*hidden argument*/NULL);
		RectTransform_t545 * L_26 = ___rect;
		RectTransform_t545 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t110  L_28 = RectTransform_get_anchorMin_m6137(L_27, /*hidden argument*/NULL);
		Vector2_t110  L_29 = RectTransformUtility_GetTransposed_m9797(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m6229(L_26, L_29, /*hidden argument*/NULL);
		RectTransform_t545 * L_30 = ___rect;
		RectTransform_t545 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t110  L_32 = RectTransform_get_anchorMax_m6226(L_31, /*hidden argument*/NULL);
		Vector2_t110  L_33 = RectTransformUtility_GetTransposed_m9797(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m6138(L_30, L_33, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t110  RectTransformUtility_GetTransposed_m9797 (Object_t * __this /* static, unused */, Vector2_t110  ___input, const MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t110  L_2 = {0};
		Vector2__ctor_m4367(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" void Request__ctor_m9798 (Request_t2813 * __this, const MethodInfo* method)
{
	{
		__this->___version_0 = 1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m9799 (Request_t2813 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m9800 (Request_t2813 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m9801 (Request_t2813 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2831_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2830_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* Request_ToString_m9802 (Request_t2813 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		SourceID_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4538);
		AppID_t2830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4539);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m492(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m9799(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(SourceID_t2831_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m10289(L_5, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t700* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m9800(__this, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(AppID_t2830_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m10289(L_10, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t700* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m9801(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1932, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C" void ResponseBase__ctor_m9803 (ResponseBase_t2814 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" String_t* ResponseBase_ParseJSONString_m9804 (ResponseBase_t2814 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t840_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral1934, /*hidden argument*/NULL);
		FormatException_t2952 * L_6 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" int32_t ResponseBase_ParseJSONInt32_m9805 (ResponseBase_t2814 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t840_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m4052(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral1934, /*hidden argument*/NULL);
		FormatException_t2952 * L_7 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m9806 (ResponseBase_t2814 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t840_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		uint16_t L_4 = Convert_ToUInt16_m10291(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral1934, /*hidden argument*/NULL);
		FormatException_t2952 * L_7 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m9807 (ResponseBase_t2814 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t840_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		uint64_t L_4 = Convert_ToUInt64_m10292(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral1934, /*hidden argument*/NULL);
		FormatException_t2952 * L_7 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" bool ResponseBase_ParseJSONBool_m9808 (ResponseBase_t2814 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t840_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		bool L_4 = Convert_ToBoolean_m10293(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral1934, /*hidden argument*/NULL);
		FormatException_t2952 * L_7 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" void Response__ctor_m9809 (Response_t2815 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m9803(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m9810 (Response_t2815 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m9811 (Response_t2815 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m9812 (Response_t2815 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m9813 (Response_t2815 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" String_t* Response_ToString_m9814 (Response_t2815 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m492(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		bool L_3 = Response_get_success_m9810(__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t700* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m9812(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1935, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" void Response_Parse_m9815 (Response_t2815 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t840_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m9808(__this, (String_t*) &_stringLiteral1427, L_2, L_3, /*hidden argument*/NULL);
		Response_set_success_m9811(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m9804(__this, (String_t*) &_stringLiteral1936, L_5, L_6, /*hidden argument*/NULL);
		Response_set_extendedInfo_m9813(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = Response_get_success_m9810(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m9812(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1937, L_9, /*hidden argument*/NULL);
		FormatException_t2952 * L_11 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C" void BasicResponse__ctor_m9816 (BasicResponse_t2816 * __this, const MethodInfo* method)
{
	{
		Response__ctor_m9809(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_41.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_41MethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" void CreateMatchRequest__ctor_m9817 (CreateMatchRequest_t2818 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m9798(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m9818 (CreateMatchRequest_t2818 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" void CreateMatchRequest_set_name_m9819 (CreateMatchRequest_t2818 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m9820 (CreateMatchRequest_t2818 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" void CreateMatchRequest_set_size_m9821 (CreateMatchRequest_t2818 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m9822 (CreateMatchRequest_t2818 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" void CreateMatchRequest_set_advertise_m9823 (CreateMatchRequest_t2818 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m9824 (CreateMatchRequest_t2818 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" void CreateMatchRequest_set_password_m9825 (CreateMatchRequest_t2818 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t2817 * CreateMatchRequest_get_matchAttributes_m9826 (CreateMatchRequest_t2818 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2817 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t758_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchRequest_ToString_m9827 (CreateMatchRequest_t2818 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		UInt32_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t700* G_B2_1 = {0};
	ObjectU5BU5D_t700* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t700* G_B1_1 = {0};
	ObjectU5BU5D_t700* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t700* G_B3_2 = {0};
	ObjectU5BU5D_t700* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t700* G_B5_1 = {0};
	ObjectU5BU5D_t700* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t700* G_B4_1 = {0};
	ObjectU5BU5D_t700* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t700* G_B6_2 = {0};
	ObjectU5BU5D_t700* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m9802(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m9818(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t700* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m9820(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(UInt32_t758_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t700* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m9822(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t700* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m9824(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m456(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral1938;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral1938;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral1939;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (String_t*) &_stringLiteral1940;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t700* L_16 = G_B3_3;
		Dictionary_2_t2817 * L_17 = CreateMatchRequest_get_matchAttributes_m9826(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t2817 * L_18 = CreateMatchRequest_get_matchAttributes_m9826(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m9475(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C" void CreateMatchResponse__ctor_m9828 (CreateMatchResponse_t2819 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m9816(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m9829 (CreateMatchResponse_t2819 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m9830 (CreateMatchResponse_t2819 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m9831 (CreateMatchResponse_t2819 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m9832 (CreateMatchResponse_t2819 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m9833 (CreateMatchResponse_t2819 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m9834 (CreateMatchResponse_t2819 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m9835 (CreateMatchResponse_t2819 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m9836 (CreateMatchResponse_t2819 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m9837 (CreateMatchResponse_t2819 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m9838 (CreateMatchResponse_t2819 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m9839 (CreateMatchResponse_t2819 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m9840 (CreateMatchResponse_t2819 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2833_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchResponse_ToString_m9841 (CreateMatchResponse_t2819 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		NodeID_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4542);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m9814(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m9829(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t700* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m9831(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t700* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m9833(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m10289(L_11, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t700* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m9837(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t2833_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m10289(L_16, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t700* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m9839(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1941, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" void CreateMatchResponse_Parse_m9842 (CreateMatchResponse_t2819 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m9815(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t840_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m9804(__this, (String_t*) &_stringLiteral1942, L_3, L_4, /*hidden argument*/NULL);
		CreateMatchResponse_set_address_m9830(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m9805(__this, (String_t*) &_stringLiteral1943, L_6, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_set_port_m9832(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m9807(__this, (String_t*) &_stringLiteral1944, L_9, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_set_networkId_m9834(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m9804(__this, (String_t*) &_stringLiteral1945, L_12, L_13, /*hidden argument*/NULL);
		CreateMatchResponse_set_accessTokenString_m9836(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m9806(__this, (String_t*) &_stringLiteral1946, L_15, L_16, /*hidden argument*/NULL);
		CreateMatchResponse_set_nodeId_m9838(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m9808(__this, (String_t*) &_stringLiteral1947, L_18, L_19, /*hidden argument*/NULL);
		CreateMatchResponse_set_usingRelay_m9840(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1948, L_22, /*hidden argument*/NULL);
		FormatException_t2952 * L_24 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" void JoinMatchRequest__ctor_m9843 (JoinMatchRequest_t2820 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m9798(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m9844 (JoinMatchRequest_t2820 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchRequest_set_networkId_m9845 (JoinMatchRequest_t2820 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m9846 (JoinMatchRequest_t2820 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" void JoinMatchRequest_set_password_m9847 (JoinMatchRequest_t2820 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchRequest_ToString_m9848 (JoinMatchRequest_t2820 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t700* G_B2_1 = {0};
	ObjectU5BU5D_t700* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t700* G_B1_1 = {0};
	ObjectU5BU5D_t700* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t700* G_B3_2 = {0};
	ObjectU5BU5D_t700* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m9802(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m9844(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m10289(L_5, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t700* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m9846(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m456(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (String_t*) &_stringLiteral1949;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (String_t*) &_stringLiteral1949;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral1939;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (String_t*) &_stringLiteral1940;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m9475(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C" void JoinMatchResponse__ctor_m9849 (JoinMatchResponse_t2821 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m9816(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m9850 (JoinMatchResponse_t2821 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m9851 (JoinMatchResponse_t2821 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m9852 (JoinMatchResponse_t2821 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m9853 (JoinMatchResponse_t2821 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m9854 (JoinMatchResponse_t2821 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m9855 (JoinMatchResponse_t2821 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m9856 (JoinMatchResponse_t2821 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m9857 (JoinMatchResponse_t2821 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m9858 (JoinMatchResponse_t2821 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m9859 (JoinMatchResponse_t2821 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m9860 (JoinMatchResponse_t2821 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m9861 (JoinMatchResponse_t2821 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2833_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchResponse_ToString_m9862 (JoinMatchResponse_t2821 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		NodeID_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4542);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m9814(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m9850(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t700* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m9852(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t700* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m9854(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m10289(L_11, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t700* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m9858(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t2833_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m10289(L_16, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t700* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m9860(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1941, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" void JoinMatchResponse_Parse_m9863 (JoinMatchResponse_t2821 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m9815(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t840_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m9804(__this, (String_t*) &_stringLiteral1942, L_3, L_4, /*hidden argument*/NULL);
		JoinMatchResponse_set_address_m9851(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m9805(__this, (String_t*) &_stringLiteral1943, L_6, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_set_port_m9853(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m9807(__this, (String_t*) &_stringLiteral1944, L_9, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_set_networkId_m9855(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m9804(__this, (String_t*) &_stringLiteral1945, L_12, L_13, /*hidden argument*/NULL);
		JoinMatchResponse_set_accessTokenString_m9857(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m9806(__this, (String_t*) &_stringLiteral1946, L_15, L_16, /*hidden argument*/NULL);
		JoinMatchResponse_set_nodeId_m9859(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m9808(__this, (String_t*) &_stringLiteral1947, L_18, L_19, /*hidden argument*/NULL);
		JoinMatchResponse_set_usingRelay_m9861(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1948, L_22, /*hidden argument*/NULL);
		FormatException_t2952 * L_24 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C" void DestroyMatchRequest__ctor_m9864 (DestroyMatchRequest_t2822 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m9798(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m9865 (DestroyMatchRequest_t2822 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DestroyMatchRequest_set_networkId_m9866 (DestroyMatchRequest_t2822 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern "C" String_t* DestroyMatchRequest_ToString_m9867 (DestroyMatchRequest_t2822 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m9802(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m9865(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m10289(L_5, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1950, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" void DropConnectionRequest__ctor_m9868 (DropConnectionRequest_t2823 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m9798(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m9869 (DropConnectionRequest_t2823 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DropConnectionRequest_set_networkId_m9870 (DropConnectionRequest_t2823 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m9871 (DropConnectionRequest_t2823 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void DropConnectionRequest_set_nodeId_m9872 (DropConnectionRequest_t2823 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2833_il2cpp_TypeInfo_var;
extern "C" String_t* DropConnectionRequest_ToString_m9873 (DropConnectionRequest_t2823 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		NodeID_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4542);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m9802(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m9869(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m10289(L_5, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t700* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m9871(__this, /*hidden argument*/NULL);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(NodeID_t2833_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m10289(L_10, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1951, L_7, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" void ListMatchRequest__ctor_m9874 (ListMatchRequest_t2824 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m9798(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m9875 (ListMatchRequest_t2824 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" void ListMatchRequest_set_pageSize_m9876 (ListMatchRequest_t2824 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m9877 (ListMatchRequest_t2824 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m9878 (ListMatchRequest_t2824 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m9879 (ListMatchRequest_t2824 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" void ListMatchRequest_set_nameFilter_m9880 (ListMatchRequest_t2824 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t2817 * ListMatchRequest_get_matchAttributeFilterLessThan_m9881 (ListMatchRequest_t2824 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2817 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t2817 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m9882 (ListMatchRequest_t2824 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2817 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* ListMatchRequest_ToString_m9883 (ListMatchRequest_t2824 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t700* G_B2_1 = {0};
	ObjectU5BU5D_t700* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t700* G_B1_1 = {0};
	ObjectU5BU5D_t700* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t700* G_B3_2 = {0};
	ObjectU5BU5D_t700* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t700* G_B5_1 = {0};
	ObjectU5BU5D_t700* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t700* G_B4_1 = {0};
	ObjectU5BU5D_t700* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t700* G_B6_2 = {0};
	ObjectU5BU5D_t700* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m9802(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m9875(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t700* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m9877(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t700* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m9879(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t700* L_12 = L_10;
		Dictionary_2_t2817 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m9881(__this, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral1952;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral1952;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t2817 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m9881(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t700* L_18 = G_B3_3;
		Dictionary_2_t2817 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m9882(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t2817 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m9882(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m9475(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C" void MatchDirectConnectInfo__ctor_m9884 (MatchDirectConnectInfo_t2825 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m9803(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m9885 (MatchDirectConnectInfo_t2825 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m9886 (MatchDirectConnectInfo_t2825 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m9887 (MatchDirectConnectInfo_t2825 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m9888 (MatchDirectConnectInfo_t2825 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m9889 (MatchDirectConnectInfo_t2825 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m9890 (MatchDirectConnectInfo_t2825 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2833_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDirectConnectInfo_ToString_m9891 (MatchDirectConnectInfo_t2825 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		NodeID_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4542);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m492(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m9885(__this, /*hidden argument*/NULL);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(NodeID_t2833_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t700* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m9887(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t700* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m9889(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1953, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern "C" void MatchDirectConnectInfo_Parse_m9892 (MatchDirectConnectInfo_t2825 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t840_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m9806(__this, (String_t*) &_stringLiteral1946, L_2, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_nodeId_m9886(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m9804(__this, (String_t*) &_stringLiteral1954, L_5, L_6, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_publicAddress_m9888(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m9804(__this, (String_t*) &_stringLiteral1955, L_8, L_9, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_privateAddress_m9890(__this, L_10, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1948, L_12, /*hidden argument*/NULL);
		FormatException_t2952 * L_14 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_57.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_57MethodDeclarations.h"
struct ResponseBase_t2814;
struct List_1_t2826;
struct String_t;
struct Object_t;
struct IDictionary_2_t840;
struct ResponseBase_t2814;
struct List_1_t702;
struct String_t;
struct Object_t;
struct IDictionary_2_t840;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t702 * ResponseBase_ParseJSONList_TisObject_t_m10295_gshared (ResponseBase_t2814 * __this, String_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define ResponseBase_ParseJSONList_TisObject_t_m10295(__this, p0, p1, p2, method) (( List_1_t702 * (*) (ResponseBase_t2814 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m10295_gshared)(__this, p0, p1, p2, method)
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2825_m10294(__this, p0, p1, p2, method) (( List_1_t2826 * (*) (ResponseBase_t2814 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m10295_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C" void MatchDesc__ctor_m9893 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m9803(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m9894 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m9895 (MatchDesc_t2827 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m9896 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m9897 (MatchDesc_t2827 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m9898 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m9899 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m9900 (MatchDesc_t2827 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m9901 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m9902 (MatchDesc_t2827 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m9903 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m9904 (MatchDesc_t2827 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t2817 * MatchDesc_get_matchAttributes_m9905 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t2817 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C" uint16_t MatchDesc_get_hostNodeId_m9906 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t2826 * MatchDesc_get_directConnectInfos_m9907 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	{
		List_1_t2826 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m9908 (MatchDesc_t2827 * __this, List_1_t2826 * ___value, const MethodInfo* method)
{
	{
		List_1_t2826 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDesc_ToString_m9909 (MatchDesc_t2827 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t700* G_B2_1 = {0};
	ObjectU5BU5D_t700* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t700* G_B1_1 = {0};
	ObjectU5BU5D_t700* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t700* G_B3_2 = {0};
	ObjectU5BU5D_t700* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m492(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m9894(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m10289(L_5, (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t700* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m9896(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t700* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m9898(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t700* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m9899(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t700* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m9901(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t700* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m9903(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t700* L_25 = L_21;
		Dictionary_2_t2817 * L_26 = MatchDesc_get_matchAttributes_m9905(__this, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (String_t*) &_stringLiteral1956;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (String_t*) &_stringLiteral1956;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t2817 * L_27 = MatchDesc_get_matchAttributes_m9905(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t700* L_31 = G_B3_3;
		List_1_t2826 * L_32 = MatchDesc_get_directConnectInfos_m9907(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count() */, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m9475(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2825_m10294_MethodInfo_var;
extern "C" void MatchDesc_Parse_m9910 (MatchDesc_t2827 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2825_m10294_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485127);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t840_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m9807(__this, (String_t*) &_stringLiteral1944, L_2, L_3, /*hidden argument*/NULL);
		MatchDesc_set_networkId_m9895(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m9804(__this, (String_t*) &_stringLiteral524, L_5, L_6, /*hidden argument*/NULL);
		MatchDesc_set_name_m9897(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m9805(__this, (String_t*) &_stringLiteral1957, L_8, L_9, /*hidden argument*/NULL);
		MatchDesc_set_maxSize_m9900(__this, L_10, /*hidden argument*/NULL);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m9805(__this, (String_t*) &_stringLiteral1958, L_11, L_12, /*hidden argument*/NULL);
		MatchDesc_set_currentSize_m9902(__this, L_13, /*hidden argument*/NULL);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m9808(__this, (String_t*) &_stringLiteral1959, L_14, L_15, /*hidden argument*/NULL);
		MatchDesc_set_isPrivate_m9904(__this, L_16, /*hidden argument*/NULL);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t2826 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2825_m10294(__this, (String_t*) &_stringLiteral1960, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2825_m10294_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m9908(__this, L_19, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1948, L_21, /*hidden argument*/NULL);
		FormatException_t2952 * L_23 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_58.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_58MethodDeclarations.h"
struct ResponseBase_t2814;
struct List_1_t2828;
struct String_t;
struct Object_t;
struct IDictionary_2_t840;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDesc_t2827_m10296(__this, p0, p1, p2, method) (( List_1_t2828 * (*) (ResponseBase_t2814 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m10295_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" void ListMatchResponse__ctor_m9911 (ListMatchResponse_t2829 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m9816(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t2828 * ListMatchResponse_get_matches_m9912 (ListMatchResponse_t2829 * __this, const MethodInfo* method)
{
	{
		List_1_t2828 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m9913 (ListMatchResponse_t2829 * __this, List_1_t2828 * ___value, const MethodInfo* method)
{
	{
		List_1_t2828 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* ListMatchResponse_ToString_m9914 (ListMatchResponse_t2829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m9814(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t700* L_2 = L_0;
		List_1_t2828 * L_3 = ListMatchResponse_get_matches_m9912(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count() */, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m9475(NULL /*static, unused*/, (String_t*) &_stringLiteral1961, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t840_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t2952_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t2827_m10296_MethodInfo_var;
extern "C" void ListMatchResponse_Parse_m9915 (ListMatchResponse_t2829 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t840_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1239);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FormatException_t2952_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4540);
		ResponseBase_ParseJSONList_TisMatchDesc_t2827_m10296_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485128);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m9815(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t840_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t2828 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t2827_m10296(__this, (String_t*) &_stringLiteral1962, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t2827_m10296_MethodInfo_var);
		ListMatchResponse_set_matches_m9913(__this, L_5, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1948, L_7, /*hidden argument*/NULL);
		FormatException_t2952 * L_9 = (FormatException_t2952 *)il2cpp_codegen_object_new (FormatException_t2952_il2cpp_TypeInfo_var);
		FormatException__ctor_m10290(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"



// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m9916 (NetworkAccessToken_t2834 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		__this->___array_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" String_t* NetworkAccessToken_GetByteString_m9917 (NetworkAccessToken_t2834 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t66* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m426(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_42.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_42MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"


// System.Void UnityEngine.Networking.Utility::.cctor()
extern TypeInfo* Random_t2835_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t2836_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m10299_MethodInfo_var;
extern "C" void Utility__cctor_m9918 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Random_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4546);
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		Dictionary_2_t2836_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4548);
		Dictionary_2__ctor_m10299_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485129);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m10297(NULL /*static, unused*/, /*hidden argument*/NULL);
		Random_t2835 * L_1 = (Random_t2835 *)il2cpp_codegen_object_new (Random_t2835_il2cpp_TypeInfo_var);
		Random__ctor_m10298(L_1, L_0, /*hidden argument*/NULL);
		((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t2836 * L_2 = (Dictionary_2_t2836 *)il2cpp_codegen_object_new (Dictionary_2_t2836_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m10299(L_2, /*hidden argument*/Dictionary_2__ctor_m10299_MethodInfo_var);
		((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetSourceID_m9919 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m8865(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m409(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern "C" void Utility_SetAppID_m9920 (Object_t * __this /* static, unused */, uint64_t ___newAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetAppID_m9921 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkAccessToken_t2834_il2cpp_TypeInfo_var;
extern "C" NetworkAccessToken_t2834 * Utility_GetAccessTokenForNetwork_m9922 (Object_t * __this /* static, unused */, uint64_t ___netId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		NetworkAccessToken_t2834_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4545);
		s_Il2CppMethodIntialized = true;
	}
	NetworkAccessToken_t2834 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		Dictionary_2_t2836 * L_0 = ((Utility_t2837_StaticFields*)Utility_t2837_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t2834 ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t2834 * L_3 = (NetworkAccessToken_t2834 *)il2cpp_codegen_object_new (NetworkAccessToken_t2834_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m9916(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t2834 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
struct NetworkMatch_t2838;
struct IEnumerator_t48;
struct WWW_t265;
struct ResponseDelegate_1_t2932;
struct NetworkMatch_t2838;
struct IEnumerator_t48;
struct WWW_t265;
struct ResponseDelegate_1_t2953;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisObject_t_m10301_gshared (NetworkMatch_t2838 * __this, WWW_t265 * p0, ResponseDelegate_1_t2953 * p1, const MethodInfo* method);
#define NetworkMatch_ProcessMatchResponse_TisObject_t_m10301(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t2838 *, WWW_t265 *, ResponseDelegate_1_t2953 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m10301_gshared)(__this, p0, p1, method)
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t2819_m10300(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t2838 *, WWW_t265 *, ResponseDelegate_1_t2932 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m10301_gshared)(__this, p0, p1, method)
struct NetworkMatch_t2838;
struct IEnumerator_t48;
struct WWW_t265;
struct ResponseDelegate_1_t2933;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t2821_m10302(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t2838 *, WWW_t265 *, ResponseDelegate_1_t2933 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m10301_gshared)(__this, p0, p1, method)
struct NetworkMatch_t2838;
struct IEnumerator_t48;
struct WWW_t265;
struct ResponseDelegate_1_t2934;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t2838 *, WWW_t265 *, ResponseDelegate_1_t2934 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m10301_gshared)(__this, p0, p1, method)
struct NetworkMatch_t2838;
struct IEnumerator_t48;
struct WWW_t265;
struct ResponseDelegate_1_t2935;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t2829_m10304(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t2838 *, WWW_t265 *, ResponseDelegate_1_t2935 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m10301_gshared)(__this, p0, p1, method)


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern TypeInfo* Uri_t775_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch__ctor_m9923 (NetworkMatch_t2838 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		Uri_t775 * L_0 = (Uri_t775 *)il2cpp_codegen_object_new (Uri_t775_il2cpp_TypeInfo_var);
		Uri__ctor_m7635(L_0, (String_t*) &_stringLiteral1963, /*hidden argument*/NULL);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		String_t* L_1 = PlayerPrefs_GetString_m4080(NULL /*static, unused*/, (String_t*) &_stringLiteral1964, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m10305(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1965, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m9926(__this, L_4, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t775 * NetworkMatch_get_baseUri_m9924 (NetworkMatch_t2838 * __this, const MethodInfo* method)
{
	{
		Uri_t775 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m9925 (NetworkMatch_t2838 * __this, Uri_t775 * ___value, const MethodInfo* method)
{
	{
		Uri_t775 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch_SetProgramAppID_m9926 (NetworkMatch_t2838 * __this, uint64_t ___programAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		Utility_SetAppID_m9920(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* CreateMatchRequest_t2818_il2cpp_TypeInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_CreateMatch_m9927 (NetworkMatch_t2838 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t2932 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CreateMatchRequest_t2818_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4549);
		s_Il2CppMethodIntialized = true;
	}
	CreateMatchRequest_t2818 * V_0 = {0};
	{
		CreateMatchRequest_t2818 * L_0 = (CreateMatchRequest_t2818 *)il2cpp_codegen_object_new (CreateMatchRequest_t2818_il2cpp_TypeInfo_var);
		CreateMatchRequest__ctor_m9817(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CreateMatchRequest_t2818 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m9819(L_1, L_2, /*hidden argument*/NULL);
		CreateMatchRequest_t2818 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m9821(L_3, L_4, /*hidden argument*/NULL);
		CreateMatchRequest_t2818 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m9823(L_5, L_6, /*hidden argument*/NULL);
		CreateMatchRequest_t2818 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m9825(L_7, L_8, /*hidden argument*/NULL);
		CreateMatchRequest_t2818 * L_9 = V_0;
		ResponseDelegate_1_t2932 * L_10 = ___callback;
		Coroutine_t972 * L_11 = NetworkMatch_CreateMatch_m9928(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* Uri_t775_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t112_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2831_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2830_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t2819_m10300_MethodInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_CreateMatch_m9928 (NetworkMatch_t2838 * __this, CreateMatchRequest_t2818 * ___req, ResponseDelegate_1_t2932 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		WWWForm_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		SourceID_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4538);
		AppID_t2830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4539);
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t2819_m10300_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485130);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t775 * V_0 = {0};
	WWWForm_t112 * V_1 = {0};
	WWW_t265 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t775 * L_0 = NetworkMatch_get_baseUri_m9924(__this, /*hidden argument*/NULL);
		Uri_t775 * L_1 = (Uri_t775 *)il2cpp_codegen_object_new (Uri_t775_il2cpp_TypeInfo_var);
		Uri__ctor_m7478(L_1, L_0, (String_t*) &_stringLiteral1966, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t775 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1967, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t112 * L_4 = (WWWForm_t112 *)il2cpp_codegen_object_new (WWWForm_t112_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3863(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t112 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m9919(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t2831_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3865(L_5, (String_t*) &_stringLiteral1968, L_9, /*hidden argument*/NULL);
		WWWForm_t112 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m9921(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t2830_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3865(L_10, (String_t*) &_stringLiteral831, L_14, /*hidden argument*/NULL);
		WWWForm_t112 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m9463(L_15, (String_t*) &_stringLiteral1945, 0, /*hidden argument*/NULL);
		WWWForm_t112 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m9463(L_16, (String_t*) &_stringLiteral1969, 0, /*hidden argument*/NULL);
		WWWForm_t112 * L_17 = V_1;
		CreateMatchRequest_t2818 * L_18 = ___req;
		NullCheck(L_18);
		String_t* L_19 = CreateMatchRequest_get_name_m9818(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m3865(L_17, (String_t*) &_stringLiteral524, L_19, /*hidden argument*/NULL);
		WWWForm_t112 * L_20 = V_1;
		CreateMatchRequest_t2818 * L_21 = ___req;
		NullCheck(L_21);
		uint32_t L_22 = CreateMatchRequest_get_size_m9820(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		String_t* L_23 = UInt32_ToString_m10306((&V_3), /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m3865(L_20, (String_t*) &_stringLiteral1970, L_23, /*hidden argument*/NULL);
		WWWForm_t112 * L_24 = V_1;
		CreateMatchRequest_t2818 * L_25 = ___req;
		NullCheck(L_25);
		bool L_26 = CreateMatchRequest_get_advertise_m9822(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		String_t* L_27 = Boolean_ToString_m3979((&V_4), /*hidden argument*/NULL);
		NullCheck(L_24);
		WWWForm_AddField_m3865(L_24, (String_t*) &_stringLiteral1971, L_27, /*hidden argument*/NULL);
		WWWForm_t112 * L_28 = V_1;
		CreateMatchRequest_t2818 * L_29 = ___req;
		NullCheck(L_29);
		String_t* L_30 = CreateMatchRequest_get_password_m9824(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		WWWForm_AddField_m3865(L_28, (String_t*) &_stringLiteral1742, L_30, /*hidden argument*/NULL);
		WWWForm_t112 * L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t122 * L_32 = WWWForm_get_headers_m9465(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_32, (String_t*) &_stringLiteral1972, (String_t*) &_stringLiteral1375);
		Uri_t775 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_33);
		WWWForm_t112 * L_35 = V_1;
		WWW_t265 * L_36 = (WWW_t265 *)il2cpp_codegen_object_new (WWW_t265_il2cpp_TypeInfo_var);
		WWW__ctor_m4284(L_36, L_34, L_35, /*hidden argument*/NULL);
		V_2 = L_36;
		WWW_t265 * L_37 = V_2;
		ResponseDelegate_1_t2932 * L_38 = ___callback;
		Object_t * L_39 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t2819_m10300(__this, L_37, L_38, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t2819_m10300_MethodInfo_var);
		Coroutine_t972 * L_40 = MonoBehaviour_StartCoroutine_m3879(__this, L_39, /*hidden argument*/NULL);
		return L_40;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* JoinMatchRequest_t2820_il2cpp_TypeInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_JoinMatch_m9929 (NetworkMatch_t2838 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t2933 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JoinMatchRequest_t2820_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4551);
		s_Il2CppMethodIntialized = true;
	}
	JoinMatchRequest_t2820 * V_0 = {0};
	{
		JoinMatchRequest_t2820 * L_0 = (JoinMatchRequest_t2820 *)il2cpp_codegen_object_new (JoinMatchRequest_t2820_il2cpp_TypeInfo_var);
		JoinMatchRequest__ctor_m9843(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JoinMatchRequest_t2820 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m9845(L_1, L_2, /*hidden argument*/NULL);
		JoinMatchRequest_t2820 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m9847(L_3, L_4, /*hidden argument*/NULL);
		JoinMatchRequest_t2820 * L_5 = V_0;
		ResponseDelegate_1_t2933 * L_6 = ___callback;
		Coroutine_t972 * L_7 = NetworkMatch_JoinMatch_m9930(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* Uri_t775_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t112_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2831_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2830_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t2821_m10302_MethodInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_JoinMatch_m9930 (NetworkMatch_t2838 * __this, JoinMatchRequest_t2820 * ___req, ResponseDelegate_1_t2933 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		WWWForm_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		SourceID_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4538);
		AppID_t2830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4539);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t2821_m10302_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485131);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t775 * V_0 = {0};
	WWWForm_t112 * V_1 = {0};
	WWW_t265 * V_2 = {0};
	{
		Uri_t775 * L_0 = NetworkMatch_get_baseUri_m9924(__this, /*hidden argument*/NULL);
		Uri_t775 * L_1 = (Uri_t775 *)il2cpp_codegen_object_new (Uri_t775_il2cpp_TypeInfo_var);
		Uri__ctor_m7478(L_1, L_0, (String_t*) &_stringLiteral1973, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t775 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1974, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t112 * L_4 = (WWWForm_t112 *)il2cpp_codegen_object_new (WWWForm_t112_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3863(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t112 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m9919(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t2831_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3865(L_5, (String_t*) &_stringLiteral1968, L_9, /*hidden argument*/NULL);
		WWWForm_t112 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m9921(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t2830_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3865(L_10, (String_t*) &_stringLiteral831, L_14, /*hidden argument*/NULL);
		WWWForm_t112 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m9463(L_15, (String_t*) &_stringLiteral1945, 0, /*hidden argument*/NULL);
		WWWForm_t112 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m9463(L_16, (String_t*) &_stringLiteral1969, 0, /*hidden argument*/NULL);
		WWWForm_t112 * L_17 = V_1;
		JoinMatchRequest_t2820 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = JoinMatchRequest_get_networkId_m9844(L_18, /*hidden argument*/NULL);
		uint64_t L_20 = L_19;
		Object_t * L_21 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_21);
		NullCheck(L_17);
		WWWForm_AddField_m3865(L_17, (String_t*) &_stringLiteral1944, L_22, /*hidden argument*/NULL);
		WWWForm_t112 * L_23 = V_1;
		JoinMatchRequest_t2820 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m9846(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m3865(L_23, (String_t*) &_stringLiteral1742, L_25, /*hidden argument*/NULL);
		WWWForm_t112 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t122 * L_27 = WWWForm_get_headers_m9465(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral1972, (String_t*) &_stringLiteral1375);
		Uri_t775 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		WWWForm_t112 * L_30 = V_1;
		WWW_t265 * L_31 = (WWW_t265 *)il2cpp_codegen_object_new (WWW_t265_il2cpp_TypeInfo_var);
		WWW__ctor_m4284(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		WWW_t265 * L_32 = V_2;
		ResponseDelegate_1_t2933 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t2821_m10302(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t2821_m10302_MethodInfo_var);
		Coroutine_t972 * L_35 = MonoBehaviour_StartCoroutine_m3879(__this, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DestroyMatchRequest_t2822_il2cpp_TypeInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_DestroyMatch_m9931 (NetworkMatch_t2838 * __this, uint64_t ___netId, ResponseDelegate_1_t2934 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DestroyMatchRequest_t2822_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4553);
		s_Il2CppMethodIntialized = true;
	}
	DestroyMatchRequest_t2822 * V_0 = {0};
	{
		DestroyMatchRequest_t2822 * L_0 = (DestroyMatchRequest_t2822 *)il2cpp_codegen_object_new (DestroyMatchRequest_t2822_il2cpp_TypeInfo_var);
		DestroyMatchRequest__ctor_m9864(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DestroyMatchRequest_t2822 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m9866(L_1, L_2, /*hidden argument*/NULL);
		DestroyMatchRequest_t2822 * L_3 = V_0;
		ResponseDelegate_1_t2934 * L_4 = ___callback;
		Coroutine_t972 * L_5 = NetworkMatch_DestroyMatch_m9932(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t775_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t112_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2831_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2830_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303_MethodInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_DestroyMatch_m9932 (NetworkMatch_t2838 * __this, DestroyMatchRequest_t2822 * ___req, ResponseDelegate_1_t2934 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		WWWForm_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		SourceID_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4538);
		AppID_t2830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4539);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485132);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t775 * V_0 = {0};
	WWWForm_t112 * V_1 = {0};
	WWW_t265 * V_2 = {0};
	{
		Uri_t775 * L_0 = NetworkMatch_get_baseUri_m9924(__this, /*hidden argument*/NULL);
		Uri_t775 * L_1 = (Uri_t775 *)il2cpp_codegen_object_new (Uri_t775_il2cpp_TypeInfo_var);
		Uri__ctor_m7478(L_1, L_0, (String_t*) &_stringLiteral1975, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t775 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral1976, L_3, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t112 * L_5 = (WWWForm_t112 *)il2cpp_codegen_object_new (WWWForm_t112_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3863(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		WWWForm_t112 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		uint64_t L_7 = Utility_GetSourceID_m9919(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_8 = L_7;
		Object_t * L_9 = Box(SourceID_t2831_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_9);
		NullCheck(L_6);
		WWWForm_AddField_m3865(L_6, (String_t*) &_stringLiteral1968, L_10, /*hidden argument*/NULL);
		WWWForm_t112 * L_11 = V_1;
		uint64_t L_12 = Utility_GetAppID_m9921(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_13 = L_12;
		Object_t * L_14 = Box(AppID_t2830_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_14);
		NullCheck(L_11);
		WWWForm_AddField_m3865(L_11, (String_t*) &_stringLiteral831, L_15, /*hidden argument*/NULL);
		WWWForm_t112 * L_16 = V_1;
		DestroyMatchRequest_t2822 * L_17 = ___req;
		NullCheck(L_17);
		uint64_t L_18 = DestroyMatchRequest_get_networkId_m9865(L_17, /*hidden argument*/NULL);
		NetworkAccessToken_t2834 * L_19 = Utility_GetAccessTokenForNetwork_m9922(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = NetworkAccessToken_GetByteString_m9917(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		WWWForm_AddField_m3865(L_16, (String_t*) &_stringLiteral1945, L_20, /*hidden argument*/NULL);
		WWWForm_t112 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m9463(L_21, (String_t*) &_stringLiteral1969, 0, /*hidden argument*/NULL);
		WWWForm_t112 * L_22 = V_1;
		DestroyMatchRequest_t2822 * L_23 = ___req;
		NullCheck(L_23);
		uint64_t L_24 = DestroyMatchRequest_get_networkId_m9865(L_23, /*hidden argument*/NULL);
		uint64_t L_25 = L_24;
		Object_t * L_26 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_26);
		NullCheck(L_22);
		WWWForm_AddField_m3865(L_22, (String_t*) &_stringLiteral1944, L_27, /*hidden argument*/NULL);
		WWWForm_t112 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t122 * L_29 = WWWForm_get_headers_m9465(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral1972, (String_t*) &_stringLiteral1375);
		Uri_t775 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_30);
		WWWForm_t112 * L_32 = V_1;
		WWW_t265 * L_33 = (WWW_t265 *)il2cpp_codegen_object_new (WWW_t265_il2cpp_TypeInfo_var);
		WWW__ctor_m4284(L_33, L_31, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		WWW_t265 * L_34 = V_2;
		ResponseDelegate_1_t2934 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303_MethodInfo_var);
		Coroutine_t972 * L_37 = MonoBehaviour_StartCoroutine_m3879(__this, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DropConnectionRequest_t2823_il2cpp_TypeInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_DropConnection_m9933 (NetworkMatch_t2838 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t2934 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DropConnectionRequest_t2823_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4555);
		s_Il2CppMethodIntialized = true;
	}
	DropConnectionRequest_t2823 * V_0 = {0};
	{
		DropConnectionRequest_t2823 * L_0 = (DropConnectionRequest_t2823 *)il2cpp_codegen_object_new (DropConnectionRequest_t2823_il2cpp_TypeInfo_var);
		DropConnectionRequest__ctor_m9868(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DropConnectionRequest_t2823 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m9870(L_1, L_2, /*hidden argument*/NULL);
		DropConnectionRequest_t2823 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m9872(L_3, L_4, /*hidden argument*/NULL);
		DropConnectionRequest_t2823 * L_5 = V_0;
		ResponseDelegate_1_t2934 * L_6 = ___callback;
		Coroutine_t972 * L_7 = NetworkMatch_DropConnection_m9934(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t775_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t112_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2831_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2830_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t2833_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303_MethodInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_DropConnection_m9934 (NetworkMatch_t2838 * __this, DropConnectionRequest_t2823 * ___req, ResponseDelegate_1_t2934 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		WWWForm_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		SourceID_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4538);
		AppID_t2830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4539);
		NetworkID_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4541);
		NodeID_t2833_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4542);
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485132);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t775 * V_0 = {0};
	WWWForm_t112 * V_1 = {0};
	WWW_t265 * V_2 = {0};
	{
		Uri_t775 * L_0 = NetworkMatch_get_baseUri_m9924(__this, /*hidden argument*/NULL);
		Uri_t775 * L_1 = (Uri_t775 *)il2cpp_codegen_object_new (Uri_t775_il2cpp_TypeInfo_var);
		Uri__ctor_m7478(L_1, L_0, (String_t*) &_stringLiteral1977, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t775 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1978, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t112 * L_4 = (WWWForm_t112 *)il2cpp_codegen_object_new (WWWForm_t112_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3863(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t112 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m9919(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t2831_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3865(L_5, (String_t*) &_stringLiteral1968, L_9, /*hidden argument*/NULL);
		WWWForm_t112 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m9921(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t2830_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3865(L_10, (String_t*) &_stringLiteral831, L_14, /*hidden argument*/NULL);
		WWWForm_t112 * L_15 = V_1;
		DropConnectionRequest_t2823 * L_16 = ___req;
		NullCheck(L_16);
		uint64_t L_17 = DropConnectionRequest_get_networkId_m9869(L_16, /*hidden argument*/NULL);
		NetworkAccessToken_t2834 * L_18 = Utility_GetAccessTokenForNetwork_m9922(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m9917(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		WWWForm_AddField_m3865(L_15, (String_t*) &_stringLiteral1945, L_19, /*hidden argument*/NULL);
		WWWForm_t112 * L_20 = V_1;
		NullCheck(L_20);
		WWWForm_AddField_m9463(L_20, (String_t*) &_stringLiteral1969, 0, /*hidden argument*/NULL);
		WWWForm_t112 * L_21 = V_1;
		DropConnectionRequest_t2823 * L_22 = ___req;
		NullCheck(L_22);
		uint64_t L_23 = DropConnectionRequest_get_networkId_m9869(L_22, /*hidden argument*/NULL);
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(NetworkID_t2832_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_25);
		NullCheck(L_21);
		WWWForm_AddField_m3865(L_21, (String_t*) &_stringLiteral1944, L_26, /*hidden argument*/NULL);
		WWWForm_t112 * L_27 = V_1;
		DropConnectionRequest_t2823 * L_28 = ___req;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m9871(L_28, /*hidden argument*/NULL);
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(NodeID_t2833_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_31);
		NullCheck(L_27);
		WWWForm_AddField_m3865(L_27, (String_t*) &_stringLiteral1946, L_32, /*hidden argument*/NULL);
		WWWForm_t112 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t122 * L_34 = WWWForm_get_headers_m9465(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_34, (String_t*) &_stringLiteral1972, (String_t*) &_stringLiteral1375);
		Uri_t775 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_35);
		WWWForm_t112 * L_37 = V_1;
		WWW_t265 * L_38 = (WWW_t265 *)il2cpp_codegen_object_new (WWW_t265_il2cpp_TypeInfo_var);
		WWW__ctor_m4284(L_38, L_36, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		WWW_t265 * L_39 = V_2;
		ResponseDelegate_1_t2934 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t2816_m10303_MethodInfo_var);
		Coroutine_t972 * L_42 = MonoBehaviour_StartCoroutine_m3879(__this, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* ListMatchRequest_t2824_il2cpp_TypeInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_ListMatches_m9935 (NetworkMatch_t2838 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t2935 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListMatchRequest_t2824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4556);
		s_Il2CppMethodIntialized = true;
	}
	ListMatchRequest_t2824 * V_0 = {0};
	{
		ListMatchRequest_t2824 * L_0 = (ListMatchRequest_t2824 *)il2cpp_codegen_object_new (ListMatchRequest_t2824_il2cpp_TypeInfo_var);
		ListMatchRequest__ctor_m9874(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ListMatchRequest_t2824 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m9878(L_1, L_2, /*hidden argument*/NULL);
		ListMatchRequest_t2824 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m9876(L_3, L_4, /*hidden argument*/NULL);
		ListMatchRequest_t2824 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m9880(L_5, L_6, /*hidden argument*/NULL);
		ListMatchRequest_t2824 * L_7 = V_0;
		ResponseDelegate_1_t2935 * L_8 = ___callback;
		Coroutine_t972 * L_9 = NetworkMatch_ListMatches_m9936(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* Uri_t775_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t112_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t2837_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t2831_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t2830_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t2829_m10304_MethodInfo_var;
extern "C" Coroutine_t972 * NetworkMatch_ListMatches_m9936 (NetworkMatch_t2838 * __this, ListMatchRequest_t2824 * ___req, ResponseDelegate_1_t2935 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		WWWForm_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		Utility_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4547);
		SourceID_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4538);
		AppID_t2830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4539);
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t2829_m10304_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485133);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t775 * V_0 = {0};
	WWWForm_t112 * V_1 = {0};
	WWW_t265 * V_2 = {0};
	{
		Uri_t775 * L_0 = NetworkMatch_get_baseUri_m9924(__this, /*hidden argument*/NULL);
		Uri_t775 * L_1 = (Uri_t775 *)il2cpp_codegen_object_new (Uri_t775_il2cpp_TypeInfo_var);
		Uri__ctor_m7478(L_1, L_0, (String_t*) &_stringLiteral1979, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t775 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral1980, L_2, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t112 * L_4 = (WWWForm_t112 *)il2cpp_codegen_object_new (WWWForm_t112_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3863(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t112 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2837_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m9919(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t2831_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m3865(L_5, (String_t*) &_stringLiteral1968, L_9, /*hidden argument*/NULL);
		WWWForm_t112 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m9921(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t2830_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m3865(L_10, (String_t*) &_stringLiteral831, L_14, /*hidden argument*/NULL);
		WWWForm_t112 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m9463(L_15, (String_t*) &_stringLiteral1945, 0, /*hidden argument*/NULL);
		WWWForm_t112 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m9463(L_16, (String_t*) &_stringLiteral1969, 0, /*hidden argument*/NULL);
		WWWForm_t112 * L_17 = V_1;
		ListMatchRequest_t2824 * L_18 = ___req;
		NullCheck(L_18);
		int32_t L_19 = ListMatchRequest_get_pageSize_m9875(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m9463(L_17, (String_t*) &_stringLiteral1981, L_19, /*hidden argument*/NULL);
		WWWForm_t112 * L_20 = V_1;
		ListMatchRequest_t2824 * L_21 = ___req;
		NullCheck(L_21);
		int32_t L_22 = ListMatchRequest_get_pageNum_m9877(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m9463(L_20, (String_t*) &_stringLiteral1982, L_22, /*hidden argument*/NULL);
		WWWForm_t112 * L_23 = V_1;
		ListMatchRequest_t2824 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = ListMatchRequest_get_nameFilter_m9879(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m3865(L_23, (String_t*) &_stringLiteral1983, L_25, /*hidden argument*/NULL);
		WWWForm_t112 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t122 * L_27 = WWWForm_get_headers_m9465(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral1972, (String_t*) &_stringLiteral1375);
		Uri_t775 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		WWWForm_t112 * L_30 = V_1;
		WWW_t265 * L_31 = (WWW_t265 *)il2cpp_codegen_object_new (WWW_t265_il2cpp_TypeInfo_var);
		WWW__ctor_m4284(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		WWW_t265 * L_32 = V_2;
		ResponseDelegate_1_t2935 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t2829_m10304(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t2829_m10304_MethodInfo_var);
		Coroutine_t972 * L_35 = MonoBehaviour_StartCoroutine_m3879(__this, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"


// System.Void SimpleJson.JsonArray::.ctor()
extern TypeInfo* List_1_t702_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3873_MethodInfo_var;
extern "C" void JsonArray__ctor_m9937 (JsonArray_t2839 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t702_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		List_1__ctor_m3873_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483711);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t702_il2cpp_TypeInfo_var);
		List_1__ctor_m3873(__this, /*hidden argument*/List_1__ctor_m3873_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JsonArray_ToString_m9938 (JsonArray_t2839 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m9960(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void SimpleJson.JsonObject::.ctor()
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3875_MethodInfo_var;
extern "C" void JsonObject__ctor_m9939 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Dictionary_2__ctor_m3875_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3875(L_0, /*hidden argument*/Dictionary_2__ctor_m3875_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* Enumerator_t796_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m4246_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m9940 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		Dictionary_2_GetEnumerator_m4246_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484095);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t796  L_1 = Dictionary_2_GetEnumerator_m4246(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m4246_MethodInfo_var);
		Enumerator_t796  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t796_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m9941 (JsonObject_t2840 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::ContainsKey(System.String)
extern "C" bool JsonObject_ContainsKey_m9942 (JsonObject_t2840 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern const MethodInfo* Dictionary_2_get_Keys_m4234_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m9943 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Keys_m4234_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t790 * L_1 = Dictionary_2_get_Keys_m4234(L_0, /*hidden argument*/Dictionary_2_get_Keys_m4234_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern "C" bool JsonObject_Remove_m9944 (JsonObject_t2840 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m9945 (JsonObject_t2840 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern const MethodInfo* Dictionary_2_get_Values_m10307_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m9946 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Values_m10307_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485134);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t2954 * L_1 = Dictionary_2_get_Values_m10307(L_0, /*hidden argument*/Dictionary_2_get_Values_m10307_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m9947 (JsonObject_t2840 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m9948 (JsonObject_t2840 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m4248_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4249_MethodInfo_var;
extern "C" void JsonObject_Add_m9949 (JsonObject_t2840 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m4248_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		KeyValuePair_2_get_Value_m4249_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4248((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4248_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m4249((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m4249_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m9950 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m4248_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4249_MethodInfo_var;
extern "C" bool JsonObject_Contains_m9951 (JsonObject_t2840 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m4248_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		KeyValuePair_2_get_Value_m4249_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4248((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4248_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t312 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m4248((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4248_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m4249((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m4249_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern TypeInfo* ArgumentNullException_t788_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t1420_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void JsonObject_CopyTo_m9952 (JsonObject_t2840 * __this, KeyValuePair_2U5BU5D_t1433* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IEnumerator_1_t1420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2529);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t795  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t1433* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t788 * L_1 = (ArgumentNullException_t788 *)il2cpp_codegen_object_new (ArgumentNullException_t788_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral1988, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 SimpleJson.JsonObject::get_Count() */, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(12 /* System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator() */, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t795  L_5 = (KeyValuePair_2_t795 )InterfaceFuncInvoker0< KeyValuePair_2_t795  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t1420_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t1433* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t795  L_9 = V_1;
			*((KeyValuePair_2_t795 *)(KeyValuePair_2_t795 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m9953 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m9954 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m4248_MethodInfo_var;
extern "C" bool JsonObject_Remove_m9955 (JsonObject_t2840 * __this, KeyValuePair_2_t795  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m4248_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m4248((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m4248_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t796_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m4246_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m9956 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		Dictionary_2_GetEnumerator_m4246_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484095);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t312 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t796  L_1 = Dictionary_2_GetEnumerator_m4246(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m4246_MethodInfo_var);
		Enumerator_t796  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t796_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m9957 (JsonObject_t2840 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m9960(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
