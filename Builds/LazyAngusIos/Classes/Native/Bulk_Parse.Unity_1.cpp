﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Parse.PlatformHooks/<RunDispatcher>d__44
#include "Parse_Unity_Parse_PlatformHooks_U3CRunDispatcherU3Ed__44.h"
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
// Parse.PlatformHooks/<RunDispatcher>d__44
#include "Parse_Unity_Parse_PlatformHooks_U3CRunDispatcherU3Ed__44MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// Parse.PlatformHooks
#include "Parse_Unity_Parse_PlatformHooks.h"
// System.Threading.ReaderWriterLockSlim
#include "System_Core_System_Threading_ReaderWriterLockSlim.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.Queue`1<System.Action>
#include "System_System_Collections_Generic_Queue_1_gen.h"
// System.Action
#include "System_Core_System_Action.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// Parse.PlatformHooks
#include "Parse_Unity_Parse_PlatformHooksMethodDeclarations.h"
// System.Threading.ReaderWriterLockSlim
#include "System_Core_System_Threading_ReaderWriterLockSlimMethodDeclarations.h"
// System.Collections.Generic.Queue`1<System.Action>
#include "System_System_Collections_Generic_Queue_1_genMethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Boolean Parse.PlatformHooks/<RunDispatcher>d__44::MoveNext()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1_Dequeue_m7428_MethodInfo_var;
extern "C" bool U3CRunDispatcherU3Ed__44_MoveNext_m6840 (U3CRunDispatcherU3Ed__44_t1272 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Queue_1_Dequeue_m7428_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484968);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t57 * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U3CU3E1__state_1);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) == ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0095;
	}

IL_0014:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		ReaderWriterLockSlim_t1215 * L_3 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueueLock_5;
		NullCheck(L_3);
		ReaderWriterLockSlim_EnterUpgradeableReadLock_m7299(L_3, /*hidden argument*/NULL);
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
			Queue_1_t1273 * L_4 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueue_6;
			NullCheck(L_4);
			int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count() */, L_4);
			V_0 = L_5;
			int32_t L_6 = V_0;
			if ((((int32_t)L_6) <= ((int32_t)0)))
			{
				goto IL_006f;
			}
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
			ReaderWriterLockSlim_t1215 * L_7 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueueLock_5;
			NullCheck(L_7);
			ReaderWriterLockSlim_EnterWriteLock_m7300(L_7, /*hidden argument*/NULL);
		}

IL_003e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_005e;
			}

IL_0040:
			try
			{ // begin try (depth: 3)
				IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
				Queue_1_t1273 * L_8 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueue_6;
				NullCheck(L_8);
				Action_t143 * L_9 = Queue_1_Dequeue_m7428(L_8, /*hidden argument*/Queue_1_Dequeue_m7428_MethodInfo_var);
				NullCheck(L_9);
				VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_9);
				goto IL_005a;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t57 *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
					goto CATCH_0051;
				throw e;
			}

CATCH_0051:
			{ // begin catch(System.Exception)
				V_1 = ((Exception_t57 *)__exception_local);
				Exception_t57 * L_10 = V_1;
				Debug_LogException_m7429(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
				goto IL_005a;
			} // end catch (depth: 3)

IL_005a:
			{
				int32_t L_11 = V_0;
				V_0 = ((int32_t)((int32_t)L_11-(int32_t)1));
			}

IL_005e:
			{
				int32_t L_12 = V_0;
				if ((((int32_t)L_12) > ((int32_t)0)))
				{
					goto IL_0040;
				}
			}

IL_0062:
			{
				IL2CPP_LEAVE(0x6F, FINALLY_0064);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0064;
		}

FINALLY_0064:
		{ // begin finally (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
			ReaderWriterLockSlim_t1215 * L_13 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueueLock_5;
			NullCheck(L_13);
			ReaderWriterLockSlim_ExitWriteLock_m7301(L_13, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(100)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(100)
		{
			IL2CPP_JUMP_TBL(0x6F, IL_006f)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_006f:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		ReaderWriterLockSlim_t1215 * L_14 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueueLock_5;
		NullCheck(L_14);
		ReaderWriterLockSlim_ExitUpgradeableReadLock_m7302(L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_007c:
	{
		__this->___U3CU3E2__current_0 = NULL;
		__this->___U3CU3E1__state_1 = 4;
		return 1;
	}

IL_008c:
	{
		__this->___U3CU3E1__state_1 = (-1);
		goto IL_001b;
	}

IL_0095:
	{
		return 0;
	}
}
// System.Object Parse.PlatformHooks/<RunDispatcher>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" Object_t * U3CRunDispatcherU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6841 (U3CRunDispatcherU3Ed__44_t1272 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.PlatformHooks/<RunDispatcher>d__44::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CRunDispatcherU3Ed__44_System_Collections_IEnumerator_Reset_m6842 (U3CRunDispatcherU3Ed__44_t1272 * __this, const MethodInfo* method)
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
// System.Void Parse.PlatformHooks/<RunDispatcher>d__44::System.IDisposable.Dispose()
extern "C" void U3CRunDispatcherU3Ed__44_System_IDisposable_Dispose_m6843 (U3CRunDispatcherU3Ed__44_t1272 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t57 * V_1 = {0};
	{
		return;
	}
}
// System.Object Parse.PlatformHooks/<RunDispatcher>d__44::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CRunDispatcherU3Ed__44_System_Collections_IEnumerator_get_Current_m6844 (U3CRunDispatcherU3Ed__44_t1272 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.PlatformHooks/<RunDispatcher>d__44::.ctor(System.Int32)
extern "C" void U3CRunDispatcherU3Ed__44__ctor_m6845 (U3CRunDispatcherU3Ed__44_t1272 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Action`1<UnityEngine.WWW>
#include "mscorlib_System_Action_1_gen_20.h"
// Parse.PlatformHooks/<>c__DisplayClass20
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass20.h"
// System.Action`1<System.Byte[]>
#include "mscorlib_System_Action_1_gen_18.h"
// Parse.PlatformHooks/<>c__DisplayClass24
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass24.h"
// System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "mscorlib_System_Action_1_gen_21.h"
// Parse.PlatformHooks/<>c__DisplayClass28
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass28.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_3.h"
// System.Uri
#include "System_System_Uri.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
// System.Threading.Tasks.Task`1<System.String>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_1.h"
// Parse.PlatformHooks/<>c__DisplayClass3a
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass3a.h"
// Parse.PlatformHooks/<>c__DisplayClass3c
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass3c.h"
// Parse.PlatformHooks/<>c__DisplayClass38
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass38.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_2.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
#include "mscorlib_System_Action_1_gen_19.h"
// System.Action`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Action_1_gen_13.h"
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task>
#include "System_Core_System_Func_2_gen_5.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_5.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>,System.Threading.Tasks.Task`1<System.Object>>
#include "System_Core_System_Func_2_gen_49.h"
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_14.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
#include "System_Core_System_Func_2_gen_50.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_15.h"
// Parse.PlatformHooks/SettingsWrapper
#include "Parse_Unity_Parse_PlatformHooks_SettingsWrapper.h"
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
#include "System_Core_System_Func_2_gen_51.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Threading.Tasks.Task`1<System.Boolean>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen.h"
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16.h"
// System.Threading.Tasks.Task`1<System.SByte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_17.h"
// System.Threading.Tasks.Task`1<System.Int16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_18.h"
// System.Threading.Tasks.Task`1<System.UInt16>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_19.h"
// System.Threading.Tasks.Task`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_0.h"
// System.Threading.Tasks.Task`1<System.UInt32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_20.h"
// System.Threading.Tasks.Task`1<System.Int64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_21.h"
// System.Threading.Tasks.Task`1<System.UInt64>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_22.h"
// System.Threading.Tasks.Task`1<System.Char>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_23.h"
// System.Threading.Tasks.Task`1<System.Double>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_24.h"
// System.Threading.Tasks.Task`1<System.Single>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_25.h"
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4.h"
// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_26.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStart.h"
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallback.h"
// Parse.PlatformHooks/<>c__DisplayClass42
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass42.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
// Parse.PlatformHooks/<>c__DisplayClass20
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass20MethodDeclarations.h"
// Parse.PlatformHooks/<>c__DisplayClass24
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass24MethodDeclarations.h"
// Parse.PlatformHooks/<>c__DisplayClass28
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass28MethodDeclarations.h"
// Parse.PlatformHooks/<>c__DisplayClass38
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass38MethodDeclarations.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_2MethodDeclarations.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationTokenMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// Parse.PlatformHooks/<>c__DisplayClass3a
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass3aMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_TaskMethodDeclarations.h"
// Parse.Internal.MissingExtensions
#include "Parse_Unity_Parse_Internal_MissingExtensionsMethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
#include "mscorlib_System_Action_1_gen_19MethodDeclarations.h"
// Parse.Internal.InternalExtensions
#include "Parse_Unity_Parse_Internal_InternalExtensionsMethodDeclarations.h"
// Parse.PlatformHooks/<>c__DisplayClass3c
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass3cMethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Action_1_gen_13MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task>
#include "System_Core_System_Func_2_gen_5MethodDeclarations.h"
// System.Threading.Tasks.TaskExtensions
#include "Parse_Unity_System_Threading_Tasks_TaskExtensionsMethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>,System.Threading.Tasks.Task`1<System.Object>>
#include "System_Core_System_Func_2_gen_49MethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_3MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
#include "System_Core_System_Func_2_gen_50MethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// Parse.PlatformHooks/SettingsWrapper
#include "Parse_Unity_Parse_PlatformHooks_SettingsWrapperMethodDeclarations.h"
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObjectMethodDeclarations.h"
// Parse.ParseFacebookUtils
#include "Parse_Unity_Parse_ParseFacebookUtilsMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
#include "System_Core_System_Func_2_gen_51MethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// Parse.ParseInstallation
#include "Parse_Unity_Parse_ParseInstallationMethodDeclarations.h"
// Parse.ParseCloud
#include "Parse_Unity_Parse_ParseCloudMethodDeclarations.h"
// Parse.PlatformHooks/<>c__DisplayClass42
#include "Parse_Unity_Parse_PlatformHooks_U3CU3Ec__DisplayClass42MethodDeclarations.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStartMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"
// System.Threading.ThreadPool
#include "mscorlib_System_Threading_ThreadPoolMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
struct Task_t1148;
struct Task_1_t1311;
struct String_t;
struct Task_t1148;
struct Task_1_t1333;
struct Object_t;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Object>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Object>(T)
extern "C" Task_1_t1333 * Task_FromResult_TisObject_t_m7019_gshared (Object_t * __this /* static, unused */, Object_t * ___result, const MethodInfo* method);
#define Task_FromResult_TisObject_t_m7019(__this /* static, unused */, ___result, method) (( Task_1_t1333 * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Task_FromResult_TisObject_t_m7019_gshared)(__this /* static, unused */, ___result, method)
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.String>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.String>(T)
#define Task_FromResult_TisString_t_m7327(__this /* static, unused */, ___result, method) (( Task_1_t1311 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Task_FromResult_TisObject_t_m7019_gshared)(__this /* static, unused */, ___result, method)
struct InternalExtensions_t1114;
struct Task_t1148;
struct Task_1_t1311;
struct Action_1_t1451;
// Parse.Internal.InternalExtensions
#include "Parse_Unity_Parse_Internal_InternalExtensions.h"
struct InternalExtensions_t1114;
struct Task_t1148;
struct Task_1_t1333;
struct Action_1_t1367;
// Declaration System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess<System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Action`1<System.Threading.Tasks.Task`1<TIn>>)
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess<System.Object>(System.Threading.Tasks.Task`1<TIn>,System.Action`1<System.Threading.Tasks.Task`1<TIn>>)
extern "C" Task_t1148 * InternalExtensions_OnSuccess_TisObject_t_m6988_gshared (Object_t * __this /* static, unused */, Task_1_t1333 * ___task, Action_1_t1367 * ___continuation, const MethodInfo* method);
#define InternalExtensions_OnSuccess_TisObject_t_m6988(__this /* static, unused */, ___task, ___continuation, method) (( Task_t1148 * (*) (Object_t * /* static, unused */, Task_1_t1333 *, Action_1_t1367 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_m6988_gshared)(__this /* static, unused */, ___task, ___continuation, method)
// Declaration System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess<System.String>(System.Threading.Tasks.Task`1<TIn>,System.Action`1<System.Threading.Tasks.Task`1<TIn>>)
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess<System.String>(System.Threading.Tasks.Task`1<TIn>,System.Action`1<System.Threading.Tasks.Task`1<TIn>>)
#define InternalExtensions_OnSuccess_TisString_t_m7326(__this /* static, unused */, ___task, ___continuation, method) (( Task_t1148 * (*) (Object_t * /* static, unused */, Task_1_t1311 *, Action_1_t1451 *, const MethodInfo*))InternalExtensions_OnSuccess_TisObject_t_m6988_gshared)(__this /* static, unused */, ___task, ___continuation, method)
struct Task_t1148;
struct Task_1_t1297;
struct Func_2_t1372;
struct Task_t1148;
struct Task_1_t1333;
struct Func_2_t1373;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task,T>)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task,T>)
extern "C" Task_1_t1333 * Task_ContinueWith_TisObject_t_m7182_gshared (Task_t1148 * __this, Func_2_t1373 * ___continuation, const MethodInfo* method);
#define Task_ContinueWith_TisObject_t_m7182(__this, ___continuation, method) (( Task_1_t1333 * (*) (Task_t1148 *, Func_2_t1373 *, const MethodInfo*))Task_ContinueWith_TisObject_t_m7182_gshared)(__this, ___continuation, method)
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Threading.Tasks.Task>(System.Func`2<System.Threading.Tasks.Task,T>)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Threading.Tasks.Task>(System.Func`2<System.Threading.Tasks.Task,T>)
#define Task_ContinueWith_TisTask_t1148_m7181(__this, ___continuation, method) (( Task_1_t1297 * (*) (Task_t1148 *, Func_2_t1372 *, const MethodInfo*))Task_ContinueWith_TisObject_t_m7182_gshared)(__this, ___continuation, method)
struct Task_1_t1312;
struct Task_1_t1411;
struct Func_2_t1274;
struct Task_1_t1333;
struct Func_2_t1403;
// Declaration System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<T>,!!0>)
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<T>,!!0>)
extern "C" Task_1_t1333 * Task_1_ContinueWith_TisObject_t_m7210_gshared (Task_1_t1333 * __this, Func_2_t1403 * p0, const MethodInfo* method);
#define Task_1_ContinueWith_TisObject_t_m7210(__this, p0, method) (( Task_1_t1333 * (*) (Task_1_t1333 *, Func_2_t1403 *, const MethodInfo*))Task_1_ContinueWith_TisObject_t_m7210_gshared)(__this, p0, method)
// Declaration System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::ContinueWith<System.Threading.Tasks.Task`1<System.Object>>(System.Func`2<System.Threading.Tasks.Task`1<T>,!!0>)
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::ContinueWith<System.Threading.Tasks.Task`1<System.Object>>(System.Func`2<System.Threading.Tasks.Task`1<T>,!!0>)
#define Task_1_ContinueWith_TisTask_1_t1333_m7430(__this, p0, method) (( Task_1_t1411 * (*) (Task_1_t1312 *, Func_2_t1274 *, const MethodInfo*))Task_1_ContinueWith_TisObject_t_m7210_gshared)(__this, p0, method)
struct TaskExtensions_t1299;
struct Task_1_t1333;
struct Task_1_t1411;
// System.Threading.Tasks.TaskExtensions
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions.h"
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskExtensions::Unwrap<System.Object>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskExtensions::Unwrap<System.Object>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_1_t1333 * TaskExtensions_Unwrap_TisObject_t_m7170_gshared (Object_t * __this /* static, unused */, Task_1_t1411 * ___task, const MethodInfo* method);
#define TaskExtensions_Unwrap_TisObject_t_m7170(__this /* static, unused */, ___task, method) (( Task_1_t1333 * (*) (Object_t * /* static, unused */, Task_1_t1411 *, const MethodInfo*))TaskExtensions_Unwrap_TisObject_t_m7170_gshared)(__this /* static, unused */, ___task, method)
struct Task_1_t1333;
struct Task_1_t1488;
struct Func_2_t1489;
// Declaration System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>(System.Func`2<System.Threading.Tasks.Task`1<T>,!!0>)
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>(System.Func`2<System.Threading.Tasks.Task`1<T>,!!0>)
#define Task_1_ContinueWith_TisTask_1_t1312_m7431(__this, p0, method) (( Task_1_t1488 * (*) (Task_1_t1333 *, Func_2_t1489 *, const MethodInfo*))Task_1_ContinueWith_TisObject_t_m7210_gshared)(__this, p0, method)
struct TaskExtensions_t1299;
struct Task_1_t1312;
struct Task_1_t1488;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskExtensions::Unwrap<System.Tuple`2<System.Net.HttpStatusCode,System.String>>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskExtensions::Unwrap<System.Tuple`2<System.Net.HttpStatusCode,System.String>>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
#define TaskExtensions_Unwrap_TisTuple_2_t1365_m7432(__this /* static, unused */, ___task, method) (( Task_1_t1312 * (*) (Object_t * /* static, unused */, Task_1_t1488 *, const MethodInfo*))TaskExtensions_Unwrap_TisObject_t_m7170_gshared)(__this /* static, unused */, ___task, method)
struct ParseObject_t1159;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
struct ParseObject_t1159;
// Declaration System.Void Parse.ParseObject::RegisterSubclass<System.Object>()
// System.Void Parse.ParseObject::RegisterSubclass<System.Object>()
extern "C" void ParseObject_RegisterSubclass_TisObject_t_m7133_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ParseObject_RegisterSubclass_TisObject_t_m7133(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ParseObject_RegisterSubclass_TisObject_t_m7133_gshared)(__this /* static, unused */, method)
// Declaration System.Void Parse.ParseObject::RegisterSubclass<Parse.ParseInstallation>()
// System.Void Parse.ParseObject::RegisterSubclass<Parse.ParseInstallation>()
#define ParseObject_RegisterSubclass_TisParseInstallation_t1227_m7433(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ParseObject_RegisterSubclass_TisObject_t_m7133_gshared)(__this /* static, unused */, method)
struct Enumerable_t68;
struct IEnumerable_1_t1490;
struct Func_2_t1275;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t68;
struct IEnumerable_1_t651;
struct Func_2_t1019;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" Object_t* Enumerable_Where_TisObject_t_m5825_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1019 * p1, const MethodInfo* method);
#define Enumerable_Where_TisObject_t_m5825(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1019 *, const MethodInfo*))Enumerable_Where_TisObject_t_m5825_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisMethodInfo_t_m7434(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1275 *, const MethodInfo*))Enumerable_Where_TisObject_t_m5825_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t68;
struct MethodInfo_t;
struct IEnumerable_1_t1490;
struct Func_2_t1275;
struct Enumerable_t68;
struct Object_t;
struct IEnumerable_1_t651;
struct Func_2_t1019;
// Declaration !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" Object_t * Enumerable_First_TisObject_t_m7436_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1019 * p1, const MethodInfo* method);
#define Enumerable_First_TisObject_t_m7436(__this /* static, unused */, p0, p1, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1019 *, const MethodInfo*))Enumerable_First_TisObject_t_m7436_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration !!0 System.Linq.Enumerable::First<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// !!0 System.Linq.Enumerable::First<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_First_TisMethodInfo_t_m7435(__this /* static, unused */, p0, p1, method) (( MethodInfo_t * (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1275 *, const MethodInfo*))Enumerable_First_TisObject_t_m7436_gshared)(__this /* static, unused */, p0, p1, method)
struct ParseCloud_t1170;
struct Task_1_t1333;
struct String_t;
struct IDictionary_2_t757;
// Parse.ParseCloud
#include "Parse_Unity_Parse_ParseCloud.h"
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Object>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Object>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1333 * ParseCloud_CallFunctionAsync_TisObject_t_m7437_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisObject_t_m7437(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1333 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisObject_t_m7437_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1309;
struct String_t;
struct IDictionary_2_t757;
struct ParseCloud_t1170;
struct Task_1_t1358;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Byte>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Byte>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1358 * ParseCloud_CallFunctionAsync_TisByte_t683_m7439_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisByte_t683_m7439(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1358 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisByte_t683_m7439_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Boolean>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Boolean>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
#define ParseCloud_CallFunctionAsync_TisBoolean_t59_m7438(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1309 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisByte_t683_m7439_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1491;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.SByte>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.SByte>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1491 * ParseCloud_CallFunctionAsync_TisSByte_t88_m7440_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisSByte_t88_m7440(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1491 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisSByte_t88_m7440_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1492;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Int16>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Int16>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1492 * ParseCloud_CallFunctionAsync_TisInt16_t684_m7441_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisInt16_t684_m7441(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1492 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisInt16_t684_m7441_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1493;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.UInt16>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.UInt16>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1493 * ParseCloud_CallFunctionAsync_TisUInt16_t685_m7442_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisUInt16_t685_m7442(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1493 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisUInt16_t685_m7442_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1310;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Int32>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Int32>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1310 * ParseCloud_CallFunctionAsync_TisInt32_t82_m7443_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisInt32_t82_m7443(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1310 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisInt32_t82_m7443_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1494;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.UInt32>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.UInt32>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1494 * ParseCloud_CallFunctionAsync_TisUInt32_t682_m7444_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisUInt32_t682_m7444(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1494 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisUInt32_t682_m7444_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1495;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Int64>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Int64>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1495 * ParseCloud_CallFunctionAsync_TisInt64_t89_m7445_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisInt64_t89_m7445(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1495 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisInt64_t89_m7445_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1496;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.UInt64>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.UInt64>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1496 * ParseCloud_CallFunctionAsync_TisUInt64_t686_m7446_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisUInt64_t686_m7446(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1496 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisUInt64_t686_m7446_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1497;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Char>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Char>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
#define ParseCloud_CallFunctionAsync_TisChar_t60_m7447(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1497 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisUInt16_t685_m7442_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1498;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Double>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Double>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1498 * ParseCloud_CallFunctionAsync_TisDouble_t90_m7448_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisDouble_t90_m7448(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1498 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisDouble_t90_m7448_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1499;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Single>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Single>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1499 * ParseCloud_CallFunctionAsync_TisSingle_t87_m7449_gshared (Object_t * __this /* static, unused */, String_t* ___name, Object_t* ___parameters, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define ParseCloud_CallFunctionAsync_TisSingle_t87_m7449(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1499 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisSingle_t87_m7449_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1313;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Collections.Generic.IDictionary`2<System.String,System.Object>>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Collections.Generic.IDictionary`2<System.String,System.Object>>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
#define ParseCloud_CallFunctionAsync_TisIDictionary_2_t757_m7450(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1313 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisObject_t_m7437_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)
struct ParseCloud_t1170;
struct Task_1_t1500;
struct String_t;
struct IDictionary_2_t757;
// Declaration System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Collections.Generic.IList`1<System.Object>>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> Parse.ParseCloud::CallFunctionAsync<System.Collections.Generic.IList`1<System.Object>>(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
#define ParseCloud_CallFunctionAsync_TisIList_1_t1315_m7451(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method) (( Task_1_t1500 * (*) (Object_t * /* static, unused */, String_t*, Object_t*, CancellationToken_t1101 , const MethodInfo*))ParseCloud_CallFunctionAsync_TisObject_t_m7437_gshared)(__this /* static, unused */, ___name, ___parameters, ___cancellationToken, method)


// System.String Parse.PlatformHooks::get_SDKName()
extern "C" String_t* PlatformHooks_get_SDKName_m6846 (PlatformHooks_t1276 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral1672;
	}
}
// System.String Parse.PlatformHooks::get_AppBuildVersion()
extern const Il2CppType* Application_t1452_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PlatformHooks_get_AppBuildVersion_m6847 (PlatformHooks_t1276 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Application_t1452_0_0_0_var = il2cpp_codegen_type_from_index(2523);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInfo_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Application_t1452_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInfo_t * L_1 = Type_GetProperty_m7334(L_0, (String_t*) &_stringLiteral880, /*hidden argument*/NULL);
		V_0 = L_1;
		PropertyInfo_t * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		PropertyInfo_t * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t626* >::Invoke(22 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_3, NULL, (ObjectU5BU5D_t626*)(ObjectU5BU5D_t626*)NULL);
		return ((String_t*)Castclass(L_4, String_t_il2cpp_TypeInfo_var));
	}

IL_0026:
	{
		return (String_t*)NULL;
	}
}
// System.String Parse.PlatformHooks::get_AppDisplayVersion()
extern "C" String_t* PlatformHooks_get_AppDisplayVersion_m6848 (PlatformHooks_t1276 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = PlatformHooks_get_AppBuildVersion_m6847(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Parse.PlatformHooks::get_OSVersion()
extern "C" String_t* PlatformHooks_get_OSVersion_m6849 (PlatformHooks_t1276 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___osVersion_2);
		return L_0;
	}
}
// System.Boolean Parse.PlatformHooks::get_IsCompiledByIL2CPP()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern "C" bool PlatformHooks_get_IsCompiledByIL2CPP_m6850 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		bool L_0 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___isCompiledByIL2CPP_3;
		return L_0;
	}
}
// System.Boolean Parse.PlatformHooks::get_IsWebPlayer()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1369_il2cpp_TypeInfo_var;
extern "C" bool PlatformHooks_get_IsWebPlayer_m6851 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		InvalidOperationException_t1369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2325);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settingsPath_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1369 * L_1 = (InvalidOperationException_t1369 *)il2cpp_codegen_object_new (InvalidOperationException_t1369_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*) &_stringLiteral1673, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		bool L_2 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___isWebPlayer_4;
		return L_2;
	}
}
// System.Void Parse.PlatformHooks::set_IsWebPlayer(System.Boolean)
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern "C" void PlatformHooks_set_IsWebPlayer_m6852 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___isWebPlayer_4 = L_0;
		return;
	}
}
// System.Boolean Parse.PlatformHooks::get_IsAndroid()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1369_il2cpp_TypeInfo_var;
extern "C" bool PlatformHooks_get_IsAndroid_m6853 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		InvalidOperationException_t1369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2325);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settingsPath_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1369 * L_1 = (InvalidOperationException_t1369 *)il2cpp_codegen_object_new (InvalidOperationException_t1369_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*) &_stringLiteral1673, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		int32_t L_2 = Application_get_platform_m3475(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)((int32_t)11)))? 1 : 0);
	}
}
// System.Boolean Parse.PlatformHooks::get_IsIOS()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1369_il2cpp_TypeInfo_var;
extern "C" bool PlatformHooks_get_IsIOS_m6854 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		InvalidOperationException_t1369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2325);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settingsPath_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1369 * L_1 = (InvalidOperationException_t1369 *)il2cpp_codegen_object_new (InvalidOperationException_t1369_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*) &_stringLiteral1673, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		int32_t L_2 = Application_get_platform_m3475(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)8))? 1 : 0);
	}
}
// System.Boolean Parse.PlatformHooks::get_IsWindowsPhone8()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1369_il2cpp_TypeInfo_var;
extern "C" bool PlatformHooks_get_IsWindowsPhone8_m6855 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		InvalidOperationException_t1369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2325);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settingsPath_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1369 * L_1 = (InvalidOperationException_t1369 *)il2cpp_codegen_object_new (InvalidOperationException_t1369_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*) &_stringLiteral1673, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		int32_t L_2 = Application_get_platform_m3475(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)((int32_t)21)))? 1 : 0);
	}
}
// System.Type Parse.PlatformHooks::GetTypeFromUnityEngine(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * PlatformHooks_GetTypeFromUnityEngine_m6856 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___typeName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Format_m3816(NULL /*static, unused*/, (String_t*) &_stringLiteral1674, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m7144(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.PlatformHooks::get_ApplicationSettings()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1369_il2cpp_TypeInfo_var;
extern "C" Object_t* PlatformHooks_get_ApplicationSettings_m6857 (PlatformHooks_t1276 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		InvalidOperationException_t1369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2325);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Object_t* L_0 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settings_0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1369 * L_1 = (InvalidOperationException_t1369 *)il2cpp_codegen_object_new (InvalidOperationException_t1369_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7007(L_1, (String_t*) &_stringLiteral1673, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Object_t* L_2 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settings_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<System.Object> Parse.PlatformHooks::CreateWrapperTypes()
extern const Il2CppType* FlexibleListWrapper_2_t1501_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1502_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1503_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1504_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1505_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1506_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1507_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1508_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1509_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1510_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1511_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1512_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1513_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1514_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1515_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1516_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1517_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1518_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1519_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1520_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1521_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1522_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1523_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1524_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1525_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1526_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1527_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1528_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1529_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1530_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1531_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1532_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1533_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1534_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1535_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1536_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1537_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1538_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1539_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1540_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1541_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1542_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1543_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1544_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1545_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1546_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1547_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1548_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1549_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1550_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1551_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1552_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1553_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1554_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1555_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1556_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1557_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1558_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1559_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1560_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1561_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1562_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1563_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1564_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1565_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1566_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1567_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1568_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1569_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1570_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1571_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1572_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1573_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1574_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1575_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1576_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1577_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1578_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1579_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1580_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1581_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1582_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1583_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1584_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1585_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1586_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1587_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1588_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1589_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1590_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1591_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1592_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1593_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1594_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1595_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1596_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1597_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1598_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1599_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1600_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1601_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1602_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1603_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1604_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1605_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1606_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1607_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1608_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1609_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1610_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1611_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1612_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1613_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1614_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1615_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1616_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1617_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1618_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1619_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1620_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1621_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1622_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1623_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1624_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1625_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1626_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1627_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1628_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1629_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1630_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1631_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1632_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1633_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1634_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1635_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1636_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1637_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1638_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1639_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1640_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1641_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1642_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1643_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1644_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1645_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1646_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1647_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1648_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1649_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1650_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1651_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1652_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1653_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1654_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1655_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1656_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1657_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1658_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1659_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1660_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1661_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1662_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1663_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1664_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1665_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1666_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1667_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1668_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1669_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1670_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1671_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1672_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1673_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1674_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1675_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1676_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1677_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1678_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1679_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1680_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1681_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1682_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1683_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1684_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1685_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1686_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1687_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1688_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1689_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1690_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1691_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1692_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1693_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1694_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1695_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1696_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1697_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1698_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1699_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1700_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1701_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1702_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1703_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1704_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1705_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1706_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1707_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1708_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1709_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1710_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1711_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1712_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1713_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1714_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1715_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1716_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1717_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1718_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1719_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1720_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1721_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1722_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1723_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1724_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1725_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1726_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1727_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1728_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1729_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1730_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1731_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1732_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1733_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1734_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1735_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1736_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1737_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1738_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1739_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1740_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1741_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1742_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1743_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1744_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1745_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1746_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1747_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1748_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1749_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1750_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1751_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1752_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1753_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1754_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1755_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1756_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1757_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1758_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1759_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1760_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1761_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1762_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1763_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1764_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1765_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1766_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1767_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1768_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1769_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1770_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1771_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1772_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1773_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1774_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1775_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1776_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1777_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1778_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1779_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1780_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1781_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1782_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1783_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1784_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1785_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1786_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1787_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1788_0_0_0_var;
extern const Il2CppType* FlexibleListWrapper_2_t1789_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1790_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1791_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1792_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1793_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1794_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1795_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1796_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1797_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1798_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1799_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1800_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1801_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1802_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1803_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1804_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1805_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1806_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1807_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1808_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1809_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1810_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1811_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1812_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1813_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1814_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1815_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1816_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1817_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1818_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1819_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1820_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1821_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1822_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1823_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1824_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1825_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1826_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1827_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1828_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1829_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1830_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1831_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1832_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1833_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1834_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1835_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1836_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1837_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1838_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1839_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1840_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1841_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1842_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1843_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1844_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1845_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1846_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1847_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1848_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1849_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1850_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1851_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1852_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1853_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1854_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1855_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1856_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1857_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1858_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1859_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1860_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1861_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1862_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1863_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1864_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1865_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1866_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1867_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1868_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1869_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1870_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1871_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1872_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1873_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1874_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1875_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1876_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1877_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1878_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1879_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1880_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1881_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1882_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1883_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1884_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1885_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1886_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1887_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1888_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1889_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1890_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1891_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1892_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1893_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1894_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1895_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1896_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1897_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1898_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1899_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1900_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1901_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1902_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1903_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1904_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1905_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1906_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1907_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1908_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1909_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1910_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1911_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1912_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1913_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1914_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1915_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1916_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1917_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1918_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1919_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1920_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1921_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1922_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1923_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1924_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1925_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1926_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1927_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1928_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1929_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1930_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1931_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1932_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1933_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1934_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1935_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1936_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1937_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1938_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1939_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1940_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1941_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1942_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1943_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1944_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1945_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1946_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1947_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1948_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1949_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1950_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1951_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1952_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1953_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1954_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1955_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1956_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1957_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1958_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1959_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1960_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1961_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1962_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1963_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1964_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1965_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1966_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1967_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1968_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1969_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1970_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1971_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1972_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1973_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1974_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1975_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1976_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1977_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1978_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1979_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1980_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1981_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1982_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1983_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1984_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1985_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1986_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1987_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1988_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1989_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1990_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1991_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1992_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1993_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1994_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1995_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1996_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1997_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1998_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t1999_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2000_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2001_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2002_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2003_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2004_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2005_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2006_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2007_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2008_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2009_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2010_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2011_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2012_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2013_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2014_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2015_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2016_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2017_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2018_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2019_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2020_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2021_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2022_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2023_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2024_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2025_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2026_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2027_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2028_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2029_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2030_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2031_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2032_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2033_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2034_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2035_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2036_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2037_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2038_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2039_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2040_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2041_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2042_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2043_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2044_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2045_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2046_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2047_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2048_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2049_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2050_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2051_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2052_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2053_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2054_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2055_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2056_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2057_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2058_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2059_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2060_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2061_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2062_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2063_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2064_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2065_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2066_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2067_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2068_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2069_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2070_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2071_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2072_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2073_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2074_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2075_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2076_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2077_0_0_0_var;
extern const Il2CppType* FlexibleDictionaryWrapper_2_t2078_0_0_0_var;
extern TypeInfo* List_1_t628_il2cpp_TypeInfo_var;
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3419_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__1_m6871_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__2_m6872_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__3_m6873_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__4_m6874_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__5_m6875_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__6_m6876_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__7_m6877_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__8_m6878_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__9_m6879_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__a_m6880_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__b_m6881_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__c_m6882_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__d_m6883_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__e_m6884_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CCreateWrapperTypesU3Eb__f_m6885_MethodInfo_var;
extern "C" List_1_t628 * PlatformHooks_CreateWrapperTypes_m6858 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlexibleListWrapper_2_t1501_0_0_0_var = il2cpp_codegen_type_from_index(2592);
		FlexibleListWrapper_2_t1502_0_0_0_var = il2cpp_codegen_type_from_index(2593);
		FlexibleListWrapper_2_t1503_0_0_0_var = il2cpp_codegen_type_from_index(2594);
		FlexibleListWrapper_2_t1504_0_0_0_var = il2cpp_codegen_type_from_index(2595);
		FlexibleListWrapper_2_t1505_0_0_0_var = il2cpp_codegen_type_from_index(2596);
		FlexibleListWrapper_2_t1506_0_0_0_var = il2cpp_codegen_type_from_index(2597);
		FlexibleListWrapper_2_t1507_0_0_0_var = il2cpp_codegen_type_from_index(2598);
		FlexibleListWrapper_2_t1508_0_0_0_var = il2cpp_codegen_type_from_index(2599);
		FlexibleListWrapper_2_t1509_0_0_0_var = il2cpp_codegen_type_from_index(2600);
		FlexibleListWrapper_2_t1510_0_0_0_var = il2cpp_codegen_type_from_index(2601);
		FlexibleListWrapper_2_t1511_0_0_0_var = il2cpp_codegen_type_from_index(2602);
		FlexibleListWrapper_2_t1512_0_0_0_var = il2cpp_codegen_type_from_index(2603);
		FlexibleListWrapper_2_t1513_0_0_0_var = il2cpp_codegen_type_from_index(2604);
		FlexibleListWrapper_2_t1514_0_0_0_var = il2cpp_codegen_type_from_index(2605);
		FlexibleListWrapper_2_t1515_0_0_0_var = il2cpp_codegen_type_from_index(2606);
		FlexibleListWrapper_2_t1516_0_0_0_var = il2cpp_codegen_type_from_index(2607);
		FlexibleListWrapper_2_t1517_0_0_0_var = il2cpp_codegen_type_from_index(2608);
		FlexibleListWrapper_2_t1518_0_0_0_var = il2cpp_codegen_type_from_index(2609);
		FlexibleListWrapper_2_t1519_0_0_0_var = il2cpp_codegen_type_from_index(2610);
		FlexibleListWrapper_2_t1520_0_0_0_var = il2cpp_codegen_type_from_index(2611);
		FlexibleListWrapper_2_t1521_0_0_0_var = il2cpp_codegen_type_from_index(2612);
		FlexibleListWrapper_2_t1522_0_0_0_var = il2cpp_codegen_type_from_index(2613);
		FlexibleListWrapper_2_t1523_0_0_0_var = il2cpp_codegen_type_from_index(2614);
		FlexibleListWrapper_2_t1524_0_0_0_var = il2cpp_codegen_type_from_index(2615);
		FlexibleListWrapper_2_t1525_0_0_0_var = il2cpp_codegen_type_from_index(2616);
		FlexibleListWrapper_2_t1526_0_0_0_var = il2cpp_codegen_type_from_index(2617);
		FlexibleListWrapper_2_t1527_0_0_0_var = il2cpp_codegen_type_from_index(2618);
		FlexibleListWrapper_2_t1528_0_0_0_var = il2cpp_codegen_type_from_index(2619);
		FlexibleListWrapper_2_t1529_0_0_0_var = il2cpp_codegen_type_from_index(2620);
		FlexibleListWrapper_2_t1530_0_0_0_var = il2cpp_codegen_type_from_index(2621);
		FlexibleListWrapper_2_t1531_0_0_0_var = il2cpp_codegen_type_from_index(2622);
		FlexibleListWrapper_2_t1532_0_0_0_var = il2cpp_codegen_type_from_index(2623);
		FlexibleListWrapper_2_t1533_0_0_0_var = il2cpp_codegen_type_from_index(2624);
		FlexibleListWrapper_2_t1534_0_0_0_var = il2cpp_codegen_type_from_index(2625);
		FlexibleListWrapper_2_t1535_0_0_0_var = il2cpp_codegen_type_from_index(2626);
		FlexibleListWrapper_2_t1536_0_0_0_var = il2cpp_codegen_type_from_index(2627);
		FlexibleListWrapper_2_t1537_0_0_0_var = il2cpp_codegen_type_from_index(2628);
		FlexibleListWrapper_2_t1538_0_0_0_var = il2cpp_codegen_type_from_index(2629);
		FlexibleListWrapper_2_t1539_0_0_0_var = il2cpp_codegen_type_from_index(2630);
		FlexibleListWrapper_2_t1540_0_0_0_var = il2cpp_codegen_type_from_index(2631);
		FlexibleListWrapper_2_t1541_0_0_0_var = il2cpp_codegen_type_from_index(2632);
		FlexibleListWrapper_2_t1542_0_0_0_var = il2cpp_codegen_type_from_index(2633);
		FlexibleListWrapper_2_t1543_0_0_0_var = il2cpp_codegen_type_from_index(2634);
		FlexibleListWrapper_2_t1544_0_0_0_var = il2cpp_codegen_type_from_index(2635);
		FlexibleListWrapper_2_t1545_0_0_0_var = il2cpp_codegen_type_from_index(2636);
		FlexibleListWrapper_2_t1546_0_0_0_var = il2cpp_codegen_type_from_index(2637);
		FlexibleListWrapper_2_t1547_0_0_0_var = il2cpp_codegen_type_from_index(2638);
		FlexibleListWrapper_2_t1548_0_0_0_var = il2cpp_codegen_type_from_index(2639);
		FlexibleListWrapper_2_t1549_0_0_0_var = il2cpp_codegen_type_from_index(2640);
		FlexibleListWrapper_2_t1550_0_0_0_var = il2cpp_codegen_type_from_index(2641);
		FlexibleListWrapper_2_t1551_0_0_0_var = il2cpp_codegen_type_from_index(2642);
		FlexibleListWrapper_2_t1552_0_0_0_var = il2cpp_codegen_type_from_index(2643);
		FlexibleListWrapper_2_t1553_0_0_0_var = il2cpp_codegen_type_from_index(2644);
		FlexibleListWrapper_2_t1554_0_0_0_var = il2cpp_codegen_type_from_index(2645);
		FlexibleListWrapper_2_t1555_0_0_0_var = il2cpp_codegen_type_from_index(2646);
		FlexibleListWrapper_2_t1556_0_0_0_var = il2cpp_codegen_type_from_index(2647);
		FlexibleListWrapper_2_t1557_0_0_0_var = il2cpp_codegen_type_from_index(2648);
		FlexibleListWrapper_2_t1558_0_0_0_var = il2cpp_codegen_type_from_index(2649);
		FlexibleListWrapper_2_t1559_0_0_0_var = il2cpp_codegen_type_from_index(2650);
		FlexibleListWrapper_2_t1560_0_0_0_var = il2cpp_codegen_type_from_index(2651);
		FlexibleListWrapper_2_t1561_0_0_0_var = il2cpp_codegen_type_from_index(2652);
		FlexibleListWrapper_2_t1562_0_0_0_var = il2cpp_codegen_type_from_index(2653);
		FlexibleListWrapper_2_t1563_0_0_0_var = il2cpp_codegen_type_from_index(2654);
		FlexibleListWrapper_2_t1564_0_0_0_var = il2cpp_codegen_type_from_index(2655);
		FlexibleListWrapper_2_t1565_0_0_0_var = il2cpp_codegen_type_from_index(2656);
		FlexibleListWrapper_2_t1566_0_0_0_var = il2cpp_codegen_type_from_index(2657);
		FlexibleListWrapper_2_t1567_0_0_0_var = il2cpp_codegen_type_from_index(2658);
		FlexibleListWrapper_2_t1568_0_0_0_var = il2cpp_codegen_type_from_index(2659);
		FlexibleListWrapper_2_t1569_0_0_0_var = il2cpp_codegen_type_from_index(2660);
		FlexibleListWrapper_2_t1570_0_0_0_var = il2cpp_codegen_type_from_index(2661);
		FlexibleListWrapper_2_t1571_0_0_0_var = il2cpp_codegen_type_from_index(2662);
		FlexibleListWrapper_2_t1572_0_0_0_var = il2cpp_codegen_type_from_index(2663);
		FlexibleListWrapper_2_t1573_0_0_0_var = il2cpp_codegen_type_from_index(2664);
		FlexibleListWrapper_2_t1574_0_0_0_var = il2cpp_codegen_type_from_index(2665);
		FlexibleListWrapper_2_t1575_0_0_0_var = il2cpp_codegen_type_from_index(2666);
		FlexibleListWrapper_2_t1576_0_0_0_var = il2cpp_codegen_type_from_index(2667);
		FlexibleListWrapper_2_t1577_0_0_0_var = il2cpp_codegen_type_from_index(2668);
		FlexibleListWrapper_2_t1578_0_0_0_var = il2cpp_codegen_type_from_index(2669);
		FlexibleListWrapper_2_t1579_0_0_0_var = il2cpp_codegen_type_from_index(2670);
		FlexibleListWrapper_2_t1580_0_0_0_var = il2cpp_codegen_type_from_index(2671);
		FlexibleListWrapper_2_t1581_0_0_0_var = il2cpp_codegen_type_from_index(2672);
		FlexibleListWrapper_2_t1582_0_0_0_var = il2cpp_codegen_type_from_index(2673);
		FlexibleListWrapper_2_t1583_0_0_0_var = il2cpp_codegen_type_from_index(2674);
		FlexibleListWrapper_2_t1584_0_0_0_var = il2cpp_codegen_type_from_index(2675);
		FlexibleListWrapper_2_t1585_0_0_0_var = il2cpp_codegen_type_from_index(2676);
		FlexibleListWrapper_2_t1586_0_0_0_var = il2cpp_codegen_type_from_index(2677);
		FlexibleListWrapper_2_t1587_0_0_0_var = il2cpp_codegen_type_from_index(2678);
		FlexibleListWrapper_2_t1588_0_0_0_var = il2cpp_codegen_type_from_index(2679);
		FlexibleListWrapper_2_t1589_0_0_0_var = il2cpp_codegen_type_from_index(2680);
		FlexibleListWrapper_2_t1590_0_0_0_var = il2cpp_codegen_type_from_index(2681);
		FlexibleListWrapper_2_t1591_0_0_0_var = il2cpp_codegen_type_from_index(2682);
		FlexibleListWrapper_2_t1592_0_0_0_var = il2cpp_codegen_type_from_index(2683);
		FlexibleListWrapper_2_t1593_0_0_0_var = il2cpp_codegen_type_from_index(2684);
		FlexibleListWrapper_2_t1594_0_0_0_var = il2cpp_codegen_type_from_index(2685);
		FlexibleListWrapper_2_t1595_0_0_0_var = il2cpp_codegen_type_from_index(2686);
		FlexibleListWrapper_2_t1596_0_0_0_var = il2cpp_codegen_type_from_index(2687);
		FlexibleListWrapper_2_t1597_0_0_0_var = il2cpp_codegen_type_from_index(2688);
		FlexibleListWrapper_2_t1598_0_0_0_var = il2cpp_codegen_type_from_index(2689);
		FlexibleListWrapper_2_t1599_0_0_0_var = il2cpp_codegen_type_from_index(2690);
		FlexibleListWrapper_2_t1600_0_0_0_var = il2cpp_codegen_type_from_index(2691);
		FlexibleListWrapper_2_t1601_0_0_0_var = il2cpp_codegen_type_from_index(2692);
		FlexibleListWrapper_2_t1602_0_0_0_var = il2cpp_codegen_type_from_index(2693);
		FlexibleListWrapper_2_t1603_0_0_0_var = il2cpp_codegen_type_from_index(2694);
		FlexibleListWrapper_2_t1604_0_0_0_var = il2cpp_codegen_type_from_index(2695);
		FlexibleListWrapper_2_t1605_0_0_0_var = il2cpp_codegen_type_from_index(2696);
		FlexibleListWrapper_2_t1606_0_0_0_var = il2cpp_codegen_type_from_index(2697);
		FlexibleListWrapper_2_t1607_0_0_0_var = il2cpp_codegen_type_from_index(2698);
		FlexibleListWrapper_2_t1608_0_0_0_var = il2cpp_codegen_type_from_index(2699);
		FlexibleListWrapper_2_t1609_0_0_0_var = il2cpp_codegen_type_from_index(2700);
		FlexibleListWrapper_2_t1610_0_0_0_var = il2cpp_codegen_type_from_index(2701);
		FlexibleListWrapper_2_t1611_0_0_0_var = il2cpp_codegen_type_from_index(2702);
		FlexibleListWrapper_2_t1612_0_0_0_var = il2cpp_codegen_type_from_index(2703);
		FlexibleListWrapper_2_t1613_0_0_0_var = il2cpp_codegen_type_from_index(2704);
		FlexibleListWrapper_2_t1614_0_0_0_var = il2cpp_codegen_type_from_index(2705);
		FlexibleListWrapper_2_t1615_0_0_0_var = il2cpp_codegen_type_from_index(2706);
		FlexibleListWrapper_2_t1616_0_0_0_var = il2cpp_codegen_type_from_index(2707);
		FlexibleListWrapper_2_t1617_0_0_0_var = il2cpp_codegen_type_from_index(2708);
		FlexibleListWrapper_2_t1618_0_0_0_var = il2cpp_codegen_type_from_index(2709);
		FlexibleListWrapper_2_t1619_0_0_0_var = il2cpp_codegen_type_from_index(2710);
		FlexibleListWrapper_2_t1620_0_0_0_var = il2cpp_codegen_type_from_index(2711);
		FlexibleListWrapper_2_t1621_0_0_0_var = il2cpp_codegen_type_from_index(2712);
		FlexibleListWrapper_2_t1622_0_0_0_var = il2cpp_codegen_type_from_index(2713);
		FlexibleListWrapper_2_t1623_0_0_0_var = il2cpp_codegen_type_from_index(2714);
		FlexibleListWrapper_2_t1624_0_0_0_var = il2cpp_codegen_type_from_index(2715);
		FlexibleListWrapper_2_t1625_0_0_0_var = il2cpp_codegen_type_from_index(2716);
		FlexibleListWrapper_2_t1626_0_0_0_var = il2cpp_codegen_type_from_index(2717);
		FlexibleListWrapper_2_t1627_0_0_0_var = il2cpp_codegen_type_from_index(2718);
		FlexibleListWrapper_2_t1628_0_0_0_var = il2cpp_codegen_type_from_index(2719);
		FlexibleListWrapper_2_t1629_0_0_0_var = il2cpp_codegen_type_from_index(2720);
		FlexibleListWrapper_2_t1630_0_0_0_var = il2cpp_codegen_type_from_index(2721);
		FlexibleListWrapper_2_t1631_0_0_0_var = il2cpp_codegen_type_from_index(2722);
		FlexibleListWrapper_2_t1632_0_0_0_var = il2cpp_codegen_type_from_index(2723);
		FlexibleListWrapper_2_t1633_0_0_0_var = il2cpp_codegen_type_from_index(2724);
		FlexibleListWrapper_2_t1634_0_0_0_var = il2cpp_codegen_type_from_index(2725);
		FlexibleListWrapper_2_t1635_0_0_0_var = il2cpp_codegen_type_from_index(2726);
		FlexibleListWrapper_2_t1636_0_0_0_var = il2cpp_codegen_type_from_index(2727);
		FlexibleListWrapper_2_t1637_0_0_0_var = il2cpp_codegen_type_from_index(2728);
		FlexibleListWrapper_2_t1638_0_0_0_var = il2cpp_codegen_type_from_index(2729);
		FlexibleListWrapper_2_t1639_0_0_0_var = il2cpp_codegen_type_from_index(2730);
		FlexibleListWrapper_2_t1640_0_0_0_var = il2cpp_codegen_type_from_index(2731);
		FlexibleListWrapper_2_t1641_0_0_0_var = il2cpp_codegen_type_from_index(2732);
		FlexibleListWrapper_2_t1642_0_0_0_var = il2cpp_codegen_type_from_index(2733);
		FlexibleListWrapper_2_t1643_0_0_0_var = il2cpp_codegen_type_from_index(2734);
		FlexibleListWrapper_2_t1644_0_0_0_var = il2cpp_codegen_type_from_index(2735);
		FlexibleListWrapper_2_t1645_0_0_0_var = il2cpp_codegen_type_from_index(2736);
		FlexibleListWrapper_2_t1646_0_0_0_var = il2cpp_codegen_type_from_index(2737);
		FlexibleListWrapper_2_t1647_0_0_0_var = il2cpp_codegen_type_from_index(2738);
		FlexibleListWrapper_2_t1648_0_0_0_var = il2cpp_codegen_type_from_index(2739);
		FlexibleListWrapper_2_t1649_0_0_0_var = il2cpp_codegen_type_from_index(2740);
		FlexibleListWrapper_2_t1650_0_0_0_var = il2cpp_codegen_type_from_index(2741);
		FlexibleListWrapper_2_t1651_0_0_0_var = il2cpp_codegen_type_from_index(2742);
		FlexibleListWrapper_2_t1652_0_0_0_var = il2cpp_codegen_type_from_index(2743);
		FlexibleListWrapper_2_t1653_0_0_0_var = il2cpp_codegen_type_from_index(2744);
		FlexibleListWrapper_2_t1654_0_0_0_var = il2cpp_codegen_type_from_index(2745);
		FlexibleListWrapper_2_t1655_0_0_0_var = il2cpp_codegen_type_from_index(2746);
		FlexibleListWrapper_2_t1656_0_0_0_var = il2cpp_codegen_type_from_index(2747);
		FlexibleListWrapper_2_t1657_0_0_0_var = il2cpp_codegen_type_from_index(2748);
		FlexibleListWrapper_2_t1658_0_0_0_var = il2cpp_codegen_type_from_index(2749);
		FlexibleListWrapper_2_t1659_0_0_0_var = il2cpp_codegen_type_from_index(2750);
		FlexibleListWrapper_2_t1660_0_0_0_var = il2cpp_codegen_type_from_index(2751);
		FlexibleListWrapper_2_t1661_0_0_0_var = il2cpp_codegen_type_from_index(2752);
		FlexibleListWrapper_2_t1662_0_0_0_var = il2cpp_codegen_type_from_index(2753);
		FlexibleListWrapper_2_t1663_0_0_0_var = il2cpp_codegen_type_from_index(2754);
		FlexibleListWrapper_2_t1664_0_0_0_var = il2cpp_codegen_type_from_index(2755);
		FlexibleListWrapper_2_t1665_0_0_0_var = il2cpp_codegen_type_from_index(2756);
		FlexibleListWrapper_2_t1666_0_0_0_var = il2cpp_codegen_type_from_index(2757);
		FlexibleListWrapper_2_t1667_0_0_0_var = il2cpp_codegen_type_from_index(2758);
		FlexibleListWrapper_2_t1668_0_0_0_var = il2cpp_codegen_type_from_index(2759);
		FlexibleListWrapper_2_t1669_0_0_0_var = il2cpp_codegen_type_from_index(2760);
		FlexibleListWrapper_2_t1670_0_0_0_var = il2cpp_codegen_type_from_index(2761);
		FlexibleListWrapper_2_t1671_0_0_0_var = il2cpp_codegen_type_from_index(2762);
		FlexibleListWrapper_2_t1672_0_0_0_var = il2cpp_codegen_type_from_index(2763);
		FlexibleListWrapper_2_t1673_0_0_0_var = il2cpp_codegen_type_from_index(2764);
		FlexibleListWrapper_2_t1674_0_0_0_var = il2cpp_codegen_type_from_index(2765);
		FlexibleListWrapper_2_t1675_0_0_0_var = il2cpp_codegen_type_from_index(2766);
		FlexibleListWrapper_2_t1676_0_0_0_var = il2cpp_codegen_type_from_index(2767);
		FlexibleListWrapper_2_t1677_0_0_0_var = il2cpp_codegen_type_from_index(2768);
		FlexibleListWrapper_2_t1678_0_0_0_var = il2cpp_codegen_type_from_index(2769);
		FlexibleListWrapper_2_t1679_0_0_0_var = il2cpp_codegen_type_from_index(2770);
		FlexibleListWrapper_2_t1680_0_0_0_var = il2cpp_codegen_type_from_index(2771);
		FlexibleListWrapper_2_t1681_0_0_0_var = il2cpp_codegen_type_from_index(2772);
		FlexibleListWrapper_2_t1682_0_0_0_var = il2cpp_codegen_type_from_index(2773);
		FlexibleListWrapper_2_t1683_0_0_0_var = il2cpp_codegen_type_from_index(2774);
		FlexibleListWrapper_2_t1684_0_0_0_var = il2cpp_codegen_type_from_index(2775);
		FlexibleListWrapper_2_t1685_0_0_0_var = il2cpp_codegen_type_from_index(2776);
		FlexibleListWrapper_2_t1686_0_0_0_var = il2cpp_codegen_type_from_index(2777);
		FlexibleListWrapper_2_t1687_0_0_0_var = il2cpp_codegen_type_from_index(2779);
		FlexibleListWrapper_2_t1688_0_0_0_var = il2cpp_codegen_type_from_index(2780);
		FlexibleListWrapper_2_t1689_0_0_0_var = il2cpp_codegen_type_from_index(2782);
		FlexibleListWrapper_2_t1690_0_0_0_var = il2cpp_codegen_type_from_index(2783);
		FlexibleListWrapper_2_t1691_0_0_0_var = il2cpp_codegen_type_from_index(2785);
		FlexibleListWrapper_2_t1692_0_0_0_var = il2cpp_codegen_type_from_index(2786);
		FlexibleListWrapper_2_t1693_0_0_0_var = il2cpp_codegen_type_from_index(2788);
		FlexibleListWrapper_2_t1694_0_0_0_var = il2cpp_codegen_type_from_index(2789);
		FlexibleListWrapper_2_t1695_0_0_0_var = il2cpp_codegen_type_from_index(2790);
		FlexibleListWrapper_2_t1696_0_0_0_var = il2cpp_codegen_type_from_index(2791);
		FlexibleListWrapper_2_t1697_0_0_0_var = il2cpp_codegen_type_from_index(2792);
		FlexibleListWrapper_2_t1698_0_0_0_var = il2cpp_codegen_type_from_index(2793);
		FlexibleListWrapper_2_t1699_0_0_0_var = il2cpp_codegen_type_from_index(2795);
		FlexibleListWrapper_2_t1700_0_0_0_var = il2cpp_codegen_type_from_index(2796);
		FlexibleListWrapper_2_t1701_0_0_0_var = il2cpp_codegen_type_from_index(2798);
		FlexibleListWrapper_2_t1702_0_0_0_var = il2cpp_codegen_type_from_index(2799);
		FlexibleListWrapper_2_t1703_0_0_0_var = il2cpp_codegen_type_from_index(2801);
		FlexibleListWrapper_2_t1704_0_0_0_var = il2cpp_codegen_type_from_index(2802);
		FlexibleListWrapper_2_t1705_0_0_0_var = il2cpp_codegen_type_from_index(2804);
		FlexibleListWrapper_2_t1706_0_0_0_var = il2cpp_codegen_type_from_index(2805);
		FlexibleListWrapper_2_t1707_0_0_0_var = il2cpp_codegen_type_from_index(2807);
		FlexibleListWrapper_2_t1708_0_0_0_var = il2cpp_codegen_type_from_index(2808);
		FlexibleListWrapper_2_t1709_0_0_0_var = il2cpp_codegen_type_from_index(2810);
		FlexibleListWrapper_2_t1710_0_0_0_var = il2cpp_codegen_type_from_index(2811);
		FlexibleListWrapper_2_t1711_0_0_0_var = il2cpp_codegen_type_from_index(2813);
		FlexibleListWrapper_2_t1712_0_0_0_var = il2cpp_codegen_type_from_index(2814);
		FlexibleListWrapper_2_t1713_0_0_0_var = il2cpp_codegen_type_from_index(2816);
		FlexibleListWrapper_2_t1714_0_0_0_var = il2cpp_codegen_type_from_index(2817);
		FlexibleListWrapper_2_t1715_0_0_0_var = il2cpp_codegen_type_from_index(2818);
		FlexibleListWrapper_2_t1716_0_0_0_var = il2cpp_codegen_type_from_index(2819);
		FlexibleListWrapper_2_t1717_0_0_0_var = il2cpp_codegen_type_from_index(2821);
		FlexibleListWrapper_2_t1718_0_0_0_var = il2cpp_codegen_type_from_index(2822);
		FlexibleListWrapper_2_t1719_0_0_0_var = il2cpp_codegen_type_from_index(2824);
		FlexibleListWrapper_2_t1720_0_0_0_var = il2cpp_codegen_type_from_index(2825);
		FlexibleListWrapper_2_t1721_0_0_0_var = il2cpp_codegen_type_from_index(2826);
		FlexibleListWrapper_2_t1722_0_0_0_var = il2cpp_codegen_type_from_index(2827);
		FlexibleListWrapper_2_t1723_0_0_0_var = il2cpp_codegen_type_from_index(2828);
		FlexibleListWrapper_2_t1724_0_0_0_var = il2cpp_codegen_type_from_index(2829);
		FlexibleListWrapper_2_t1725_0_0_0_var = il2cpp_codegen_type_from_index(2831);
		FlexibleListWrapper_2_t1726_0_0_0_var = il2cpp_codegen_type_from_index(2832);
		FlexibleListWrapper_2_t1727_0_0_0_var = il2cpp_codegen_type_from_index(2833);
		FlexibleListWrapper_2_t1728_0_0_0_var = il2cpp_codegen_type_from_index(2834);
		FlexibleListWrapper_2_t1729_0_0_0_var = il2cpp_codegen_type_from_index(2836);
		FlexibleListWrapper_2_t1730_0_0_0_var = il2cpp_codegen_type_from_index(2837);
		FlexibleListWrapper_2_t1731_0_0_0_var = il2cpp_codegen_type_from_index(2839);
		FlexibleListWrapper_2_t1732_0_0_0_var = il2cpp_codegen_type_from_index(2840);
		FlexibleListWrapper_2_t1733_0_0_0_var = il2cpp_codegen_type_from_index(2842);
		FlexibleListWrapper_2_t1734_0_0_0_var = il2cpp_codegen_type_from_index(2843);
		FlexibleListWrapper_2_t1735_0_0_0_var = il2cpp_codegen_type_from_index(2845);
		FlexibleListWrapper_2_t1736_0_0_0_var = il2cpp_codegen_type_from_index(2846);
		FlexibleListWrapper_2_t1737_0_0_0_var = il2cpp_codegen_type_from_index(2848);
		FlexibleListWrapper_2_t1738_0_0_0_var = il2cpp_codegen_type_from_index(2849);
		FlexibleListWrapper_2_t1739_0_0_0_var = il2cpp_codegen_type_from_index(2850);
		FlexibleListWrapper_2_t1740_0_0_0_var = il2cpp_codegen_type_from_index(2851);
		FlexibleListWrapper_2_t1741_0_0_0_var = il2cpp_codegen_type_from_index(2853);
		FlexibleListWrapper_2_t1742_0_0_0_var = il2cpp_codegen_type_from_index(2854);
		FlexibleListWrapper_2_t1743_0_0_0_var = il2cpp_codegen_type_from_index(2856);
		FlexibleListWrapper_2_t1744_0_0_0_var = il2cpp_codegen_type_from_index(2857);
		FlexibleListWrapper_2_t1745_0_0_0_var = il2cpp_codegen_type_from_index(2859);
		FlexibleListWrapper_2_t1746_0_0_0_var = il2cpp_codegen_type_from_index(2860);
		FlexibleListWrapper_2_t1747_0_0_0_var = il2cpp_codegen_type_from_index(2861);
		FlexibleListWrapper_2_t1748_0_0_0_var = il2cpp_codegen_type_from_index(2862);
		FlexibleListWrapper_2_t1749_0_0_0_var = il2cpp_codegen_type_from_index(2863);
		FlexibleListWrapper_2_t1750_0_0_0_var = il2cpp_codegen_type_from_index(2864);
		FlexibleListWrapper_2_t1751_0_0_0_var = il2cpp_codegen_type_from_index(2866);
		FlexibleListWrapper_2_t1752_0_0_0_var = il2cpp_codegen_type_from_index(2867);
		FlexibleListWrapper_2_t1753_0_0_0_var = il2cpp_codegen_type_from_index(2868);
		FlexibleListWrapper_2_t1754_0_0_0_var = il2cpp_codegen_type_from_index(2869);
		FlexibleListWrapper_2_t1755_0_0_0_var = il2cpp_codegen_type_from_index(2871);
		FlexibleListWrapper_2_t1756_0_0_0_var = il2cpp_codegen_type_from_index(2872);
		FlexibleListWrapper_2_t1757_0_0_0_var = il2cpp_codegen_type_from_index(2874);
		FlexibleListWrapper_2_t1758_0_0_0_var = il2cpp_codegen_type_from_index(2875);
		FlexibleListWrapper_2_t1759_0_0_0_var = il2cpp_codegen_type_from_index(2877);
		FlexibleListWrapper_2_t1760_0_0_0_var = il2cpp_codegen_type_from_index(2878);
		FlexibleListWrapper_2_t1761_0_0_0_var = il2cpp_codegen_type_from_index(2880);
		FlexibleListWrapper_2_t1762_0_0_0_var = il2cpp_codegen_type_from_index(2881);
		FlexibleListWrapper_2_t1763_0_0_0_var = il2cpp_codegen_type_from_index(2883);
		FlexibleListWrapper_2_t1764_0_0_0_var = il2cpp_codegen_type_from_index(2884);
		FlexibleListWrapper_2_t1765_0_0_0_var = il2cpp_codegen_type_from_index(2885);
		FlexibleListWrapper_2_t1766_0_0_0_var = il2cpp_codegen_type_from_index(2886);
		FlexibleListWrapper_2_t1767_0_0_0_var = il2cpp_codegen_type_from_index(2887);
		FlexibleListWrapper_2_t1768_0_0_0_var = il2cpp_codegen_type_from_index(2888);
		FlexibleListWrapper_2_t1769_0_0_0_var = il2cpp_codegen_type_from_index(2890);
		FlexibleListWrapper_2_t1770_0_0_0_var = il2cpp_codegen_type_from_index(2891);
		FlexibleListWrapper_2_t1771_0_0_0_var = il2cpp_codegen_type_from_index(2893);
		FlexibleListWrapper_2_t1772_0_0_0_var = il2cpp_codegen_type_from_index(2894);
		FlexibleListWrapper_2_t1773_0_0_0_var = il2cpp_codegen_type_from_index(2895);
		FlexibleListWrapper_2_t1774_0_0_0_var = il2cpp_codegen_type_from_index(2896);
		FlexibleListWrapper_2_t1775_0_0_0_var = il2cpp_codegen_type_from_index(2897);
		FlexibleListWrapper_2_t1776_0_0_0_var = il2cpp_codegen_type_from_index(2898);
		FlexibleListWrapper_2_t1777_0_0_0_var = il2cpp_codegen_type_from_index(2900);
		FlexibleListWrapper_2_t1778_0_0_0_var = il2cpp_codegen_type_from_index(2901);
		FlexibleListWrapper_2_t1779_0_0_0_var = il2cpp_codegen_type_from_index(2903);
		FlexibleListWrapper_2_t1780_0_0_0_var = il2cpp_codegen_type_from_index(2904);
		FlexibleListWrapper_2_t1781_0_0_0_var = il2cpp_codegen_type_from_index(2906);
		FlexibleListWrapper_2_t1782_0_0_0_var = il2cpp_codegen_type_from_index(2907);
		FlexibleListWrapper_2_t1783_0_0_0_var = il2cpp_codegen_type_from_index(2909);
		FlexibleListWrapper_2_t1784_0_0_0_var = il2cpp_codegen_type_from_index(2910);
		FlexibleListWrapper_2_t1785_0_0_0_var = il2cpp_codegen_type_from_index(2912);
		FlexibleListWrapper_2_t1786_0_0_0_var = il2cpp_codegen_type_from_index(2913);
		FlexibleListWrapper_2_t1787_0_0_0_var = il2cpp_codegen_type_from_index(2915);
		FlexibleListWrapper_2_t1788_0_0_0_var = il2cpp_codegen_type_from_index(2916);
		FlexibleListWrapper_2_t1789_0_0_0_var = il2cpp_codegen_type_from_index(2918);
		FlexibleDictionaryWrapper_2_t1790_0_0_0_var = il2cpp_codegen_type_from_index(2919);
		FlexibleDictionaryWrapper_2_t1791_0_0_0_var = il2cpp_codegen_type_from_index(2920);
		FlexibleDictionaryWrapper_2_t1792_0_0_0_var = il2cpp_codegen_type_from_index(2921);
		FlexibleDictionaryWrapper_2_t1793_0_0_0_var = il2cpp_codegen_type_from_index(2922);
		FlexibleDictionaryWrapper_2_t1794_0_0_0_var = il2cpp_codegen_type_from_index(2923);
		FlexibleDictionaryWrapper_2_t1795_0_0_0_var = il2cpp_codegen_type_from_index(2924);
		FlexibleDictionaryWrapper_2_t1796_0_0_0_var = il2cpp_codegen_type_from_index(2925);
		FlexibleDictionaryWrapper_2_t1797_0_0_0_var = il2cpp_codegen_type_from_index(2926);
		FlexibleDictionaryWrapper_2_t1798_0_0_0_var = il2cpp_codegen_type_from_index(2927);
		FlexibleDictionaryWrapper_2_t1799_0_0_0_var = il2cpp_codegen_type_from_index(2928);
		FlexibleDictionaryWrapper_2_t1800_0_0_0_var = il2cpp_codegen_type_from_index(2929);
		FlexibleDictionaryWrapper_2_t1801_0_0_0_var = il2cpp_codegen_type_from_index(2930);
		FlexibleDictionaryWrapper_2_t1802_0_0_0_var = il2cpp_codegen_type_from_index(2931);
		FlexibleDictionaryWrapper_2_t1803_0_0_0_var = il2cpp_codegen_type_from_index(2932);
		FlexibleDictionaryWrapper_2_t1804_0_0_0_var = il2cpp_codegen_type_from_index(2933);
		FlexibleDictionaryWrapper_2_t1805_0_0_0_var = il2cpp_codegen_type_from_index(2934);
		FlexibleDictionaryWrapper_2_t1806_0_0_0_var = il2cpp_codegen_type_from_index(2935);
		FlexibleDictionaryWrapper_2_t1807_0_0_0_var = il2cpp_codegen_type_from_index(2936);
		FlexibleDictionaryWrapper_2_t1808_0_0_0_var = il2cpp_codegen_type_from_index(2937);
		FlexibleDictionaryWrapper_2_t1809_0_0_0_var = il2cpp_codegen_type_from_index(2938);
		FlexibleDictionaryWrapper_2_t1810_0_0_0_var = il2cpp_codegen_type_from_index(2939);
		FlexibleDictionaryWrapper_2_t1811_0_0_0_var = il2cpp_codegen_type_from_index(2940);
		FlexibleDictionaryWrapper_2_t1812_0_0_0_var = il2cpp_codegen_type_from_index(2941);
		FlexibleDictionaryWrapper_2_t1813_0_0_0_var = il2cpp_codegen_type_from_index(2942);
		FlexibleDictionaryWrapper_2_t1814_0_0_0_var = il2cpp_codegen_type_from_index(2943);
		FlexibleDictionaryWrapper_2_t1815_0_0_0_var = il2cpp_codegen_type_from_index(2944);
		FlexibleDictionaryWrapper_2_t1816_0_0_0_var = il2cpp_codegen_type_from_index(2945);
		FlexibleDictionaryWrapper_2_t1817_0_0_0_var = il2cpp_codegen_type_from_index(2946);
		FlexibleDictionaryWrapper_2_t1818_0_0_0_var = il2cpp_codegen_type_from_index(2947);
		FlexibleDictionaryWrapper_2_t1819_0_0_0_var = il2cpp_codegen_type_from_index(2948);
		FlexibleDictionaryWrapper_2_t1820_0_0_0_var = il2cpp_codegen_type_from_index(2949);
		FlexibleDictionaryWrapper_2_t1821_0_0_0_var = il2cpp_codegen_type_from_index(2950);
		FlexibleDictionaryWrapper_2_t1822_0_0_0_var = il2cpp_codegen_type_from_index(2951);
		FlexibleDictionaryWrapper_2_t1823_0_0_0_var = il2cpp_codegen_type_from_index(2952);
		FlexibleDictionaryWrapper_2_t1824_0_0_0_var = il2cpp_codegen_type_from_index(2953);
		FlexibleDictionaryWrapper_2_t1825_0_0_0_var = il2cpp_codegen_type_from_index(2954);
		FlexibleDictionaryWrapper_2_t1826_0_0_0_var = il2cpp_codegen_type_from_index(2955);
		FlexibleDictionaryWrapper_2_t1827_0_0_0_var = il2cpp_codegen_type_from_index(2956);
		FlexibleDictionaryWrapper_2_t1828_0_0_0_var = il2cpp_codegen_type_from_index(2957);
		FlexibleDictionaryWrapper_2_t1829_0_0_0_var = il2cpp_codegen_type_from_index(2958);
		FlexibleDictionaryWrapper_2_t1830_0_0_0_var = il2cpp_codegen_type_from_index(2959);
		FlexibleDictionaryWrapper_2_t1831_0_0_0_var = il2cpp_codegen_type_from_index(2960);
		FlexibleDictionaryWrapper_2_t1832_0_0_0_var = il2cpp_codegen_type_from_index(2961);
		FlexibleDictionaryWrapper_2_t1833_0_0_0_var = il2cpp_codegen_type_from_index(2962);
		FlexibleDictionaryWrapper_2_t1834_0_0_0_var = il2cpp_codegen_type_from_index(2963);
		FlexibleDictionaryWrapper_2_t1835_0_0_0_var = il2cpp_codegen_type_from_index(2964);
		FlexibleDictionaryWrapper_2_t1836_0_0_0_var = il2cpp_codegen_type_from_index(2965);
		FlexibleDictionaryWrapper_2_t1837_0_0_0_var = il2cpp_codegen_type_from_index(2966);
		FlexibleDictionaryWrapper_2_t1838_0_0_0_var = il2cpp_codegen_type_from_index(2967);
		FlexibleDictionaryWrapper_2_t1839_0_0_0_var = il2cpp_codegen_type_from_index(2968);
		FlexibleDictionaryWrapper_2_t1840_0_0_0_var = il2cpp_codegen_type_from_index(2969);
		FlexibleDictionaryWrapper_2_t1841_0_0_0_var = il2cpp_codegen_type_from_index(2970);
		FlexibleDictionaryWrapper_2_t1842_0_0_0_var = il2cpp_codegen_type_from_index(2971);
		FlexibleDictionaryWrapper_2_t1843_0_0_0_var = il2cpp_codegen_type_from_index(2972);
		FlexibleDictionaryWrapper_2_t1844_0_0_0_var = il2cpp_codegen_type_from_index(2973);
		FlexibleDictionaryWrapper_2_t1845_0_0_0_var = il2cpp_codegen_type_from_index(2974);
		FlexibleDictionaryWrapper_2_t1846_0_0_0_var = il2cpp_codegen_type_from_index(2975);
		FlexibleDictionaryWrapper_2_t1847_0_0_0_var = il2cpp_codegen_type_from_index(2976);
		FlexibleDictionaryWrapper_2_t1848_0_0_0_var = il2cpp_codegen_type_from_index(2977);
		FlexibleDictionaryWrapper_2_t1849_0_0_0_var = il2cpp_codegen_type_from_index(2978);
		FlexibleDictionaryWrapper_2_t1850_0_0_0_var = il2cpp_codegen_type_from_index(2979);
		FlexibleDictionaryWrapper_2_t1851_0_0_0_var = il2cpp_codegen_type_from_index(2980);
		FlexibleDictionaryWrapper_2_t1852_0_0_0_var = il2cpp_codegen_type_from_index(2981);
		FlexibleDictionaryWrapper_2_t1853_0_0_0_var = il2cpp_codegen_type_from_index(2982);
		FlexibleDictionaryWrapper_2_t1854_0_0_0_var = il2cpp_codegen_type_from_index(2983);
		FlexibleDictionaryWrapper_2_t1855_0_0_0_var = il2cpp_codegen_type_from_index(2984);
		FlexibleDictionaryWrapper_2_t1856_0_0_0_var = il2cpp_codegen_type_from_index(2985);
		FlexibleDictionaryWrapper_2_t1857_0_0_0_var = il2cpp_codegen_type_from_index(2986);
		FlexibleDictionaryWrapper_2_t1858_0_0_0_var = il2cpp_codegen_type_from_index(2987);
		FlexibleDictionaryWrapper_2_t1859_0_0_0_var = il2cpp_codegen_type_from_index(2988);
		FlexibleDictionaryWrapper_2_t1860_0_0_0_var = il2cpp_codegen_type_from_index(2989);
		FlexibleDictionaryWrapper_2_t1861_0_0_0_var = il2cpp_codegen_type_from_index(2990);
		FlexibleDictionaryWrapper_2_t1862_0_0_0_var = il2cpp_codegen_type_from_index(2991);
		FlexibleDictionaryWrapper_2_t1863_0_0_0_var = il2cpp_codegen_type_from_index(2992);
		FlexibleDictionaryWrapper_2_t1864_0_0_0_var = il2cpp_codegen_type_from_index(2993);
		FlexibleDictionaryWrapper_2_t1865_0_0_0_var = il2cpp_codegen_type_from_index(2994);
		FlexibleDictionaryWrapper_2_t1866_0_0_0_var = il2cpp_codegen_type_from_index(2995);
		FlexibleDictionaryWrapper_2_t1867_0_0_0_var = il2cpp_codegen_type_from_index(2996);
		FlexibleDictionaryWrapper_2_t1868_0_0_0_var = il2cpp_codegen_type_from_index(2997);
		FlexibleDictionaryWrapper_2_t1869_0_0_0_var = il2cpp_codegen_type_from_index(2998);
		FlexibleDictionaryWrapper_2_t1870_0_0_0_var = il2cpp_codegen_type_from_index(2999);
		FlexibleDictionaryWrapper_2_t1871_0_0_0_var = il2cpp_codegen_type_from_index(3000);
		FlexibleDictionaryWrapper_2_t1872_0_0_0_var = il2cpp_codegen_type_from_index(3001);
		FlexibleDictionaryWrapper_2_t1873_0_0_0_var = il2cpp_codegen_type_from_index(3002);
		FlexibleDictionaryWrapper_2_t1874_0_0_0_var = il2cpp_codegen_type_from_index(3003);
		FlexibleDictionaryWrapper_2_t1875_0_0_0_var = il2cpp_codegen_type_from_index(3004);
		FlexibleDictionaryWrapper_2_t1876_0_0_0_var = il2cpp_codegen_type_from_index(3005);
		FlexibleDictionaryWrapper_2_t1877_0_0_0_var = il2cpp_codegen_type_from_index(3006);
		FlexibleDictionaryWrapper_2_t1878_0_0_0_var = il2cpp_codegen_type_from_index(3007);
		FlexibleDictionaryWrapper_2_t1879_0_0_0_var = il2cpp_codegen_type_from_index(3008);
		FlexibleDictionaryWrapper_2_t1880_0_0_0_var = il2cpp_codegen_type_from_index(3009);
		FlexibleDictionaryWrapper_2_t1881_0_0_0_var = il2cpp_codegen_type_from_index(3010);
		FlexibleDictionaryWrapper_2_t1882_0_0_0_var = il2cpp_codegen_type_from_index(3011);
		FlexibleDictionaryWrapper_2_t1883_0_0_0_var = il2cpp_codegen_type_from_index(3012);
		FlexibleDictionaryWrapper_2_t1884_0_0_0_var = il2cpp_codegen_type_from_index(3013);
		FlexibleDictionaryWrapper_2_t1885_0_0_0_var = il2cpp_codegen_type_from_index(3014);
		FlexibleDictionaryWrapper_2_t1886_0_0_0_var = il2cpp_codegen_type_from_index(3015);
		FlexibleDictionaryWrapper_2_t1887_0_0_0_var = il2cpp_codegen_type_from_index(3016);
		FlexibleDictionaryWrapper_2_t1888_0_0_0_var = il2cpp_codegen_type_from_index(3017);
		FlexibleDictionaryWrapper_2_t1889_0_0_0_var = il2cpp_codegen_type_from_index(3018);
		FlexibleDictionaryWrapper_2_t1890_0_0_0_var = il2cpp_codegen_type_from_index(3019);
		FlexibleDictionaryWrapper_2_t1891_0_0_0_var = il2cpp_codegen_type_from_index(3020);
		FlexibleDictionaryWrapper_2_t1892_0_0_0_var = il2cpp_codegen_type_from_index(3021);
		FlexibleDictionaryWrapper_2_t1893_0_0_0_var = il2cpp_codegen_type_from_index(3022);
		FlexibleDictionaryWrapper_2_t1894_0_0_0_var = il2cpp_codegen_type_from_index(3023);
		FlexibleDictionaryWrapper_2_t1895_0_0_0_var = il2cpp_codegen_type_from_index(3024);
		FlexibleDictionaryWrapper_2_t1896_0_0_0_var = il2cpp_codegen_type_from_index(3025);
		FlexibleDictionaryWrapper_2_t1897_0_0_0_var = il2cpp_codegen_type_from_index(3026);
		FlexibleDictionaryWrapper_2_t1898_0_0_0_var = il2cpp_codegen_type_from_index(3027);
		FlexibleDictionaryWrapper_2_t1899_0_0_0_var = il2cpp_codegen_type_from_index(3028);
		FlexibleDictionaryWrapper_2_t1900_0_0_0_var = il2cpp_codegen_type_from_index(3029);
		FlexibleDictionaryWrapper_2_t1901_0_0_0_var = il2cpp_codegen_type_from_index(3030);
		FlexibleDictionaryWrapper_2_t1902_0_0_0_var = il2cpp_codegen_type_from_index(3031);
		FlexibleDictionaryWrapper_2_t1903_0_0_0_var = il2cpp_codegen_type_from_index(3032);
		FlexibleDictionaryWrapper_2_t1904_0_0_0_var = il2cpp_codegen_type_from_index(3033);
		FlexibleDictionaryWrapper_2_t1905_0_0_0_var = il2cpp_codegen_type_from_index(3034);
		FlexibleDictionaryWrapper_2_t1906_0_0_0_var = il2cpp_codegen_type_from_index(3035);
		FlexibleDictionaryWrapper_2_t1907_0_0_0_var = il2cpp_codegen_type_from_index(3036);
		FlexibleDictionaryWrapper_2_t1908_0_0_0_var = il2cpp_codegen_type_from_index(3037);
		FlexibleDictionaryWrapper_2_t1909_0_0_0_var = il2cpp_codegen_type_from_index(3038);
		FlexibleDictionaryWrapper_2_t1910_0_0_0_var = il2cpp_codegen_type_from_index(3039);
		FlexibleDictionaryWrapper_2_t1911_0_0_0_var = il2cpp_codegen_type_from_index(3040);
		FlexibleDictionaryWrapper_2_t1912_0_0_0_var = il2cpp_codegen_type_from_index(3041);
		FlexibleDictionaryWrapper_2_t1913_0_0_0_var = il2cpp_codegen_type_from_index(3042);
		FlexibleDictionaryWrapper_2_t1914_0_0_0_var = il2cpp_codegen_type_from_index(3043);
		FlexibleDictionaryWrapper_2_t1915_0_0_0_var = il2cpp_codegen_type_from_index(3044);
		FlexibleDictionaryWrapper_2_t1916_0_0_0_var = il2cpp_codegen_type_from_index(3045);
		FlexibleDictionaryWrapper_2_t1917_0_0_0_var = il2cpp_codegen_type_from_index(3046);
		FlexibleDictionaryWrapper_2_t1918_0_0_0_var = il2cpp_codegen_type_from_index(3047);
		FlexibleDictionaryWrapper_2_t1919_0_0_0_var = il2cpp_codegen_type_from_index(3048);
		FlexibleDictionaryWrapper_2_t1920_0_0_0_var = il2cpp_codegen_type_from_index(3049);
		FlexibleDictionaryWrapper_2_t1921_0_0_0_var = il2cpp_codegen_type_from_index(3050);
		FlexibleDictionaryWrapper_2_t1922_0_0_0_var = il2cpp_codegen_type_from_index(3051);
		FlexibleDictionaryWrapper_2_t1923_0_0_0_var = il2cpp_codegen_type_from_index(3052);
		FlexibleDictionaryWrapper_2_t1924_0_0_0_var = il2cpp_codegen_type_from_index(3053);
		FlexibleDictionaryWrapper_2_t1925_0_0_0_var = il2cpp_codegen_type_from_index(3054);
		FlexibleDictionaryWrapper_2_t1926_0_0_0_var = il2cpp_codegen_type_from_index(3055);
		FlexibleDictionaryWrapper_2_t1927_0_0_0_var = il2cpp_codegen_type_from_index(3056);
		FlexibleDictionaryWrapper_2_t1928_0_0_0_var = il2cpp_codegen_type_from_index(3057);
		FlexibleDictionaryWrapper_2_t1929_0_0_0_var = il2cpp_codegen_type_from_index(3058);
		FlexibleDictionaryWrapper_2_t1930_0_0_0_var = il2cpp_codegen_type_from_index(3059);
		FlexibleDictionaryWrapper_2_t1931_0_0_0_var = il2cpp_codegen_type_from_index(3060);
		FlexibleDictionaryWrapper_2_t1932_0_0_0_var = il2cpp_codegen_type_from_index(3061);
		FlexibleDictionaryWrapper_2_t1933_0_0_0_var = il2cpp_codegen_type_from_index(3062);
		FlexibleDictionaryWrapper_2_t1934_0_0_0_var = il2cpp_codegen_type_from_index(3063);
		FlexibleDictionaryWrapper_2_t1935_0_0_0_var = il2cpp_codegen_type_from_index(3064);
		FlexibleDictionaryWrapper_2_t1936_0_0_0_var = il2cpp_codegen_type_from_index(3065);
		FlexibleDictionaryWrapper_2_t1937_0_0_0_var = il2cpp_codegen_type_from_index(3066);
		FlexibleDictionaryWrapper_2_t1938_0_0_0_var = il2cpp_codegen_type_from_index(3067);
		FlexibleDictionaryWrapper_2_t1939_0_0_0_var = il2cpp_codegen_type_from_index(3068);
		FlexibleDictionaryWrapper_2_t1940_0_0_0_var = il2cpp_codegen_type_from_index(3069);
		FlexibleDictionaryWrapper_2_t1941_0_0_0_var = il2cpp_codegen_type_from_index(3070);
		FlexibleDictionaryWrapper_2_t1942_0_0_0_var = il2cpp_codegen_type_from_index(3071);
		FlexibleDictionaryWrapper_2_t1943_0_0_0_var = il2cpp_codegen_type_from_index(3072);
		FlexibleDictionaryWrapper_2_t1944_0_0_0_var = il2cpp_codegen_type_from_index(3073);
		FlexibleDictionaryWrapper_2_t1945_0_0_0_var = il2cpp_codegen_type_from_index(3074);
		FlexibleDictionaryWrapper_2_t1946_0_0_0_var = il2cpp_codegen_type_from_index(3075);
		FlexibleDictionaryWrapper_2_t1947_0_0_0_var = il2cpp_codegen_type_from_index(3076);
		FlexibleDictionaryWrapper_2_t1948_0_0_0_var = il2cpp_codegen_type_from_index(3077);
		FlexibleDictionaryWrapper_2_t1949_0_0_0_var = il2cpp_codegen_type_from_index(3078);
		FlexibleDictionaryWrapper_2_t1950_0_0_0_var = il2cpp_codegen_type_from_index(3079);
		FlexibleDictionaryWrapper_2_t1951_0_0_0_var = il2cpp_codegen_type_from_index(3080);
		FlexibleDictionaryWrapper_2_t1952_0_0_0_var = il2cpp_codegen_type_from_index(3081);
		FlexibleDictionaryWrapper_2_t1953_0_0_0_var = il2cpp_codegen_type_from_index(3082);
		FlexibleDictionaryWrapper_2_t1954_0_0_0_var = il2cpp_codegen_type_from_index(3083);
		FlexibleDictionaryWrapper_2_t1955_0_0_0_var = il2cpp_codegen_type_from_index(3084);
		FlexibleDictionaryWrapper_2_t1956_0_0_0_var = il2cpp_codegen_type_from_index(3085);
		FlexibleDictionaryWrapper_2_t1957_0_0_0_var = il2cpp_codegen_type_from_index(3086);
		FlexibleDictionaryWrapper_2_t1958_0_0_0_var = il2cpp_codegen_type_from_index(3087);
		FlexibleDictionaryWrapper_2_t1959_0_0_0_var = il2cpp_codegen_type_from_index(3088);
		FlexibleDictionaryWrapper_2_t1960_0_0_0_var = il2cpp_codegen_type_from_index(3089);
		FlexibleDictionaryWrapper_2_t1961_0_0_0_var = il2cpp_codegen_type_from_index(3090);
		FlexibleDictionaryWrapper_2_t1962_0_0_0_var = il2cpp_codegen_type_from_index(3091);
		FlexibleDictionaryWrapper_2_t1963_0_0_0_var = il2cpp_codegen_type_from_index(3092);
		FlexibleDictionaryWrapper_2_t1964_0_0_0_var = il2cpp_codegen_type_from_index(3093);
		FlexibleDictionaryWrapper_2_t1965_0_0_0_var = il2cpp_codegen_type_from_index(3094);
		FlexibleDictionaryWrapper_2_t1966_0_0_0_var = il2cpp_codegen_type_from_index(3095);
		FlexibleDictionaryWrapper_2_t1967_0_0_0_var = il2cpp_codegen_type_from_index(3096);
		FlexibleDictionaryWrapper_2_t1968_0_0_0_var = il2cpp_codegen_type_from_index(3097);
		FlexibleDictionaryWrapper_2_t1969_0_0_0_var = il2cpp_codegen_type_from_index(3098);
		FlexibleDictionaryWrapper_2_t1970_0_0_0_var = il2cpp_codegen_type_from_index(3099);
		FlexibleDictionaryWrapper_2_t1971_0_0_0_var = il2cpp_codegen_type_from_index(3100);
		FlexibleDictionaryWrapper_2_t1972_0_0_0_var = il2cpp_codegen_type_from_index(3101);
		FlexibleDictionaryWrapper_2_t1973_0_0_0_var = il2cpp_codegen_type_from_index(3102);
		FlexibleDictionaryWrapper_2_t1974_0_0_0_var = il2cpp_codegen_type_from_index(3103);
		FlexibleDictionaryWrapper_2_t1975_0_0_0_var = il2cpp_codegen_type_from_index(3104);
		FlexibleDictionaryWrapper_2_t1976_0_0_0_var = il2cpp_codegen_type_from_index(3105);
		FlexibleDictionaryWrapper_2_t1977_0_0_0_var = il2cpp_codegen_type_from_index(3106);
		FlexibleDictionaryWrapper_2_t1978_0_0_0_var = il2cpp_codegen_type_from_index(3107);
		FlexibleDictionaryWrapper_2_t1979_0_0_0_var = il2cpp_codegen_type_from_index(3108);
		FlexibleDictionaryWrapper_2_t1980_0_0_0_var = il2cpp_codegen_type_from_index(3109);
		FlexibleDictionaryWrapper_2_t1981_0_0_0_var = il2cpp_codegen_type_from_index(3110);
		FlexibleDictionaryWrapper_2_t1982_0_0_0_var = il2cpp_codegen_type_from_index(3111);
		FlexibleDictionaryWrapper_2_t1983_0_0_0_var = il2cpp_codegen_type_from_index(3112);
		FlexibleDictionaryWrapper_2_t1984_0_0_0_var = il2cpp_codegen_type_from_index(3113);
		FlexibleDictionaryWrapper_2_t1985_0_0_0_var = il2cpp_codegen_type_from_index(3114);
		FlexibleDictionaryWrapper_2_t1986_0_0_0_var = il2cpp_codegen_type_from_index(3115);
		FlexibleDictionaryWrapper_2_t1987_0_0_0_var = il2cpp_codegen_type_from_index(3116);
		FlexibleDictionaryWrapper_2_t1988_0_0_0_var = il2cpp_codegen_type_from_index(3117);
		FlexibleDictionaryWrapper_2_t1989_0_0_0_var = il2cpp_codegen_type_from_index(3118);
		FlexibleDictionaryWrapper_2_t1990_0_0_0_var = il2cpp_codegen_type_from_index(3119);
		FlexibleDictionaryWrapper_2_t1991_0_0_0_var = il2cpp_codegen_type_from_index(3120);
		FlexibleDictionaryWrapper_2_t1992_0_0_0_var = il2cpp_codegen_type_from_index(3121);
		FlexibleDictionaryWrapper_2_t1993_0_0_0_var = il2cpp_codegen_type_from_index(3122);
		FlexibleDictionaryWrapper_2_t1994_0_0_0_var = il2cpp_codegen_type_from_index(3123);
		FlexibleDictionaryWrapper_2_t1995_0_0_0_var = il2cpp_codegen_type_from_index(3124);
		FlexibleDictionaryWrapper_2_t1996_0_0_0_var = il2cpp_codegen_type_from_index(3125);
		FlexibleDictionaryWrapper_2_t1997_0_0_0_var = il2cpp_codegen_type_from_index(3126);
		FlexibleDictionaryWrapper_2_t1998_0_0_0_var = il2cpp_codegen_type_from_index(3127);
		FlexibleDictionaryWrapper_2_t1999_0_0_0_var = il2cpp_codegen_type_from_index(3128);
		FlexibleDictionaryWrapper_2_t2000_0_0_0_var = il2cpp_codegen_type_from_index(3129);
		FlexibleDictionaryWrapper_2_t2001_0_0_0_var = il2cpp_codegen_type_from_index(3130);
		FlexibleDictionaryWrapper_2_t2002_0_0_0_var = il2cpp_codegen_type_from_index(3131);
		FlexibleDictionaryWrapper_2_t2003_0_0_0_var = il2cpp_codegen_type_from_index(3132);
		FlexibleDictionaryWrapper_2_t2004_0_0_0_var = il2cpp_codegen_type_from_index(3133);
		FlexibleDictionaryWrapper_2_t2005_0_0_0_var = il2cpp_codegen_type_from_index(3134);
		FlexibleDictionaryWrapper_2_t2006_0_0_0_var = il2cpp_codegen_type_from_index(3135);
		FlexibleDictionaryWrapper_2_t2007_0_0_0_var = il2cpp_codegen_type_from_index(3136);
		FlexibleDictionaryWrapper_2_t2008_0_0_0_var = il2cpp_codegen_type_from_index(3137);
		FlexibleDictionaryWrapper_2_t2009_0_0_0_var = il2cpp_codegen_type_from_index(3138);
		FlexibleDictionaryWrapper_2_t2010_0_0_0_var = il2cpp_codegen_type_from_index(3139);
		FlexibleDictionaryWrapper_2_t2011_0_0_0_var = il2cpp_codegen_type_from_index(3140);
		FlexibleDictionaryWrapper_2_t2012_0_0_0_var = il2cpp_codegen_type_from_index(3141);
		FlexibleDictionaryWrapper_2_t2013_0_0_0_var = il2cpp_codegen_type_from_index(3142);
		FlexibleDictionaryWrapper_2_t2014_0_0_0_var = il2cpp_codegen_type_from_index(3143);
		FlexibleDictionaryWrapper_2_t2015_0_0_0_var = il2cpp_codegen_type_from_index(3144);
		FlexibleDictionaryWrapper_2_t2016_0_0_0_var = il2cpp_codegen_type_from_index(3145);
		FlexibleDictionaryWrapper_2_t2017_0_0_0_var = il2cpp_codegen_type_from_index(3146);
		FlexibleDictionaryWrapper_2_t2018_0_0_0_var = il2cpp_codegen_type_from_index(3147);
		FlexibleDictionaryWrapper_2_t2019_0_0_0_var = il2cpp_codegen_type_from_index(3148);
		FlexibleDictionaryWrapper_2_t2020_0_0_0_var = il2cpp_codegen_type_from_index(3149);
		FlexibleDictionaryWrapper_2_t2021_0_0_0_var = il2cpp_codegen_type_from_index(3150);
		FlexibleDictionaryWrapper_2_t2022_0_0_0_var = il2cpp_codegen_type_from_index(3151);
		FlexibleDictionaryWrapper_2_t2023_0_0_0_var = il2cpp_codegen_type_from_index(3152);
		FlexibleDictionaryWrapper_2_t2024_0_0_0_var = il2cpp_codegen_type_from_index(3153);
		FlexibleDictionaryWrapper_2_t2025_0_0_0_var = il2cpp_codegen_type_from_index(3154);
		FlexibleDictionaryWrapper_2_t2026_0_0_0_var = il2cpp_codegen_type_from_index(3155);
		FlexibleDictionaryWrapper_2_t2027_0_0_0_var = il2cpp_codegen_type_from_index(3156);
		FlexibleDictionaryWrapper_2_t2028_0_0_0_var = il2cpp_codegen_type_from_index(3157);
		FlexibleDictionaryWrapper_2_t2029_0_0_0_var = il2cpp_codegen_type_from_index(3158);
		FlexibleDictionaryWrapper_2_t2030_0_0_0_var = il2cpp_codegen_type_from_index(3159);
		FlexibleDictionaryWrapper_2_t2031_0_0_0_var = il2cpp_codegen_type_from_index(3160);
		FlexibleDictionaryWrapper_2_t2032_0_0_0_var = il2cpp_codegen_type_from_index(3161);
		FlexibleDictionaryWrapper_2_t2033_0_0_0_var = il2cpp_codegen_type_from_index(3162);
		FlexibleDictionaryWrapper_2_t2034_0_0_0_var = il2cpp_codegen_type_from_index(3163);
		FlexibleDictionaryWrapper_2_t2035_0_0_0_var = il2cpp_codegen_type_from_index(3164);
		FlexibleDictionaryWrapper_2_t2036_0_0_0_var = il2cpp_codegen_type_from_index(3165);
		FlexibleDictionaryWrapper_2_t2037_0_0_0_var = il2cpp_codegen_type_from_index(3166);
		FlexibleDictionaryWrapper_2_t2038_0_0_0_var = il2cpp_codegen_type_from_index(3167);
		FlexibleDictionaryWrapper_2_t2039_0_0_0_var = il2cpp_codegen_type_from_index(3168);
		FlexibleDictionaryWrapper_2_t2040_0_0_0_var = il2cpp_codegen_type_from_index(3169);
		FlexibleDictionaryWrapper_2_t2041_0_0_0_var = il2cpp_codegen_type_from_index(3170);
		FlexibleDictionaryWrapper_2_t2042_0_0_0_var = il2cpp_codegen_type_from_index(3171);
		FlexibleDictionaryWrapper_2_t2043_0_0_0_var = il2cpp_codegen_type_from_index(3172);
		FlexibleDictionaryWrapper_2_t2044_0_0_0_var = il2cpp_codegen_type_from_index(3173);
		FlexibleDictionaryWrapper_2_t2045_0_0_0_var = il2cpp_codegen_type_from_index(3174);
		FlexibleDictionaryWrapper_2_t2046_0_0_0_var = il2cpp_codegen_type_from_index(3175);
		FlexibleDictionaryWrapper_2_t2047_0_0_0_var = il2cpp_codegen_type_from_index(3176);
		FlexibleDictionaryWrapper_2_t2048_0_0_0_var = il2cpp_codegen_type_from_index(3177);
		FlexibleDictionaryWrapper_2_t2049_0_0_0_var = il2cpp_codegen_type_from_index(3178);
		FlexibleDictionaryWrapper_2_t2050_0_0_0_var = il2cpp_codegen_type_from_index(3179);
		FlexibleDictionaryWrapper_2_t2051_0_0_0_var = il2cpp_codegen_type_from_index(3180);
		FlexibleDictionaryWrapper_2_t2052_0_0_0_var = il2cpp_codegen_type_from_index(3181);
		FlexibleDictionaryWrapper_2_t2053_0_0_0_var = il2cpp_codegen_type_from_index(3182);
		FlexibleDictionaryWrapper_2_t2054_0_0_0_var = il2cpp_codegen_type_from_index(3183);
		FlexibleDictionaryWrapper_2_t2055_0_0_0_var = il2cpp_codegen_type_from_index(3184);
		FlexibleDictionaryWrapper_2_t2056_0_0_0_var = il2cpp_codegen_type_from_index(3185);
		FlexibleDictionaryWrapper_2_t2057_0_0_0_var = il2cpp_codegen_type_from_index(3186);
		FlexibleDictionaryWrapper_2_t2058_0_0_0_var = il2cpp_codegen_type_from_index(3187);
		FlexibleDictionaryWrapper_2_t2059_0_0_0_var = il2cpp_codegen_type_from_index(3188);
		FlexibleDictionaryWrapper_2_t2060_0_0_0_var = il2cpp_codegen_type_from_index(3189);
		FlexibleDictionaryWrapper_2_t2061_0_0_0_var = il2cpp_codegen_type_from_index(3190);
		FlexibleDictionaryWrapper_2_t2062_0_0_0_var = il2cpp_codegen_type_from_index(3191);
		FlexibleDictionaryWrapper_2_t2063_0_0_0_var = il2cpp_codegen_type_from_index(3192);
		FlexibleDictionaryWrapper_2_t2064_0_0_0_var = il2cpp_codegen_type_from_index(3193);
		FlexibleDictionaryWrapper_2_t2065_0_0_0_var = il2cpp_codegen_type_from_index(3194);
		FlexibleDictionaryWrapper_2_t2066_0_0_0_var = il2cpp_codegen_type_from_index(3195);
		FlexibleDictionaryWrapper_2_t2067_0_0_0_var = il2cpp_codegen_type_from_index(3196);
		FlexibleDictionaryWrapper_2_t2068_0_0_0_var = il2cpp_codegen_type_from_index(3197);
		FlexibleDictionaryWrapper_2_t2069_0_0_0_var = il2cpp_codegen_type_from_index(3198);
		FlexibleDictionaryWrapper_2_t2070_0_0_0_var = il2cpp_codegen_type_from_index(3199);
		FlexibleDictionaryWrapper_2_t2071_0_0_0_var = il2cpp_codegen_type_from_index(3200);
		FlexibleDictionaryWrapper_2_t2072_0_0_0_var = il2cpp_codegen_type_from_index(3201);
		FlexibleDictionaryWrapper_2_t2073_0_0_0_var = il2cpp_codegen_type_from_index(3202);
		FlexibleDictionaryWrapper_2_t2074_0_0_0_var = il2cpp_codegen_type_from_index(3203);
		FlexibleDictionaryWrapper_2_t2075_0_0_0_var = il2cpp_codegen_type_from_index(3204);
		FlexibleDictionaryWrapper_2_t2076_0_0_0_var = il2cpp_codegen_type_from_index(3205);
		FlexibleDictionaryWrapper_2_t2077_0_0_0_var = il2cpp_codegen_type_from_index(3206);
		FlexibleDictionaryWrapper_2_t2078_0_0_0_var = il2cpp_codegen_type_from_index(3207);
		List_1_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		List_1__ctor_m3419_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483711);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__1_m6871_MethodInfo_var = il2cpp_codegen_method_info_from_index(1321);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__2_m6872_MethodInfo_var = il2cpp_codegen_method_info_from_index(1322);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__3_m6873_MethodInfo_var = il2cpp_codegen_method_info_from_index(1323);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__4_m6874_MethodInfo_var = il2cpp_codegen_method_info_from_index(1324);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__5_m6875_MethodInfo_var = il2cpp_codegen_method_info_from_index(1325);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__6_m6876_MethodInfo_var = il2cpp_codegen_method_info_from_index(1326);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__7_m6877_MethodInfo_var = il2cpp_codegen_method_info_from_index(1327);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__8_m6878_MethodInfo_var = il2cpp_codegen_method_info_from_index(1328);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__9_m6879_MethodInfo_var = il2cpp_codegen_method_info_from_index(1329);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__a_m6880_MethodInfo_var = il2cpp_codegen_method_info_from_index(1330);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__b_m6881_MethodInfo_var = il2cpp_codegen_method_info_from_index(1331);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__c_m6882_MethodInfo_var = il2cpp_codegen_method_info_from_index(1332);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__d_m6883_MethodInfo_var = il2cpp_codegen_method_info_from_index(1333);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__e_m6884_MethodInfo_var = il2cpp_codegen_method_info_from_index(1334);
		PlatformHooks_U3CCreateWrapperTypesU3Eb__f_m6885_MethodInfo_var = il2cpp_codegen_method_info_from_index(1335);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t628 * V_0 = {0};
	List_1_t628 * G_B2_0 = {0};
	List_1_t628 * G_B1_0 = {0};
	List_1_t628 * G_B4_0 = {0};
	List_1_t628 * G_B3_0 = {0};
	List_1_t628 * G_B6_0 = {0};
	List_1_t628 * G_B5_0 = {0};
	List_1_t628 * G_B8_0 = {0};
	List_1_t628 * G_B7_0 = {0};
	List_1_t628 * G_B10_0 = {0};
	List_1_t628 * G_B9_0 = {0};
	List_1_t628 * G_B12_0 = {0};
	List_1_t628 * G_B11_0 = {0};
	List_1_t628 * G_B14_0 = {0};
	List_1_t628 * G_B13_0 = {0};
	List_1_t628 * G_B16_0 = {0};
	List_1_t628 * G_B15_0 = {0};
	List_1_t628 * G_B18_0 = {0};
	List_1_t628 * G_B17_0 = {0};
	List_1_t628 * G_B20_0 = {0};
	List_1_t628 * G_B19_0 = {0};
	List_1_t628 * G_B22_0 = {0};
	List_1_t628 * G_B21_0 = {0};
	List_1_t628 * G_B24_0 = {0};
	List_1_t628 * G_B23_0 = {0};
	List_1_t628 * G_B26_0 = {0};
	List_1_t628 * G_B25_0 = {0};
	List_1_t628 * G_B28_0 = {0};
	List_1_t628 * G_B27_0 = {0};
	List_1_t628 * G_B30_0 = {0};
	List_1_t628 * G_B29_0 = {0};
	{
		List_1_t628 * L_0 = (List_1_t628 *)il2cpp_codegen_object_new (List_1_t628_il2cpp_TypeInfo_var);
		List_1__ctor_m3419(L_0, /*hidden argument*/List_1__ctor_m3419_MethodInfo_var);
		V_0 = L_0;
		List_1_t628 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_2 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_7;
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IntPtr_t L_3 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__1_m6871_MethodInfo_var };
		Action_t143 * L_4 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_4, NULL, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_7 = L_4;
		G_B2_0 = G_B1_0;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_5 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_7;
		NullCheck(G_B2_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B2_0, L_5);
		List_1_t628 * L_6 = V_0;
		Action_t143 * L_7 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_8;
		G_B3_0 = L_6;
		if (L_7)
		{
			G_B4_0 = L_6;
			goto IL_0042;
		}
	}
	{
		IntPtr_t L_8 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__2_m6872_MethodInfo_var };
		Action_t143 * L_9 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_9, NULL, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_8 = L_9;
		G_B4_0 = G_B3_0;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_10 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_8;
		NullCheck(G_B4_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B4_0, L_10);
		List_1_t628 * L_11 = V_0;
		Action_t143 * L_12 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_9;
		G_B5_0 = L_11;
		if (L_12)
		{
			G_B6_0 = L_11;
			goto IL_0065;
		}
	}
	{
		IntPtr_t L_13 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__3_m6873_MethodInfo_var };
		Action_t143 * L_14 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_14, NULL, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_9 = L_14;
		G_B6_0 = G_B5_0;
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_15 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_9;
		NullCheck(G_B6_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B6_0, L_15);
		List_1_t628 * L_16 = V_0;
		Action_t143 * L_17 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_10;
		G_B7_0 = L_16;
		if (L_17)
		{
			G_B8_0 = L_16;
			goto IL_0088;
		}
	}
	{
		IntPtr_t L_18 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__4_m6874_MethodInfo_var };
		Action_t143 * L_19 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_19, NULL, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_10 = L_19;
		G_B8_0 = G_B7_0;
	}

IL_0088:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_20 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_10;
		NullCheck(G_B8_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B8_0, L_20);
		List_1_t628 * L_21 = V_0;
		Action_t143 * L_22 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_11;
		G_B9_0 = L_21;
		if (L_22)
		{
			G_B10_0 = L_21;
			goto IL_00ab;
		}
	}
	{
		IntPtr_t L_23 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__5_m6875_MethodInfo_var };
		Action_t143 * L_24 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_24, NULL, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_11 = L_24;
		G_B10_0 = G_B9_0;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_25 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_11;
		NullCheck(G_B10_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B10_0, L_25);
		List_1_t628 * L_26 = V_0;
		Action_t143 * L_27 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_12;
		G_B11_0 = L_26;
		if (L_27)
		{
			G_B12_0 = L_26;
			goto IL_00ce;
		}
	}
	{
		IntPtr_t L_28 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__6_m6876_MethodInfo_var };
		Action_t143 * L_29 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_29, NULL, L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_12 = L_29;
		G_B12_0 = G_B11_0;
	}

IL_00ce:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_30 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_12;
		NullCheck(G_B12_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B12_0, L_30);
		List_1_t628 * L_31 = V_0;
		Action_t143 * L_32 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_13;
		G_B13_0 = L_31;
		if (L_32)
		{
			G_B14_0 = L_31;
			goto IL_00f1;
		}
	}
	{
		IntPtr_t L_33 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__7_m6877_MethodInfo_var };
		Action_t143 * L_34 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_34, NULL, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_13 = L_34;
		G_B14_0 = G_B13_0;
	}

IL_00f1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_35 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_13;
		NullCheck(G_B14_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B14_0, L_35);
		List_1_t628 * L_36 = V_0;
		Action_t143 * L_37 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_14;
		G_B15_0 = L_36;
		if (L_37)
		{
			G_B16_0 = L_36;
			goto IL_0114;
		}
	}
	{
		IntPtr_t L_38 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__8_m6878_MethodInfo_var };
		Action_t143 * L_39 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_39, NULL, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_14 = L_39;
		G_B16_0 = G_B15_0;
	}

IL_0114:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_40 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_14;
		NullCheck(G_B16_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B16_0, L_40);
		List_1_t628 * L_41 = V_0;
		Action_t143 * L_42 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_15;
		G_B17_0 = L_41;
		if (L_42)
		{
			G_B18_0 = L_41;
			goto IL_0137;
		}
	}
	{
		IntPtr_t L_43 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__9_m6879_MethodInfo_var };
		Action_t143 * L_44 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_44, NULL, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_15 = L_44;
		G_B18_0 = G_B17_0;
	}

IL_0137:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_45 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_15;
		NullCheck(G_B18_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B18_0, L_45);
		List_1_t628 * L_46 = V_0;
		Action_t143 * L_47 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_16;
		G_B19_0 = L_46;
		if (L_47)
		{
			G_B20_0 = L_46;
			goto IL_015a;
		}
	}
	{
		IntPtr_t L_48 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__a_m6880_MethodInfo_var };
		Action_t143 * L_49 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_49, NULL, L_48, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_16 = L_49;
		G_B20_0 = G_B19_0;
	}

IL_015a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_50 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_16;
		NullCheck(G_B20_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B20_0, L_50);
		List_1_t628 * L_51 = V_0;
		Action_t143 * L_52 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_17;
		G_B21_0 = L_51;
		if (L_52)
		{
			G_B22_0 = L_51;
			goto IL_017d;
		}
	}
	{
		IntPtr_t L_53 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__b_m6881_MethodInfo_var };
		Action_t143 * L_54 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_54, NULL, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_17 = L_54;
		G_B22_0 = G_B21_0;
	}

IL_017d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_55 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_17;
		NullCheck(G_B22_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B22_0, L_55);
		List_1_t628 * L_56 = V_0;
		Action_t143 * L_57 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1b_18;
		G_B23_0 = L_56;
		if (L_57)
		{
			G_B24_0 = L_56;
			goto IL_01a0;
		}
	}
	{
		IntPtr_t L_58 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__c_m6882_MethodInfo_var };
		Action_t143 * L_59 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_59, NULL, L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1b_18 = L_59;
		G_B24_0 = G_B23_0;
	}

IL_01a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_60 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1b_18;
		NullCheck(G_B24_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B24_0, L_60);
		List_1_t628 * L_61 = V_0;
		Action_t143 * L_62 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1c_19;
		G_B25_0 = L_61;
		if (L_62)
		{
			G_B26_0 = L_61;
			goto IL_01c3;
		}
	}
	{
		IntPtr_t L_63 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__d_m6883_MethodInfo_var };
		Action_t143 * L_64 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_64, NULL, L_63, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1c_19 = L_64;
		G_B26_0 = G_B25_0;
	}

IL_01c3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_65 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1c_19;
		NullCheck(G_B26_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B26_0, L_65);
		List_1_t628 * L_66 = V_0;
		Action_t143 * L_67 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1d_20;
		G_B27_0 = L_66;
		if (L_67)
		{
			G_B28_0 = L_66;
			goto IL_01e6;
		}
	}
	{
		IntPtr_t L_68 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__e_m6884_MethodInfo_var };
		Action_t143 * L_69 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_69, NULL, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1d_20 = L_69;
		G_B28_0 = G_B27_0;
	}

IL_01e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_70 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1d_20;
		NullCheck(G_B28_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B28_0, L_70);
		List_1_t628 * L_71 = V_0;
		Action_t143 * L_72 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1e_21;
		G_B29_0 = L_71;
		if (L_72)
		{
			G_B30_0 = L_71;
			goto IL_0209;
		}
	}
	{
		IntPtr_t L_73 = { (void*)PlatformHooks_U3CCreateWrapperTypesU3Eb__f_m6885_MethodInfo_var };
		Action_t143 * L_74 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_74, NULL, L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1e_21 = L_74;
		G_B30_0 = G_B29_0;
	}

IL_0209:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Action_t143 * L_75 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1e_21;
		NullCheck(G_B30_0);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, G_B30_0, L_75);
		List_1_t628 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_77 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1501_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_76);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_76, L_77);
		List_1_t628 * L_78 = V_0;
		Type_t * L_79 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1502_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_78);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_78, L_79);
		List_1_t628 * L_80 = V_0;
		Type_t * L_81 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1503_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_80);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_80, L_81);
		List_1_t628 * L_82 = V_0;
		Type_t * L_83 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1504_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_82);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_82, L_83);
		List_1_t628 * L_84 = V_0;
		Type_t * L_85 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1505_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_84);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_84, L_85);
		List_1_t628 * L_86 = V_0;
		Type_t * L_87 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1506_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_86);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_86, L_87);
		List_1_t628 * L_88 = V_0;
		Type_t * L_89 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1507_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_88);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_88, L_89);
		List_1_t628 * L_90 = V_0;
		Type_t * L_91 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1508_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_90);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_90, L_91);
		List_1_t628 * L_92 = V_0;
		Type_t * L_93 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1509_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_92);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_92, L_93);
		List_1_t628 * L_94 = V_0;
		Type_t * L_95 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1510_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_94);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_94, L_95);
		List_1_t628 * L_96 = V_0;
		Type_t * L_97 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1511_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_96);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_96, L_97);
		List_1_t628 * L_98 = V_0;
		Type_t * L_99 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1512_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_98);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_98, L_99);
		List_1_t628 * L_100 = V_0;
		Type_t * L_101 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1513_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_100);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_100, L_101);
		List_1_t628 * L_102 = V_0;
		Type_t * L_103 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1514_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_102);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_102, L_103);
		List_1_t628 * L_104 = V_0;
		Type_t * L_105 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1515_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_104);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_104, L_105);
		List_1_t628 * L_106 = V_0;
		Type_t * L_107 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1516_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_106);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_106, L_107);
		List_1_t628 * L_108 = V_0;
		Type_t * L_109 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1517_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_108);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_108, L_109);
		List_1_t628 * L_110 = V_0;
		Type_t * L_111 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1518_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_110);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_110, L_111);
		List_1_t628 * L_112 = V_0;
		Type_t * L_113 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1519_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_112);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_112, L_113);
		List_1_t628 * L_114 = V_0;
		Type_t * L_115 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1520_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_114);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_114, L_115);
		List_1_t628 * L_116 = V_0;
		Type_t * L_117 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1521_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_116);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_116, L_117);
		List_1_t628 * L_118 = V_0;
		Type_t * L_119 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1522_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_118);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_118, L_119);
		List_1_t628 * L_120 = V_0;
		Type_t * L_121 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1523_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_120);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_120, L_121);
		List_1_t628 * L_122 = V_0;
		Type_t * L_123 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1524_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_122);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_122, L_123);
		List_1_t628 * L_124 = V_0;
		Type_t * L_125 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1525_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_124);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_124, L_125);
		List_1_t628 * L_126 = V_0;
		Type_t * L_127 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1526_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_126);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_126, L_127);
		List_1_t628 * L_128 = V_0;
		Type_t * L_129 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1527_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_128);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_128, L_129);
		List_1_t628 * L_130 = V_0;
		Type_t * L_131 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1528_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_130);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_130, L_131);
		List_1_t628 * L_132 = V_0;
		Type_t * L_133 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1529_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_132);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_132, L_133);
		List_1_t628 * L_134 = V_0;
		Type_t * L_135 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1530_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_134);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_134, L_135);
		List_1_t628 * L_136 = V_0;
		Type_t * L_137 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1531_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_136);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_136, L_137);
		List_1_t628 * L_138 = V_0;
		Type_t * L_139 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1532_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_138);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_138, L_139);
		List_1_t628 * L_140 = V_0;
		Type_t * L_141 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1533_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_140);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_140, L_141);
		List_1_t628 * L_142 = V_0;
		Type_t * L_143 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1534_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_142);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_142, L_143);
		List_1_t628 * L_144 = V_0;
		Type_t * L_145 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1535_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_144);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_144, L_145);
		List_1_t628 * L_146 = V_0;
		Type_t * L_147 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1536_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_146);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_146, L_147);
		List_1_t628 * L_148 = V_0;
		Type_t * L_149 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1537_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_148);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_148, L_149);
		List_1_t628 * L_150 = V_0;
		Type_t * L_151 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1538_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_150);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_150, L_151);
		List_1_t628 * L_152 = V_0;
		Type_t * L_153 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1539_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_152);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_152, L_153);
		List_1_t628 * L_154 = V_0;
		Type_t * L_155 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1540_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_154);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_154, L_155);
		List_1_t628 * L_156 = V_0;
		Type_t * L_157 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1541_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_156);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_156, L_157);
		List_1_t628 * L_158 = V_0;
		Type_t * L_159 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1542_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_158);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_158, L_159);
		List_1_t628 * L_160 = V_0;
		Type_t * L_161 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1543_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_160);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_160, L_161);
		List_1_t628 * L_162 = V_0;
		Type_t * L_163 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1544_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_162);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_162, L_163);
		List_1_t628 * L_164 = V_0;
		Type_t * L_165 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1545_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_164);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_164, L_165);
		List_1_t628 * L_166 = V_0;
		Type_t * L_167 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1546_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_166);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_166, L_167);
		List_1_t628 * L_168 = V_0;
		Type_t * L_169 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1547_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_168);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_168, L_169);
		List_1_t628 * L_170 = V_0;
		Type_t * L_171 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1548_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_170);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_170, L_171);
		List_1_t628 * L_172 = V_0;
		Type_t * L_173 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1549_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_172);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_172, L_173);
		List_1_t628 * L_174 = V_0;
		Type_t * L_175 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1550_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_174);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_174, L_175);
		List_1_t628 * L_176 = V_0;
		Type_t * L_177 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1551_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_176);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_176, L_177);
		List_1_t628 * L_178 = V_0;
		Type_t * L_179 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1552_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_178);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_178, L_179);
		List_1_t628 * L_180 = V_0;
		Type_t * L_181 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1553_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_180);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_180, L_181);
		List_1_t628 * L_182 = V_0;
		Type_t * L_183 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1554_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_182);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_182, L_183);
		List_1_t628 * L_184 = V_0;
		Type_t * L_185 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1555_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_184);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_184, L_185);
		List_1_t628 * L_186 = V_0;
		Type_t * L_187 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1556_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_186);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_186, L_187);
		List_1_t628 * L_188 = V_0;
		Type_t * L_189 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1557_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_188);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_188, L_189);
		List_1_t628 * L_190 = V_0;
		Type_t * L_191 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1558_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_190);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_190, L_191);
		List_1_t628 * L_192 = V_0;
		Type_t * L_193 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1559_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_192);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_192, L_193);
		List_1_t628 * L_194 = V_0;
		Type_t * L_195 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1560_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_194);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_194, L_195);
		List_1_t628 * L_196 = V_0;
		Type_t * L_197 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1561_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_196);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_196, L_197);
		List_1_t628 * L_198 = V_0;
		Type_t * L_199 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1562_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_198);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_198, L_199);
		List_1_t628 * L_200 = V_0;
		Type_t * L_201 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1563_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_200);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_200, L_201);
		List_1_t628 * L_202 = V_0;
		Type_t * L_203 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1564_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_202);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_202, L_203);
		List_1_t628 * L_204 = V_0;
		Type_t * L_205 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1565_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_204);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_204, L_205);
		List_1_t628 * L_206 = V_0;
		Type_t * L_207 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1566_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_206);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_206, L_207);
		List_1_t628 * L_208 = V_0;
		Type_t * L_209 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1567_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_208);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_208, L_209);
		List_1_t628 * L_210 = V_0;
		Type_t * L_211 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1568_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_210);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_210, L_211);
		List_1_t628 * L_212 = V_0;
		Type_t * L_213 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1569_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_212);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_212, L_213);
		List_1_t628 * L_214 = V_0;
		Type_t * L_215 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1570_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_214);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_214, L_215);
		List_1_t628 * L_216 = V_0;
		Type_t * L_217 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1571_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_216);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_216, L_217);
		List_1_t628 * L_218 = V_0;
		Type_t * L_219 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1572_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_218);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_218, L_219);
		List_1_t628 * L_220 = V_0;
		Type_t * L_221 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1573_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_220);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_220, L_221);
		List_1_t628 * L_222 = V_0;
		Type_t * L_223 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1574_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_222);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_222, L_223);
		List_1_t628 * L_224 = V_0;
		Type_t * L_225 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1575_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_224);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_224, L_225);
		List_1_t628 * L_226 = V_0;
		Type_t * L_227 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1576_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_226);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_226, L_227);
		List_1_t628 * L_228 = V_0;
		Type_t * L_229 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1577_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_228);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_228, L_229);
		List_1_t628 * L_230 = V_0;
		Type_t * L_231 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1578_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_230);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_230, L_231);
		List_1_t628 * L_232 = V_0;
		Type_t * L_233 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1579_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_232);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_232, L_233);
		List_1_t628 * L_234 = V_0;
		Type_t * L_235 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1580_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_234);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_234, L_235);
		List_1_t628 * L_236 = V_0;
		Type_t * L_237 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1581_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_236);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_236, L_237);
		List_1_t628 * L_238 = V_0;
		Type_t * L_239 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1582_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_238);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_238, L_239);
		List_1_t628 * L_240 = V_0;
		Type_t * L_241 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1583_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_240);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_240, L_241);
		List_1_t628 * L_242 = V_0;
		Type_t * L_243 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1584_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_242);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_242, L_243);
		List_1_t628 * L_244 = V_0;
		Type_t * L_245 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1585_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_244);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_244, L_245);
		List_1_t628 * L_246 = V_0;
		Type_t * L_247 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1586_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_246);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_246, L_247);
		List_1_t628 * L_248 = V_0;
		Type_t * L_249 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1587_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_248);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_248, L_249);
		List_1_t628 * L_250 = V_0;
		Type_t * L_251 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1588_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_250);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_250, L_251);
		List_1_t628 * L_252 = V_0;
		Type_t * L_253 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1589_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_252);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_252, L_253);
		List_1_t628 * L_254 = V_0;
		Type_t * L_255 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1590_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_254);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_254, L_255);
		List_1_t628 * L_256 = V_0;
		Type_t * L_257 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1591_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_256);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_256, L_257);
		List_1_t628 * L_258 = V_0;
		Type_t * L_259 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1592_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_258);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_258, L_259);
		List_1_t628 * L_260 = V_0;
		Type_t * L_261 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1593_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_260);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_260, L_261);
		List_1_t628 * L_262 = V_0;
		Type_t * L_263 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1594_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_262);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_262, L_263);
		List_1_t628 * L_264 = V_0;
		Type_t * L_265 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1595_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_264);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_264, L_265);
		List_1_t628 * L_266 = V_0;
		Type_t * L_267 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1596_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_266);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_266, L_267);
		List_1_t628 * L_268 = V_0;
		Type_t * L_269 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1597_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_268);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_268, L_269);
		List_1_t628 * L_270 = V_0;
		Type_t * L_271 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1598_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_270);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_270, L_271);
		List_1_t628 * L_272 = V_0;
		Type_t * L_273 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1599_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_272);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_272, L_273);
		List_1_t628 * L_274 = V_0;
		Type_t * L_275 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1600_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_274);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_274, L_275);
		List_1_t628 * L_276 = V_0;
		Type_t * L_277 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1601_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_276);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_276, L_277);
		List_1_t628 * L_278 = V_0;
		Type_t * L_279 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1602_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_278);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_278, L_279);
		List_1_t628 * L_280 = V_0;
		Type_t * L_281 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1603_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_280);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_280, L_281);
		List_1_t628 * L_282 = V_0;
		Type_t * L_283 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1604_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_282);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_282, L_283);
		List_1_t628 * L_284 = V_0;
		Type_t * L_285 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1605_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_284);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_284, L_285);
		List_1_t628 * L_286 = V_0;
		Type_t * L_287 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1606_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_286);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_286, L_287);
		List_1_t628 * L_288 = V_0;
		Type_t * L_289 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1607_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_288);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_288, L_289);
		List_1_t628 * L_290 = V_0;
		Type_t * L_291 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1608_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_290);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_290, L_291);
		List_1_t628 * L_292 = V_0;
		Type_t * L_293 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1609_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_292);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_292, L_293);
		List_1_t628 * L_294 = V_0;
		Type_t * L_295 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1610_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_294);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_294, L_295);
		List_1_t628 * L_296 = V_0;
		Type_t * L_297 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1611_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_296);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_296, L_297);
		List_1_t628 * L_298 = V_0;
		Type_t * L_299 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1612_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_298);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_298, L_299);
		List_1_t628 * L_300 = V_0;
		Type_t * L_301 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1613_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_300);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_300, L_301);
		List_1_t628 * L_302 = V_0;
		Type_t * L_303 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1614_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_302);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_302, L_303);
		List_1_t628 * L_304 = V_0;
		Type_t * L_305 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1615_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_304);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_304, L_305);
		List_1_t628 * L_306 = V_0;
		Type_t * L_307 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1616_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_306);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_306, L_307);
		List_1_t628 * L_308 = V_0;
		Type_t * L_309 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1617_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_308);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_308, L_309);
		List_1_t628 * L_310 = V_0;
		Type_t * L_311 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1618_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_310);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_310, L_311);
		List_1_t628 * L_312 = V_0;
		Type_t * L_313 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1619_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_312);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_312, L_313);
		List_1_t628 * L_314 = V_0;
		Type_t * L_315 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1620_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_314);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_314, L_315);
		List_1_t628 * L_316 = V_0;
		Type_t * L_317 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1621_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_316);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_316, L_317);
		List_1_t628 * L_318 = V_0;
		Type_t * L_319 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1622_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_318);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_318, L_319);
		List_1_t628 * L_320 = V_0;
		Type_t * L_321 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1623_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_320);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_320, L_321);
		List_1_t628 * L_322 = V_0;
		Type_t * L_323 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1624_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_322);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_322, L_323);
		List_1_t628 * L_324 = V_0;
		Type_t * L_325 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1625_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_324);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_324, L_325);
		List_1_t628 * L_326 = V_0;
		Type_t * L_327 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1626_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_326);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_326, L_327);
		List_1_t628 * L_328 = V_0;
		Type_t * L_329 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1627_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_328);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_328, L_329);
		List_1_t628 * L_330 = V_0;
		Type_t * L_331 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1628_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_330);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_330, L_331);
		List_1_t628 * L_332 = V_0;
		Type_t * L_333 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1629_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_332);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_332, L_333);
		List_1_t628 * L_334 = V_0;
		Type_t * L_335 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1630_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_334);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_334, L_335);
		List_1_t628 * L_336 = V_0;
		Type_t * L_337 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1631_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_336);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_336, L_337);
		List_1_t628 * L_338 = V_0;
		Type_t * L_339 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1632_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_338);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_338, L_339);
		List_1_t628 * L_340 = V_0;
		Type_t * L_341 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1633_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_340);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_340, L_341);
		List_1_t628 * L_342 = V_0;
		Type_t * L_343 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1634_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_342);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_342, L_343);
		List_1_t628 * L_344 = V_0;
		Type_t * L_345 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1635_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_344);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_344, L_345);
		List_1_t628 * L_346 = V_0;
		Type_t * L_347 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1636_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_346);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_346, L_347);
		List_1_t628 * L_348 = V_0;
		Type_t * L_349 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1637_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_348);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_348, L_349);
		List_1_t628 * L_350 = V_0;
		Type_t * L_351 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1638_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_350);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_350, L_351);
		List_1_t628 * L_352 = V_0;
		Type_t * L_353 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1639_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_352);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_352, L_353);
		List_1_t628 * L_354 = V_0;
		Type_t * L_355 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1640_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_354);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_354, L_355);
		List_1_t628 * L_356 = V_0;
		Type_t * L_357 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1641_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_356);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_356, L_357);
		List_1_t628 * L_358 = V_0;
		Type_t * L_359 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1642_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_358);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_358, L_359);
		List_1_t628 * L_360 = V_0;
		Type_t * L_361 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1643_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_360);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_360, L_361);
		List_1_t628 * L_362 = V_0;
		Type_t * L_363 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1644_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_362);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_362, L_363);
		List_1_t628 * L_364 = V_0;
		Type_t * L_365 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1645_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_364);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_364, L_365);
		List_1_t628 * L_366 = V_0;
		Type_t * L_367 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1646_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_366);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_366, L_367);
		List_1_t628 * L_368 = V_0;
		Type_t * L_369 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1647_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_368);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_368, L_369);
		List_1_t628 * L_370 = V_0;
		Type_t * L_371 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1648_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_370);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_370, L_371);
		List_1_t628 * L_372 = V_0;
		Type_t * L_373 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1649_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_372);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_372, L_373);
		List_1_t628 * L_374 = V_0;
		Type_t * L_375 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1650_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_374);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_374, L_375);
		List_1_t628 * L_376 = V_0;
		Type_t * L_377 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1651_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_376);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_376, L_377);
		List_1_t628 * L_378 = V_0;
		Type_t * L_379 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1652_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_378);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_378, L_379);
		List_1_t628 * L_380 = V_0;
		Type_t * L_381 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1653_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_380);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_380, L_381);
		List_1_t628 * L_382 = V_0;
		Type_t * L_383 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1654_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_382);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_382, L_383);
		List_1_t628 * L_384 = V_0;
		Type_t * L_385 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1655_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_384);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_384, L_385);
		List_1_t628 * L_386 = V_0;
		Type_t * L_387 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1656_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_386);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_386, L_387);
		List_1_t628 * L_388 = V_0;
		Type_t * L_389 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1657_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_388);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_388, L_389);
		List_1_t628 * L_390 = V_0;
		Type_t * L_391 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1658_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_390);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_390, L_391);
		List_1_t628 * L_392 = V_0;
		Type_t * L_393 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1659_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_392);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_392, L_393);
		List_1_t628 * L_394 = V_0;
		Type_t * L_395 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1660_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_394);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_394, L_395);
		List_1_t628 * L_396 = V_0;
		Type_t * L_397 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1661_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_396);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_396, L_397);
		List_1_t628 * L_398 = V_0;
		Type_t * L_399 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1662_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_398);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_398, L_399);
		List_1_t628 * L_400 = V_0;
		Type_t * L_401 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1663_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_400);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_400, L_401);
		List_1_t628 * L_402 = V_0;
		Type_t * L_403 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1664_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_402);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_402, L_403);
		List_1_t628 * L_404 = V_0;
		Type_t * L_405 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1665_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_404);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_404, L_405);
		List_1_t628 * L_406 = V_0;
		Type_t * L_407 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1666_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_406);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_406, L_407);
		List_1_t628 * L_408 = V_0;
		Type_t * L_409 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1667_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_408);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_408, L_409);
		List_1_t628 * L_410 = V_0;
		Type_t * L_411 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1668_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_410);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_410, L_411);
		List_1_t628 * L_412 = V_0;
		Type_t * L_413 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1669_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_412);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_412, L_413);
		List_1_t628 * L_414 = V_0;
		Type_t * L_415 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1670_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_414);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_414, L_415);
		List_1_t628 * L_416 = V_0;
		Type_t * L_417 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1671_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_416);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_416, L_417);
		List_1_t628 * L_418 = V_0;
		Type_t * L_419 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1672_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_418);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_418, L_419);
		List_1_t628 * L_420 = V_0;
		Type_t * L_421 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1673_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_420);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_420, L_421);
		List_1_t628 * L_422 = V_0;
		Type_t * L_423 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1674_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_422);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_422, L_423);
		List_1_t628 * L_424 = V_0;
		Type_t * L_425 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1675_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_424);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_424, L_425);
		List_1_t628 * L_426 = V_0;
		Type_t * L_427 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1676_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_426);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_426, L_427);
		List_1_t628 * L_428 = V_0;
		Type_t * L_429 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1677_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_428);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_428, L_429);
		List_1_t628 * L_430 = V_0;
		Type_t * L_431 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1678_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_430);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_430, L_431);
		List_1_t628 * L_432 = V_0;
		Type_t * L_433 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1679_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_432);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_432, L_433);
		List_1_t628 * L_434 = V_0;
		Type_t * L_435 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1680_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_434);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_434, L_435);
		List_1_t628 * L_436 = V_0;
		Type_t * L_437 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1681_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_436);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_436, L_437);
		List_1_t628 * L_438 = V_0;
		Type_t * L_439 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1682_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_438);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_438, L_439);
		List_1_t628 * L_440 = V_0;
		Type_t * L_441 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1683_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_440);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_440, L_441);
		List_1_t628 * L_442 = V_0;
		Type_t * L_443 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1684_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_442);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_442, L_443);
		List_1_t628 * L_444 = V_0;
		Type_t * L_445 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1685_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_444);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_444, L_445);
		List_1_t628 * L_446 = V_0;
		Type_t * L_447 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1686_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_446);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_446, L_447);
		List_1_t628 * L_448 = V_0;
		Type_t * L_449 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1687_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_448);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_448, L_449);
		List_1_t628 * L_450 = V_0;
		Type_t * L_451 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1688_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_450);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_450, L_451);
		List_1_t628 * L_452 = V_0;
		Type_t * L_453 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1689_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_452);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_452, L_453);
		List_1_t628 * L_454 = V_0;
		Type_t * L_455 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1690_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_454);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_454, L_455);
		List_1_t628 * L_456 = V_0;
		Type_t * L_457 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1691_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_456);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_456, L_457);
		List_1_t628 * L_458 = V_0;
		Type_t * L_459 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1692_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_458);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_458, L_459);
		List_1_t628 * L_460 = V_0;
		Type_t * L_461 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1693_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_460);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_460, L_461);
		List_1_t628 * L_462 = V_0;
		Type_t * L_463 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1694_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_462);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_462, L_463);
		List_1_t628 * L_464 = V_0;
		Type_t * L_465 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1695_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_464);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_464, L_465);
		List_1_t628 * L_466 = V_0;
		Type_t * L_467 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1696_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_466);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_466, L_467);
		List_1_t628 * L_468 = V_0;
		Type_t * L_469 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1697_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_468);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_468, L_469);
		List_1_t628 * L_470 = V_0;
		Type_t * L_471 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1698_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_470);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_470, L_471);
		List_1_t628 * L_472 = V_0;
		Type_t * L_473 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1699_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_472);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_472, L_473);
		List_1_t628 * L_474 = V_0;
		Type_t * L_475 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1700_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_474);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_474, L_475);
		List_1_t628 * L_476 = V_0;
		Type_t * L_477 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1701_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_476);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_476, L_477);
		List_1_t628 * L_478 = V_0;
		Type_t * L_479 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1702_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_478);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_478, L_479);
		List_1_t628 * L_480 = V_0;
		Type_t * L_481 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1703_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_480);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_480, L_481);
		List_1_t628 * L_482 = V_0;
		Type_t * L_483 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1704_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_482);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_482, L_483);
		List_1_t628 * L_484 = V_0;
		Type_t * L_485 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1705_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_484);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_484, L_485);
		List_1_t628 * L_486 = V_0;
		Type_t * L_487 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1706_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_486);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_486, L_487);
		List_1_t628 * L_488 = V_0;
		Type_t * L_489 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1707_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_488);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_488, L_489);
		List_1_t628 * L_490 = V_0;
		Type_t * L_491 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1708_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_490);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_490, L_491);
		List_1_t628 * L_492 = V_0;
		Type_t * L_493 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1709_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_492);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_492, L_493);
		List_1_t628 * L_494 = V_0;
		Type_t * L_495 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1710_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_494);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_494, L_495);
		List_1_t628 * L_496 = V_0;
		Type_t * L_497 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1711_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_496);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_496, L_497);
		List_1_t628 * L_498 = V_0;
		Type_t * L_499 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1712_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_498);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_498, L_499);
		List_1_t628 * L_500 = V_0;
		Type_t * L_501 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1713_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_500);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_500, L_501);
		List_1_t628 * L_502 = V_0;
		Type_t * L_503 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1714_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_502);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_502, L_503);
		List_1_t628 * L_504 = V_0;
		Type_t * L_505 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1715_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_504);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_504, L_505);
		List_1_t628 * L_506 = V_0;
		Type_t * L_507 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1716_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_506);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_506, L_507);
		List_1_t628 * L_508 = V_0;
		Type_t * L_509 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1717_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_508);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_508, L_509);
		List_1_t628 * L_510 = V_0;
		Type_t * L_511 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1718_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_510);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_510, L_511);
		List_1_t628 * L_512 = V_0;
		Type_t * L_513 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1719_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_512);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_512, L_513);
		List_1_t628 * L_514 = V_0;
		Type_t * L_515 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1720_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_514);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_514, L_515);
		List_1_t628 * L_516 = V_0;
		Type_t * L_517 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1721_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_516);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_516, L_517);
		List_1_t628 * L_518 = V_0;
		Type_t * L_519 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1722_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_518);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_518, L_519);
		List_1_t628 * L_520 = V_0;
		Type_t * L_521 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1723_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_520);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_520, L_521);
		List_1_t628 * L_522 = V_0;
		Type_t * L_523 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1724_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_522);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_522, L_523);
		List_1_t628 * L_524 = V_0;
		Type_t * L_525 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1725_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_524);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_524, L_525);
		List_1_t628 * L_526 = V_0;
		Type_t * L_527 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1726_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_526);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_526, L_527);
		List_1_t628 * L_528 = V_0;
		Type_t * L_529 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1727_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_528);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_528, L_529);
		List_1_t628 * L_530 = V_0;
		Type_t * L_531 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1728_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_530);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_530, L_531);
		List_1_t628 * L_532 = V_0;
		Type_t * L_533 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1729_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_532);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_532, L_533);
		List_1_t628 * L_534 = V_0;
		Type_t * L_535 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1730_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_534);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_534, L_535);
		List_1_t628 * L_536 = V_0;
		Type_t * L_537 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1731_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_536);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_536, L_537);
		List_1_t628 * L_538 = V_0;
		Type_t * L_539 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1732_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_538);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_538, L_539);
		List_1_t628 * L_540 = V_0;
		Type_t * L_541 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1733_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_540);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_540, L_541);
		List_1_t628 * L_542 = V_0;
		Type_t * L_543 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1734_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_542);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_542, L_543);
		List_1_t628 * L_544 = V_0;
		Type_t * L_545 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1735_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_544);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_544, L_545);
		List_1_t628 * L_546 = V_0;
		Type_t * L_547 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1736_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_546);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_546, L_547);
		List_1_t628 * L_548 = V_0;
		Type_t * L_549 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1737_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_548);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_548, L_549);
		List_1_t628 * L_550 = V_0;
		Type_t * L_551 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1738_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_550);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_550, L_551);
		List_1_t628 * L_552 = V_0;
		Type_t * L_553 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1739_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_552);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_552, L_553);
		List_1_t628 * L_554 = V_0;
		Type_t * L_555 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1740_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_554);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_554, L_555);
		List_1_t628 * L_556 = V_0;
		Type_t * L_557 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1741_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_556);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_556, L_557);
		List_1_t628 * L_558 = V_0;
		Type_t * L_559 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1742_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_558);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_558, L_559);
		List_1_t628 * L_560 = V_0;
		Type_t * L_561 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1743_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_560);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_560, L_561);
		List_1_t628 * L_562 = V_0;
		Type_t * L_563 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1744_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_562);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_562, L_563);
		List_1_t628 * L_564 = V_0;
		Type_t * L_565 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1745_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_564);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_564, L_565);
		List_1_t628 * L_566 = V_0;
		Type_t * L_567 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1746_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_566);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_566, L_567);
		List_1_t628 * L_568 = V_0;
		Type_t * L_569 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1747_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_568);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_568, L_569);
		List_1_t628 * L_570 = V_0;
		Type_t * L_571 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1748_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_570);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_570, L_571);
		List_1_t628 * L_572 = V_0;
		Type_t * L_573 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1749_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_572);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_572, L_573);
		List_1_t628 * L_574 = V_0;
		Type_t * L_575 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1750_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_574);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_574, L_575);
		List_1_t628 * L_576 = V_0;
		Type_t * L_577 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1751_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_576);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_576, L_577);
		List_1_t628 * L_578 = V_0;
		Type_t * L_579 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1752_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_578);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_578, L_579);
		List_1_t628 * L_580 = V_0;
		Type_t * L_581 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1753_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_580);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_580, L_581);
		List_1_t628 * L_582 = V_0;
		Type_t * L_583 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1754_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_582);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_582, L_583);
		List_1_t628 * L_584 = V_0;
		Type_t * L_585 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1755_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_584);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_584, L_585);
		List_1_t628 * L_586 = V_0;
		Type_t * L_587 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1756_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_586);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_586, L_587);
		List_1_t628 * L_588 = V_0;
		Type_t * L_589 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1757_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_588);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_588, L_589);
		List_1_t628 * L_590 = V_0;
		Type_t * L_591 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1758_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_590);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_590, L_591);
		List_1_t628 * L_592 = V_0;
		Type_t * L_593 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1759_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_592);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_592, L_593);
		List_1_t628 * L_594 = V_0;
		Type_t * L_595 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1760_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_594);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_594, L_595);
		List_1_t628 * L_596 = V_0;
		Type_t * L_597 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1761_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_596);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_596, L_597);
		List_1_t628 * L_598 = V_0;
		Type_t * L_599 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1762_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_598);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_598, L_599);
		List_1_t628 * L_600 = V_0;
		Type_t * L_601 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1763_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_600);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_600, L_601);
		List_1_t628 * L_602 = V_0;
		Type_t * L_603 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1764_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_602);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_602, L_603);
		List_1_t628 * L_604 = V_0;
		Type_t * L_605 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1765_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_604);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_604, L_605);
		List_1_t628 * L_606 = V_0;
		Type_t * L_607 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1766_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_606);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_606, L_607);
		List_1_t628 * L_608 = V_0;
		Type_t * L_609 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1767_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_608);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_608, L_609);
		List_1_t628 * L_610 = V_0;
		Type_t * L_611 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1768_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_610);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_610, L_611);
		List_1_t628 * L_612 = V_0;
		Type_t * L_613 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1769_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_612);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_612, L_613);
		List_1_t628 * L_614 = V_0;
		Type_t * L_615 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1770_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_614);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_614, L_615);
		List_1_t628 * L_616 = V_0;
		Type_t * L_617 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1771_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_616);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_616, L_617);
		List_1_t628 * L_618 = V_0;
		Type_t * L_619 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1772_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_618);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_618, L_619);
		List_1_t628 * L_620 = V_0;
		Type_t * L_621 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1773_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_620);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_620, L_621);
		List_1_t628 * L_622 = V_0;
		Type_t * L_623 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1774_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_622);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_622, L_623);
		List_1_t628 * L_624 = V_0;
		Type_t * L_625 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1775_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_624);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_624, L_625);
		List_1_t628 * L_626 = V_0;
		Type_t * L_627 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1776_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_626);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_626, L_627);
		List_1_t628 * L_628 = V_0;
		Type_t * L_629 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1777_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_628);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_628, L_629);
		List_1_t628 * L_630 = V_0;
		Type_t * L_631 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1778_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_630);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_630, L_631);
		List_1_t628 * L_632 = V_0;
		Type_t * L_633 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1779_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_632);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_632, L_633);
		List_1_t628 * L_634 = V_0;
		Type_t * L_635 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1780_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_634);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_634, L_635);
		List_1_t628 * L_636 = V_0;
		Type_t * L_637 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1781_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_636);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_636, L_637);
		List_1_t628 * L_638 = V_0;
		Type_t * L_639 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1782_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_638);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_638, L_639);
		List_1_t628 * L_640 = V_0;
		Type_t * L_641 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1783_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_640);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_640, L_641);
		List_1_t628 * L_642 = V_0;
		Type_t * L_643 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1784_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_642);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_642, L_643);
		List_1_t628 * L_644 = V_0;
		Type_t * L_645 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1785_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_644);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_644, L_645);
		List_1_t628 * L_646 = V_0;
		Type_t * L_647 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1786_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_646);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_646, L_647);
		List_1_t628 * L_648 = V_0;
		Type_t * L_649 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1787_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_648);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_648, L_649);
		List_1_t628 * L_650 = V_0;
		Type_t * L_651 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1788_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_650);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_650, L_651);
		List_1_t628 * L_652 = V_0;
		Type_t * L_653 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleListWrapper_2_t1789_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_652);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_652, L_653);
		List_1_t628 * L_654 = V_0;
		Type_t * L_655 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1790_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_654);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_654, L_655);
		List_1_t628 * L_656 = V_0;
		Type_t * L_657 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1791_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_656);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_656, L_657);
		List_1_t628 * L_658 = V_0;
		Type_t * L_659 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1792_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_658);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_658, L_659);
		List_1_t628 * L_660 = V_0;
		Type_t * L_661 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1793_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_660);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_660, L_661);
		List_1_t628 * L_662 = V_0;
		Type_t * L_663 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1794_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_662);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_662, L_663);
		List_1_t628 * L_664 = V_0;
		Type_t * L_665 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1795_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_664);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_664, L_665);
		List_1_t628 * L_666 = V_0;
		Type_t * L_667 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1796_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_666);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_666, L_667);
		List_1_t628 * L_668 = V_0;
		Type_t * L_669 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1797_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_668);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_668, L_669);
		List_1_t628 * L_670 = V_0;
		Type_t * L_671 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1798_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_670);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_670, L_671);
		List_1_t628 * L_672 = V_0;
		Type_t * L_673 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1799_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_672);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_672, L_673);
		List_1_t628 * L_674 = V_0;
		Type_t * L_675 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1800_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_674);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_674, L_675);
		List_1_t628 * L_676 = V_0;
		Type_t * L_677 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1801_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_676);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_676, L_677);
		List_1_t628 * L_678 = V_0;
		Type_t * L_679 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1802_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_678);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_678, L_679);
		List_1_t628 * L_680 = V_0;
		Type_t * L_681 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1803_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_680);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_680, L_681);
		List_1_t628 * L_682 = V_0;
		Type_t * L_683 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1804_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_682);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_682, L_683);
		List_1_t628 * L_684 = V_0;
		Type_t * L_685 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1805_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_684);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_684, L_685);
		List_1_t628 * L_686 = V_0;
		Type_t * L_687 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1806_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_686);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_686, L_687);
		List_1_t628 * L_688 = V_0;
		Type_t * L_689 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1807_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_688);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_688, L_689);
		List_1_t628 * L_690 = V_0;
		Type_t * L_691 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1808_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_690);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_690, L_691);
		List_1_t628 * L_692 = V_0;
		Type_t * L_693 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1809_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_692);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_692, L_693);
		List_1_t628 * L_694 = V_0;
		Type_t * L_695 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1810_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_694);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_694, L_695);
		List_1_t628 * L_696 = V_0;
		Type_t * L_697 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1811_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_696);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_696, L_697);
		List_1_t628 * L_698 = V_0;
		Type_t * L_699 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1812_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_698);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_698, L_699);
		List_1_t628 * L_700 = V_0;
		Type_t * L_701 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1813_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_700);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_700, L_701);
		List_1_t628 * L_702 = V_0;
		Type_t * L_703 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1814_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_702);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_702, L_703);
		List_1_t628 * L_704 = V_0;
		Type_t * L_705 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1815_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_704);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_704, L_705);
		List_1_t628 * L_706 = V_0;
		Type_t * L_707 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1816_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_706);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_706, L_707);
		List_1_t628 * L_708 = V_0;
		Type_t * L_709 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1817_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_708);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_708, L_709);
		List_1_t628 * L_710 = V_0;
		Type_t * L_711 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1818_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_710);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_710, L_711);
		List_1_t628 * L_712 = V_0;
		Type_t * L_713 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1819_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_712);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_712, L_713);
		List_1_t628 * L_714 = V_0;
		Type_t * L_715 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1820_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_714);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_714, L_715);
		List_1_t628 * L_716 = V_0;
		Type_t * L_717 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1821_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_716);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_716, L_717);
		List_1_t628 * L_718 = V_0;
		Type_t * L_719 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1822_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_718);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_718, L_719);
		List_1_t628 * L_720 = V_0;
		Type_t * L_721 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1823_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_720);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_720, L_721);
		List_1_t628 * L_722 = V_0;
		Type_t * L_723 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1824_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_722);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_722, L_723);
		List_1_t628 * L_724 = V_0;
		Type_t * L_725 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1825_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_724);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_724, L_725);
		List_1_t628 * L_726 = V_0;
		Type_t * L_727 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1826_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_726);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_726, L_727);
		List_1_t628 * L_728 = V_0;
		Type_t * L_729 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1827_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_728);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_728, L_729);
		List_1_t628 * L_730 = V_0;
		Type_t * L_731 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1828_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_730);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_730, L_731);
		List_1_t628 * L_732 = V_0;
		Type_t * L_733 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1829_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_732);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_732, L_733);
		List_1_t628 * L_734 = V_0;
		Type_t * L_735 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1830_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_734);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_734, L_735);
		List_1_t628 * L_736 = V_0;
		Type_t * L_737 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1831_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_736);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_736, L_737);
		List_1_t628 * L_738 = V_0;
		Type_t * L_739 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1832_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_738);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_738, L_739);
		List_1_t628 * L_740 = V_0;
		Type_t * L_741 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1833_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_740);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_740, L_741);
		List_1_t628 * L_742 = V_0;
		Type_t * L_743 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1834_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_742);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_742, L_743);
		List_1_t628 * L_744 = V_0;
		Type_t * L_745 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1835_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_744);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_744, L_745);
		List_1_t628 * L_746 = V_0;
		Type_t * L_747 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1836_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_746);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_746, L_747);
		List_1_t628 * L_748 = V_0;
		Type_t * L_749 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1837_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_748);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_748, L_749);
		List_1_t628 * L_750 = V_0;
		Type_t * L_751 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1838_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_750);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_750, L_751);
		List_1_t628 * L_752 = V_0;
		Type_t * L_753 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1839_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_752);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_752, L_753);
		List_1_t628 * L_754 = V_0;
		Type_t * L_755 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1840_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_754);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_754, L_755);
		List_1_t628 * L_756 = V_0;
		Type_t * L_757 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1841_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_756);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_756, L_757);
		List_1_t628 * L_758 = V_0;
		Type_t * L_759 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1842_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_758);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_758, L_759);
		List_1_t628 * L_760 = V_0;
		Type_t * L_761 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1843_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_760);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_760, L_761);
		List_1_t628 * L_762 = V_0;
		Type_t * L_763 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1844_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_762);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_762, L_763);
		List_1_t628 * L_764 = V_0;
		Type_t * L_765 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1845_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_764);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_764, L_765);
		List_1_t628 * L_766 = V_0;
		Type_t * L_767 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1846_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_766);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_766, L_767);
		List_1_t628 * L_768 = V_0;
		Type_t * L_769 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1847_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_768);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_768, L_769);
		List_1_t628 * L_770 = V_0;
		Type_t * L_771 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1848_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_770);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_770, L_771);
		List_1_t628 * L_772 = V_0;
		Type_t * L_773 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1849_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_772);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_772, L_773);
		List_1_t628 * L_774 = V_0;
		Type_t * L_775 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1850_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_774);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_774, L_775);
		List_1_t628 * L_776 = V_0;
		Type_t * L_777 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1851_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_776);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_776, L_777);
		List_1_t628 * L_778 = V_0;
		Type_t * L_779 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1852_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_778);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_778, L_779);
		List_1_t628 * L_780 = V_0;
		Type_t * L_781 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1853_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_780);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_780, L_781);
		List_1_t628 * L_782 = V_0;
		Type_t * L_783 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1854_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_782);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_782, L_783);
		List_1_t628 * L_784 = V_0;
		Type_t * L_785 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1855_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_784);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_784, L_785);
		List_1_t628 * L_786 = V_0;
		Type_t * L_787 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1856_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_786);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_786, L_787);
		List_1_t628 * L_788 = V_0;
		Type_t * L_789 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1857_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_788);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_788, L_789);
		List_1_t628 * L_790 = V_0;
		Type_t * L_791 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1858_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_790);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_790, L_791);
		List_1_t628 * L_792 = V_0;
		Type_t * L_793 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1859_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_792);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_792, L_793);
		List_1_t628 * L_794 = V_0;
		Type_t * L_795 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1860_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_794);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_794, L_795);
		List_1_t628 * L_796 = V_0;
		Type_t * L_797 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1861_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_796);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_796, L_797);
		List_1_t628 * L_798 = V_0;
		Type_t * L_799 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1862_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_798);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_798, L_799);
		List_1_t628 * L_800 = V_0;
		Type_t * L_801 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1863_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_800);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_800, L_801);
		List_1_t628 * L_802 = V_0;
		Type_t * L_803 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1864_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_802);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_802, L_803);
		List_1_t628 * L_804 = V_0;
		Type_t * L_805 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1865_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_804);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_804, L_805);
		List_1_t628 * L_806 = V_0;
		Type_t * L_807 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1866_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_806);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_806, L_807);
		List_1_t628 * L_808 = V_0;
		Type_t * L_809 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1867_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_808);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_808, L_809);
		List_1_t628 * L_810 = V_0;
		Type_t * L_811 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1868_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_810);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_810, L_811);
		List_1_t628 * L_812 = V_0;
		Type_t * L_813 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1869_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_812);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_812, L_813);
		List_1_t628 * L_814 = V_0;
		Type_t * L_815 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1870_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_814);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_814, L_815);
		List_1_t628 * L_816 = V_0;
		Type_t * L_817 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1871_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_816);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_816, L_817);
		List_1_t628 * L_818 = V_0;
		Type_t * L_819 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1872_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_818);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_818, L_819);
		List_1_t628 * L_820 = V_0;
		Type_t * L_821 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1873_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_820);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_820, L_821);
		List_1_t628 * L_822 = V_0;
		Type_t * L_823 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1874_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_822);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_822, L_823);
		List_1_t628 * L_824 = V_0;
		Type_t * L_825 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1875_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_824);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_824, L_825);
		List_1_t628 * L_826 = V_0;
		Type_t * L_827 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1876_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_826);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_826, L_827);
		List_1_t628 * L_828 = V_0;
		Type_t * L_829 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1877_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_828);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_828, L_829);
		List_1_t628 * L_830 = V_0;
		Type_t * L_831 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1878_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_830);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_830, L_831);
		List_1_t628 * L_832 = V_0;
		Type_t * L_833 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1879_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_832);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_832, L_833);
		List_1_t628 * L_834 = V_0;
		Type_t * L_835 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1880_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_834);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_834, L_835);
		List_1_t628 * L_836 = V_0;
		Type_t * L_837 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1881_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_836);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_836, L_837);
		List_1_t628 * L_838 = V_0;
		Type_t * L_839 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1882_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_838);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_838, L_839);
		List_1_t628 * L_840 = V_0;
		Type_t * L_841 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1883_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_840);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_840, L_841);
		List_1_t628 * L_842 = V_0;
		Type_t * L_843 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1884_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_842);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_842, L_843);
		List_1_t628 * L_844 = V_0;
		Type_t * L_845 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1885_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_844);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_844, L_845);
		List_1_t628 * L_846 = V_0;
		Type_t * L_847 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1886_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_846);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_846, L_847);
		List_1_t628 * L_848 = V_0;
		Type_t * L_849 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1887_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_848);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_848, L_849);
		List_1_t628 * L_850 = V_0;
		Type_t * L_851 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1888_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_850);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_850, L_851);
		List_1_t628 * L_852 = V_0;
		Type_t * L_853 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1889_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_852);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_852, L_853);
		List_1_t628 * L_854 = V_0;
		Type_t * L_855 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1890_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_854);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_854, L_855);
		List_1_t628 * L_856 = V_0;
		Type_t * L_857 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1891_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_856);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_856, L_857);
		List_1_t628 * L_858 = V_0;
		Type_t * L_859 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1892_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_858);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_858, L_859);
		List_1_t628 * L_860 = V_0;
		Type_t * L_861 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1893_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_860);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_860, L_861);
		List_1_t628 * L_862 = V_0;
		Type_t * L_863 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1894_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_862);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_862, L_863);
		List_1_t628 * L_864 = V_0;
		Type_t * L_865 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1895_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_864);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_864, L_865);
		List_1_t628 * L_866 = V_0;
		Type_t * L_867 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1896_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_866);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_866, L_867);
		List_1_t628 * L_868 = V_0;
		Type_t * L_869 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1897_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_868);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_868, L_869);
		List_1_t628 * L_870 = V_0;
		Type_t * L_871 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1898_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_870);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_870, L_871);
		List_1_t628 * L_872 = V_0;
		Type_t * L_873 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1899_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_872);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_872, L_873);
		List_1_t628 * L_874 = V_0;
		Type_t * L_875 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1900_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_874);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_874, L_875);
		List_1_t628 * L_876 = V_0;
		Type_t * L_877 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1901_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_876);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_876, L_877);
		List_1_t628 * L_878 = V_0;
		Type_t * L_879 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1902_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_878);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_878, L_879);
		List_1_t628 * L_880 = V_0;
		Type_t * L_881 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1903_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_880);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_880, L_881);
		List_1_t628 * L_882 = V_0;
		Type_t * L_883 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1904_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_882);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_882, L_883);
		List_1_t628 * L_884 = V_0;
		Type_t * L_885 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1905_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_884);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_884, L_885);
		List_1_t628 * L_886 = V_0;
		Type_t * L_887 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1906_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_886);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_886, L_887);
		List_1_t628 * L_888 = V_0;
		Type_t * L_889 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1907_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_888);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_888, L_889);
		List_1_t628 * L_890 = V_0;
		Type_t * L_891 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1908_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_890);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_890, L_891);
		List_1_t628 * L_892 = V_0;
		Type_t * L_893 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1909_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_892);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_892, L_893);
		List_1_t628 * L_894 = V_0;
		Type_t * L_895 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1910_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_894);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_894, L_895);
		List_1_t628 * L_896 = V_0;
		Type_t * L_897 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1911_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_896);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_896, L_897);
		List_1_t628 * L_898 = V_0;
		Type_t * L_899 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1912_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_898);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_898, L_899);
		List_1_t628 * L_900 = V_0;
		Type_t * L_901 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1913_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_900);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_900, L_901);
		List_1_t628 * L_902 = V_0;
		Type_t * L_903 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1914_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_902);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_902, L_903);
		List_1_t628 * L_904 = V_0;
		Type_t * L_905 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1915_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_904);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_904, L_905);
		List_1_t628 * L_906 = V_0;
		Type_t * L_907 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1916_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_906);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_906, L_907);
		List_1_t628 * L_908 = V_0;
		Type_t * L_909 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1917_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_908);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_908, L_909);
		List_1_t628 * L_910 = V_0;
		Type_t * L_911 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1918_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_910);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_910, L_911);
		List_1_t628 * L_912 = V_0;
		Type_t * L_913 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1919_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_912);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_912, L_913);
		List_1_t628 * L_914 = V_0;
		Type_t * L_915 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1920_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_914);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_914, L_915);
		List_1_t628 * L_916 = V_0;
		Type_t * L_917 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1921_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_916);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_916, L_917);
		List_1_t628 * L_918 = V_0;
		Type_t * L_919 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1922_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_918);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_918, L_919);
		List_1_t628 * L_920 = V_0;
		Type_t * L_921 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1923_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_920);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_920, L_921);
		List_1_t628 * L_922 = V_0;
		Type_t * L_923 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1924_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_922);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_922, L_923);
		List_1_t628 * L_924 = V_0;
		Type_t * L_925 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1925_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_924);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_924, L_925);
		List_1_t628 * L_926 = V_0;
		Type_t * L_927 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1926_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_926);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_926, L_927);
		List_1_t628 * L_928 = V_0;
		Type_t * L_929 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1927_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_928);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_928, L_929);
		List_1_t628 * L_930 = V_0;
		Type_t * L_931 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1928_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_930);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_930, L_931);
		List_1_t628 * L_932 = V_0;
		Type_t * L_933 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1929_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_932);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_932, L_933);
		List_1_t628 * L_934 = V_0;
		Type_t * L_935 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1930_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_934);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_934, L_935);
		List_1_t628 * L_936 = V_0;
		Type_t * L_937 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1931_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_936);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_936, L_937);
		List_1_t628 * L_938 = V_0;
		Type_t * L_939 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1932_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_938);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_938, L_939);
		List_1_t628 * L_940 = V_0;
		Type_t * L_941 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1933_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_940);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_940, L_941);
		List_1_t628 * L_942 = V_0;
		Type_t * L_943 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1934_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_942);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_942, L_943);
		List_1_t628 * L_944 = V_0;
		Type_t * L_945 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1935_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_944);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_944, L_945);
		List_1_t628 * L_946 = V_0;
		Type_t * L_947 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1936_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_946);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_946, L_947);
		List_1_t628 * L_948 = V_0;
		Type_t * L_949 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1937_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_948);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_948, L_949);
		List_1_t628 * L_950 = V_0;
		Type_t * L_951 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1938_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_950);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_950, L_951);
		List_1_t628 * L_952 = V_0;
		Type_t * L_953 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1939_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_952);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_952, L_953);
		List_1_t628 * L_954 = V_0;
		Type_t * L_955 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1940_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_954);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_954, L_955);
		List_1_t628 * L_956 = V_0;
		Type_t * L_957 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1941_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_956);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_956, L_957);
		List_1_t628 * L_958 = V_0;
		Type_t * L_959 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1942_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_958);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_958, L_959);
		List_1_t628 * L_960 = V_0;
		Type_t * L_961 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1943_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_960);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_960, L_961);
		List_1_t628 * L_962 = V_0;
		Type_t * L_963 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1944_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_962);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_962, L_963);
		List_1_t628 * L_964 = V_0;
		Type_t * L_965 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1945_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_964);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_964, L_965);
		List_1_t628 * L_966 = V_0;
		Type_t * L_967 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1946_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_966);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_966, L_967);
		List_1_t628 * L_968 = V_0;
		Type_t * L_969 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1947_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_968);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_968, L_969);
		List_1_t628 * L_970 = V_0;
		Type_t * L_971 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1948_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_970);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_970, L_971);
		List_1_t628 * L_972 = V_0;
		Type_t * L_973 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1949_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_972);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_972, L_973);
		List_1_t628 * L_974 = V_0;
		Type_t * L_975 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1950_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_974);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_974, L_975);
		List_1_t628 * L_976 = V_0;
		Type_t * L_977 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1951_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_976);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_976, L_977);
		List_1_t628 * L_978 = V_0;
		Type_t * L_979 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1952_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_978);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_978, L_979);
		List_1_t628 * L_980 = V_0;
		Type_t * L_981 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1953_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_980);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_980, L_981);
		List_1_t628 * L_982 = V_0;
		Type_t * L_983 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1954_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_982);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_982, L_983);
		List_1_t628 * L_984 = V_0;
		Type_t * L_985 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1955_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_984);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_984, L_985);
		List_1_t628 * L_986 = V_0;
		Type_t * L_987 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1956_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_986);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_986, L_987);
		List_1_t628 * L_988 = V_0;
		Type_t * L_989 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1957_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_988);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_988, L_989);
		List_1_t628 * L_990 = V_0;
		Type_t * L_991 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1958_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_990);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_990, L_991);
		List_1_t628 * L_992 = V_0;
		Type_t * L_993 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1959_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_992);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_992, L_993);
		List_1_t628 * L_994 = V_0;
		Type_t * L_995 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1960_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_994);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_994, L_995);
		List_1_t628 * L_996 = V_0;
		Type_t * L_997 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1961_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_996);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_996, L_997);
		List_1_t628 * L_998 = V_0;
		Type_t * L_999 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1962_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_998);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_998, L_999);
		List_1_t628 * L_1000 = V_0;
		Type_t * L_1001 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1963_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1000);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1000, L_1001);
		List_1_t628 * L_1002 = V_0;
		Type_t * L_1003 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1964_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1002);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1002, L_1003);
		List_1_t628 * L_1004 = V_0;
		Type_t * L_1005 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1965_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1004);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1004, L_1005);
		List_1_t628 * L_1006 = V_0;
		Type_t * L_1007 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1966_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1006);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1006, L_1007);
		List_1_t628 * L_1008 = V_0;
		Type_t * L_1009 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1967_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1008);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1008, L_1009);
		List_1_t628 * L_1010 = V_0;
		Type_t * L_1011 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1968_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1010);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1010, L_1011);
		List_1_t628 * L_1012 = V_0;
		Type_t * L_1013 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1969_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1012);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1012, L_1013);
		List_1_t628 * L_1014 = V_0;
		Type_t * L_1015 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1970_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1014);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1014, L_1015);
		List_1_t628 * L_1016 = V_0;
		Type_t * L_1017 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1971_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1016);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1016, L_1017);
		List_1_t628 * L_1018 = V_0;
		Type_t * L_1019 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1972_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1018);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1018, L_1019);
		List_1_t628 * L_1020 = V_0;
		Type_t * L_1021 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1973_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1020);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1020, L_1021);
		List_1_t628 * L_1022 = V_0;
		Type_t * L_1023 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1974_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1022);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1022, L_1023);
		List_1_t628 * L_1024 = V_0;
		Type_t * L_1025 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1975_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1024);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1024, L_1025);
		List_1_t628 * L_1026 = V_0;
		Type_t * L_1027 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1976_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1026);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1026, L_1027);
		List_1_t628 * L_1028 = V_0;
		Type_t * L_1029 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1977_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1028);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1028, L_1029);
		List_1_t628 * L_1030 = V_0;
		Type_t * L_1031 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1978_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1030);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1030, L_1031);
		List_1_t628 * L_1032 = V_0;
		Type_t * L_1033 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1979_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1032);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1032, L_1033);
		List_1_t628 * L_1034 = V_0;
		Type_t * L_1035 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1980_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1034);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1034, L_1035);
		List_1_t628 * L_1036 = V_0;
		Type_t * L_1037 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1981_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1036);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1036, L_1037);
		List_1_t628 * L_1038 = V_0;
		Type_t * L_1039 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1982_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1038);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1038, L_1039);
		List_1_t628 * L_1040 = V_0;
		Type_t * L_1041 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1983_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1040);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1040, L_1041);
		List_1_t628 * L_1042 = V_0;
		Type_t * L_1043 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1984_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1042);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1042, L_1043);
		List_1_t628 * L_1044 = V_0;
		Type_t * L_1045 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1985_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1044);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1044, L_1045);
		List_1_t628 * L_1046 = V_0;
		Type_t * L_1047 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1986_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1046);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1046, L_1047);
		List_1_t628 * L_1048 = V_0;
		Type_t * L_1049 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1987_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1048);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1048, L_1049);
		List_1_t628 * L_1050 = V_0;
		Type_t * L_1051 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1988_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1050);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1050, L_1051);
		List_1_t628 * L_1052 = V_0;
		Type_t * L_1053 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1989_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1052);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1052, L_1053);
		List_1_t628 * L_1054 = V_0;
		Type_t * L_1055 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1990_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1054);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1054, L_1055);
		List_1_t628 * L_1056 = V_0;
		Type_t * L_1057 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1991_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1056);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1056, L_1057);
		List_1_t628 * L_1058 = V_0;
		Type_t * L_1059 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1992_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1058);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1058, L_1059);
		List_1_t628 * L_1060 = V_0;
		Type_t * L_1061 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1993_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1060);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1060, L_1061);
		List_1_t628 * L_1062 = V_0;
		Type_t * L_1063 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1994_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1062);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1062, L_1063);
		List_1_t628 * L_1064 = V_0;
		Type_t * L_1065 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1995_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1064);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1064, L_1065);
		List_1_t628 * L_1066 = V_0;
		Type_t * L_1067 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1996_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1066);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1066, L_1067);
		List_1_t628 * L_1068 = V_0;
		Type_t * L_1069 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1997_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1068);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1068, L_1069);
		List_1_t628 * L_1070 = V_0;
		Type_t * L_1071 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1998_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1070);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1070, L_1071);
		List_1_t628 * L_1072 = V_0;
		Type_t * L_1073 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t1999_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1072);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1072, L_1073);
		List_1_t628 * L_1074 = V_0;
		Type_t * L_1075 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2000_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1074);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1074, L_1075);
		List_1_t628 * L_1076 = V_0;
		Type_t * L_1077 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2001_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1076);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1076, L_1077);
		List_1_t628 * L_1078 = V_0;
		Type_t * L_1079 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2002_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1078);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1078, L_1079);
		List_1_t628 * L_1080 = V_0;
		Type_t * L_1081 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2003_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1080);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1080, L_1081);
		List_1_t628 * L_1082 = V_0;
		Type_t * L_1083 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2004_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1082);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1082, L_1083);
		List_1_t628 * L_1084 = V_0;
		Type_t * L_1085 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2005_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1084);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1084, L_1085);
		List_1_t628 * L_1086 = V_0;
		Type_t * L_1087 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2006_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1086);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1086, L_1087);
		List_1_t628 * L_1088 = V_0;
		Type_t * L_1089 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2007_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1088);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1088, L_1089);
		List_1_t628 * L_1090 = V_0;
		Type_t * L_1091 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2008_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1090);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1090, L_1091);
		List_1_t628 * L_1092 = V_0;
		Type_t * L_1093 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2009_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1092);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1092, L_1093);
		List_1_t628 * L_1094 = V_0;
		Type_t * L_1095 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2010_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1094);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1094, L_1095);
		List_1_t628 * L_1096 = V_0;
		Type_t * L_1097 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2009_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1096);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1096, L_1097);
		List_1_t628 * L_1098 = V_0;
		Type_t * L_1099 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2010_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1098);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1098, L_1099);
		List_1_t628 * L_1100 = V_0;
		Type_t * L_1101 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2011_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1100);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1100, L_1101);
		List_1_t628 * L_1102 = V_0;
		Type_t * L_1103 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2012_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1102);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1102, L_1103);
		List_1_t628 * L_1104 = V_0;
		Type_t * L_1105 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2013_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1104);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1104, L_1105);
		List_1_t628 * L_1106 = V_0;
		Type_t * L_1107 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2014_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1106);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1106, L_1107);
		List_1_t628 * L_1108 = V_0;
		Type_t * L_1109 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2015_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1108);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1108, L_1109);
		List_1_t628 * L_1110 = V_0;
		Type_t * L_1111 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2016_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1110);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1110, L_1111);
		List_1_t628 * L_1112 = V_0;
		Type_t * L_1113 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2017_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1112);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1112, L_1113);
		List_1_t628 * L_1114 = V_0;
		Type_t * L_1115 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2018_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1114);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1114, L_1115);
		List_1_t628 * L_1116 = V_0;
		Type_t * L_1117 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2019_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1116);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1116, L_1117);
		List_1_t628 * L_1118 = V_0;
		Type_t * L_1119 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2020_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1118);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1118, L_1119);
		List_1_t628 * L_1120 = V_0;
		Type_t * L_1121 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2021_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1120);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1120, L_1121);
		List_1_t628 * L_1122 = V_0;
		Type_t * L_1123 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2022_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1122);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1122, L_1123);
		List_1_t628 * L_1124 = V_0;
		Type_t * L_1125 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2023_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1124);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1124, L_1125);
		List_1_t628 * L_1126 = V_0;
		Type_t * L_1127 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2024_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1126);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1126, L_1127);
		List_1_t628 * L_1128 = V_0;
		Type_t * L_1129 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2025_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1128);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1128, L_1129);
		List_1_t628 * L_1130 = V_0;
		Type_t * L_1131 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2026_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1130);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1130, L_1131);
		List_1_t628 * L_1132 = V_0;
		Type_t * L_1133 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2027_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1132);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1132, L_1133);
		List_1_t628 * L_1134 = V_0;
		Type_t * L_1135 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2028_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1134);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1134, L_1135);
		List_1_t628 * L_1136 = V_0;
		Type_t * L_1137 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2029_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1136);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1136, L_1137);
		List_1_t628 * L_1138 = V_0;
		Type_t * L_1139 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2030_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1138);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1138, L_1139);
		List_1_t628 * L_1140 = V_0;
		Type_t * L_1141 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2031_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1140);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1140, L_1141);
		List_1_t628 * L_1142 = V_0;
		Type_t * L_1143 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2032_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1142);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1142, L_1143);
		List_1_t628 * L_1144 = V_0;
		Type_t * L_1145 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2033_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1144);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1144, L_1145);
		List_1_t628 * L_1146 = V_0;
		Type_t * L_1147 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2034_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1146);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1146, L_1147);
		List_1_t628 * L_1148 = V_0;
		Type_t * L_1149 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2035_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1148);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1148, L_1149);
		List_1_t628 * L_1150 = V_0;
		Type_t * L_1151 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2036_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1150);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1150, L_1151);
		List_1_t628 * L_1152 = V_0;
		Type_t * L_1153 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2037_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1152);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1152, L_1153);
		List_1_t628 * L_1154 = V_0;
		Type_t * L_1155 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2038_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1154);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1154, L_1155);
		List_1_t628 * L_1156 = V_0;
		Type_t * L_1157 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2039_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1156);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1156, L_1157);
		List_1_t628 * L_1158 = V_0;
		Type_t * L_1159 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2040_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1158);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1158, L_1159);
		List_1_t628 * L_1160 = V_0;
		Type_t * L_1161 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2041_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1160);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1160, L_1161);
		List_1_t628 * L_1162 = V_0;
		Type_t * L_1163 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2042_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1162);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1162, L_1163);
		List_1_t628 * L_1164 = V_0;
		Type_t * L_1165 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2043_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1164);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1164, L_1165);
		List_1_t628 * L_1166 = V_0;
		Type_t * L_1167 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2044_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1166);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1166, L_1167);
		List_1_t628 * L_1168 = V_0;
		Type_t * L_1169 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2045_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1168);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1168, L_1169);
		List_1_t628 * L_1170 = V_0;
		Type_t * L_1171 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2046_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1170);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1170, L_1171);
		List_1_t628 * L_1172 = V_0;
		Type_t * L_1173 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2047_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1172);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1172, L_1173);
		List_1_t628 * L_1174 = V_0;
		Type_t * L_1175 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2048_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1174);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1174, L_1175);
		List_1_t628 * L_1176 = V_0;
		Type_t * L_1177 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2049_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1176);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1176, L_1177);
		List_1_t628 * L_1178 = V_0;
		Type_t * L_1179 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2050_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1178);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1178, L_1179);
		List_1_t628 * L_1180 = V_0;
		Type_t * L_1181 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2051_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1180);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1180, L_1181);
		List_1_t628 * L_1182 = V_0;
		Type_t * L_1183 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2052_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1182);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1182, L_1183);
		List_1_t628 * L_1184 = V_0;
		Type_t * L_1185 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2053_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1184);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1184, L_1185);
		List_1_t628 * L_1186 = V_0;
		Type_t * L_1187 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2054_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1186);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1186, L_1187);
		List_1_t628 * L_1188 = V_0;
		Type_t * L_1189 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2055_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1188);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1188, L_1189);
		List_1_t628 * L_1190 = V_0;
		Type_t * L_1191 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2056_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1190);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1190, L_1191);
		List_1_t628 * L_1192 = V_0;
		Type_t * L_1193 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2057_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1192);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1192, L_1193);
		List_1_t628 * L_1194 = V_0;
		Type_t * L_1195 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2058_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1194);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1194, L_1195);
		List_1_t628 * L_1196 = V_0;
		Type_t * L_1197 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2059_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1196);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1196, L_1197);
		List_1_t628 * L_1198 = V_0;
		Type_t * L_1199 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2060_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1198);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1198, L_1199);
		List_1_t628 * L_1200 = V_0;
		Type_t * L_1201 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2061_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1200);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1200, L_1201);
		List_1_t628 * L_1202 = V_0;
		Type_t * L_1203 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2062_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1202);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1202, L_1203);
		List_1_t628 * L_1204 = V_0;
		Type_t * L_1205 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2063_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1204);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1204, L_1205);
		List_1_t628 * L_1206 = V_0;
		Type_t * L_1207 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2064_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1206);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1206, L_1207);
		List_1_t628 * L_1208 = V_0;
		Type_t * L_1209 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2065_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1208);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1208, L_1209);
		List_1_t628 * L_1210 = V_0;
		Type_t * L_1211 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2066_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1210);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1210, L_1211);
		List_1_t628 * L_1212 = V_0;
		Type_t * L_1213 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2067_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1212);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1212, L_1213);
		List_1_t628 * L_1214 = V_0;
		Type_t * L_1215 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2068_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1214);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1214, L_1215);
		List_1_t628 * L_1216 = V_0;
		Type_t * L_1217 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2069_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1216);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1216, L_1217);
		List_1_t628 * L_1218 = V_0;
		Type_t * L_1219 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2070_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1218);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1218, L_1219);
		List_1_t628 * L_1220 = V_0;
		Type_t * L_1221 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2071_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1220);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1220, L_1221);
		List_1_t628 * L_1222 = V_0;
		Type_t * L_1223 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2072_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1222);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1222, L_1223);
		List_1_t628 * L_1224 = V_0;
		Type_t * L_1225 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2073_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1224);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1224, L_1225);
		List_1_t628 * L_1226 = V_0;
		Type_t * L_1227 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2074_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1226);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1226, L_1227);
		List_1_t628 * L_1228 = V_0;
		Type_t * L_1229 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2075_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1228);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1228, L_1229);
		List_1_t628 * L_1230 = V_0;
		Type_t * L_1231 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2076_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1230);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1230, L_1231);
		List_1_t628 * L_1232 = V_0;
		Type_t * L_1233 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2077_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1232);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1232, L_1233);
		List_1_t628 * L_1234 = V_0;
		Type_t * L_1235 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(FlexibleDictionaryWrapper_2_t2078_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1234);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_1234, L_1235);
		List_1_t628 * L_1236 = V_0;
		return L_1236;
	}
}
// UnityEngine.WWW Parse.PlatformHooks::GenerateWWWInstance(System.String,System.Byte[],System.Collections.Hashtable)
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2079_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3401_MethodInfo_var;
extern "C" WWW_t265 * PlatformHooks_GenerateWWWInstance_m6859 (Object_t * __this /* static, unused */, String_t* ___uri, ByteU5BU5D_t66* ___bytes, Hashtable_t1267 * ___headerTable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		DictionaryEntry_t2079_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3208);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		Dictionary_2__ctor_m3401_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	DictionaryEntry_t2079  V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t122 * L_0 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3401(L_0, /*hidden argument*/Dictionary_2__ctor_m3401_MethodInfo_var);
		V_0 = L_0;
		Hashtable_t1267 * L_1 = ___headerTable;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_1);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_000f:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_3);
			V_1 = ((*(DictionaryEntry_t2079 *)((DictionaryEntry_t2079 *)UnBox (L_4, DictionaryEntry_t2079_il2cpp_TypeInfo_var))));
			Dictionary_2_t122 * L_5 = V_0;
			Object_t * L_6 = DictionaryEntry_get_Key_m7452((&V_1), /*hidden argument*/NULL);
			Object_t * L_7 = DictionaryEntry_get_Value_m7453((&V_1), /*hidden argument*/NULL);
			NullCheck(L_5);
			VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_5, ((String_t*)IsInst(L_6, String_t_il2cpp_TypeInfo_var)), ((String_t*)IsInst(L_7, String_t_il2cpp_TypeInfo_var)));
		}

IL_0039:
		{
			Object_t * L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_000f;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			Object_t * L_10 = V_2;
			V_3 = ((Object_t *)IsInst(L_10, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_11 = V_3;
			if (!L_11)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_12);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0054:
	{
		String_t* L_13 = ___uri;
		ByteU5BU5D_t66* L_14 = ___bytes;
		Dictionary_2_t122 * L_15 = V_0;
		WWW_t265 * L_16 = (WWW_t265 *)il2cpp_codegen_object_new (WWW_t265_il2cpp_TypeInfo_var);
		WWW__ctor_m3610(L_16, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void Parse.PlatformHooks::RegisterNetworkRequest(UnityEngine.WWW,System.Action`1<UnityEngine.WWW>)
extern TypeInfo* U3CU3Ec__DisplayClass20_t1260_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass20_U3CRegisterNetworkRequestU3Eb__1f_m6819_MethodInfo_var;
extern "C" void PlatformHooks_RegisterNetworkRequest_m6860 (Object_t * __this /* static, unused */, WWW_t265 * ___www, Action_1_t1259 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass20_t1260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3209);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		U3CU3Ec__DisplayClass20_U3CRegisterNetworkRequestU3Eb__1f_m6819_MethodInfo_var = il2cpp_codegen_method_info_from_index(1336);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass20_t1260 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass20_t1260 * L_0 = (U3CU3Ec__DisplayClass20_t1260 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass20_t1260_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass20__ctor_m6818(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_t1260 * L_1 = V_0;
		WWW_t265 * L_2 = ___www;
		NullCheck(L_1);
		L_1->___www_0 = L_2;
		U3CU3Ec__DisplayClass20_t1260 * L_3 = V_0;
		Action_1_t1259 * L_4 = ___action;
		NullCheck(L_3);
		L_3->___action_1 = L_4;
		U3CU3Ec__DisplayClass20_t1260 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)U3CU3Ec__DisplayClass20_U3CRegisterNetworkRequestU3Eb__1f_m6819_MethodInfo_var };
		Action_t143 * L_7 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_7, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		PlatformHooks_RunOnMainThread_m6866(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.PlatformHooks::RegisterDeviceTokenRequest(System.Action`1<System.Byte[]>)
extern TypeInfo* U3CU3Ec__DisplayClass24_t1262_il2cpp_TypeInfo_var;
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass24_U3CRegisterDeviceTokenRequestU3Eb__22_m6821_MethodInfo_var;
extern "C" void PlatformHooks_RegisterDeviceTokenRequest_m6861 (Object_t * __this /* static, unused */, Action_1_t1186 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass24_t1262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		U3CU3Ec__DisplayClass24_U3CRegisterDeviceTokenRequestU3Eb__22_m6821_MethodInfo_var = il2cpp_codegen_method_info_from_index(1337);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	U3CU3Ec__DisplayClass24_t1262 * V_1 = {0};
	{
		U3CU3Ec__DisplayClass24_t1262 * L_0 = (U3CU3Ec__DisplayClass24_t1262 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass24_t1262_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass24__ctor_m6820(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		U3CU3Ec__DisplayClass24_t1262 * L_1 = V_1;
		Action_1_t1186 * L_2 = ___action;
		NullCheck(L_1);
		L_1->___action_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Type_t * L_3 = PlatformHooks_GetTypeFromUnityEngine_m6856(NULL /*static, unused*/, (String_t*) &_stringLiteral1358, /*hidden argument*/NULL);
		V_0 = L_3;
		Type_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Type_t * L_5 = PlatformHooks_GetTypeFromUnityEngine_m6856(NULL /*static, unused*/, (String_t*) &_stringLiteral1359, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		U3CU3Ec__DisplayClass24_t1262 * L_6 = V_1;
		NullCheck(L_6);
		L_6->___deviceTokenProperty_0 = (PropertyInfo_t *)NULL;
		Type_t * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		U3CU3Ec__DisplayClass24_t1262 * L_8 = V_1;
		Type_t * L_9 = V_0;
		NullCheck(L_9);
		PropertyInfo_t * L_10 = (PropertyInfo_t *)VirtFuncInvoker1< PropertyInfo_t *, String_t* >::Invoke(57 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String) */, L_9, (String_t*) &_stringLiteral1675);
		NullCheck(L_8);
		L_8->___deviceTokenProperty_0 = L_10;
	}

IL_0041:
	{
		U3CU3Ec__DisplayClass24_t1262 * L_11 = V_1;
		IntPtr_t L_12 = { (void*)U3CU3Ec__DisplayClass24_U3CRegisterDeviceTokenRequestU3Eb__22_m6821_MethodInfo_var };
		Action_t143 * L_13 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_13, L_11, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		PlatformHooks_RunOnMainThread_m6866(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.PlatformHooks::RegisteriOSPushNotificationListener(System.Action`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern TypeInfo* U3CU3Ec__DisplayClass28_t1263_il2cpp_TypeInfo_var;
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass28_U3CRegisteriOSPushNotificationListenerU3Eb__27_m6824_MethodInfo_var;
extern "C" void PlatformHooks_RegisteriOSPushNotificationListener_m6862 (Object_t * __this /* static, unused */, Action_1_t1261 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass28_t1263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3210);
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		U3CU3Ec__DisplayClass28_U3CRegisteriOSPushNotificationListenerU3Eb__27_m6824_MethodInfo_var = il2cpp_codegen_method_info_from_index(1338);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	U3CU3Ec__DisplayClass28_t1263 * V_2 = {0};
	{
		U3CU3Ec__DisplayClass28_t1263 * L_0 = (U3CU3Ec__DisplayClass28_t1263 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass28_t1263_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass28__ctor_m6823(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		U3CU3Ec__DisplayClass28_t1263 * L_1 = V_2;
		Action_1_t1261 * L_2 = ___action;
		NullCheck(L_1);
		L_1->___action_4 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Type_t * L_3 = PlatformHooks_GetTypeFromUnityEngine_m6856(NULL /*static, unused*/, (String_t*) &_stringLiteral1358, /*hidden argument*/NULL);
		V_0 = L_3;
		Type_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Type_t * L_5 = PlatformHooks_GetTypeFromUnityEngine_m6856(NULL /*static, unused*/, (String_t*) &_stringLiteral1359, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		U3CU3Ec__DisplayClass28_t1263 * L_6 = V_2;
		NullCheck(L_6);
		L_6->___remoteNotificationCountProperty_0 = (PropertyInfo_t *)NULL;
		Type_t * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		U3CU3Ec__DisplayClass28_t1263 * L_8 = V_2;
		Type_t * L_9 = V_0;
		NullCheck(L_9);
		PropertyInfo_t * L_10 = (PropertyInfo_t *)VirtFuncInvoker1< PropertyInfo_t *, String_t* >::Invoke(57 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String) */, L_9, (String_t*) &_stringLiteral1676);
		NullCheck(L_8);
		L_8->___remoteNotificationCountProperty_0 = L_10;
	}

IL_0041:
	{
		U3CU3Ec__DisplayClass28_t1263 * L_11 = V_2;
		NullCheck(L_11);
		L_11->___clearRemoteNotificationsMethod_1 = (MethodInfo_t *)NULL;
		U3CU3Ec__DisplayClass28_t1263 * L_12 = V_2;
		NullCheck(L_12);
		L_12->___remoteNotificationsProperty_2 = (PropertyInfo_t *)NULL;
		Type_t * L_13 = V_0;
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		U3CU3Ec__DisplayClass28_t1263 * L_14 = V_2;
		Type_t * L_15 = V_0;
		NullCheck(L_15);
		MethodInfo_t * L_16 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_15, (String_t*) &_stringLiteral1677);
		NullCheck(L_14);
		L_14->___clearRemoteNotificationsMethod_1 = L_16;
		U3CU3Ec__DisplayClass28_t1263 * L_17 = V_2;
		Type_t * L_18 = V_0;
		NullCheck(L_18);
		PropertyInfo_t * L_19 = (PropertyInfo_t *)VirtFuncInvoker1< PropertyInfo_t *, String_t* >::Invoke(57 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String) */, L_18, (String_t*) &_stringLiteral1678);
		NullCheck(L_17);
		L_17->___remoteNotificationsProperty_2 = L_19;
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Type_t * L_20 = PlatformHooks_GetTypeFromUnityEngine_m6856(NULL /*static, unused*/, (String_t*) &_stringLiteral1679, /*hidden argument*/NULL);
		V_1 = L_20;
		Type_t * L_21 = V_1;
		if (L_21)
		{
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Type_t * L_22 = PlatformHooks_GetTypeFromUnityEngine_m6856(NULL /*static, unused*/, (String_t*) &_stringLiteral1680, /*hidden argument*/NULL);
		V_1 = L_22;
	}

IL_008d:
	{
		U3CU3Ec__DisplayClass28_t1263 * L_23 = V_2;
		NullCheck(L_23);
		L_23->___userInfoProperty_3 = (PropertyInfo_t *)NULL;
		Type_t * L_24 = V_1;
		if (!L_24)
		{
			goto IL_00a8;
		}
	}
	{
		U3CU3Ec__DisplayClass28_t1263 * L_25 = V_2;
		Type_t * L_26 = V_1;
		NullCheck(L_26);
		PropertyInfo_t * L_27 = (PropertyInfo_t *)VirtFuncInvoker1< PropertyInfo_t *, String_t* >::Invoke(57 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String) */, L_26, (String_t*) &_stringLiteral1681);
		NullCheck(L_25);
		L_25->___userInfoProperty_3 = L_27;
	}

IL_00a8:
	{
		U3CU3Ec__DisplayClass28_t1263 * L_28 = V_2;
		IntPtr_t L_29 = { (void*)U3CU3Ec__DisplayClass28_U3CRegisteriOSPushNotificationListenerU3Eb__27_m6824_MethodInfo_var };
		Action_t143 * L_30 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_30, L_28, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		PlatformHooks_RunOnMainThread_m6866(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1312 * PlatformHooks_RequestAsync_m6863 (PlatformHooks_t1276 * __this, Uri_t699 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t51 * ___data, String_t* ___contentType, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method)
{
	{
		Uri_t699 * L_0 = ___uri;
		String_t* L_1 = ___method;
		Object_t* L_2 = ___headers;
		Stream_t51 * L_3 = ___data;
		String_t* L_4 = ___contentType;
		CancellationToken_t1101  L_5 = ___cancellationToken;
		Task_1_t1312 * L_6 = PlatformHooks_RequestAsync_m6865(__this, L_0, L_1, L_2, L_3, L_4, (Object_t*)NULL, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::UploadAsync(System.Uri,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_1_t1312 * PlatformHooks_UploadAsync_m6864 (PlatformHooks_t1276 * __this, Uri_t699 * ___uri, Object_t* ___headers, Stream_t51 * ___data, Object_t* ___progress, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method)
{
	{
		Uri_t699 * L_0 = ___uri;
		Object_t* L_1 = ___headers;
		Stream_t51 * L_2 = ___data;
		Object_t* L_3 = ___progress;
		CancellationToken_t1101  L_4 = ___cancellationToken;
		Task_1_t1312 * L_5 = PlatformHooks_RequestAsync_m6865(__this, L_0, (String_t*) &_stringLiteral931, L_1, L_2, (String_t*)NULL, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern TypeInfo* U3CU3Ec__DisplayClass38_t1264_il2cpp_TypeInfo_var;
extern TypeInfo* TaskCompletionSource_1_t1266_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t1267_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t2080_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2081_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* U3CU3Ec__DisplayClass3a_t1268_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t681_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t65_il2cpp_TypeInfo_var;
extern TypeInfo* StreamReader_t1098_il2cpp_TypeInfo_var;
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1148_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t1451_il2cpp_TypeInfo_var;
extern TypeInfo* U3CU3Ec__DisplayClass3c_t1269_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t1372_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t1274_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t1489_il2cpp_TypeInfo_var;
extern const MethodInfo* TaskCompletionSource_1__ctor_m7454_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__2c_m6829_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3614_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3615_MethodInfo_var;
extern const MethodInfo* Task_FromResult_TisString_t_m7327_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass3a_U3CRequestAsyncU3Eb__2d_m6834_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m7333_MethodInfo_var;
extern const MethodInfo* InternalExtensions_OnSuccess_TisString_t_m7326_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass3c_U3CRequestAsyncU3Eb__2e_m6836_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m6966_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__2f_m6830_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m7018_MethodInfo_var;
extern const MethodInfo* Task_ContinueWith_TisTask_t1148_m7181_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__30_m6831_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_get_Task_m7426_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CRequestAsyncU3Eb__34_m6886_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m7456_MethodInfo_var;
extern const MethodInfo* Task_1_ContinueWith_TisTask_1_t1333_m7430_MethodInfo_var;
extern const MethodInfo* TaskExtensions_Unwrap_TisObject_t_m7170_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__33_m6832_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m7457_MethodInfo_var;
extern const MethodInfo* Task_1_ContinueWith_TisTask_1_t1312_m7431_MethodInfo_var;
extern const MethodInfo* TaskExtensions_Unwrap_TisTuple_2_t1365_m7432_MethodInfo_var;
extern "C" Task_1_t1312 * PlatformHooks_RequestAsync_m6865 (PlatformHooks_t1276 * __this, Uri_t699 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t51 * ___data, String_t* ___contentType, Object_t* ___progress, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass38_t1264_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3211);
		TaskCompletionSource_1_t1266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3212);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Hashtable_t1267_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3213);
		IEnumerable_1_t2080_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3214);
		IEnumerator_1_t2081_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3215);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		U3CU3Ec__DisplayClass3a_t1268_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3216);
		Encoding_t681_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		MemoryStream_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		StreamReader_t1098_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		Task_t1148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		Action_1_t1451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2521);
		U3CU3Ec__DisplayClass3c_t1269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3217);
		Action_1_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2301);
		Func_2_t1372_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2328);
		Func_2_t1274_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3218);
		Func_2_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3219);
		TaskCompletionSource_1__ctor_m7454_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484987);
		U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__2c_m6829_MethodInfo_var = il2cpp_codegen_method_info_from_index(1340);
		KeyValuePair_2_get_Key_m3614_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		KeyValuePair_2_get_Value_m3615_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Task_FromResult_TisString_t_m7327_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484874);
		U3CU3Ec__DisplayClass3a_U3CRequestAsyncU3Eb__2d_m6834_MethodInfo_var = il2cpp_codegen_method_info_from_index(1341);
		Action_1__ctor_m7333_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484869);
		InternalExtensions_OnSuccess_TisString_t_m7326_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484870);
		U3CU3Ec__DisplayClass3c_U3CRequestAsyncU3Eb__2e_m6836_MethodInfo_var = il2cpp_codegen_method_info_from_index(1342);
		Action_1__ctor_m6966_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484469);
		U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__2f_m6830_MethodInfo_var = il2cpp_codegen_method_info_from_index(1343);
		Func_2__ctor_m7018_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484510);
		Task_ContinueWith_TisTask_t1148_m7181_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484713);
		U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__30_m6831_MethodInfo_var = il2cpp_codegen_method_info_from_index(1344);
		TaskCompletionSource_1_get_Task_m7426_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484966);
		PlatformHooks_U3CRequestAsyncU3Eb__34_m6886_MethodInfo_var = il2cpp_codegen_method_info_from_index(1345);
		Func_2__ctor_m7456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484994);
		Task_1_ContinueWith_TisTask_1_t1333_m7430_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484995);
		TaskExtensions_Unwrap_TisObject_t_m7170_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484996);
		U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__33_m6832_MethodInfo_var = il2cpp_codegen_method_info_from_index(1349);
		Func_2__ctor_m7457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484998);
		Task_1_ContinueWith_TisTask_1_t1312_m7431_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484999);
		TaskExtensions_Unwrap_TisTuple_2_t1365_m7432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485000);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2_t302  V_0 = {0};
	Task_t1148 * V_1 = {0};
	StreamReader_t1098 * V_2 = {0};
	Task_1_t1311 * V_3 = {0};
	U3CU3Ec__DisplayClass3a_t1268 * V_4 = {0};
	U3CU3Ec__DisplayClass3c_t1269 * V_5 = {0};
	U3CU3Ec__DisplayClass38_t1264 * V_6 = {0};
	Object_t* V_7 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Stream_t51 * G_B16_0 = {0};
	Stream_t51 * G_B15_0 = {0};
	String_t* G_B22_0 = {0};
	String_t* G_B22_1 = {0};
	Hashtable_t1267 * G_B22_2 = {0};
	String_t* G_B21_0 = {0};
	String_t* G_B21_1 = {0};
	Hashtable_t1267 * G_B21_2 = {0};
	Task_1_t1312 * G_B25_0 = {0};
	Task_1_t1312 * G_B24_0 = {0};
	{
		U3CU3Ec__DisplayClass38_t1264 * L_0 = (U3CU3Ec__DisplayClass38_t1264 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass38_t1264_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass38__ctor_m6828(L_0, /*hidden argument*/NULL);
		V_6 = L_0;
		U3CU3Ec__DisplayClass38_t1264 * L_1 = V_6;
		Uri_t699 * L_2 = ___uri;
		NullCheck(L_1);
		L_1->___uri_4 = L_2;
		U3CU3Ec__DisplayClass38_t1264 * L_3 = V_6;
		String_t* L_4 = ___method;
		NullCheck(L_3);
		L_3->___method_5 = L_4;
		U3CU3Ec__DisplayClass38_t1264 * L_5 = V_6;
		Object_t* L_6 = ___progress;
		NullCheck(L_5);
		L_5->___progress_6 = L_6;
		U3CU3Ec__DisplayClass38_t1264 * L_7 = V_6;
		CancellationToken_t1101  L_8 = ___cancellationToken;
		NullCheck(L_7);
		L_7->___cancellationToken_7 = L_8;
		U3CU3Ec__DisplayClass38_t1264 * L_9 = V_6;
		TaskCompletionSource_1_t1266 * L_10 = (TaskCompletionSource_1_t1266 *)il2cpp_codegen_object_new (TaskCompletionSource_1_t1266_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m7454(L_10, /*hidden argument*/TaskCompletionSource_1__ctor_m7454_MethodInfo_var);
		NullCheck(L_9);
		L_9->___tcs_0 = L_10;
		U3CU3Ec__DisplayClass38_t1264 * L_11 = V_6;
		NullCheck(L_11);
		CancellationToken_t1101 * L_12 = &(L_11->___cancellationToken_7);
		U3CU3Ec__DisplayClass38_t1264 * L_13 = V_6;
		IntPtr_t L_14 = { (void*)U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__2c_m6829_MethodInfo_var };
		Action_t143 * L_15 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3464(L_15, L_13, L_14, /*hidden argument*/NULL);
		CancellationToken_Register_m6898(L_12, L_15, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_t1264 * L_16 = V_6;
		NullCheck(L_16);
		L_16->___bytes_1 = (ByteU5BU5D_t66*)NULL;
		U3CU3Ec__DisplayClass38_t1264 * L_17 = V_6;
		Hashtable_t1267 * L_18 = (Hashtable_t1267 *)il2cpp_codegen_object_new (Hashtable_t1267_il2cpp_TypeInfo_var);
		Hashtable__ctor_m7455(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->___headerTable_2 = L_18;
		Object_t* L_19 = ___headers;
		if (!L_19)
		{
			goto IL_00a9;
		}
	}
	{
		Object_t* L_20 = ___headers;
		NullCheck(L_20);
		Object_t* L_21 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t2080_il2cpp_TypeInfo_var, L_20);
		V_7 = L_21;
	}

IL_006e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0092;
		}

IL_0070:
		{
			Object_t* L_22 = V_7;
			NullCheck(L_22);
			KeyValuePair_2_t302  L_23 = (KeyValuePair_2_t302 )InterfaceFuncInvoker0< KeyValuePair_2_t302  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t2081_il2cpp_TypeInfo_var, L_22);
			V_0 = L_23;
			U3CU3Ec__DisplayClass38_t1264 * L_24 = V_6;
			NullCheck(L_24);
			Hashtable_t1267 * L_25 = (L_24->___headerTable_2);
			String_t* L_26 = KeyValuePair_2_get_Key_m3614((&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m3614_MethodInfo_var);
			String_t* L_27 = KeyValuePair_2_get_Value_m3615((&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m3615_MethodInfo_var);
			NullCheck(L_25);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_25, L_26, L_27);
		}

IL_0092:
		{
			Object_t* L_28 = V_7;
			NullCheck(L_28);
			bool L_29 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_0070;
			}
		}

IL_009b:
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
		{
			Object_t* L_30 = V_7;
			if (!L_30)
			{
				goto IL_00a8;
			}
		}

IL_00a1:
		{
			Object_t* L_31 = V_7;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_31);
		}

IL_00a8:
		{
			IL2CPP_END_FINALLY(157)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xA9, IL_00a9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a9:
	{
		String_t* L_32 = ___contentType;
		if (L_32)
		{
			goto IL_00d8;
		}
	}
	{
		U3CU3Ec__DisplayClass38_t1264 * L_33 = V_6;
		NullCheck(L_33);
		Hashtable_t1267 * L_34 = (L_33->___headerTable_2);
		NullCheck(L_34);
		Object_t * L_35 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_34, (String_t*) &_stringLiteral602);
		if (!L_35)
		{
			goto IL_00d8;
		}
	}
	{
		U3CU3Ec__DisplayClass38_t1264 * L_36 = V_6;
		NullCheck(L_36);
		Hashtable_t1267 * L_37 = (L_36->___headerTable_2);
		NullCheck(L_37);
		Object_t * L_38 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_37, (String_t*) &_stringLiteral602);
		NullCheck(L_38);
		String_t* L_39 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		___contentType = L_39;
	}

IL_00d8:
	{
		U3CU3Ec__DisplayClass38_t1264 * L_40 = V_6;
		NullCheck(L_40);
		L_40->___toDisposeAfterReading_3 = (Object_t *)NULL;
		U3CU3Ec__DisplayClass38_t1264 * L_41 = V_6;
		NullCheck(L_41);
		String_t* L_42 = (L_41->___method_5);
		NullCheck(L_42);
		bool L_43 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_42, (String_t*) &_stringLiteral931);
		if (!L_43)
		{
			goto IL_00f7;
		}
	}
	{
		Stream_t51 * L_44 = ___data;
		if (L_44)
		{
			goto IL_0171;
		}
	}

IL_00f7:
	{
		U3CU3Ec__DisplayClass3a_t1268 * L_45 = (U3CU3Ec__DisplayClass3a_t1268 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass3a_t1268_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3a__ctor_m6833(L_45, /*hidden argument*/NULL);
		V_4 = L_45;
		U3CU3Ec__DisplayClass3a_t1268 * L_46 = V_4;
		U3CU3Ec__DisplayClass38_t1264 * L_47 = V_6;
		NullCheck(L_46);
		L_46->___CSU24U3CU3E8__locals39_0 = L_47;
		U3CU3Ec__DisplayClass3a_t1268 * L_48 = V_4;
		Stream_t51 * L_49 = ___data;
		NullCheck(L_48);
		L_48->___noBody_1 = ((((Object_t*)(Stream_t51 *)L_49) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Stream_t51 * L_50 = ___data;
		Stream_t51 * L_51 = L_50;
		G_B15_0 = L_51;
		if (L_51)
		{
			G_B16_0 = L_51;
			goto IL_012d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t681_il2cpp_TypeInfo_var);
		Encoding_t681 * L_52 = Encoding_get_UTF8_m3543(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_52);
		ByteU5BU5D_t66* L_53 = (ByteU5BU5D_t66*)VirtFuncInvoker1< ByteU5BU5D_t66*, String_t* >::Invoke(9 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_52, (String_t*) &_stringLiteral174);
		MemoryStream_t65 * L_54 = (MemoryStream_t65 *)il2cpp_codegen_object_new (MemoryStream_t65_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m430(L_54, L_53, /*hidden argument*/NULL);
		G_B16_0 = ((Stream_t51 *)(L_54));
	}

IL_012d:
	{
		___data = G_B16_0;
		Stream_t51 * L_55 = ___data;
		StreamReader_t1098 * L_56 = (StreamReader_t1098 *)il2cpp_codegen_object_new (StreamReader_t1098_il2cpp_TypeInfo_var);
		StreamReader__ctor_m7416(L_56, L_55, /*hidden argument*/NULL);
		V_2 = L_56;
		U3CU3Ec__DisplayClass38_t1264 * L_57 = V_6;
		StreamReader_t1098 * L_58 = V_2;
		NullCheck(L_57);
		L_57->___toDisposeAfterReading_3 = L_58;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		bool L_59 = PlatformHooks_get_IsCompiledByIL2CPP_m6850(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_0154;
		}
	}
	{
		StreamReader_t1098 * L_60 = V_2;
		NullCheck(L_60);
		String_t* L_61 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_60);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
		Task_1_t1311 * L_62 = Task_FromResult_TisString_t_m7327(NULL /*static, unused*/, L_61, /*hidden argument*/Task_FromResult_TisString_t_m7327_MethodInfo_var);
		V_3 = L_62;
		goto IL_015b;
	}

IL_0154:
	{
		StreamReader_t1098 * L_63 = V_2;
		Task_1_t1311 * L_64 = MissingExtensions_ReadToEndAsync_m6068(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		V_3 = L_64;
	}

IL_015b:
	{
		Task_1_t1311 * L_65 = V_3;
		U3CU3Ec__DisplayClass3a_t1268 * L_66 = V_4;
		IntPtr_t L_67 = { (void*)U3CU3Ec__DisplayClass3a_U3CRequestAsyncU3Eb__2d_m6834_MethodInfo_var };
		Action_1_t1451 * L_68 = (Action_1_t1451 *)il2cpp_codegen_object_new (Action_1_t1451_il2cpp_TypeInfo_var);
		Action_1__ctor_m7333(L_68, L_66, L_67, /*hidden argument*/Action_1__ctor_m7333_MethodInfo_var);
		Task_t1148 * L_69 = InternalExtensions_OnSuccess_TisString_t_m7326(NULL /*static, unused*/, L_65, L_68, /*hidden argument*/InternalExtensions_OnSuccess_TisString_t_m7326_MethodInfo_var);
		V_1 = L_69;
		goto IL_01d8;
	}

IL_0171:
	{
		U3CU3Ec__DisplayClass3c_t1269 * L_70 = (U3CU3Ec__DisplayClass3c_t1269 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass3c_t1269_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3c__ctor_m6835(L_70, /*hidden argument*/NULL);
		V_5 = L_70;
		U3CU3Ec__DisplayClass3c_t1269 * L_71 = V_5;
		U3CU3Ec__DisplayClass38_t1264 * L_72 = V_6;
		NullCheck(L_71);
		L_71->___CSU24U3CU3E8__locals39_0 = L_72;
		U3CU3Ec__DisplayClass38_t1264 * L_73 = V_6;
		NullCheck(L_73);
		Hashtable_t1267 * L_74 = (L_73->___headerTable_2);
		String_t* L_75 = ___contentType;
		String_t* L_76 = L_75;
		G_B21_0 = L_76;
		G_B21_1 = (String_t*) &_stringLiteral602;
		G_B21_2 = L_74;
		if (L_76)
		{
			G_B22_0 = L_76;
			G_B22_1 = (String_t*) &_stringLiteral602;
			G_B22_2 = L_74;
			goto IL_0198;
		}
	}
	{
		G_B22_0 = (String_t*) &_stringLiteral1289;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
	}

IL_0198:
	{
		NullCheck(G_B22_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, G_B22_2, G_B22_1, G_B22_0);
		U3CU3Ec__DisplayClass3c_t1269 * L_77 = V_5;
		MemoryStream_t65 * L_78 = (MemoryStream_t65 *)il2cpp_codegen_object_new (MemoryStream_t65_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m425(L_78, /*hidden argument*/NULL);
		NullCheck(L_77);
		L_77->___ms_1 = L_78;
		U3CU3Ec__DisplayClass38_t1264 * L_79 = V_6;
		U3CU3Ec__DisplayClass3c_t1269 * L_80 = V_5;
		NullCheck(L_80);
		MemoryStream_t65 * L_81 = (L_80->___ms_1);
		NullCheck(L_79);
		L_79->___toDisposeAfterReading_3 = L_81;
		Stream_t51 * L_82 = ___data;
		U3CU3Ec__DisplayClass3c_t1269 * L_83 = V_5;
		NullCheck(L_83);
		MemoryStream_t65 * L_84 = (L_83->___ms_1);
		Task_t1148 * L_85 = MissingExtensions_CopyToAsync_m6069(NULL /*static, unused*/, L_82, L_84, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass3c_t1269 * L_86 = V_5;
		IntPtr_t L_87 = { (void*)U3CU3Ec__DisplayClass3c_U3CRequestAsyncU3Eb__2e_m6836_MethodInfo_var };
		Action_1_t1109 * L_88 = (Action_1_t1109 *)il2cpp_codegen_object_new (Action_1_t1109_il2cpp_TypeInfo_var);
		Action_1__ctor_m6966(L_88, L_86, L_87, /*hidden argument*/Action_1__ctor_m6966_MethodInfo_var);
		Task_t1148 * L_89 = InternalExtensions_OnSuccess_m6109(NULL /*static, unused*/, L_85, L_88, /*hidden argument*/NULL);
		V_1 = L_89;
	}

IL_01d8:
	{
		Task_t1148 * L_90 = V_1;
		U3CU3Ec__DisplayClass38_t1264 * L_91 = V_6;
		IntPtr_t L_92 = { (void*)U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__2f_m6830_MethodInfo_var };
		Func_2_t1372 * L_93 = (Func_2_t1372 *)il2cpp_codegen_object_new (Func_2_t1372_il2cpp_TypeInfo_var);
		Func_2__ctor_m7018(L_93, L_91, L_92, /*hidden argument*/Func_2__ctor_m7018_MethodInfo_var);
		NullCheck(L_90);
		Task_1_t1297 * L_94 = Task_ContinueWith_TisTask_t1148_m7181(L_90, L_93, /*hidden argument*/Task_ContinueWith_TisTask_t1148_m7181_MethodInfo_var);
		Task_t1148 * L_95 = TaskExtensions_Unwrap_m6943(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_t1264 * L_96 = V_6;
		IntPtr_t L_97 = { (void*)U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__30_m6831_MethodInfo_var };
		Action_1_t1109 * L_98 = (Action_1_t1109 *)il2cpp_codegen_object_new (Action_1_t1109_il2cpp_TypeInfo_var);
		Action_1__ctor_m6966(L_98, L_96, L_97, /*hidden argument*/Action_1__ctor_m6966_MethodInfo_var);
		InternalExtensions_OnSuccess_m6109(NULL /*static, unused*/, L_95, L_98, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_t1264 * L_99 = V_6;
		NullCheck(L_99);
		TaskCompletionSource_1_t1266 * L_100 = (L_99->___tcs_0);
		NullCheck(L_100);
		Task_1_t1312 * L_101 = TaskCompletionSource_1_get_Task_m7426(L_100, /*hidden argument*/TaskCompletionSource_1_get_Task_m7426_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Func_2_t1274 * L_102 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_22;
		G_B24_0 = L_101;
		if (L_102)
		{
			G_B25_0 = L_101;
			goto IL_0227;
		}
	}
	{
		IntPtr_t L_103 = { (void*)PlatformHooks_U3CRequestAsyncU3Eb__34_m6886_MethodInfo_var };
		Func_2_t1274 * L_104 = (Func_2_t1274 *)il2cpp_codegen_object_new (Func_2_t1274_il2cpp_TypeInfo_var);
		Func_2__ctor_m7456(L_104, NULL, L_103, /*hidden argument*/Func_2__ctor_m7456_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_22 = L_104;
		G_B25_0 = G_B24_0;
	}

IL_0227:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Func_2_t1274 * L_105 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate37_22;
		NullCheck(G_B25_0);
		Task_1_t1411 * L_106 = Task_1_ContinueWith_TisTask_1_t1333_m7430(G_B25_0, L_105, /*hidden argument*/Task_1_ContinueWith_TisTask_1_t1333_m7430_MethodInfo_var);
		Task_1_t1333 * L_107 = TaskExtensions_Unwrap_TisObject_t_m7170(NULL /*static, unused*/, L_106, /*hidden argument*/TaskExtensions_Unwrap_TisObject_t_m7170_MethodInfo_var);
		U3CU3Ec__DisplayClass38_t1264 * L_108 = V_6;
		IntPtr_t L_109 = { (void*)U3CU3Ec__DisplayClass38_U3CRequestAsyncU3Eb__33_m6832_MethodInfo_var };
		Func_2_t1489 * L_110 = (Func_2_t1489 *)il2cpp_codegen_object_new (Func_2_t1489_il2cpp_TypeInfo_var);
		Func_2__ctor_m7457(L_110, L_108, L_109, /*hidden argument*/Func_2__ctor_m7457_MethodInfo_var);
		NullCheck(L_107);
		Task_1_t1488 * L_111 = Task_1_ContinueWith_TisTask_1_t1312_m7431(L_107, L_110, /*hidden argument*/Task_1_ContinueWith_TisTask_1_t1312_m7431_MethodInfo_var);
		Task_1_t1312 * L_112 = TaskExtensions_Unwrap_TisTuple_2_t1365_m7432(NULL /*static, unused*/, L_111, /*hidden argument*/TaskExtensions_Unwrap_TisTuple_2_t1365_m7432_MethodInfo_var);
		return L_112;
	}
}
// System.Void Parse.PlatformHooks::RunOnMainThread(System.Action)
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1_Enqueue_m7459_MethodInfo_var;
extern "C" void PlatformHooks_RunOnMainThread_m6866 (Object_t * __this /* static, unused */, Action_t143 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		Queue_1_Enqueue_m7459_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485001);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		ReaderWriterLockSlim_t1215 * L_0 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueueLock_5;
		NullCheck(L_0);
		bool L_1 = ReaderWriterLockSlim_get_IsWriteLockHeld_m7458(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Queue_1_t1273 * L_2 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueue_6;
		Action_t143 * L_3 = ___action;
		NullCheck(L_2);
		Queue_1_Enqueue_m7459(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m7459_MethodInfo_var);
		return;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		ReaderWriterLockSlim_t1215 * L_4 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueueLock_5;
		NullCheck(L_4);
		ReaderWriterLockSlim_EnterWriteLock_m7300(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Queue_1_t1273 * L_5 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueue_6;
		Action_t143 * L_6 = ___action;
		NullCheck(L_5);
		Queue_1_Enqueue_m7459(L_5, L_6, /*hidden argument*/Queue_1_Enqueue_m7459_MethodInfo_var);
		IL2CPP_LEAVE(0x3A, FINALLY_002f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		ReaderWriterLockSlim_t1215 * L_7 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueueLock_5;
		NullCheck(L_7);
		ReaderWriterLockSlim_ExitWriteLock_m7301(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003a:
	{
		return;
	}
}
// System.Collections.IEnumerator Parse.PlatformHooks::RunDispatcher()
extern TypeInfo* U3CRunDispatcherU3Ed__44_t1272_il2cpp_TypeInfo_var;
extern "C" Object_t * PlatformHooks_RunDispatcher_m6867 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRunDispatcherU3Ed__44_t1272_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3220);
		s_Il2CppMethodIntialized = true;
	}
	U3CRunDispatcherU3Ed__44_t1272 * V_0 = {0};
	{
		U3CRunDispatcherU3Ed__44_t1272 * L_0 = (U3CRunDispatcherU3Ed__44_t1272 *)il2cpp_codegen_object_new (U3CRunDispatcherU3Ed__44_t1272_il2cpp_TypeInfo_var);
		U3CRunDispatcherU3Ed__44__ctor_m6845(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRunDispatcherU3Ed__44_t1272 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Parse.PlatformHooks::Initialize()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t2083_il2cpp_TypeInfo_var;
extern TypeInfo* ParseObject_t1159_il2cpp_TypeInfo_var;
extern TypeInfo* ParseFacebookUtils_t1178_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t1275_il2cpp_TypeInfo_var;
extern const MethodInfo* ParseObject_RegisterSubclass_TisParseInstallation_t1227_m7433_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CInitializeU3Eb__46_m6887_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m7463_MethodInfo_var;
extern const MethodInfo* Enumerable_Where_TisMethodInfo_t_m7434_MethodInfo_var;
extern const MethodInfo* PlatformHooks_U3CInitializeU3Eb__47_m6888_MethodInfo_var;
extern const MethodInfo* Enumerable_First_TisMethodInfo_t_m7435_MethodInfo_var;
extern "C" void PlatformHooks_Initialize_m6868 (PlatformHooks_t1276 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		Path_t2083_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3221);
		ParseObject_t1159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2354);
		ParseFacebookUtils_t1178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2433);
		ObjectU5BU5D_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Func_2_t1275_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3222);
		ParseObject_RegisterSubclass_TisParseInstallation_t1227_m7433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485002);
		PlatformHooks_U3CInitializeU3Eb__46_m6887_MethodInfo_var = il2cpp_codegen_method_info_from_index(1355);
		Func_2__ctor_m7463_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485004);
		Enumerable_Where_TisMethodInfo_t_m7434_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485005);
		PlatformHooks_U3CInitializeU3Eb__47_m6888_MethodInfo_var = il2cpp_codegen_method_info_from_index(1358);
		Enumerable_First_TisMethodInfo_t_m7435_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485007);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t * V_1 = {0};
	MethodInfo_t * V_2 = {0};
	ObjectU5BU5D_t626* V_3 = {0};
	ObjectU5BU5D_t626* V_4 = {0};
	MethodInfoU5BU5D_t2082* G_B5_0 = {0};
	MethodInfoU5BU5D_t2082* G_B4_0 = {0};
	Object_t* G_B7_0 = {0};
	Object_t* G_B6_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settingsPath_1;
		if (L_0)
		{
			goto IL_00e2;
		}
	}
	{
		String_t* L_1 = Application_get_persistentDataPath_m3978(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2083_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m7460(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1682, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settingsPath_1 = L_2;
		bool L_3 = Application_get_isWebPlayer_m3772(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlatformHooks_set_IsWebPlayer_m6852(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		String_t* L_4 = SystemInfo_get_deviceModel_m7461(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___osVersion_2 = L_4;
		SettingsWrapper_t1258 * L_5 = SettingsWrapper_get_Wrapper_m6797(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___settings_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(ParseObject_t1159_il2cpp_TypeInfo_var);
		ParseObject_RegisterSubclass_TisParseInstallation_t1227_m7433(NULL /*static, unused*/, /*hidden argument*/ParseObject_RegisterSubclass_TisParseInstallation_t1227_m7433_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(ParseFacebookUtils_t1178_il2cpp_TypeInfo_var);
		ParseFacebookUtils_Initialize_m6394(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = PlatformHooks_get_IsAndroid_m6853(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Type_t * L_7 = PlatformHooks_GetTypeFromUnityEngine_m6856(NULL /*static, unused*/, (String_t*) &_stringLiteral1683, /*hidden argument*/NULL);
		V_0 = L_7;
		Type_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_00e2;
		}
	}
	{
		Type_t * L_9 = V_0;
		V_3 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t626* L_10 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral1684);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 0)) = (Object_t *)(String_t*) &_stringLiteral1684;
		ObjectU5BU5D_t626* L_11 = V_3;
		Object_t * L_12 = Activator_CreateInstance_m7462(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		MethodInfoU5BU5D_t2082* L_14 = (MethodInfoU5BU5D_t2082*)VirtFuncInvoker0< MethodInfoU5BU5D_t2082* >::Invoke(53 /* System.Reflection.MethodInfo[] System.Type::GetMethods() */, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Func_2_t1275 * L_15 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate48_23;
		G_B4_0 = L_14;
		if (L_15)
		{
			G_B5_0 = L_14;
			goto IL_0097;
		}
	}
	{
		IntPtr_t L_16 = { (void*)PlatformHooks_U3CInitializeU3Eb__46_m6887_MethodInfo_var };
		Func_2_t1275 * L_17 = (Func_2_t1275 *)il2cpp_codegen_object_new (Func_2_t1275_il2cpp_TypeInfo_var);
		Func_2__ctor_m7463(L_17, NULL, L_16, /*hidden argument*/Func_2__ctor_m7463_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate48_23 = L_17;
		G_B5_0 = G_B4_0;
	}

IL_0097:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Func_2_t1275 * L_18 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate48_23;
		Object_t* L_19 = Enumerable_Where_TisMethodInfo_t_m7434(NULL /*static, unused*/, (Object_t*)(Object_t*)G_B5_0, L_18, /*hidden argument*/Enumerable_Where_TisMethodInfo_t_m7434_MethodInfo_var);
		Func_2_t1275 * L_20 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate49_24;
		G_B6_0 = L_19;
		if (L_20)
		{
			G_B7_0 = L_19;
			goto IL_00b9;
		}
	}
	{
		IntPtr_t L_21 = { (void*)PlatformHooks_U3CInitializeU3Eb__47_m6888_MethodInfo_var };
		Func_2_t1275 * L_22 = (Func_2_t1275 *)il2cpp_codegen_object_new (Func_2_t1275_il2cpp_TypeInfo_var);
		Func_2__ctor_m7463(L_22, NULL, L_21, /*hidden argument*/Func_2__ctor_m7463_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate49_24 = L_22;
		G_B7_0 = G_B6_0;
	}

IL_00b9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		Func_2_t1275 * L_23 = ((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate49_24;
		MethodInfo_t * L_24 = Enumerable_First_TisMethodInfo_t_m7435(NULL /*static, unused*/, G_B7_0, L_23, /*hidden argument*/Enumerable_First_TisMethodInfo_t_m7435_MethodInfo_var);
		V_2 = L_24;
		MethodInfo_t * L_25 = V_2;
		if (!L_25)
		{
			goto IL_00e2;
		}
	}
	{
		MethodInfo_t * L_26 = V_2;
		Object_t * L_27 = V_1;
		V_4 = ((ObjectU5BU5D_t626*)SZArrayNew(ObjectU5BU5D_t626_il2cpp_TypeInfo_var, 2));
		ObjectU5BU5D_t626* L_28 = V_4;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral1685);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 0)) = (Object_t *)(String_t*) &_stringLiteral1685;
		ObjectU5BU5D_t626* L_29 = V_4;
		NullCheck(L_26);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t626* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_26, L_27, L_29);
	}

IL_00e2:
	{
		return;
	}
}
// System.Void Parse.PlatformHooks::ClearInMemoryInstallation()
extern TypeInfo* ParseInstallation_t1227_il2cpp_TypeInfo_var;
extern "C" void PlatformHooks_ClearInMemoryInstallation_m6869 (PlatformHooks_t1276 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseInstallation_t1227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2443);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParseInstallation_t1227_il2cpp_TypeInfo_var);
		ParseInstallation_ClearInMemoryInstallation_m6593(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.PlatformHooks::.ctor()
extern "C" void PlatformHooks__ctor_m6870 (PlatformHooks_t1276 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__1()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisObject_t_m7437_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__1_m6871 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisObject_t_m7437_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485008);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisObject_t_m7437(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisObject_t_m7437_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__2()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisBoolean_t59_m7438_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__2_m6872 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisBoolean_t59_m7438_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485009);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisBoolean_t59_m7438(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisBoolean_t59_m7438_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__3()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisByte_t683_m7439_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__3_m6873 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisByte_t683_m7439_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485010);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisByte_t683_m7439(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisByte_t683_m7439_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__4()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisSByte_t88_m7440_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__4_m6874 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisSByte_t88_m7440_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485011);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisSByte_t88_m7440(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisSByte_t88_m7440_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__5()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisInt16_t684_m7441_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__5_m6875 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisInt16_t684_m7441_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485012);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisInt16_t684_m7441(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisInt16_t684_m7441_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__6()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisUInt16_t685_m7442_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__6_m6876 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisUInt16_t685_m7442_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485013);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisUInt16_t685_m7442(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisUInt16_t685_m7442_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__7()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisInt32_t82_m7443_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__7_m6877 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisInt32_t82_m7443_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485014);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisInt32_t82_m7443(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisInt32_t82_m7443_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__8()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisUInt32_t682_m7444_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__8_m6878 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisUInt32_t682_m7444_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485015);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisUInt32_t682_m7444(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisUInt32_t682_m7444_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__9()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisInt64_t89_m7445_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__9_m6879 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisInt64_t89_m7445_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485016);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisInt64_t89_m7445(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisInt64_t89_m7445_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__a()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisUInt64_t686_m7446_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__a_m6880 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisUInt64_t686_m7446_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485017);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisUInt64_t686_m7446(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisUInt64_t686_m7446_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__b()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisChar_t60_m7447_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__b_m6881 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisChar_t60_m7447_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485018);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisChar_t60_m7447(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisChar_t60_m7447_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__c()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisDouble_t90_m7448_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__c_m6882 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisDouble_t90_m7448_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485019);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisDouble_t90_m7448(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisDouble_t90_m7448_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__d()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisSingle_t87_m7449_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__d_m6883 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisSingle_t87_m7449_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485020);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisSingle_t87_m7449(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisSingle_t87_m7449_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__e()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisIDictionary_2_t757_m7450_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__e_m6884 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisIDictionary_2_t757_m7450_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485021);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisIDictionary_2_t757_m7450(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisIDictionary_2_t757_m7450_MethodInfo_var);
		return;
	}
}
// System.Void Parse.PlatformHooks::<CreateWrapperTypes>b__f()
extern const MethodInfo* ParseCloud_CallFunctionAsync_TisIList_1_t1315_m7451_MethodInfo_var;
extern "C" void PlatformHooks_U3CCreateWrapperTypesU3Eb__f_m6885 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseCloud_CallFunctionAsync_TisIList_1_t1315_m7451_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485022);
		s_Il2CppMethodIntialized = true;
	}
	{
		CancellationToken_t1101  L_0 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		ParseCloud_CallFunctionAsync_TisIList_1_t1315_m7451(NULL /*static, unused*/, (String_t*)NULL, (Object_t*)NULL, L_0, /*hidden argument*/ParseCloud_CallFunctionAsync_TisIList_1_t1315_m7451_MethodInfo_var);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Object> Parse.PlatformHooks::<RequestAsync>b__34(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>)
extern TypeInfo* U3CU3Ec__DisplayClass42_t1271_il2cpp_TypeInfo_var;
extern TypeInfo* TaskCompletionSource_1_t1270_il2cpp_TypeInfo_var;
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterizedThreadStart_t2084_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1401_il2cpp_TypeInfo_var;
extern TypeInfo* WaitCallback_t2085_il2cpp_TypeInfo_var;
extern const MethodInfo* TaskCompletionSource_1__ctor_m6983_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass42_U3CRequestAsyncU3Eb__35_m6838_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass42_U3CRequestAsyncU3Eb__36_m6839_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_get_Task_m6985_MethodInfo_var;
extern "C" Task_1_t1333 * PlatformHooks_U3CRequestAsyncU3Eb__34_m6886 (Object_t * __this /* static, unused */, Task_1_t1312 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass42_t1271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3223);
		TaskCompletionSource_1_t1270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2311);
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		ParameterizedThreadStart_t2084_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3224);
		Thread_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2401);
		WaitCallback_t2085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3225);
		TaskCompletionSource_1__ctor_m6983_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484484);
		U3CU3Ec__DisplayClass42_U3CRequestAsyncU3Eb__35_m6838_MethodInfo_var = il2cpp_codegen_method_info_from_index(1375);
		U3CU3Ec__DisplayClass42_U3CRequestAsyncU3Eb__36_m6839_MethodInfo_var = il2cpp_codegen_method_info_from_index(1376);
		TaskCompletionSource_1_get_Task_m6985_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484486);
		s_Il2CppMethodIntialized = true;
	}
	Thread_t1401 * V_0 = {0};
	ParameterizedThreadStart_t2084 * V_1 = {0};
	WaitCallback_t2085 * V_2 = {0};
	U3CU3Ec__DisplayClass42_t1271 * V_3 = {0};
	{
		V_1 = (ParameterizedThreadStart_t2084 *)NULL;
		V_2 = (WaitCallback_t2085 *)NULL;
		U3CU3Ec__DisplayClass42_t1271 * L_0 = (U3CU3Ec__DisplayClass42_t1271 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass42_t1271_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass42__ctor_m6837(L_0, /*hidden argument*/NULL);
		V_3 = L_0;
		U3CU3Ec__DisplayClass42_t1271 * L_1 = V_3;
		TaskCompletionSource_1_t1270 * L_2 = (TaskCompletionSource_1_t1270 *)il2cpp_codegen_object_new (TaskCompletionSource_1_t1270_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m6983(L_2, /*hidden argument*/TaskCompletionSource_1__ctor_m6983_MethodInfo_var);
		NullCheck(L_1);
		L_1->___dispatchTcs_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(PlatformHooks_t1276_il2cpp_TypeInfo_var);
		bool L_3 = PlatformHooks_get_IsCompiledByIL2CPP_m6850(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		ParameterizedThreadStart_t2084 * L_4 = V_1;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		U3CU3Ec__DisplayClass42_t1271 * L_5 = V_3;
		IntPtr_t L_6 = { (void*)U3CU3Ec__DisplayClass42_U3CRequestAsyncU3Eb__35_m6838_MethodInfo_var };
		ParameterizedThreadStart_t2084 * L_7 = (ParameterizedThreadStart_t2084 *)il2cpp_codegen_object_new (ParameterizedThreadStart_t2084_il2cpp_TypeInfo_var);
		ParameterizedThreadStart__ctor_m7464(L_7, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_002c:
	{
		ParameterizedThreadStart_t2084 * L_8 = V_1;
		Thread_t1401 * L_9 = (Thread_t1401 *)il2cpp_codegen_object_new (Thread_t1401_il2cpp_TypeInfo_var);
		Thread__ctor_m7465(L_9, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Thread_t1401 * L_10 = V_0;
		NullCheck(L_10);
		Thread_Start_m7466(L_10, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_003b:
	{
		WaitCallback_t2085 * L_11 = V_2;
		if (L_11)
		{
			goto IL_004b;
		}
	}
	{
		U3CU3Ec__DisplayClass42_t1271 * L_12 = V_3;
		IntPtr_t L_13 = { (void*)U3CU3Ec__DisplayClass42_U3CRequestAsyncU3Eb__36_m6839_MethodInfo_var };
		WaitCallback_t2085 * L_14 = (WaitCallback_t2085 *)il2cpp_codegen_object_new (WaitCallback_t2085_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m7467(L_14, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_004b:
	{
		WaitCallback_t2085 * L_15 = V_2;
		ThreadPool_QueueUserWorkItem_m7468(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
	}

IL_0052:
	{
		U3CU3Ec__DisplayClass42_t1271 * L_16 = V_3;
		NullCheck(L_16);
		TaskCompletionSource_1_t1270 * L_17 = (L_16->___dispatchTcs_0);
		NullCheck(L_17);
		Task_1_t1333 * L_18 = TaskCompletionSource_1_get_Task_m6985(L_17, /*hidden argument*/TaskCompletionSource_1_get_Task_m6985_MethodInfo_var);
		return L_18;
	}
}
// System.Boolean Parse.PlatformHooks::<Initialize>b__46(System.Reflection.MethodInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PlatformHooks_U3CInitializeU3Eb__46_m6887 (Object_t * __this /* static, unused */, MethodInfo_t * ___x, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = ___x;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m456(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral1686, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Parse.PlatformHooks::<Initialize>b__47(System.Reflection.MethodInfo)
extern "C" bool PlatformHooks_U3CInitializeU3Eb__47_m6888 (Object_t * __this /* static, unused */, MethodInfo_t * ___x, const MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = ___x;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_0);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Parse.PlatformHooks::.cctor()
extern TypeInfo* PlatformHooks_t1276_il2cpp_TypeInfo_var;
extern TypeInfo* ReaderWriterLockSlim_t1215_il2cpp_TypeInfo_var;
extern TypeInfo* Queue_1_t1273_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1__ctor_m7471_MethodInfo_var;
extern "C" void PlatformHooks__cctor_m6889 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformHooks_t1276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2403);
		ReaderWriterLockSlim_t1215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2515);
		Queue_1_t1273_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3226);
		Queue_1__ctor_m7471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485025);
		s_Il2CppMethodIntialized = true;
	}
	{
		AppDomain_t2086 * L_0 = AppDomain_get_CurrentDomain_m7469(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = AppDomain_get_FriendlyName_m7470(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_1, (String_t*) &_stringLiteral1687);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___isCompiledByIL2CPP_3 = L_2;
		ReaderWriterLockSlim_t1215 * L_3 = (ReaderWriterLockSlim_t1215 *)il2cpp_codegen_object_new (ReaderWriterLockSlim_t1215_il2cpp_TypeInfo_var);
		ReaderWriterLockSlim__ctor_m7310(L_3, /*hidden argument*/NULL);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueueLock_5 = L_3;
		Queue_1_t1273 * L_4 = (Queue_1_t1273 *)il2cpp_codegen_object_new (Queue_1_t1273_il2cpp_TypeInfo_var);
		Queue_1__ctor_m7471(L_4, /*hidden argument*/Queue_1__ctor_m7471_MethodInfo_var);
		((PlatformHooks_t1276_StaticFields*)PlatformHooks_t1276_il2cpp_TypeInfo_var->static_fields)->___dispatchQueue_6 = L_4;
		return;
	}
}
// System.AggregateException
#include "Parse_Unity_System_AggregateException.h"
#ifndef _MSC_VER
#else
#endif
// System.AggregateException
#include "Parse_Unity_System_AggregateExceptionMethodDeclarations.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Collections.Generic.List`1<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_gen_43.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Exception>
#include "mscorlib_System_Collections_Generic_List_1_gen_43MethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
struct Enumerable_t68;
struct List_1_t2087;
struct IEnumerable_1_t1353;
struct Enumerable_t68;
struct List_1_t628;
struct IEnumerable_1_t651;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t628 * Enumerable_ToList_TisObject_t_m3413_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m3413(__this /* static, unused */, p0, method) (( List_1_t628 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3413_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Exception>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Exception>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisException_t57_m7472(__this /* static, unused */, p0, method) (( List_1_t2087 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3413_gshared)(__this /* static, unused */, p0, method)


// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
extern TypeInfo* ReadOnlyCollection_1_t1277_il2cpp_TypeInfo_var;
extern const MethodInfo* Enumerable_ToList_TisException_t57_m7472_MethodInfo_var;
extern const MethodInfo* ReadOnlyCollection_1__ctor_m7474_MethodInfo_var;
extern "C" void AggregateException__ctor_m6890 (AggregateException_t1278 * __this, Object_t* ___innerExceptions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReadOnlyCollection_1_t1277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3227);
		Enumerable_ToList_TisException_t57_m7472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485026);
		ReadOnlyCollection_1__ctor_m7474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485027);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception__ctor_m7473(__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___innerExceptions;
		List_1_t2087 * L_1 = Enumerable_ToList_TisException_t57_m7472(NULL /*static, unused*/, L_0, /*hidden argument*/Enumerable_ToList_TisException_t57_m7472_MethodInfo_var);
		ReadOnlyCollection_1_t1277 * L_2 = (ReadOnlyCollection_1_t1277 *)il2cpp_codegen_object_new (ReadOnlyCollection_1_t1277_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m7474(L_2, L_1, /*hidden argument*/ReadOnlyCollection_1__ctor_m7474_MethodInfo_var);
		AggregateException_set_InnerExceptions_m6892(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
extern "C" ReadOnlyCollection_1_t1277 * AggregateException_get_InnerExceptions_m6891 (AggregateException_t1278 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1277 * L_0 = (__this->___U3CInnerExceptionsU3Ek__BackingField_11);
		return L_0;
	}
}
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
extern "C" void AggregateException_set_InnerExceptions_m6892 (AggregateException_t1278 * __this, ReadOnlyCollection_1_t1277 * ___value, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1277 * L_0 = ___value;
		__this->___U3CInnerExceptionsU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.AggregateException System.AggregateException::Flatten()
extern TypeInfo* List_1_t2087_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2088_il2cpp_TypeInfo_var;
extern TypeInfo* AggregateException_t1278_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m7475_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m7476_MethodInfo_var;
extern "C" AggregateException_t1278 * AggregateException_Flatten_m6893 (AggregateException_t1278 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3228);
		IEnumerator_1_t2088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3229);
		AggregateException_t1278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3230);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1__ctor_m7475_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485028);
		List_1_AddRange_m7476_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485029);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t2087 * V_0 = {0};
	Exception_t57 * V_1 = {0};
	AggregateException_t1278 * V_2 = {0};
	Object_t* V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2087 * L_0 = (List_1_t2087 *)il2cpp_codegen_object_new (List_1_t2087_il2cpp_TypeInfo_var);
		List_1__ctor_m7475(L_0, /*hidden argument*/List_1__ctor_m7475_MethodInfo_var);
		V_0 = L_0;
		ReadOnlyCollection_1_t1277 * L_1 = AggregateException_get_InnerExceptions_m6891(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(32 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator() */, L_1);
		V_3 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0014:
		{
			Object_t* L_3 = V_3;
			NullCheck(L_3);
			Exception_t57 * L_4 = (Exception_t57 *)InterfaceFuncInvoker0< Exception_t57 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t2088_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			Exception_t57 * L_5 = V_1;
			V_2 = ((AggregateException_t1278 *)IsInst(L_5, AggregateException_t1278_il2cpp_TypeInfo_var));
			AggregateException_t1278 * L_6 = V_2;
			if (!L_6)
			{
				goto IL_0038;
			}
		}

IL_0025:
		{
			List_1_t2087 * L_7 = V_0;
			AggregateException_t1278 * L_8 = V_2;
			NullCheck(L_8);
			AggregateException_t1278 * L_9 = AggregateException_Flatten_m6893(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			ReadOnlyCollection_1_t1277 * L_10 = AggregateException_get_InnerExceptions_m6891(L_9, /*hidden argument*/NULL);
			NullCheck(L_7);
			List_1_AddRange_m7476(L_7, L_10, /*hidden argument*/List_1_AddRange_m7476_MethodInfo_var);
			goto IL_003f;
		}

IL_0038:
		{
			List_1_t2087 * L_11 = V_0;
			Exception_t57 * L_12 = V_1;
			NullCheck(L_11);
			VirtActionInvoker1< Exception_t57 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Exception>::Add(!0) */, L_11, L_12);
		}

IL_003f:
		{
			Object_t* L_13 = V_3;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0014;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		{
			Object_t* L_15 = V_3;
			if (!L_15)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			Object_t* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_16);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0053:
	{
		List_1_t2087 * L_17 = V_0;
		AggregateException_t1278 * L_18 = (AggregateException_t1278 *)il2cpp_codegen_object_new (AggregateException_t1278_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6890(L_18, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.String System.AggregateException::ToString()
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2088_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" String_t* AggregateException_ToString_m6894 (AggregateException_t1278 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		IEnumerator_1_t2088_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3229);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	Exception_t57 * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = Exception_ToString_m7477(__this, /*hidden argument*/NULL);
		StringBuilder_t261 * L_1 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5501(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ReadOnlyCollection_1_t1277 * L_2 = AggregateException_get_InnerExceptions_m6891(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(32 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_001a:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			Exception_t57 * L_5 = (Exception_t57 *)InterfaceFuncInvoker0< Exception_t57 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t2088_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			StringBuilder_t261 * L_6 = V_0;
			NullCheck(L_6);
			StringBuilder_AppendLine_m5448(L_6, (String_t*) &_stringLiteral1691, /*hidden argument*/NULL);
			StringBuilder_t261 * L_7 = V_0;
			Exception_t57 * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			NullCheck(L_7);
			StringBuilder_AppendLine_m5448(L_7, L_9, /*hidden argument*/NULL);
		}

IL_003a:
		{
			Object_t* L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001a;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0044);
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
			Object_t* L_12 = V_2;
			if (!L_12)
			{
				goto IL_004d;
			}
		}

IL_0047:
		{
			Object_t* L_13 = V_2;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_13);
		}

IL_004d:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004e:
	{
		StringBuilder_t261 * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.CancellationTokenSource
#include "Parse_Unity_System_Threading_CancellationTokenSource.h"
// System.OperationCanceledException
#include "mscorlib_System_OperationCanceledException.h"
// System.Threading.CancellationTokenSource
#include "Parse_Unity_System_Threading_CancellationTokenSourceMethodDeclarations.h"
// System.OperationCanceledException
#include "mscorlib_System_OperationCanceledExceptionMethodDeclarations.h"


// System.Void System.Threading.CancellationToken::.ctor(System.Threading.CancellationTokenSource)
extern "C" void CancellationToken__ctor_m6895 (CancellationToken_t1101 * __this, CancellationTokenSource_t1279 * ___source, const MethodInfo* method)
{
	{
		CancellationTokenSource_t1279 * L_0 = ___source;
		__this->___source_0 = L_0;
		return;
	}
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern TypeInfo* CancellationToken_t1101_il2cpp_TypeInfo_var;
extern "C" CancellationToken_t1101  CancellationToken_get_None_m6896 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CancellationToken_t1101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2319);
		s_Il2CppMethodIntialized = true;
	}
	CancellationToken_t1101  V_0 = {0};
	{
		Initobj (CancellationToken_t1101_il2cpp_TypeInfo_var, (&V_0));
		CancellationToken_t1101  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
extern "C" bool CancellationToken_get_IsCancellationRequested_m6897 (CancellationToken_t1101 * __this, const MethodInfo* method)
{
	{
		CancellationTokenSource_t1279 * L_0 = (__this->___source_0);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		CancellationTokenSource_t1279 * L_1 = (__this->___source_0);
		NullCheck(L_1);
		bool L_2 = CancellationTokenSource_get_IsCancellationRequested_m6904(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return 0;
	}
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
extern TypeInfo* CancellationTokenRegistration_t1280_il2cpp_TypeInfo_var;
extern "C" CancellationTokenRegistration_t1280  CancellationToken_Register_m6898 (CancellationToken_t1101 * __this, Action_t143 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CancellationTokenRegistration_t1280_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3231);
		s_Il2CppMethodIntialized = true;
	}
	CancellationTokenRegistration_t1280  V_0 = {0};
	{
		CancellationTokenSource_t1279 * L_0 = (__this->___source_0);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CancellationTokenSource_t1279 * L_1 = (__this->___source_0);
		Action_t143 * L_2 = ___callback;
		NullCheck(L_1);
		CancellationTokenRegistration_t1280  L_3 = CancellationTokenSource_Register_m6902(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		Initobj (CancellationTokenRegistration_t1280_il2cpp_TypeInfo_var, (&V_0));
		CancellationTokenRegistration_t1280  L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
extern TypeInfo* OperationCanceledException_t2089_il2cpp_TypeInfo_var;
extern "C" void CancellationToken_ThrowIfCancellationRequested_m6899 (CancellationToken_t1101 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OperationCanceledException_t2089_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3232);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = CancellationToken_get_IsCancellationRequested_m6897(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		OperationCanceledException_t2089 * L_1 = (OperationCanceledException_t2089 *)il2cpp_codegen_object_new (OperationCanceledException_t2089_il2cpp_TypeInfo_var);
		OperationCanceledException__ctor_m7478(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistrationMethodDeclarations.h"



// System.Void System.Threading.CancellationTokenRegistration::.ctor(System.Threading.CancellationTokenSource,System.Action)
extern "C" void CancellationTokenRegistration__ctor_m6900 (CancellationTokenRegistration_t1280 * __this, CancellationTokenSource_t1279 * ___source, Action_t143 * ___action, const MethodInfo* method)
{
	{
		CancellationTokenSource_t1279 * L_0 = ___source;
		__this->___source_1 = L_0;
		Action_t143 * L_1 = ___action;
		__this->___action_0 = L_1;
		return;
	}
}
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C" void CancellationTokenRegistration_Dispose_m6901 (CancellationTokenRegistration_t1280 * __this, const MethodInfo* method)
{
	{
		CancellationTokenSource_t1279 * L_0 = (__this->___source_1);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		Action_t143 * L_1 = (__this->___action_0);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		CancellationTokenSource_t1279 * L_2 = (__this->___source_1);
		Action_t143 * L_3 = (__this->___action_0);
		NullCheck(L_2);
		CancellationTokenSource_Unregister_m6903(L_2, L_3, /*hidden argument*/NULL);
		__this->___action_0 = (Action_t143 *)NULL;
		__this->___source_1 = (CancellationTokenSource_t1279 *)NULL;
	}

IL_002f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern "C" CancellationTokenRegistration_t1280  CancellationTokenSource_Register_m6902 (CancellationTokenSource_t1279 * __this, Action_t143 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	CancellationTokenRegistration_t1280  V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___mutex_0);
		Object_t * L_1 = L_0;
		V_1 = L_1;
		Monitor_Enter_m7045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Action_t143 * L_2 = (__this->___actions_1);
		Action_t143 * L_3 = ___action;
		Delegate_t666 * L_4 = Delegate_Combine_m3465(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___actions_1 = ((Action_t143 *)Castclass(L_4, Action_t143_il2cpp_TypeInfo_var));
		Action_t143 * L_5 = ___action;
		CancellationTokenRegistration_t1280  L_6 = {0};
		CancellationTokenRegistration__ctor_m6900(&L_6, __this, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		IL2CPP_LEAVE(0x35, FINALLY_002e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_t * L_7 = V_1;
		Monitor_Exit_m7046(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0035:
	{
		CancellationTokenRegistration_t1280  L_8 = V_0;
		return L_8;
	}
}
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern "C" void CancellationTokenSource_Unregister_m6903 (CancellationTokenSource_t1279 * __this, Action_t143 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___mutex_0);
		Object_t * L_1 = L_0;
		V_0 = L_1;
		Monitor_Enter_m7045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Action_t143 * L_2 = (__this->___actions_1);
		Action_t143 * L_3 = ___action;
		Delegate_t666 * L_4 = Delegate_Remove_m3473(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___actions_1 = ((Action_t143 *)Castclass(L_4, Action_t143_il2cpp_TypeInfo_var));
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_0;
		Monitor_Exit_m7046(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
extern "C" bool CancellationTokenSource_get_IsCancellationRequested_m6904 (CancellationTokenSource_t1279 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___mutex_0);
		Object_t * L_1 = L_0;
		V_1 = L_1;
		Monitor_Enter_m7045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		bool L_2 = (__this->___isCancellationRequested_2);
		V_0 = L_2;
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_t * L_3 = V_1;
		Monitor_Exit_m7046(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_001d:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
extern "C" CancellationToken_t1101  CancellationTokenSource_get_Token_m6905 (CancellationTokenSource_t1279 * __this, const MethodInfo* method)
{
	{
		CancellationToken_t1101  L_0 = {0};
		CancellationToken__ctor_m6895(&L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Threading.CancellationTokenSource::Cancel()
extern "C" void CancellationTokenSource_Cancel_m6906 (CancellationTokenSource_t1279 * __this, const MethodInfo* method)
{
	{
		CancellationTokenSource_Cancel_m6907(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.CancellationTokenSource::Cancel(System.Boolean)
extern TypeInfo* List_1_t2087_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* AggregateException_t1278_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m7475_MethodInfo_var;
extern "C" void CancellationTokenSource_Cancel_m6907 (CancellationTokenSource_t1279 * __this, bool ___throwOnFirstException, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2087_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3228);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		AggregateException_t1278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3230);
		List_1__ctor_m7475_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485028);
		s_Il2CppMethodIntialized = true;
	}
	Delegate_t666 * V_0 = {0};
	List_1_t2087 * V_1 = {0};
	Exception_t57 * V_2 = {0};
	Object_t * V_3 = {0};
	DelegateU5BU5D_t2090* V_4 = {0};
	int32_t V_5 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___mutex_0);
		Object_t * L_1 = L_0;
		V_3 = L_1;
		Monitor_Enter_m7045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			__this->___isCancellationRequested_2 = 1;
			Action_t143 * L_2 = (__this->___actions_1);
			if (!L_2)
			{
				goto IL_0089;
			}
		}

IL_001c:
		try
		{ // begin try (depth: 2)
			{
				bool L_3 = ___throwOnFirstException;
				if (!L_3)
				{
					goto IL_002c;
				}
			}

IL_001f:
			{
				Action_t143 * L_4 = (__this->___actions_1);
				NullCheck(L_4);
				VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_4);
				goto IL_007f;
			}

IL_002c:
			{
				Action_t143 * L_5 = (__this->___actions_1);
				NullCheck(L_5);
				DelegateU5BU5D_t2090* L_6 = (DelegateU5BU5D_t2090*)VirtFuncInvoker0< DelegateU5BU5D_t2090* >::Invoke(8 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_5);
				V_4 = L_6;
				V_5 = 0;
				goto IL_0077;
			}

IL_003e:
			{
				DelegateU5BU5D_t2090* L_7 = V_4;
				int32_t L_8 = V_5;
				NullCheck(L_7);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
				int32_t L_9 = L_8;
				V_0 = (*(Delegate_t666 **)(Delegate_t666 **)SZArrayLdElema(L_7, L_9));
				List_1_t2087 * L_10 = (List_1_t2087 *)il2cpp_codegen_object_new (List_1_t2087_il2cpp_TypeInfo_var);
				List_1__ctor_m7475(L_10, /*hidden argument*/List_1__ctor_m7475_MethodInfo_var);
				V_1 = L_10;
			}

IL_004a:
			try
			{ // begin try (depth: 3)
				Delegate_t666 * L_11 = V_0;
				NullCheck(((Action_t143 *)Castclass(L_11, Action_t143_il2cpp_TypeInfo_var)));
				VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, ((Action_t143 *)Castclass(L_11, Action_t143_il2cpp_TypeInfo_var)));
				goto IL_0061;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t57 *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
					goto CATCH_0057;
				throw e;
			}

CATCH_0057:
			{ // begin catch(System.Exception)
				V_2 = ((Exception_t57 *)__exception_local);
				List_1_t2087 * L_12 = V_1;
				Exception_t57 * L_13 = V_2;
				NullCheck(L_12);
				VirtActionInvoker1< Exception_t57 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Exception>::Add(!0) */, L_12, L_13);
				goto IL_0061;
			} // end catch (depth: 3)

IL_0061:
			{
				List_1_t2087 * L_14 = V_1;
				NullCheck(L_14);
				int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count() */, L_14);
				if ((((int32_t)L_15) <= ((int32_t)0)))
				{
					goto IL_0071;
				}
			}

IL_006a:
			{
				List_1_t2087 * L_16 = V_1;
				AggregateException_t1278 * L_17 = (AggregateException_t1278 *)il2cpp_codegen_object_new (AggregateException_t1278_il2cpp_TypeInfo_var);
				AggregateException__ctor_m6890(L_17, L_16, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception(L_17);
			}

IL_0071:
			{
				int32_t L_18 = V_5;
				V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
			}

IL_0077:
			{
				int32_t L_19 = V_5;
				DelegateU5BU5D_t2090* L_20 = V_4;
				NullCheck(L_20);
				if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
				{
					goto IL_003e;
				}
			}

IL_007f:
			{
				IL2CPP_LEAVE(0x89, FINALLY_0081);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0081;
		}

FINALLY_0081:
		{ // begin finally (depth: 2)
			__this->___actions_1 = (Action_t143 *)NULL;
			IL2CPP_END_FINALLY(129)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(129)
		{
			IL2CPP_JUMP_TBL(0x89, IL_0089)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x92, FINALLY_008b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		Object_t * L_21 = V_3;
		Monitor_Exit_m7046(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(139)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_JUMP_TBL(0x92, IL_0092)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0092:
	{
		return;
	}
}
// System.Void System.Threading.CancellationTokenSource::.ctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void CancellationTokenSource__ctor_m6908 (CancellationTokenSource_t1279 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_0, /*hidden argument*/NULL);
		__this->___mutex_0 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task/<>c__DisplayClass8
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClass8
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClasMethodDeclarations.h"



// System.Void System.Threading.Tasks.Task/<>c__DisplayClass8::.ctor()
extern "C" void U3CU3Ec__DisplayClass8__ctor_m6909 (U3CU3Ec__DisplayClass8_t1281 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Threading.Tasks.Task/<>c__DisplayClass8::<ContinueWith>b__7(System.Threading.Tasks.Task)
extern "C" int32_t U3CU3Ec__DisplayClass8_U3CContinueWithU3Eb__7_m6910 (U3CU3Ec__DisplayClass8_t1281 * __this, Task_t1148 * ___t, const MethodInfo* method)
{
	{
		Action_1_t1109 * L_0 = (__this->___continuation_0);
		Task_t1148 * L_1 = ___t;
		NullCheck(L_0);
		VirtActionInvoker1< Task_t1148 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, L_0, L_1);
		return 0;
	}
}
// System.Threading.Tasks.Task/<>c__DisplayClasse
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClasse
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_0MethodDeclarations.h"

#include "Parse.Unity_ArrayTypes.h"
// System.Func`2<System.Threading.Tasks.Task,System.Boolean>
#include "System_Core_System_Func_2_gen_52.h"
// System.Func`2<System.Threading.Tasks.Task,System.AggregateException>
#include "System_Core_System_Func_2_gen_53.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge.h"
// System.Func`2<System.Threading.Tasks.Task,System.Boolean>
#include "System_Core_System_Func_2_gen_52MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.AggregateException>
#include "System_Core_System_Func_2_gen_53MethodDeclarations.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_geMethodDeclarations.h"
struct Enumerable_t68;
struct IEnumerable_1_t1354;
struct Func_2_t1284;
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisTask_t1148_m7479(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1284 *, const MethodInfo*))Enumerable_Where_TisObject_t_m5825_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t68;
struct IEnumerable_1_t2091;
struct IEnumerable_1_t1354;
struct Func_2_t1285;
struct Enumerable_t68;
struct IEnumerable_1_t651;
struct Func_2_t1165;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m7082_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1165 * p1, const MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m7082(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1165 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m7082_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Threading.Tasks.Task,System.AggregateException>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Threading.Tasks.Task,System.AggregateException>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisTask_t1148_TisAggregateException_t1278_m7480(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1285 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m7082_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t68;
struct AggregateExceptionU5BU5D_t2092;
struct IEnumerable_1_t2091;
struct Enumerable_t68;
struct ObjectU5BU5D_t626;
struct IEnumerable_1_t651;
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t626* Enumerable_ToArray_TisObject_t_m7002_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m7002(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t626* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m7002_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.AggregateException>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.AggregateException>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisAggregateException_t1278_m7481(__this /* static, unused */, p0, method) (( AggregateExceptionU5BU5D_t2092* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m7002_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t68;
struct IEnumerable_1_t1354;
struct Func_2_t1284;
struct Enumerable_t68;
struct IEnumerable_1_t651;
struct Func_2_t1019;
// Declaration System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" bool Enumerable_Any_TisObject_t_m7483_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1019 * p1, const MethodInfo* method);
#define Enumerable_Any_TisObject_t_m7483(__this /* static, unused */, p0, p1, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1019 *, const MethodInfo*))Enumerable_Any_TisObject_t_m7483_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Boolean System.Linq.Enumerable::Any<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Boolean System.Linq.Enumerable::Any<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Any_TisTask_t1148_m7482(__this /* static, unused */, p0, p1, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1284 *, const MethodInfo*))Enumerable_Any_TisObject_t_m7483_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void System.Threading.Tasks.Task/<>c__DisplayClasse::.ctor()
extern "C" void U3CU3Ec__DisplayClasse__ctor_m6911 (U3CU3Ec__DisplayClasse_t1286 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClasse::<WhenAll>b__a(System.Threading.Tasks.Task[])
extern TypeInfo* U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t1284_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t1285_il2cpp_TypeInfo_var;
extern TypeInfo* AggregateException_t1278_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__b_m6913_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m7484_MethodInfo_var;
extern const MethodInfo* Enumerable_Where_TisTask_t1148_m7479_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__c_m6914_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m7485_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisTask_t1148_TisAggregateException_t1278_m7480_MethodInfo_var;
extern const MethodInfo* Enumerable_ToArray_TisAggregateException_t1278_m7481_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_SetException_m7486_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__d_m6915_MethodInfo_var;
extern const MethodInfo* Enumerable_Any_TisTask_t1148_m7482_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_SetCanceled_m6979_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_SetResult_m7487_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__a_m6912 (U3CU3Ec__DisplayClasse_t1286 * __this, TaskU5BU5D_t1282* ____, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3233);
		Func_2_t1284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3234);
		Func_2_t1285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3235);
		AggregateException_t1278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3230);
		U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__b_m6913_MethodInfo_var = il2cpp_codegen_method_info_from_index(1382);
		Func_2__ctor_m7484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485031);
		Enumerable_Where_TisTask_t1148_m7479_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485032);
		U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__c_m6914_MethodInfo_var = il2cpp_codegen_method_info_from_index(1385);
		Func_2__ctor_m7485_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485034);
		Enumerable_Select_TisTask_t1148_TisAggregateException_t1278_m7480_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485035);
		Enumerable_ToArray_TisAggregateException_t1278_m7481_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485036);
		TaskCompletionSource_1_SetException_m7486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485037);
		U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__d_m6915_MethodInfo_var = il2cpp_codegen_method_info_from_index(1390);
		Enumerable_Any_TisTask_t1148_m7482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485039);
		TaskCompletionSource_1_SetCanceled_m6979_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484479);
		TaskCompletionSource_1_SetResult_m7487_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485040);
		s_Il2CppMethodIntialized = true;
	}
	AggregateExceptionU5BU5D_t2092* V_0 = {0};
	TaskU5BU5D_t1282* G_B2_0 = {0};
	TaskU5BU5D_t1282* G_B1_0 = {0};
	Object_t* G_B4_0 = {0};
	Object_t* G_B3_0 = {0};
	TaskU5BU5D_t1282* G_B8_0 = {0};
	TaskU5BU5D_t1282* G_B7_0 = {0};
	{
		TaskU5BU5D_t1282* L_0 = (__this->___taskArr_0);
		Func_2_t1284 * L_1 = ((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_2;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__b_m6913_MethodInfo_var };
		Func_2_t1284 * L_3 = (Func_2_t1284 *)il2cpp_codegen_object_new (Func_2_t1284_il2cpp_TypeInfo_var);
		Func_2__ctor_m7484(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m7484_MethodInfo_var);
		((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_2 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t1284 * L_4 = ((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_2;
		Object_t* L_5 = Enumerable_Where_TisTask_t1148_m7479(NULL /*static, unused*/, (Object_t*)(Object_t*)G_B2_0, L_4, /*hidden argument*/Enumerable_Where_TisTask_t1148_m7479_MethodInfo_var);
		Func_2_t1285 * L_6 = ((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_3;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_7 = { (void*)U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__c_m6914_MethodInfo_var };
		Func_2_t1285 * L_8 = (Func_2_t1285 *)il2cpp_codegen_object_new (Func_2_t1285_il2cpp_TypeInfo_var);
		Func_2__ctor_m7485(L_8, NULL, L_7, /*hidden argument*/Func_2__ctor_m7485_MethodInfo_var);
		((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_3 = L_8;
		G_B4_0 = G_B3_0;
	}

IL_0040:
	{
		Func_2_t1285 * L_9 = ((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_3;
		Object_t* L_10 = Enumerable_Select_TisTask_t1148_TisAggregateException_t1278_m7480(NULL /*static, unused*/, G_B4_0, L_9, /*hidden argument*/Enumerable_Select_TisTask_t1148_TisAggregateException_t1278_m7480_MethodInfo_var);
		AggregateExceptionU5BU5D_t2092* L_11 = Enumerable_ToArray_TisAggregateException_t1278_m7481(NULL /*static, unused*/, L_10, /*hidden argument*/Enumerable_ToArray_TisAggregateException_t1278_m7481_MethodInfo_var);
		V_0 = L_11;
		AggregateExceptionU5BU5D_t2092* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)(((int32_t)(((Array_t *)L_12)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		TaskCompletionSource_1_t1283 * L_13 = (__this->___tcs_1);
		AggregateExceptionU5BU5D_t2092* L_14 = V_0;
		AggregateException_t1278 * L_15 = (AggregateException_t1278 *)il2cpp_codegen_object_new (AggregateException_t1278_il2cpp_TypeInfo_var);
		AggregateException__ctor_m6890(L_15, (Object_t*)(Object_t*)L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		TaskCompletionSource_1_SetException_m7486(L_13, L_15, /*hidden argument*/TaskCompletionSource_1_SetException_m7486_MethodInfo_var);
		return;
	}

IL_0068:
	{
		TaskU5BU5D_t1282* L_16 = (__this->___taskArr_0);
		Func_2_t1284 * L_17 = ((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_4;
		G_B7_0 = L_16;
		if (L_17)
		{
			G_B8_0 = L_16;
			goto IL_0086;
		}
	}
	{
		IntPtr_t L_18 = { (void*)U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__d_m6915_MethodInfo_var };
		Func_2_t1284 * L_19 = (Func_2_t1284 *)il2cpp_codegen_object_new (Func_2_t1284_il2cpp_TypeInfo_var);
		Func_2__ctor_m7484(L_19, NULL, L_18, /*hidden argument*/Func_2__ctor_m7484_MethodInfo_var);
		((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_4 = L_19;
		G_B8_0 = G_B7_0;
	}

IL_0086:
	{
		Func_2_t1284 * L_20 = ((U3CU3Ec__DisplayClasse_t1286_StaticFields*)U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_4;
		bool L_21 = Enumerable_Any_TisTask_t1148_m7482(NULL /*static, unused*/, (Object_t*)(Object_t*)G_B8_0, L_20, /*hidden argument*/Enumerable_Any_TisTask_t1148_m7482_MethodInfo_var);
		if (!L_21)
		{
			goto IL_009e;
		}
	}
	{
		TaskCompletionSource_1_t1283 * L_22 = (__this->___tcs_1);
		NullCheck(L_22);
		TaskCompletionSource_1_SetCanceled_m6979(L_22, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m6979_MethodInfo_var);
		return;
	}

IL_009e:
	{
		TaskCompletionSource_1_t1283 * L_23 = (__this->___tcs_1);
		NullCheck(L_23);
		TaskCompletionSource_1_SetResult_m7487(L_23, 0, /*hidden argument*/TaskCompletionSource_1_SetResult_m7487_MethodInfo_var);
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task/<>c__DisplayClasse::<WhenAll>b__b(System.Threading.Tasks.Task)
extern "C" bool U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__b_m6913 (Object_t * __this /* static, unused */, Task_t1148 * ___t, const MethodInfo* method)
{
	{
		Task_t1148 * L_0 = ___t;
		NullCheck(L_0);
		bool L_1 = Task_get_IsFaulted_m6927(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.AggregateException System.Threading.Tasks.Task/<>c__DisplayClasse::<WhenAll>b__c(System.Threading.Tasks.Task)
extern "C" AggregateException_t1278 * U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__c_m6914 (Object_t * __this /* static, unused */, Task_t1148 * ___t, const MethodInfo* method)
{
	{
		Task_t1148 * L_0 = ___t;
		NullCheck(L_0);
		AggregateException_t1278 * L_1 = Task_get_Exception_m6924(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.Tasks.Task/<>c__DisplayClasse::<WhenAll>b__d(System.Threading.Tasks.Task)
extern "C" bool U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__d_m6915 (Object_t * __this /* static, unused */, Task_t1148 * ___t, const MethodInfo* method)
{
	{
		Task_t1148 * L_0 = ___t;
		NullCheck(L_0);
		bool L_1 = Task_get_IsCanceled_m6925(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task/<>c__DisplayClass15
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClass15
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_1MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_3.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_3MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task/<>c__DisplayClass15::.ctor()
extern "C" void U3CU3Ec__DisplayClass15__ctor_m6916 (U3CU3Ec__DisplayClass15_t1288 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task/<>c__DisplayClass15::<WhenAny>b__13(System.Threading.Tasks.Task)
extern const MethodInfo* TaskCompletionSource_1_TrySetResult_m7488_MethodInfo_var;
extern "C" bool U3CU3Ec__DisplayClass15_U3CWhenAnyU3Eb__13_m6917 (U3CU3Ec__DisplayClass15_t1288 * __this, Task_t1148 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskCompletionSource_1_TrySetResult_m7488_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485041);
		s_Il2CppMethodIntialized = true;
	}
	{
		TaskCompletionSource_1_t1287 * L_0 = (__this->___tcs_0);
		Task_t1148 * L_1 = ___t;
		NullCheck(L_0);
		bool L_2 = TaskCompletionSource_1_TrySetResult_m7488(L_0, L_1, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m7488_MethodInfo_var);
		return L_2;
	}
}
// System.Threading.Tasks.Task/<>c__DisplayClass1d
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClass1d
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_2MethodDeclarations.h"



// System.Void System.Threading.Tasks.Task/<>c__DisplayClass1d::.ctor()
extern "C" void U3CU3Ec__DisplayClass1d__ctor_m6918 (U3CU3Ec__DisplayClass1d_t1289 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Threading.Tasks.Task/<>c__DisplayClass1d::<Run>b__1c()
extern "C" int32_t U3CU3Ec__DisplayClass1d_U3CRunU3Eb__1c_m6919 (U3CU3Ec__DisplayClass1d_t1289 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->___toRun_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		return 0;
	}
}
// System.Threading.Tasks.Task/<>c__DisplayClass20
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClass20
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_3MethodDeclarations.h"



// System.Void System.Threading.Tasks.Task/<>c__DisplayClass20::.ctor()
extern "C" void U3CU3Ec__DisplayClass20__ctor_m6920 (U3CU3Ec__DisplayClass20_t1290 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass20::<Delay>b__1f(System.Object)
extern const MethodInfo* TaskCompletionSource_1_TrySetResult_m7489_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass20_U3CDelayU3Eb__1f_m6921 (U3CU3Ec__DisplayClass20_t1290 * __this, Object_t * ____, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskCompletionSource_1_TrySetResult_m7489_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485042);
		s_Il2CppMethodIntialized = true;
	}
	{
		TaskCompletionSource_1_t1283 * L_0 = (__this->___tcs_0);
		NullCheck(L_0);
		TaskCompletionSource_1_TrySetResult_m7489(L_0, 0, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m7489_MethodInfo_var);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactory.h"
// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Collections_Generic_List_1_gen_44.h"
// System.Func`2<System.Threading.Tasks.Task,System.Int32>
#include "System_Core_System_Func_2_gen_54.h"
// System.Action`1<System.Threading.Tasks.Task[]>
#include "mscorlib_System_Action_1_gen_22.h"
// System.Func`1<System.Int32>
#include "System_Core_System_Func_1_gen_5.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallback.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Threading.ThreadLocal`1<System.Int32>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_0.h"
// System.Action`1<System.Action>
#include "mscorlib_System_Action_1_gen_23.h"
// System.Threading.Tasks.TaskScheduler
#include "Parse_Unity_System_Threading_Tasks_TaskScheduler.h"
// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactoryMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Collections_Generic_List_1_gen_44MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.Int32>
#include "System_Core_System_Func_2_gen_54MethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task[]>
#include "mscorlib_System_Action_1_gen_22MethodDeclarations.h"
// System.Func`1<System.Int32>
#include "System_Core_System_Func_1_gen_5MethodDeclarations.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
// System.Threading.ThreadLocal`1<System.Int32>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_0MethodDeclarations.h"
// System.Action`1<System.Action>
#include "mscorlib_System_Action_1_gen_23MethodDeclarations.h"
// System.Threading.Tasks.TaskScheduler
#include "Parse_Unity_System_Threading_Tasks_TaskSchedulerMethodDeclarations.h"
struct Task_t1148;
struct Task_1_t1310;
struct Func_2_t2093;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Int32>(System.Func`2<System.Threading.Tasks.Task,T>,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Int32>(System.Func`2<System.Threading.Tasks.Task,T>,System.Threading.CancellationToken)
extern "C" Task_1_t1310 * Task_ContinueWith_TisInt32_t82_m7490_gshared (Task_t1148 * __this, Func_2_t2093 * ___continuation, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method);
#define Task_ContinueWith_TisInt32_t82_m7490(__this, ___continuation, ___cancellationToken, method) (( Task_1_t1310 * (*) (Task_t1148 *, Func_2_t2093 *, CancellationToken_t1101 , const MethodInfo*))Task_ContinueWith_TisInt32_t82_m7490_gshared)(__this, ___continuation, ___cancellationToken, method)
struct Enumerable_t68;
struct TaskU5BU5D_t1282;
struct IEnumerable_1_t1354;
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisTask_t1148_m7491(__this /* static, unused */, p0, method) (( TaskU5BU5D_t1282* (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToArray_TisObject_t_m7002_gshared)(__this /* static, unused */, p0, method)
struct Task_t1148;
struct Task_1_t1310;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int32>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int32>(T)
extern "C" Task_1_t1310 * Task_FromResult_TisInt32_t82_m7013_gshared (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method);
#define Task_FromResult_TisInt32_t82_m7013(__this /* static, unused */, ___result, method) (( Task_1_t1310 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))Task_FromResult_TisInt32_t82_m7013_gshared)(__this /* static, unused */, ___result, method)
struct Task_t1148;
struct Task_1_t1309;
struct Func_2_t1284;
struct Task_t1148;
struct Task_1_t1358;
struct Func_2_t2094;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Byte>(System.Func`2<System.Threading.Tasks.Task,T>)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Byte>(System.Func`2<System.Threading.Tasks.Task,T>)
extern "C" Task_1_t1358 * Task_ContinueWith_TisByte_t683_m7493_gshared (Task_t1148 * __this, Func_2_t2094 * ___continuation, const MethodInfo* method);
#define Task_ContinueWith_TisByte_t683_m7493(__this, ___continuation, method) (( Task_1_t1358 * (*) (Task_t1148 *, Func_2_t2094 *, const MethodInfo*))Task_ContinueWith_TisByte_t683_m7493_gshared)(__this, ___continuation, method)
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Boolean>(System.Func`2<System.Threading.Tasks.Task,T>)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Boolean>(System.Func`2<System.Threading.Tasks.Task,T>)
#define Task_ContinueWith_TisBoolean_t59_m7492(__this, ___continuation, method) (( Task_1_t1309 * (*) (Task_t1148 *, Func_2_t1284 *, const MethodInfo*))Task_ContinueWith_TisByte_t683_m7493_gshared)(__this, ___continuation, method)
struct TaskFactory_t1306;
struct Task_1_t1310;
struct Func_1_t1294;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory::StartNew<System.Int32>(System.Func`1<T>)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskFactory::StartNew<System.Int32>(System.Func`1<T>)
extern "C" Task_1_t1310 * TaskFactory_StartNew_TisInt32_t82_m7494_gshared (TaskFactory_t1306 * __this, Func_1_t1294 * ___func, const MethodInfo* method);
#define TaskFactory_StartNew_TisInt32_t82_m7494(__this, ___func, method) (( Task_1_t1310 * (*) (TaskFactory_t1306 *, Func_1_t1294 *, const MethodInfo*))TaskFactory_StartNew_TisInt32_t82_m7494_gshared)(__this, ___func, method)


// System.Void System.Threading.Tasks.Task::.ctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2095_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m7495_MethodInfo_var;
extern "C" void Task__ctor_m6922 (Task_t1148 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		List_1_t2095_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3236);
		List_1__ctor_m7495_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485043);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_0, /*hidden argument*/NULL);
		__this->___mutex_2 = L_0;
		List_1_t2095 * L_1 = (List_1_t2095 *)il2cpp_codegen_object_new (List_1_t2095_il2cpp_TypeInfo_var);
		List_1__ctor_m7495(L_1, /*hidden argument*/List_1__ctor_m7495_MethodInfo_var);
		__this->___continuations_3 = L_1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
extern TypeInfo* TaskFactory_t1306_il2cpp_TypeInfo_var;
extern "C" TaskFactory_t1306 * Task_get_Factory_m6923 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskFactory_t1306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3237);
		s_Il2CppMethodIntialized = true;
	}
	{
		TaskFactory_t1306 * L_0 = (TaskFactory_t1306 *)il2cpp_codegen_object_new (TaskFactory_t1306_il2cpp_TypeInfo_var);
		TaskFactory__ctor_m6952(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C" AggregateException_t1278 * Task_get_Exception_m6924 (Task_t1148 * __this, const MethodInfo* method)
{
	AggregateException_t1278 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___mutex_2);
		Object_t * L_1 = L_0;
		V_1 = L_1;
		Monitor_Enter_m7045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		AggregateException_t1278 * L_2 = (__this->___exception_4);
		V_0 = L_2;
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_t * L_3 = V_1;
		Monitor_Exit_m7046(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_001d:
	{
		AggregateException_t1278 * L_4 = V_0;
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C" bool Task_get_IsCanceled_m6925 (Task_t1148 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___mutex_2);
		Object_t * L_1 = L_0;
		V_1 = L_1;
		Monitor_Enter_m7045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		bool L_2 = (__this->___isCanceled_5);
		V_0 = L_2;
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_t * L_3 = V_1;
		Monitor_Exit_m7046(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_001d:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" bool Task_get_IsCompleted_m6926 (Task_t1148 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___mutex_2);
		Object_t * L_1 = L_0;
		V_1 = L_1;
		Monitor_Enter_m7045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		bool L_2 = (__this->___isCompleted_6);
		V_0 = L_2;
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		Object_t * L_3 = V_1;
		Monitor_Exit_m7046(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_001d:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C" bool Task_get_IsFaulted_m6927 (Task_t1148 * __this, const MethodInfo* method)
{
	{
		AggregateException_t1278 * L_0 = Task_get_Exception_m6924(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((Object_t*)(AggregateException_t1278 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Threading.Tasks.Task::Wait()
extern "C" void Task_Wait_m6928 (Task_t1148 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___mutex_2);
		Object_t * L_1 = L_0;
		V_0 = L_1;
		Monitor_Enter_m7045(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = Task_get_IsCompleted_m6926(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0021;
			}
		}

IL_0015:
		{
			Object_t * L_3 = (__this->___mutex_2);
			Monitor_Wait_m7496(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		}

IL_0021:
		{
			bool L_4 = Task_get_IsFaulted_m6927(__this, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			AggregateException_t1278 * L_5 = Task_get_Exception_m6924(__this, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_5);
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		Object_t * L_6 = V_0;
		Monitor_Exit_m7046(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0039:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
extern "C" Task_t1148 * Task_ContinueWith_m6929 (Task_t1148 * __this, Action_1_t1109 * ___continuation, const MethodInfo* method)
{
	{
		Action_1_t1109 * L_0 = ___continuation;
		CancellationToken_t1101  L_1 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		Task_t1148 * L_2 = Task_ContinueWith_m6930(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
extern TypeInfo* U3CU3Ec__DisplayClass8_t1281_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t2093_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass8_U3CContinueWithU3Eb__7_m6910_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m7497_MethodInfo_var;
extern const MethodInfo* Task_ContinueWith_TisInt32_t82_m7490_MethodInfo_var;
extern "C" Task_t1148 * Task_ContinueWith_m6930 (Task_t1148 * __this, Action_1_t1109 * ___continuation, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass8_t1281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3238);
		Func_2_t2093_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3239);
		U3CU3Ec__DisplayClass8_U3CContinueWithU3Eb__7_m6910_MethodInfo_var = il2cpp_codegen_method_info_from_index(1396);
		Func_2__ctor_m7497_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485045);
		Task_ContinueWith_TisInt32_t82_m7490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485046);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass8_t1281 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass8_t1281 * L_0 = (U3CU3Ec__DisplayClass8_t1281 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass8_t1281_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8__ctor_m6909(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_t1281 * L_1 = V_0;
		Action_1_t1109 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass8_t1281 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CU3Ec__DisplayClass8_U3CContinueWithU3Eb__7_m6910_MethodInfo_var };
		Func_2_t2093 * L_5 = (Func_2_t2093 *)il2cpp_codegen_object_new (Func_2_t2093_il2cpp_TypeInfo_var);
		Func_2__ctor_m7497(L_5, L_3, L_4, /*hidden argument*/Func_2__ctor_m7497_MethodInfo_var);
		CancellationToken_t1101  L_6 = ___cancellationToken;
		Task_1_t1310 * L_7 = Task_ContinueWith_TisInt32_t82_m7490(__this, L_5, L_6, /*hidden argument*/Task_ContinueWith_TisInt32_t82_m7490_MethodInfo_var);
		return L_7;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
extern TypeInfo* IEnumerable_1_t1354_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1148_il2cpp_TypeInfo_var;
extern "C" Task_t1148 * Task_WhenAll_m6931 (Object_t * __this /* static, unused */, TaskU5BU5D_t1282* ___tasks, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3240);
		Task_t1148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		s_Il2CppMethodIntialized = true;
	}
	{
		TaskU5BU5D_t1282* L_0 = ___tasks;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
		Task_t1148 * L_1 = Task_WhenAll_m6932(NULL /*static, unused*/, ((Object_t*)Castclass(L_0, IEnumerable_1_t1354_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern TypeInfo* U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1148_il2cpp_TypeInfo_var;
extern TypeInfo* TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t1303_il2cpp_TypeInfo_var;
extern const MethodInfo* Enumerable_ToArray_TisTask_t1148_m7491_MethodInfo_var;
extern const MethodInfo* Task_FromResult_TisInt32_t82_m7013_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1__ctor_m6978_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__a_m6912_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m7498_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_get_Task_m6980_MethodInfo_var;
extern "C" Task_t1148 * Task_WhenAll_m6932 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3233);
		Task_t1148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2308);
		Action_1_t1303_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3241);
		Enumerable_ToArray_TisTask_t1148_m7491_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485047);
		Task_FromResult_TisInt32_t82_m7013_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484508);
		TaskCompletionSource_1__ctor_m6978_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484478);
		U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__a_m6912_MethodInfo_var = il2cpp_codegen_method_info_from_index(1400);
		Action_1__ctor_m7498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485049);
		TaskCompletionSource_1_get_Task_m6980_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484480);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClasse_t1286 * V_0 = {0};
	{
		U3CU3Ec__DisplayClasse_t1286 * L_0 = (U3CU3Ec__DisplayClasse_t1286 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClasse_t1286_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClasse__ctor_m6911(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClasse_t1286 * L_1 = V_0;
		Object_t* L_2 = ___tasks;
		TaskU5BU5D_t1282* L_3 = Enumerable_ToArray_TisTask_t1148_m7491(NULL /*static, unused*/, L_2, /*hidden argument*/Enumerable_ToArray_TisTask_t1148_m7491_MethodInfo_var);
		NullCheck(L_1);
		L_1->___taskArr_0 = L_3;
		U3CU3Ec__DisplayClasse_t1286 * L_4 = V_0;
		NullCheck(L_4);
		TaskU5BU5D_t1282* L_5 = (L_4->___taskArr_0);
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
		Task_1_t1310 * L_6 = Task_FromResult_TisInt32_t82_m7013(NULL /*static, unused*/, 0, /*hidden argument*/Task_FromResult_TisInt32_t82_m7013_MethodInfo_var);
		return L_6;
	}

IL_0023:
	{
		U3CU3Ec__DisplayClasse_t1286 * L_7 = V_0;
		TaskCompletionSource_1_t1283 * L_8 = (TaskCompletionSource_1_t1283 *)il2cpp_codegen_object_new (TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m6978(L_8, /*hidden argument*/TaskCompletionSource_1__ctor_m6978_MethodInfo_var);
		NullCheck(L_7);
		L_7->___tcs_1 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
		TaskFactory_t1306 * L_9 = Task_get_Factory_m6923(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClasse_t1286 * L_10 = V_0;
		NullCheck(L_10);
		TaskU5BU5D_t1282* L_11 = (L_10->___taskArr_0);
		U3CU3Ec__DisplayClasse_t1286 * L_12 = V_0;
		IntPtr_t L_13 = { (void*)U3CU3Ec__DisplayClasse_U3CWhenAllU3Eb__a_m6912_MethodInfo_var };
		Action_1_t1303 * L_14 = (Action_1_t1303 *)il2cpp_codegen_object_new (Action_1_t1303_il2cpp_TypeInfo_var);
		Action_1__ctor_m7498(L_14, L_12, L_13, /*hidden argument*/Action_1__ctor_m7498_MethodInfo_var);
		NullCheck(L_9);
		TaskFactory_ContinueWhenAll_m6956(L_9, L_11, L_14, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClasse_t1286 * L_15 = V_0;
		NullCheck(L_15);
		TaskCompletionSource_1_t1283 * L_16 = (L_15->___tcs_1);
		NullCheck(L_16);
		Task_1_t1310 * L_17 = TaskCompletionSource_1_get_Task_m6980(L_16, /*hidden argument*/TaskCompletionSource_1_get_Task_m6980_MethodInfo_var);
		return L_17;
	}
}
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
extern TypeInfo* IEnumerable_1_t1354_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1148_il2cpp_TypeInfo_var;
extern "C" Task_1_t1297 * Task_WhenAny_m6933 (Object_t * __this /* static, unused */, TaskU5BU5D_t1282* ___tasks, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3240);
		Task_t1148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		s_Il2CppMethodIntialized = true;
	}
	{
		TaskU5BU5D_t1282* L_0 = ___tasks;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
		Task_1_t1297 * L_1 = Task_WhenAny_m6934(NULL /*static, unused*/, ((Object_t*)Castclass(L_0, IEnumerable_1_t1354_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern TypeInfo* U3CU3Ec__DisplayClass15_t1288_il2cpp_TypeInfo_var;
extern TypeInfo* TaskCompletionSource_1_t1287_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1354_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2096_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t1284_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* TaskCompletionSource_1__ctor_m7499_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass15_U3CWhenAnyU3Eb__13_m6917_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m7484_MethodInfo_var;
extern const MethodInfo* Task_ContinueWith_TisBoolean_t59_m7492_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_get_Task_m7500_MethodInfo_var;
extern "C" Task_1_t1297 * Task_WhenAny_m6934 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass15_t1288_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3242);
		TaskCompletionSource_1_t1287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3243);
		IEnumerable_1_t1354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3240);
		IEnumerator_1_t2096_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3244);
		Func_2_t1284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3234);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		TaskCompletionSource_1__ctor_m7499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485050);
		U3CU3Ec__DisplayClass15_U3CWhenAnyU3Eb__13_m6917_MethodInfo_var = il2cpp_codegen_method_info_from_index(1403);
		Func_2__ctor_m7484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485031);
		Task_ContinueWith_TisBoolean_t59_m7492_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485052);
		TaskCompletionSource_1_get_Task_m7500_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485053);
		s_Il2CppMethodIntialized = true;
	}
	Task_t1148 * V_0 = {0};
	Func_2_t1284 * V_1 = {0};
	U3CU3Ec__DisplayClass15_t1288 * V_2 = {0};
	Object_t* V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Task_t1148 * G_B4_0 = {0};
	Task_t1148 * G_B3_0 = {0};
	{
		V_1 = (Func_2_t1284 *)NULL;
		U3CU3Ec__DisplayClass15_t1288 * L_0 = (U3CU3Ec__DisplayClass15_t1288 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass15_t1288_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15__ctor_m6916(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		U3CU3Ec__DisplayClass15_t1288 * L_1 = V_2;
		TaskCompletionSource_1_t1287 * L_2 = (TaskCompletionSource_1_t1287 *)il2cpp_codegen_object_new (TaskCompletionSource_1_t1287_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m7499(L_2, /*hidden argument*/TaskCompletionSource_1__ctor_m7499_MethodInfo_var);
		NullCheck(L_1);
		L_1->___tcs_0 = L_2;
		Object_t* L_3 = ___tasks;
		NullCheck(L_3);
		Object_t* L_4 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>::GetEnumerator() */, IEnumerable_1_t1354_il2cpp_TypeInfo_var, L_3);
		V_3 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001c:
		{
			Object_t* L_5 = V_3;
			NullCheck(L_5);
			Task_t1148 * L_6 = (Task_t1148 *)InterfaceFuncInvoker0< Task_t1148 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Threading.Tasks.Task>::get_Current() */, IEnumerator_1_t2096_il2cpp_TypeInfo_var, L_5);
			V_0 = L_6;
			Task_t1148 * L_7 = V_0;
			Func_2_t1284 * L_8 = V_1;
			G_B3_0 = L_7;
			if (L_8)
			{
				G_B4_0 = L_7;
				goto IL_0034;
			}
		}

IL_0027:
		{
			U3CU3Ec__DisplayClass15_t1288 * L_9 = V_2;
			IntPtr_t L_10 = { (void*)U3CU3Ec__DisplayClass15_U3CWhenAnyU3Eb__13_m6917_MethodInfo_var };
			Func_2_t1284 * L_11 = (Func_2_t1284 *)il2cpp_codegen_object_new (Func_2_t1284_il2cpp_TypeInfo_var);
			Func_2__ctor_m7484(L_11, L_9, L_10, /*hidden argument*/Func_2__ctor_m7484_MethodInfo_var);
			V_1 = L_11;
			G_B4_0 = G_B3_0;
		}

IL_0034:
		{
			Func_2_t1284 * L_12 = V_1;
			NullCheck(G_B4_0);
			Task_ContinueWith_TisBoolean_t59_m7492(G_B4_0, L_12, /*hidden argument*/Task_ContinueWith_TisBoolean_t59_m7492_MethodInfo_var);
		}

IL_003b:
		{
			Object_t* L_13 = V_3;
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_001c;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0045);
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
			Object_t* L_15 = V_3;
			if (!L_15)
			{
				goto IL_004e;
			}
		}

IL_0048:
		{
			Object_t* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_16);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004f:
	{
		U3CU3Ec__DisplayClass15_t1288 * L_17 = V_2;
		NullCheck(L_17);
		TaskCompletionSource_1_t1287 * L_18 = (L_17->___tcs_0);
		NullCheck(L_18);
		Task_1_t1297 * L_19 = TaskCompletionSource_1_get_Task_m7500(L_18, /*hidden argument*/TaskCompletionSource_1_get_Task_m7500_MethodInfo_var);
		return L_19;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
extern TypeInfo* U3CU3Ec__DisplayClass1d_t1289_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1148_il2cpp_TypeInfo_var;
extern TypeInfo* Func_1_t1294_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass1d_U3CRunU3Eb__1c_m6919_MethodInfo_var;
extern const MethodInfo* Func_1__ctor_m7501_MethodInfo_var;
extern const MethodInfo* TaskFactory_StartNew_TisInt32_t82_m7494_MethodInfo_var;
extern "C" Task_t1148 * Task_Run_m6935 (Object_t * __this /* static, unused */, Action_t143 * ___toRun, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass1d_t1289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3245);
		Task_t1148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		Func_1_t1294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3246);
		U3CU3Ec__DisplayClass1d_U3CRunU3Eb__1c_m6919_MethodInfo_var = il2cpp_codegen_method_info_from_index(1406);
		Func_1__ctor_m7501_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485055);
		TaskFactory_StartNew_TisInt32_t82_m7494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485056);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1d_t1289 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1d_t1289 * L_0 = (U3CU3Ec__DisplayClass1d_t1289 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass1d_t1289_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1d__ctor_m6918(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1d_t1289 * L_1 = V_0;
		Action_t143 * L_2 = ___toRun;
		NullCheck(L_1);
		L_1->___toRun_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
		TaskFactory_t1306 * L_3 = Task_get_Factory_m6923(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass1d_t1289 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CU3Ec__DisplayClass1d_U3CRunU3Eb__1c_m6919_MethodInfo_var };
		Func_1_t1294 * L_6 = (Func_1_t1294 *)il2cpp_codegen_object_new (Func_1_t1294_il2cpp_TypeInfo_var);
		Func_1__ctor_m7501(L_6, L_4, L_5, /*hidden argument*/Func_1__ctor_m7501_MethodInfo_var);
		NullCheck(L_3);
		Task_1_t1310 * L_7 = TaskFactory_StartNew_TisInt32_t82_m7494(L_3, L_6, /*hidden argument*/TaskFactory_StartNew_TisInt32_t82_m7494_MethodInfo_var);
		return L_7;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.TimeSpan)
extern TypeInfo* U3CU3Ec__DisplayClass20_t1290_il2cpp_TypeInfo_var;
extern TypeInfo* TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var;
extern TypeInfo* TimerCallback_t2098_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2097_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t334_il2cpp_TypeInfo_var;
extern const MethodInfo* TaskCompletionSource_1__ctor_m6978_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass20_U3CDelayU3Eb__1f_m6921_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_get_Task_m6980_MethodInfo_var;
extern "C" Task_t1148 * Task_Delay_m6936 (Object_t * __this /* static, unused */, TimeSpan_t334  ___timespan, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass20_t1290_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3247);
		TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2308);
		TimerCallback_t2098_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3248);
		Timer_t2097_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3249);
		TimeSpan_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2321);
		TaskCompletionSource_1__ctor_m6978_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484478);
		U3CU3Ec__DisplayClass20_U3CDelayU3Eb__1f_m6921_MethodInfo_var = il2cpp_codegen_method_info_from_index(1409);
		TaskCompletionSource_1_get_Task_m6980_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484480);
		s_Il2CppMethodIntialized = true;
	}
	Timer_t2097 * V_0 = {0};
	U3CU3Ec__DisplayClass20_t1290 * V_1 = {0};
	{
		U3CU3Ec__DisplayClass20_t1290 * L_0 = (U3CU3Ec__DisplayClass20_t1290 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass20_t1290_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass20__ctor_m6920(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		U3CU3Ec__DisplayClass20_t1290 * L_1 = V_1;
		TaskCompletionSource_1_t1283 * L_2 = (TaskCompletionSource_1_t1283 *)il2cpp_codegen_object_new (TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m6978(L_2, /*hidden argument*/TaskCompletionSource_1__ctor_m6978_MethodInfo_var);
		NullCheck(L_1);
		L_1->___tcs_0 = L_2;
		U3CU3Ec__DisplayClass20_t1290 * L_3 = V_1;
		IntPtr_t L_4 = { (void*)U3CU3Ec__DisplayClass20_U3CDelayU3Eb__1f_m6921_MethodInfo_var };
		TimerCallback_t2098 * L_5 = (TimerCallback_t2098 *)il2cpp_codegen_object_new (TimerCallback_t2098_il2cpp_TypeInfo_var);
		TimerCallback__ctor_m7502(L_5, L_3, L_4, /*hidden argument*/NULL);
		Timer_t2097 * L_6 = (Timer_t2097 *)il2cpp_codegen_object_new (Timer_t2097_il2cpp_TypeInfo_var);
		Timer__ctor_m7503(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Timer_t2097 * L_7 = V_0;
		TimeSpan_t334  L_8 = ___timespan;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t334_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_9 = TimeSpan_FromMilliseconds_m7504(NULL /*static, unused*/, (-1.0), /*hidden argument*/NULL);
		NullCheck(L_7);
		Timer_Change_m7505(L_7, L_8, L_9, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass20_t1290 * L_10 = V_1;
		NullCheck(L_10);
		TaskCompletionSource_1_t1283 * L_11 = (L_10->___tcs_0);
		NullCheck(L_11);
		Task_1_t1310 * L_12 = TaskCompletionSource_1_get_Task_m6980(L_11, /*hidden argument*/TaskCompletionSource_1_get_Task_m6980_MethodInfo_var);
		return L_12;
	}
}
// System.Void System.Threading.Tasks.Task::.cctor()
extern TypeInfo* Task_t1148_il2cpp_TypeInfo_var;
extern TypeInfo* Func_1_t1294_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadLocal_1_t1291_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t1292_il2cpp_TypeInfo_var;
extern const MethodInfo* Task_U3C_cctorU3Eb__22_m6938_MethodInfo_var;
extern const MethodInfo* Func_1__ctor_m7501_MethodInfo_var;
extern const MethodInfo* ThreadLocal_1__ctor_m7506_MethodInfo_var;
extern const MethodInfo* Task_U3C_cctorU3Eb__23_m6939_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m7507_MethodInfo_var;
extern "C" void Task__cctor_m6937 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		Func_1_t1294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3246);
		ThreadLocal_1_t1291_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3250);
		Action_1_t1292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3251);
		Task_U3C_cctorU3Eb__22_m6938_MethodInfo_var = il2cpp_codegen_method_info_from_index(1410);
		Func_1__ctor_m7501_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485055);
		ThreadLocal_1__ctor_m7506_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485059);
		Task_U3C_cctorU3Eb__23_m6939_MethodInfo_var = il2cpp_codegen_method_info_from_index(1412);
		Action_1__ctor_m7507_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485061);
		s_Il2CppMethodIntialized = true;
	}
	{
		Func_1_t1294 * L_0 = ((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_7;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		IntPtr_t L_1 = { (void*)Task_U3C_cctorU3Eb__22_m6938_MethodInfo_var };
		Func_1_t1294 * L_2 = (Func_1_t1294 *)il2cpp_codegen_object_new (Func_1_t1294_il2cpp_TypeInfo_var);
		Func_1__ctor_m7501(L_2, NULL, L_1, /*hidden argument*/Func_1__ctor_m7501_MethodInfo_var);
		((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_7 = L_2;
	}

IL_0018:
	{
		Func_1_t1294 * L_3 = ((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate24_7;
		ThreadLocal_1_t1291 * L_4 = (ThreadLocal_1_t1291 *)il2cpp_codegen_object_new (ThreadLocal_1_t1291_il2cpp_TypeInfo_var);
		ThreadLocal_1__ctor_m7506(L_4, L_3, /*hidden argument*/ThreadLocal_1__ctor_m7506_MethodInfo_var);
		((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___executionDepth_0 = L_4;
		Action_1_t1292 * L_5 = ((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_8;
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		IntPtr_t L_6 = { (void*)Task_U3C_cctorU3Eb__23_m6939_MethodInfo_var };
		Action_1_t1292 * L_7 = (Action_1_t1292 *)il2cpp_codegen_object_new (Action_1_t1292_il2cpp_TypeInfo_var);
		Action_1__ctor_m7507(L_7, NULL, L_6, /*hidden argument*/Action_1__ctor_m7507_MethodInfo_var);
		((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_8 = L_7;
	}

IL_003f:
	{
		Action_1_t1292 * L_8 = ((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate25_8;
		((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___immediateExecutor_1 = L_8;
		return;
	}
}
// System.Int32 System.Threading.Tasks.Task::<.cctor>b__22()
extern "C" int32_t Task_U3C_cctorU3Eb__22_m6938 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Threading.Tasks.Task::<.cctor>b__23(System.Action)
extern TypeInfo* Task_t1148_il2cpp_TypeInfo_var;
extern const MethodInfo* ThreadLocal_1_get_Value_m7508_MethodInfo_var;
extern const MethodInfo* ThreadLocal_1_set_Value_m7509_MethodInfo_var;
extern "C" void Task_U3C_cctorU3Eb__23_m6939 (Object_t * __this /* static, unused */, Action_t143 * ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2300);
		ThreadLocal_1_get_Value_m7508_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485062);
		ThreadLocal_1_set_Value_m7509_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485063);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AppDomain_t2086 * L_0 = AppDomain_get_CurrentDomain_m7469(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = AppDomain_get_FriendlyName_m7470(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_1, (String_t*) &_stringLiteral1687);
		V_0 = L_2;
		V_1 = ((int32_t)10);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = ((int32_t)200);
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
		ThreadLocal_1_t1291 * L_4 = ((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___executionDepth_0;
		ThreadLocal_1_t1291 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = ThreadLocal_1_get_Value_m7508(L_5, /*hidden argument*/ThreadLocal_1_get_Value_m7508_MethodInfo_var);
		NullCheck(L_5);
		ThreadLocal_1_set_Value_m7509(L_5, ((int32_t)((int32_t)L_6+(int32_t)1)), /*hidden argument*/ThreadLocal_1_set_Value_m7509_MethodInfo_var);
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
			ThreadLocal_1_t1291 * L_7 = ((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___executionDepth_0;
			NullCheck(L_7);
			int32_t L_8 = ThreadLocal_1_get_Value_m7508(L_7, /*hidden argument*/ThreadLocal_1_get_Value_m7508_MethodInfo_var);
			int32_t L_9 = V_1;
			if ((((int32_t)L_8) > ((int32_t)L_9)))
			{
				goto IL_0048;
			}
		}

IL_0040:
		{
			Action_t143 * L_10 = ___a;
			NullCheck(L_10);
			VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_10);
			goto IL_0058;
		}

IL_0048:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
			TaskFactory_t1306 * L_11 = Task_get_Factory_m6923(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskScheduler_t1305 * L_12 = TaskFactory_get_Scheduler_m6954(L_11, /*hidden argument*/NULL);
			Action_t143 * L_13 = ___a;
			NullCheck(L_12);
			TaskScheduler_Post_m6960(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1148_il2cpp_TypeInfo_var);
		ThreadLocal_1_t1291 * L_14 = ((Task_t1148_StaticFields*)Task_t1148_il2cpp_TypeInfo_var->static_fields)->___executionDepth_0;
		ThreadLocal_1_t1291 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = ThreadLocal_1_get_Value_m7508(L_15, /*hidden argument*/ThreadLocal_1_get_Value_m7508_MethodInfo_var);
		NullCheck(L_15);
		ThreadLocal_1_set_Value_m7509(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)), /*hidden argument*/ThreadLocal_1_set_Value_m7509_MethodInfo_var);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_006d:
	{
		return;
	}
}
// System.Threading.Tasks.TaskContinuationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskContinuationOptions.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskContinuationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskContinuationOptionsMethodDeclarations.h"



// System.Threading.Tasks.TaskCreationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskCreationOptions.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskCreationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskCreationOptionsMethodDeclarations.h"



// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass2
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass2
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__DMethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_5MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass2::.ctor()
extern "C" void U3CU3Ec__DisplayClass2__ctor_m6940 (U3CU3Ec__DisplayClass2_t1298 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass2::<Unwrap>b__0(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>)
extern TypeInfo* Action_1_t1109_il2cpp_TypeInfo_var;
extern const MethodInfo* TaskCompletionSource_1_TrySetException_m7510_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_TrySetCanceled_m7511_MethodInfo_var;
extern const MethodInfo* Task_1_get_Result_m7512_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass2_U3CUnwrapU3Eb__1_m6942_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m6966_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass2_U3CUnwrapU3Eb__0_m6941 (U3CU3Ec__DisplayClass2_t1298 * __this, Task_1_t1297 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2301);
		TaskCompletionSource_1_TrySetException_m7510_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485064);
		TaskCompletionSource_1_TrySetCanceled_m7511_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485065);
		Task_1_get_Result_m7512_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485066);
		U3CU3Ec__DisplayClass2_U3CUnwrapU3Eb__1_m6942_MethodInfo_var = il2cpp_codegen_method_info_from_index(1419);
		Action_1__ctor_m6966_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484469);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1109 * V_0 = {0};
	Task_t1148 * G_B6_0 = {0};
	Task_t1148 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t1109 *)NULL;
		Task_1_t1297 * L_0 = ___t;
		NullCheck(L_0);
		bool L_1 = Task_get_IsFaulted_m6927(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t1283 * L_2 = (__this->___tcs_0);
		Task_1_t1297 * L_3 = ___t;
		NullCheck(L_3);
		AggregateException_t1278 * L_4 = Task_get_Exception_m6924(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		TaskCompletionSource_1_TrySetException_m7510(L_2, L_4, /*hidden argument*/TaskCompletionSource_1_TrySetException_m7510_MethodInfo_var);
		return;
	}

IL_001d:
	{
		Task_1_t1297 * L_5 = ___t;
		NullCheck(L_5);
		bool L_6 = Task_get_IsCanceled_m6925(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t1283 * L_7 = (__this->___tcs_0);
		NullCheck(L_7);
		TaskCompletionSource_1_TrySetCanceled_m7511(L_7, /*hidden argument*/TaskCompletionSource_1_TrySetCanceled_m7511_MethodInfo_var);
		return;
	}

IL_0032:
	{
		Task_1_t1297 * L_8 = (__this->___task_1);
		NullCheck(L_8);
		Task_t1148 * L_9 = Task_1_get_Result_m7512(L_8, /*hidden argument*/Task_1_get_Result_m7512_MethodInfo_var);
		Action_1_t1109 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_004d;
		}
	}
	{
		IntPtr_t L_11 = { (void*)U3CU3Ec__DisplayClass2_U3CUnwrapU3Eb__1_m6942_MethodInfo_var };
		Action_1_t1109 * L_12 = (Action_1_t1109 *)il2cpp_codegen_object_new (Action_1_t1109_il2cpp_TypeInfo_var);
		Action_1__ctor_m6966(L_12, __this, L_11, /*hidden argument*/Action_1__ctor_m6966_MethodInfo_var);
		V_0 = L_12;
		G_B6_0 = G_B5_0;
	}

IL_004d:
	{
		Action_1_t1109 * L_13 = V_0;
		NullCheck(G_B6_0);
		Task_ContinueWith_m6929(G_B6_0, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass2::<Unwrap>b__1(System.Threading.Tasks.Task)
extern const MethodInfo* TaskCompletionSource_1_TrySetException_m7510_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_TrySetCanceled_m7511_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_TrySetResult_m7489_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass2_U3CUnwrapU3Eb__1_m6942 (U3CU3Ec__DisplayClass2_t1298 * __this, Task_t1148 * ___inner, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskCompletionSource_1_TrySetException_m7510_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485064);
		TaskCompletionSource_1_TrySetCanceled_m7511_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485065);
		TaskCompletionSource_1_TrySetResult_m7489_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485042);
		s_Il2CppMethodIntialized = true;
	}
	{
		Task_t1148 * L_0 = ___inner;
		NullCheck(L_0);
		bool L_1 = Task_get_IsFaulted_m6927(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t1283 * L_2 = (__this->___tcs_0);
		Task_t1148 * L_3 = ___inner;
		NullCheck(L_3);
		AggregateException_t1278 * L_4 = Task_get_Exception_m6924(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		TaskCompletionSource_1_TrySetException_m7510(L_2, L_4, /*hidden argument*/TaskCompletionSource_1_TrySetException_m7510_MethodInfo_var);
		return;
	}

IL_001b:
	{
		Task_t1148 * L_5 = ___inner;
		NullCheck(L_5);
		bool L_6 = Task_get_IsCanceled_m6925(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t1283 * L_7 = (__this->___tcs_0);
		NullCheck(L_7);
		TaskCompletionSource_1_TrySetCanceled_m7511(L_7, /*hidden argument*/TaskCompletionSource_1_TrySetCanceled_m7511_MethodInfo_var);
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t1283 * L_8 = (__this->___tcs_0);
		NullCheck(L_8);
		TaskCompletionSource_1_TrySetResult_m7489(L_8, 0, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m7489_MethodInfo_var);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Action_1_gen_24.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
#include "mscorlib_System_Action_1_gen_24MethodDeclarations.h"


// System.Threading.Tasks.Task System.Threading.Tasks.TaskExtensions::Unwrap(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>)
extern TypeInfo* U3CU3Ec__DisplayClass2_t1298_il2cpp_TypeInfo_var;
extern TypeInfo* TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t2099_il2cpp_TypeInfo_var;
extern const MethodInfo* TaskCompletionSource_1__ctor_m6978_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass2_U3CUnwrapU3Eb__0_m6941_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m7513_MethodInfo_var;
extern const MethodInfo* Task_1_ContinueWith_m7514_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_get_Task_m6980_MethodInfo_var;
extern "C" Task_t1148 * TaskExtensions_Unwrap_m6943 (Object_t * __this /* static, unused */, Task_1_t1297 * ___task, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass2_t1298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3253);
		TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2308);
		Action_1_t2099_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3254);
		TaskCompletionSource_1__ctor_m6978_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484478);
		U3CU3Ec__DisplayClass2_U3CUnwrapU3Eb__0_m6941_MethodInfo_var = il2cpp_codegen_method_info_from_index(1420);
		Action_1__ctor_m7513_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485069);
		Task_1_ContinueWith_m7514_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485070);
		TaskCompletionSource_1_get_Task_m6980_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484480);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass2_t1298 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass2_t1298 * L_0 = (U3CU3Ec__DisplayClass2_t1298 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass2_t1298_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2__ctor_m6940(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_t1298 * L_1 = V_0;
		Task_1_t1297 * L_2 = ___task;
		NullCheck(L_1);
		L_1->___task_1 = L_2;
		U3CU3Ec__DisplayClass2_t1298 * L_3 = V_0;
		TaskCompletionSource_1_t1283 * L_4 = (TaskCompletionSource_1_t1283 *)il2cpp_codegen_object_new (TaskCompletionSource_1_t1283_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m6978(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m6978_MethodInfo_var);
		NullCheck(L_3);
		L_3->___tcs_0 = L_4;
		U3CU3Ec__DisplayClass2_t1298 * L_5 = V_0;
		NullCheck(L_5);
		Task_1_t1297 * L_6 = (L_5->___task_1);
		U3CU3Ec__DisplayClass2_t1298 * L_7 = V_0;
		IntPtr_t L_8 = { (void*)U3CU3Ec__DisplayClass2_U3CUnwrapU3Eb__0_m6941_MethodInfo_var };
		Action_1_t2099 * L_9 = (Action_1_t2099 *)il2cpp_codegen_object_new (Action_1_t2099_il2cpp_TypeInfo_var);
		Action_1__ctor_m7513(L_9, L_7, L_8, /*hidden argument*/Action_1__ctor_m7513_MethodInfo_var);
		NullCheck(L_6);
		Task_1_ContinueWith_m7514(L_6, L_9, /*hidden argument*/Task_1_ContinueWith_m7514_MethodInfo_var);
		U3CU3Ec__DisplayClass2_t1298 * L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_t1283 * L_11 = (L_10->___tcs_0);
		NullCheck(L_11);
		Task_1_t1310 * L_12 = TaskCompletionSource_1_get_Task_m6980(L_11, /*hidden argument*/TaskCompletionSource_1_get_Task_m6980_MethodInfo_var);
		return L_12;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass16
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass16
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__DispMethodDeclarations.h"

// System.Action`1<System.IAsyncResult>
#include "mscorlib_System_Action_1_gen_14.h"
// System.Action`1<System.IAsyncResult>
#include "mscorlib_System_Action_1_gen_14MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass16::.ctor()
extern "C" void U3CU3Ec__DisplayClass16__ctor_m6944 (U3CU3Ec__DisplayClass16_t1301 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Threading.Tasks.TaskFactory/<>c__DisplayClass16::<FromAsync>b__15(System.IAsyncResult)
extern "C" int32_t U3CU3Ec__DisplayClass16_U3CFromAsyncU3Eb__15_m6945 (U3CU3Ec__DisplayClass16_t1301 * __this, Object_t * ___result, const MethodInfo* method)
{
	{
		Action_1_t1300 * L_0 = (__this->___endMethod_0);
		Object_t * L_1 = ___result;
		NullCheck(L_0);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.Action`1<System.IAsyncResult>::Invoke(!0) */, L_0, L_1);
		return 0;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass20
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass20
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_0MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_4.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_27.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_4MethodDeclarations.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_27MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::.ctor()
extern "C" void U3CU3Ec__DisplayClass20__ctor_m6946 (U3CU3Ec__DisplayClass20_t1304 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::<ContinueWhenAll>b__1d(System.Threading.Tasks.Task)
extern const MethodInfo* TaskCompletionSource_1_TrySetResult_m7516_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass20_U3CContinueWhenAllU3Eb__1d_m6947 (U3CU3Ec__DisplayClass20_t1304 * __this, Task_t1148 * ____, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskCompletionSource_1_TrySetResult_m7516_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485071);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t* L_0 = &(__this->___remaining_0);
		int32_t L_1 = Interlocked_Decrement_m7515(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		TaskCompletionSource_1_t1302 * L_2 = (__this->___tcs_1);
		TaskU5BU5D_t1282* L_3 = (__this->___tasks_2);
		NullCheck(L_2);
		TaskCompletionSource_1_TrySetResult_m7516(L_2, L_3, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m7516_MethodInfo_var);
	}

IL_001f:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass20::<ContinueWhenAll>b__1e(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>)
extern const MethodInfo* Task_1_get_Result_m7517_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass20_U3CContinueWhenAllU3Eb__1e_m6948 (U3CU3Ec__DisplayClass20_t1304 * __this, Task_1_t1355 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_1_get_Result_m7517_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485072);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t1303 * L_0 = (__this->___continuationAction_3);
		Task_1_t1355 * L_1 = ___t;
		NullCheck(L_1);
		TaskU5BU5D_t1282* L_2 = Task_1_get_Result_m7517(L_1, /*hidden argument*/Task_1_get_Result_m7517_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker1< TaskU5BU5D_t1282* >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task[]>::Invoke(!0) */, L_0, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>
#include "System_Core_System_Func_3_gen_2.h"
// System.Func`2<System.IAsyncResult,System.Int32>
#include "System_Core_System_Func_2_gen_3.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>
#include "mscorlib_System_Action_1_gen_25.h"
// System.Func`2<System.IAsyncResult,System.Int32>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
struct TaskFactory_t1306;
struct Task_1_t1310;
struct Func_3_t1356;
struct Func_2_t1363;
struct Object_t;
// Declaration System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::FromAsync<System.Int32>(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Object)
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::FromAsync<System.Int32>(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Func`2<System.IAsyncResult,TResult>,System.Object)
extern "C" Task_1_t1310 * TaskFactory_FromAsync_TisInt32_t82_m7518_gshared (TaskFactory_t1306 * __this, Func_3_t1356 * ___beginMethod, Func_2_t1363 * ___endMethod, Object_t * ___state, const MethodInfo* method);
#define TaskFactory_FromAsync_TisInt32_t82_m7518(__this, ___beginMethod, ___endMethod, ___state, method) (( Task_1_t1310 * (*) (TaskFactory_t1306 *, Func_3_t1356 *, Func_2_t1363 *, Object_t *, const MethodInfo*))TaskFactory_FromAsync_TisInt32_t82_m7518_gshared)(__this, ___beginMethod, ___endMethod, ___state, method)


// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" void TaskFactory__ctor_m6949 (TaskFactory_t1306 * __this, TaskScheduler_t1305 * ___scheduler, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		TaskScheduler_t1305 * L_0 = ___scheduler;
		__this->___scheduler_0 = L_0;
		CancellationToken_t1101  L_1 = ___cancellationToken;
		__this->___cancellationToken_1 = L_1;
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory__ctor_m6950 (TaskFactory_t1306 * __this, TaskScheduler_t1305 * ___scheduler, const MethodInfo* method)
{
	{
		TaskScheduler_t1305 * L_0 = ___scheduler;
		CancellationToken_t1101  L_1 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		TaskFactory__ctor_m6949(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken)
extern TypeInfo* TaskScheduler_t1305_il2cpp_TypeInfo_var;
extern "C" void TaskFactory__ctor_m6951 (TaskFactory_t1306 * __this, CancellationToken_t1101  ___cancellationToken, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskScheduler_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3255);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t1305_il2cpp_TypeInfo_var);
		TaskScheduler_t1305 * L_0 = TaskScheduler_FromCurrentSynchronizationContext_m6961(NULL /*static, unused*/, /*hidden argument*/NULL);
		CancellationToken_t1101  L_1 = ___cancellationToken;
		TaskFactory__ctor_m6949(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
extern TypeInfo* TaskScheduler_t1305_il2cpp_TypeInfo_var;
extern "C" void TaskFactory__ctor_m6952 (TaskFactory_t1306 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskScheduler_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3255);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t1305_il2cpp_TypeInfo_var);
		TaskScheduler_t1305 * L_0 = TaskScheduler_FromCurrentSynchronizationContext_m6961(NULL /*static, unused*/, /*hidden argument*/NULL);
		CancellationToken_t1101  L_1 = CancellationToken_get_None_m6896(NULL /*static, unused*/, /*hidden argument*/NULL);
		TaskFactory__ctor_m6949(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
extern "C" void TaskFactory__ctor_m6953 (TaskFactory_t1306 * __this, CancellationToken_t1101  ___cancellationToken, int32_t ___creationOptions, int32_t ___continuationOptions, TaskScheduler_t1305 * ___scheduler, const MethodInfo* method)
{
	{
		TaskScheduler_t1305 * L_0 = ___scheduler;
		CancellationToken_t1101  L_1 = ___cancellationToken;
		TaskFactory__ctor_m6949(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
extern "C" TaskScheduler_t1305 * TaskFactory_get_Scheduler_m6954 (TaskFactory_t1306 * __this, const MethodInfo* method)
{
	{
		TaskScheduler_t1305 * L_0 = (__this->___scheduler_0);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,System.Object)
extern TypeInfo* U3CU3Ec__DisplayClass16_t1301_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t1363_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass16_U3CFromAsyncU3Eb__15_m6945_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m6982_MethodInfo_var;
extern const MethodInfo* TaskFactory_FromAsync_TisInt32_t82_m7518_MethodInfo_var;
extern "C" Task_t1148 * TaskFactory_FromAsync_m6955 (TaskFactory_t1306 * __this, Func_3_t1356 * ___beginMethod, Action_1_t1300 * ___endMethod, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass16_t1301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3256);
		Func_2_t1363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2310);
		U3CU3Ec__DisplayClass16_U3CFromAsyncU3Eb__15_m6945_MethodInfo_var = il2cpp_codegen_method_info_from_index(1425);
		Func_2__ctor_m6982_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484482);
		TaskFactory_FromAsync_TisInt32_t82_m7518_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485074);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass16_t1301 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass16_t1301 * L_0 = (U3CU3Ec__DisplayClass16_t1301 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass16_t1301_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16__ctor_m6944(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_t1301 * L_1 = V_0;
		Action_1_t1300 * L_2 = ___endMethod;
		NullCheck(L_1);
		L_1->___endMethod_0 = L_2;
		Func_3_t1356 * L_3 = ___beginMethod;
		U3CU3Ec__DisplayClass16_t1301 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CU3Ec__DisplayClass16_U3CFromAsyncU3Eb__15_m6945_MethodInfo_var };
		Func_2_t1363 * L_6 = (Func_2_t1363 *)il2cpp_codegen_object_new (Func_2_t1363_il2cpp_TypeInfo_var);
		Func_2__ctor_m6982(L_6, L_4, L_5, /*hidden argument*/Func_2__ctor_m6982_MethodInfo_var);
		Object_t * L_7 = ___state;
		Task_1_t1310 * L_8 = TaskFactory_FromAsync_TisInt32_t82_m7518(__this, L_3, L_6, L_7, /*hidden argument*/TaskFactory_FromAsync_TisInt32_t82_m7518_MethodInfo_var);
		return L_8;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::ContinueWhenAll(System.Threading.Tasks.Task[],System.Action`1<System.Threading.Tasks.Task[]>)
extern TypeInfo* U3CU3Ec__DisplayClass20_t1304_il2cpp_TypeInfo_var;
extern TypeInfo* TaskCompletionSource_1_t1302_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t1109_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t2100_il2cpp_TypeInfo_var;
extern const MethodInfo* TaskCompletionSource_1__ctor_m7519_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_TrySetResult_m7516_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass20_U3CContinueWhenAllU3Eb__1d_m6947_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m6966_MethodInfo_var;
extern const MethodInfo* TaskCompletionSource_1_get_Task_m7520_MethodInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass20_U3CContinueWhenAllU3Eb__1e_m6948_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m7521_MethodInfo_var;
extern const MethodInfo* Task_1_ContinueWith_m7522_MethodInfo_var;
extern "C" Task_t1148 * TaskFactory_ContinueWhenAll_m6956 (TaskFactory_t1306 * __this, TaskU5BU5D_t1282* ___tasks, Action_1_t1303 * ___continuationAction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass20_t1304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3258);
		TaskCompletionSource_1_t1302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3259);
		Action_1_t1109_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2301);
		Action_1_t2100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3260);
		TaskCompletionSource_1__ctor_m7519_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485075);
		TaskCompletionSource_1_TrySetResult_m7516_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485071);
		U3CU3Ec__DisplayClass20_U3CContinueWhenAllU3Eb__1d_m6947_MethodInfo_var = il2cpp_codegen_method_info_from_index(1428);
		Action_1__ctor_m6966_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484469);
		TaskCompletionSource_1_get_Task_m7520_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485077);
		U3CU3Ec__DisplayClass20_U3CContinueWhenAllU3Eb__1e_m6948_MethodInfo_var = il2cpp_codegen_method_info_from_index(1430);
		Action_1__ctor_m7521_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485079);
		Task_1_ContinueWith_m7522_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485080);
		s_Il2CppMethodIntialized = true;
	}
	Task_t1148 * V_0 = {0};
	Action_1_t1109 * V_1 = {0};
	U3CU3Ec__DisplayClass20_t1304 * V_2 = {0};
	TaskU5BU5D_t1282* V_3 = {0};
	int32_t V_4 = 0;
	Task_t1148 * G_B5_0 = {0};
	Task_t1148 * G_B4_0 = {0};
	{
		V_1 = (Action_1_t1109 *)NULL;
		U3CU3Ec__DisplayClass20_t1304 * L_0 = (U3CU3Ec__DisplayClass20_t1304 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass20_t1304_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass20__ctor_m6946(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		U3CU3Ec__DisplayClass20_t1304 * L_1 = V_2;
		TaskU5BU5D_t1282* L_2 = ___tasks;
		NullCheck(L_1);
		L_1->___tasks_2 = L_2;
		U3CU3Ec__DisplayClass20_t1304 * L_3 = V_2;
		Action_1_t1303 * L_4 = ___continuationAction;
		NullCheck(L_3);
		L_3->___continuationAction_3 = L_4;
		U3CU3Ec__DisplayClass20_t1304 * L_5 = V_2;
		U3CU3Ec__DisplayClass20_t1304 * L_6 = V_2;
		NullCheck(L_6);
		TaskU5BU5D_t1282* L_7 = (L_6->___tasks_2);
		NullCheck(L_7);
		NullCheck(L_5);
		L_5->___remaining_0 = (((int32_t)(((Array_t *)L_7)->max_length)));
		U3CU3Ec__DisplayClass20_t1304 * L_8 = V_2;
		TaskCompletionSource_1_t1302 * L_9 = (TaskCompletionSource_1_t1302 *)il2cpp_codegen_object_new (TaskCompletionSource_1_t1302_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m7519(L_9, /*hidden argument*/TaskCompletionSource_1__ctor_m7519_MethodInfo_var);
		NullCheck(L_8);
		L_8->___tcs_1 = L_9;
		U3CU3Ec__DisplayClass20_t1304 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___remaining_0);
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		U3CU3Ec__DisplayClass20_t1304 * L_12 = V_2;
		NullCheck(L_12);
		TaskCompletionSource_1_t1302 * L_13 = (L_12->___tcs_1);
		U3CU3Ec__DisplayClass20_t1304 * L_14 = V_2;
		NullCheck(L_14);
		TaskU5BU5D_t1282* L_15 = (L_14->___tasks_2);
		NullCheck(L_13);
		TaskCompletionSource_1_TrySetResult_m7516(L_13, L_15, /*hidden argument*/TaskCompletionSource_1_TrySetResult_m7516_MethodInfo_var);
	}

IL_0049:
	{
		U3CU3Ec__DisplayClass20_t1304 * L_16 = V_2;
		NullCheck(L_16);
		TaskU5BU5D_t1282* L_17 = (L_16->___tasks_2);
		V_3 = L_17;
		V_4 = 0;
		goto IL_0078;
	}

IL_0055:
	{
		TaskU5BU5D_t1282* L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		V_0 = (*(Task_t1148 **)(Task_t1148 **)SZArrayLdElema(L_18, L_20));
		Task_t1148 * L_21 = V_0;
		Action_1_t1109 * L_22 = V_1;
		G_B4_0 = L_21;
		if (L_22)
		{
			G_B5_0 = L_21;
			goto IL_006b;
		}
	}
	{
		U3CU3Ec__DisplayClass20_t1304 * L_23 = V_2;
		IntPtr_t L_24 = { (void*)U3CU3Ec__DisplayClass20_U3CContinueWhenAllU3Eb__1d_m6947_MethodInfo_var };
		Action_1_t1109 * L_25 = (Action_1_t1109 *)il2cpp_codegen_object_new (Action_1_t1109_il2cpp_TypeInfo_var);
		Action_1__ctor_m6966(L_25, L_23, L_24, /*hidden argument*/Action_1__ctor_m6966_MethodInfo_var);
		V_1 = L_25;
		G_B5_0 = G_B4_0;
	}

IL_006b:
	{
		Action_1_t1109 * L_26 = V_1;
		NullCheck(G_B5_0);
		Task_ContinueWith_m6929(G_B5_0, L_26, /*hidden argument*/NULL);
		int32_t L_27 = V_4;
		V_4 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0078:
	{
		int32_t L_28 = V_4;
		TaskU5BU5D_t1282* L_29 = V_3;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)(((Array_t *)L_29)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		U3CU3Ec__DisplayClass20_t1304 * L_30 = V_2;
		NullCheck(L_30);
		TaskCompletionSource_1_t1302 * L_31 = (L_30->___tcs_1);
		NullCheck(L_31);
		Task_1_t1355 * L_32 = TaskCompletionSource_1_get_Task_m7520(L_31, /*hidden argument*/TaskCompletionSource_1_get_Task_m7520_MethodInfo_var);
		U3CU3Ec__DisplayClass20_t1304 * L_33 = V_2;
		IntPtr_t L_34 = { (void*)U3CU3Ec__DisplayClass20_U3CContinueWhenAllU3Eb__1e_m6948_MethodInfo_var };
		Action_1_t2100 * L_35 = (Action_1_t2100 *)il2cpp_codegen_object_new (Action_1_t2100_il2cpp_TypeInfo_var);
		Action_1__ctor_m7521(L_35, L_33, L_34, /*hidden argument*/Action_1__ctor_m7521_MethodInfo_var);
		NullCheck(L_32);
		Task_t1148 * L_36 = Task_1_ContinueWith_m7522(L_32, L_35, /*hidden argument*/Task_1_ContinueWith_m7522_MethodInfo_var);
		return L_36;
	}
}
// System.Threading.Tasks.TaskScheduler/<>c__DisplayClass1
#include "Parse_Unity_System_Threading_Tasks_TaskScheduler_U3CU3Ec__Di.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskScheduler/<>c__DisplayClass1
#include "Parse_Unity_System_Threading_Tasks_TaskScheduler_U3CU3Ec__DiMethodDeclarations.h"



// System.Void System.Threading.Tasks.TaskScheduler/<>c__DisplayClass1::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m6957 (U3CU3Ec__DisplayClass1_t1307 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskScheduler/<>c__DisplayClass1::<Post>b__0(System.Object)
extern "C" void U3CU3Ec__DisplayClass1_U3CPostU3Eb__0_m6958 (U3CU3Ec__DisplayClass1_t1307 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->___action_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(11 /* System.Void System.Action::Invoke() */, L_0);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.SynchronizationContext
#include "mscorlib_System_Threading_SynchronizationContext.h"
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallback.h"
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallbackMethodDeclarations.h"
// System.Threading.SynchronizationContext
#include "mscorlib_System_Threading_SynchronizationContextMethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
extern TypeInfo* TaskScheduler_t1305_il2cpp_TypeInfo_var;
extern "C" void TaskScheduler__ctor_m6959 (TaskScheduler_t1305 * __this, SynchronizationContext_t1308 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskScheduler_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3255);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationContext_t1308 * G_B2_0 = {0};
	TaskScheduler_t1305 * G_B2_1 = {0};
	SynchronizationContext_t1308 * G_B1_0 = {0};
	TaskScheduler_t1305 * G_B1_1 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		SynchronizationContext_t1308 * L_0 = ___context;
		SynchronizationContext_t1308 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t1305_il2cpp_TypeInfo_var);
		SynchronizationContext_t1308 * L_2 = ((TaskScheduler_t1305_StaticFields*)TaskScheduler_t1305_il2cpp_TypeInfo_var->static_fields)->___defaultContext_0;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->___context_1 = G_B2_0;
		return;
	}
}
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
extern TypeInfo* U3CU3Ec__DisplayClass1_t1307_il2cpp_TypeInfo_var;
extern TypeInfo* SendOrPostCallback_t2101_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CU3Ec__DisplayClass1_U3CPostU3Eb__0_m6958_MethodInfo_var;
extern "C" void TaskScheduler_Post_m6960 (TaskScheduler_t1305 * __this, Action_t143 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CU3Ec__DisplayClass1_t1307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3261);
		SendOrPostCallback_t2101_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3262);
		U3CU3Ec__DisplayClass1_U3CPostU3Eb__0_m6958_MethodInfo_var = il2cpp_codegen_method_info_from_index(1433);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t1307 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t1307 * L_0 = (U3CU3Ec__DisplayClass1_t1307 *)il2cpp_codegen_object_new (U3CU3Ec__DisplayClass1_t1307_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1__ctor_m6957(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_t1307 * L_1 = V_0;
		Action_t143 * L_2 = ___action;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		SynchronizationContext_t1308 * L_3 = (__this->___context_1);
		U3CU3Ec__DisplayClass1_t1307 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CU3Ec__DisplayClass1_U3CPostU3Eb__0_m6958_MethodInfo_var };
		SendOrPostCallback_t2101 * L_6 = (SendOrPostCallback_t2101 *)il2cpp_codegen_object_new (SendOrPostCallback_t2101_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m7523(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< SendOrPostCallback_t2101 *, Object_t * >::Invoke(4 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_6, NULL);
		return;
	}
}
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
extern TypeInfo* TaskScheduler_t1305_il2cpp_TypeInfo_var;
extern "C" TaskScheduler_t1305 * TaskScheduler_FromCurrentSynchronizationContext_m6961 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskScheduler_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3255);
		s_Il2CppMethodIntialized = true;
	}
	{
		SynchronizationContext_t1308 * L_0 = SynchronizationContext_get_Current_m7524(NULL /*static, unused*/, /*hidden argument*/NULL);
		TaskScheduler_t1305 * L_1 = (TaskScheduler_t1305 *)il2cpp_codegen_object_new (TaskScheduler_t1305_il2cpp_TypeInfo_var);
		TaskScheduler__ctor_m6959(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
extern TypeInfo* SynchronizationContext_t1308_il2cpp_TypeInfo_var;
extern TypeInfo* TaskScheduler_t1305_il2cpp_TypeInfo_var;
extern "C" void TaskScheduler__cctor_m6962 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationContext_t1308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3263);
		TaskScheduler_t1305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3255);
		s_Il2CppMethodIntialized = true;
	}
	{
		SynchronizationContext_t1308 * L_0 = (SynchronizationContext_t1308 *)il2cpp_codegen_object_new (SynchronizationContext_t1308_il2cpp_TypeInfo_var);
		SynchronizationContext__ctor_m7525(L_0, /*hidden argument*/NULL);
		((TaskScheduler_t1305_StaticFields*)TaskScheduler_t1305_il2cpp_TypeInfo_var->static_fields)->___defaultContext_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif