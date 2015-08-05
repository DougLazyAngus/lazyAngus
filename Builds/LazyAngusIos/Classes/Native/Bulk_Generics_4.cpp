#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateCastIteratorU3Ec.h"
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
// System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateCastIteratorU3EcMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::.ctor()
extern "C" void U3CCreateCastIteratorU3Ec__Iterator0_1__ctor_m32447_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m32448_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m32449_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_IEnumerable_GetEnumerator_m32450_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateCastIteratorU3Ec__Iterator0_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m32451_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * __this, const MethodInfo* method)
{
	U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_3);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * L_2 = (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 *)L_2;
		U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * L_3 = V_0;
		Object_t * L_4 = (Object_t *)(__this->___U3CU24U3Esource_5);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateCastIteratorU3Ec__Iterator0_1_MoveNext_m32452_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
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
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00af;
	}

IL_0023:
	{
		Object_t * L_2 = (Object_t *)(__this->___source_0);
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___U3CU24s_41U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0078;
			}
		}

IL_0043:
		{
			goto IL_0078;
		}

IL_0048:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CelementU3E__1_2 = ((Object_t *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
			Object_t * L_7 = (Object_t *)(__this->___U3CelementU3E__1_2);
			__this->___U24current_4 = L_7;
			__this->___U24PC_3 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB1, FINALLY_008d);
		}

IL_0078:
		{
			Object_t * L_8 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			NullCheck((Object_t *)L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_8);
			if (L_9)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_008d);
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
			bool L_10 = V_1;
			if (!L_10)
			{
				goto IL_0091;
			}
		}

IL_0090:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0091:
		{
			Object_t * L_11 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			V_2 = (Object_t *)((Object_t *)IsInst(L_11, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_2;
			if (L_12)
			{
				goto IL_00a1;
			}
		}

IL_00a0:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_00a1:
		{
			Object_t * L_13 = V_2;
			NullCheck((Object_t *)L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_13);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0xB1, IL_00b1)
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a8:
	{
		__this->___U24PC_3 = (-1);
	}

IL_00af:
	{
		return 0;
	}

IL_00b1:
	{
		return 1;
	}
	// Dead block : IL_00b3: ldloc.3
}
// System.Void System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateCastIteratorU3Ec__Iterator0_1_Dispose_m32453_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * __this, const MethodInfo* method)
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
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
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
			Object_t * L_2 = (Object_t *)(__this->___U3CU24s_41U3E__0_1);
			V_1 = (Object_t *)((Object_t *)IsInst(L_2, IDisposable_t58_il2cpp_TypeInfo_var));
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
			NullCheck((Object_t *)L_4);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_4);
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
// System.Void System.Linq.Enumerable/<CreateCastIterator>c__Iterator0`1<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateCastIteratorU3Ec__Iterator0_1_Reset_m32454_gshared (U3CCreateCastIteratorU3Ec__Iterator0_1_t6098 * __this, const MethodInfo* method)
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
// Parse.ParseObject/<>c__DisplayClass89`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass89_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseObject/<>c__DisplayClass89`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass89_1_genMethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_gen_42.h"
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_gen_42MethodDeclarations.h"


// System.Void Parse.ParseObject/<>c__DisplayClass89`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass89_1__ctor_m32474_gshared (U3CU3Ec__DisplayClass89_1_t6104 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<T> Parse.ParseObject/<>c__DisplayClass89`1<System.Object>::<EnqueueForAll>b__83(System.Threading.Tasks.Task)
extern "C" Task_1_t1344 * U3CU3Ec__DisplayClass89_1_U3CEnqueueForAllU3Eb__83_m32475_gshared (U3CU3Ec__DisplayClass89_1_t6104 * __this, Task_t1159 * ___task, const MethodInfo* method)
{
	{
		List_1_t1444 * L_0 = (List_1_t1444 *)(__this->___childTasks_2);
		Task_t1159 * L_1 = ___task;
		NullCheck((List_1_t1444 *)L_0);
		VirtActionInvoker1< Task_t1159 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(!0) */, (List_1_t1444 *)L_0, (Task_t1159 *)L_1);
		Task_1_t1344 * L_2 = (Task_1_t1344 *)(__this->___fullTask_1);
		return L_2;
	}
}
// Parse.ParseObject/<>c__DisplayClass86`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass86_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseObject/<>c__DisplayClass86`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass86_1_genMethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"


// System.Void Parse.ParseObject/<>c__DisplayClass86`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass86_1__ctor_m32476_gshared (U3CU3Ec__DisplayClass86_1_t6103 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.ParseObject/<>c__DisplayClass86`1<System.Object>::<EnqueueForAll>b__84(System.Threading.Tasks.Task)
extern const MethodInfo* TaskCompletionSource_1_SetResult_m7501_MethodInfo_var;
extern "C" void U3CU3Ec__DisplayClass86_1_U3CEnqueueForAllU3Eb__84_m32477_gshared (U3CU3Ec__DisplayClass86_1_t6103 * __this, Task_t1159 * ___task, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskCompletionSource_1_SetResult_m7501_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484974);
		s_Il2CppMethodIntialized = true;
	}
	{
		TaskCompletionSource_1_t1281 * L_0 = (TaskCompletionSource_1_t1281 *)(__this->___readyToStart_0);
		NullCheck((TaskCompletionSource_1_t1281 *)L_0);
		TaskCompletionSource_1_SetResult_m7501((TaskCompletionSource_1_t1281 *)L_0, (Object_t *)NULL, /*hidden argument*/TaskCompletionSource_1_SetResult_m7501_MethodInfo_var);
		return;
	}
}
// Parse.ParseObject/<>c__DisplayClass47`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass47_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseObject/<>c__DisplayClass47`1<System.Object>
#include "Parse_Unity_Parse_ParseObject_U3CU3Ec__DisplayClass47_1_genMethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_29.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObjectMethodDeclarations.h"
struct ParseObject_t1170;
struct Task_1_t6035;
struct IEnumerable_1_t662;
struct Task_t1159;
// Parse.ParseObject
#include "Parse_Unity_Parse_ParseObject.h"
// Declaration System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseObject::FetchAllInternalAsync<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Boolean,System.Threading.Tasks.Task,System.Threading.CancellationToken)
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseObject::FetchAllInternalAsync<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Boolean,System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t6035 * ParseObject_FetchAllInternalAsync_TisObject_t_m64017_gshared (Object_t * __this /* static, unused */, Object_t* ___objects, bool ___force, Task_t1159 * ___toAwait, CancellationToken_t1112  ___cancellationToken, const MethodInfo* method);
#define ParseObject_FetchAllInternalAsync_TisObject_t_m64017(__this /* static, unused */, ___objects, ___force, ___toAwait, ___cancellationToken, method) (( Task_1_t6035 * (*) (Object_t * /* static, unused */, Object_t*, bool, Task_t1159 *, CancellationToken_t1112 , const MethodInfo*))ParseObject_FetchAllInternalAsync_TisObject_t_m64017_gshared)(__this /* static, unused */, ___objects, ___force, ___toAwait, ___cancellationToken, method)


// System.Void Parse.ParseObject/<>c__DisplayClass47`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass47_1__ctor_m32482_gshared (U3CU3Ec__DisplayClass47_1_t6106 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<T>> Parse.ParseObject/<>c__DisplayClass47`1<System.Object>::<FetchAllIfNeededAsync>b__46(System.Threading.Tasks.Task)
extern TypeInfo* ParseObject_t1170_il2cpp_TypeInfo_var;
extern "C" Task_1_t6035 * U3CU3Ec__DisplayClass47_1_U3CFetchAllIfNeededAsyncU3Eb__46_m32483_gshared (U3CU3Ec__DisplayClass47_1_t6106 * __this, Task_t1159 * ___toAwait, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseObject_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2380);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___objects_0);
		Task_t1159 * L_1 = ___toAwait;
		CancellationToken_t1112  L_2 = (CancellationToken_t1112 )(__this->___cancellationToken_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseObject_t1170_il2cpp_TypeInfo_var);
		Task_1_t6035 * L_3 = (( Task_1_t6035 * (*) (Object_t * /* static, unused */, Object_t*, bool, Task_t1159 *, CancellationToken_t1112 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t*)L_0, (bool)0, (Task_t1159 *)L_1, (CancellationToken_t1112 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_3;
	}
}
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_2MethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
extern "C" void Nullable_1__ctor_m7351_gshared (Nullable_1_t1237 * __this, DateTime_t287  ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		DateTime_t287  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7352_gshared (Nullable_1_t1237 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.DateTime>::get_Value()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" DateTime_t287  Nullable_1_get_Value_m7403_gshared (Nullable_1_t1237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral3684, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		DateTime_t287  L_2 = (DateTime_t287 )(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m32536_gshared (Nullable_1_t1237 * __this, Object_t * ___other, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___other;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = (bool)(__this->___has_value_1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		Object_t * L_2 = ___other;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		Object_t * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t1237 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t1237 *, Nullable_1_t1237 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t1237 *)__this, (Nullable_1_t1237 )((*(Nullable_1_t1237 *)((Nullable_1_t1237 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.DateTime>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m32537_gshared (Nullable_1_t1237 * __this, Nullable_1_t1237  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)((&___other)->___has_value_1);
		bool L_1 = (bool)(__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (bool)(__this->___has_value_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		DateTime_t287 * L_3 = (DateTime_t287 *)&((&___other)->___value_0);
		DateTime_t287  L_4 = (DateTime_t287 )(__this->___value_0);
		DateTime_t287  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.DateTime>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m32538_gshared (Nullable_1_t1237 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
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
		DateTime_t287 * L_1 = (DateTime_t287 *)&(__this->___value_0);
		NullCheck((ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// T System.Nullable`1<System.DateTime>::GetValueOrDefault()
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" DateTime_t287  Nullable_1_GetValueOrDefault_m32539_gshared (Nullable_1_t1237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t287  V_0 = {0};
	DateTime_t287  G_B3_0 = {0};
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		DateTime_t287  L_1 = (DateTime_t287 )(__this->___value_0);
		G_B3_0 = L_1;
		goto IL_0019;
	}

IL_0010:
	{
		Initobj (DateTime_t287_il2cpp_TypeInfo_var, (&V_0));
		DateTime_t287  L_2 = V_0;
		G_B3_0 = L_2;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.String System.Nullable`1<System.DateTime>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m32540_gshared (Nullable_1_t1237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		DateTime_t287 * L_1 = (DateTime_t287 *)&(__this->___value_0);
		NullCheck((ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.ValueType::ToString() */, (ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_48MethodDeclarations.h"

// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
extern "C" KeyValuePair_2_t6111  Array_InternalArray__get_Item_TisKeyValuePair_2_t6111_m64065_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t6111_m64065(__this, p0, method) (( KeyValuePair_2_t6111  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t6111_m64065_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m32547_gshared (InternalEnumerator_1_t6112 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m32548_gshared (InternalEnumerator_1_t6112 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32549_gshared (InternalEnumerator_1_t6112 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t6111  L_0 = (( KeyValuePair_2_t6111  (*) (InternalEnumerator_1_t6112 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6112 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6111  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m32550_gshared (InternalEnumerator_1_t6112 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m32551_gshared (InternalEnumerator_1_t6112 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14822((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t6111  InternalEnumerator_1_get_Current_m32552_gshared (InternalEnumerator_1_t6112 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral3646, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1380 * L_3 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_3, (String_t*)(String_t*) &_stringLiteral3647, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14822((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t6111  L_8 = (( KeyValuePair_2_t6111  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44MethodDeclarations.h"



// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m32553_gshared (KeyValuePair_2_t6111 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t6111 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t6111 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t6111 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t6111 *)__this, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m32554_gshared (KeyValuePair_2_t6111 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m32555_gshared (KeyValuePair_2_t6111 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Value()
extern "C" uint8_t KeyValuePair_2_get_Value_m32556_gshared (KeyValuePair_2_t6111 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m32557_gshared (KeyValuePair_2_t6111 * __this, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::ToString()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m32558_gshared (KeyValuePair_2_t6111 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	uint8_t V_1 = 0x0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t75* G_B2_1 = {0};
	StringU5BU5D_t75* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t75* G_B1_1 = {0};
	StringU5BU5D_t75* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t75* G_B3_2 = {0};
	StringU5BU5D_t75* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t75* G_B5_1 = {0};
	StringU5BU5D_t75* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t75* G_B4_1 = {0};
	StringU5BU5D_t75* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t75* G_B6_2 = {0};
	StringU5BU5D_t75* G_B6_3 = {0};
	{
		StringU5BU5D_t75* L_0 = (StringU5BU5D_t75*)((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1211);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1211;
		StringU5BU5D_t75* L_1 = (StringU5BU5D_t75*)L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t6111 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t6111 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Object_t *)L_4;
		NullCheck((Object_t *)(*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)(*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t75* L_7 = (StringU5BU5D_t75*)G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral120);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral120;
		StringU5BU5D_t75* L_8 = (StringU5BU5D_t75*)L_7;
		uint8_t L_9 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t6111 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		uint8_t L_12 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t6111 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (uint8_t)L_12;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t75* L_15 = (StringU5BU5D_t75*)G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral123);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral123;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m450(NULL /*static, unused*/, (StringU5BU5D_t75*)L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Threading.ThreadLocal`1<System.Byte>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadLocal`1<System.Byte>
#include "Parse_Unity_System_Threading_ThreadLocal_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_54.h"
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_7.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Collections.Generic.List`1<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_gen_66.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_54MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Func`1<System.Byte>
#include "System_Core_System_Func_1_gen_7MethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Collections.Generic.List`1<System.WeakReference>
#include "mscorlib_System_Collections_Generic_List_1_gen_66MethodDeclarations.h"


// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Byte>::get_ThreadLocalData()
extern TypeInfo* WeakReference_t2175_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t8988_il2cpp_TypeInfo_var;
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m32560_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t2175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3300);
		ICollection_1_t8988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11297);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t6116_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		Dictionary_2_t6120 * L_1 = (Dictionary_2_t6120 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t6116_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1 = L_1;
		Object_t* L_2 = ((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_3 = (Object_t*)L_2;
		V_0 = (Object_t*)L_3;
		Monitor_Enter_m7119(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_4 = ((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_5 = ((ThreadLocal_1_t6116_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		WeakReference_t2175 * L_6 = (WeakReference_t2175 *)il2cpp_codegen_object_new (WeakReference_t2175_il2cpp_TypeInfo_var);
		WeakReference__ctor_m14895(L_6, (Object_t *)L_5, /*hidden argument*/NULL);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker1< WeakReference_t2175 * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.WeakReference>::Add(!0) */, ICollection_1_t8988_il2cpp_TypeInfo_var, (Object_t*)L_4, (WeakReference_t2175 *)L_6);
		IL2CPP_LEAVE(0x3A, FINALLY_0033);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Object_t* L_7 = V_0;
		Monitor_Exit_m7120(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_8 = ((ThreadLocal_1_t6116_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)))->___threadLocalData_1;
		return L_8;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.ctor()
extern "C" void ThreadLocal_1__ctor_m32562_gshared (ThreadLocal_1_t6116 * __this, const MethodInfo* method)
{
	ThreadLocal_1_t6116 * G_B2_0 = {0};
	ThreadLocal_1_t6116 * G_B1_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_1_t6115 * L_0 = ((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
		G_B1_0 = ((ThreadLocal_1_t6116 *)(__this));
		if (L_0)
		{
			G_B2_0 = ((ThreadLocal_1_t6116 *)(__this));
			goto IL_0019;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Func_1_t6115 * L_2 = (Func_1_t6115 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Func_1_t6115 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6 = L_2;
		G_B2_0 = ((ThreadLocal_1_t6116 *)(G_B1_0));
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_1_t6115 * L_3 = ((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_6;
		NullCheck((ThreadLocal_1_t6116 *)G_B2_0);
		(( void (*) (ThreadLocal_1_t6116 *, Func_1_t6115 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((ThreadLocal_1_t6116 *)G_B2_0, (Func_1_t6115 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m32563_gshared (ThreadLocal_1_t6116 * __this, Func_1_t6115 * ___valueFactory, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Func_1_t6115 * L_0 = ___valueFactory;
		__this->___valueFactory_5 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int64_t L_1 = Interlocked_Increment_m19002(NULL /*static, unused*/, (int64_t*)(&((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0), /*hidden argument*/NULL);
		__this->___id_4 = L_1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Byte>::get_Value()
extern TypeInfo* ThreadLocal_1_t6116_il2cpp_TypeInfo_var;
extern "C" uint8_t ThreadLocal_1_get_Value_m32564_gshared (ThreadLocal_1_t6116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t6116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11555);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		NullCheck((ThreadLocal_1_t6116 *)__this);
		(( void (*) (ThreadLocal_1_t6116 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t6116 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t6116_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_1 = (int64_t)(__this->___id_4);
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, int64_t, uint8_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int64_t)L_1, (uint8_t*)(&V_0));
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		uint8_t L_3 = V_0;
		return L_3;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t6116_il2cpp_TypeInfo_var);
		Object_t* L_4 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_5 = (int64_t)(__this->___id_4);
		Func_1_t6115 * L_6 = (Func_1_t6115 *)(__this->___valueFactory_5);
		NullCheck((Func_1_t6115 *)L_6);
		uint8_t L_7 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* !0 System.Func`1<System.Byte>::Invoke() */, (Func_1_t6115 *)L_6);
		uint8_t L_8 = (uint8_t)L_7;
		V_1 = (uint8_t)L_8;
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< int64_t, uint8_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_4, (int64_t)L_5, (uint8_t)L_8);
		uint8_t L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::set_Value(T)
extern TypeInfo* ThreadLocal_1_t6116_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_set_Value_m32565_gshared (ThreadLocal_1_t6116 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadLocal_1_t6116_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11555);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ThreadLocal_1_t6116 *)__this);
		(( void (*) (ThreadLocal_1_t6116 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((ThreadLocal_1_t6116 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		IL2CPP_RUNTIME_CLASS_INIT(ThreadLocal_1_t6116_il2cpp_TypeInfo_var);
		Object_t* L_0 = (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int64_t L_1 = (int64_t)(__this->___id_4);
		uint8_t L_2 = ___value;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int64_t, uint8_t >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (Object_t*)L_0, (int64_t)L_1, (uint8_t)L_2);
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m32567_gshared (ThreadLocal_1_t6116 * __this, const MethodInfo* method)
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
			bool L_0 = (bool)(__this->___disposed_3);
			if (L_0)
			{
				goto IL_000e;
			}
		}

IL_0008:
		{
			NullCheck((ThreadLocal_1_t6116 *)__this);
			(( void (*) (ThreadLocal_1_t6116 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((ThreadLocal_1_t6116 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		}

IL_000e:
		{
			IL2CPP_LEAVE(0x17, FINALLY_0010);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		NullCheck((Object_t *)__this);
		Object_Finalize_m490((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::CheckDisposed()
extern TypeInfo* ObjectDisposedException_t3250_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_CheckDisposed_m32569_gshared (ThreadLocal_1_t6116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5375);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___disposed_3);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t3250 * L_1 = (ObjectDisposedException_t3250 *)il2cpp_codegen_object_new (ObjectDisposedException_t3250_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11583(L_1, (String_t*)(String_t*) &_stringLiteral1191, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::Dispose()
extern TypeInfo* IList_1_t5930_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_1_t8988_il2cpp_TypeInfo_var;
extern "C" void ThreadLocal_1_Dispose_m32571_gshared (ThreadLocal_1_t6116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_1_t5930_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11281);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		ICollection_1_t8988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11297);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_0 = ((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
		Object_t* L_1 = (Object_t*)L_0;
		V_2 = (Object_t*)L_1;
		Monitor_Enter_m7119(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_0 = (int32_t)0;
			goto IL_0050;
		}

IL_0010:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_2 = ((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_3 = V_0;
			NullCheck((Object_t*)L_2);
			WeakReference_t2175 * L_4 = (WeakReference_t2175 *)InterfaceFuncInvoker1< WeakReference_t2175 *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.WeakReference>::get_Item(System.Int32) */, IList_1_t5930_il2cpp_TypeInfo_var, (Object_t*)L_2, (int32_t)L_3);
			NullCheck((WeakReference_t2175 *)L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t2175 *)L_4);
			V_1 = (Object_t*)((Object_t*)IsInst(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)));
			Object_t* L_6 = V_1;
			if (L_6)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_7 = ((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			int32_t L_8 = V_0;
			NullCheck((Object_t*)L_7);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.WeakReference>::RemoveAt(System.Int32) */, IList_1_t5930_il2cpp_TypeInfo_var, (Object_t*)L_7, (int32_t)L_8);
			int32_t L_9 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_9-(int32_t)1));
			goto IL_004c;
		}

IL_003a:
		{
			Object_t* L_10 = V_1;
			int64_t L_11 = (int64_t)(__this->___id_4);
			int64_t L_12 = L_11;
			Object_t * L_13 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_12);
			NullCheck((Object_t*)L_10);
			InterfaceFuncInvoker1< bool, Object_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), (Object_t*)L_10, (Object_t *)L_13);
		}

IL_004c:
		{
			int32_t L_14 = V_0;
			V_0 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0050:
		{
			int32_t L_15 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			Object_t* L_16 = ((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2;
			NullCheck((Object_t*)L_16);
			int32_t L_17 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.WeakReference>::get_Count() */, ICollection_1_t8988_il2cpp_TypeInfo_var, (Object_t*)L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0010;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		Object_t* L_18 = V_2;
		Monitor_Exit_m7120(NULL /*static, unused*/, (Object_t *)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0066:
	{
		__this->___disposed_3 = 1;
		return;
	}
}
// T System.Threading.ThreadLocal`1<System.Byte>::<.ctor>b__0()
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" uint8_t ThreadLocal_1_U3C_ctorU3Eb__0_m32573_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Initobj (Byte_t694_il2cpp_TypeInfo_var, (&V_0));
		uint8_t L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.cctor()
extern TypeInfo* List_1_t5951_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m30553_MethodInfo_var;
extern "C" void ThreadLocal_1__cctor_m32575_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t5951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11298);
		List_1__ctor_m30553_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485291);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___lastId_0 = (((int64_t)(-1)));
		List_1_t5951 * L_0 = (List_1_t5951 *)il2cpp_codegen_object_new (List_1_t5951_il2cpp_TypeInfo_var);
		List_1__ctor_m30553(L_0, /*hidden argument*/List_1__ctor_m30553_MethodInfo_var);
		((ThreadLocal_1_t6116_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___allDataDictionaries_2 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_49.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_49MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(System.Int32)
extern "C" KeyValuePair_2_t6117  Array_InternalArray__get_Item_TisKeyValuePair_2_t6117_m64076_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t6117_m64076(__this, p0, method) (( KeyValuePair_2_t6117  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t6117_m64076_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m32576_gshared (InternalEnumerator_1_t6118 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m32577_gshared (InternalEnumerator_1_t6118 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32578_gshared (InternalEnumerator_1_t6118 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t6117  L_0 = (( KeyValuePair_2_t6117  (*) (InternalEnumerator_1_t6118 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6118 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6117  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m32579_gshared (InternalEnumerator_1_t6118 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m32580_gshared (InternalEnumerator_1_t6118 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14822((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Current()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" KeyValuePair_2_t6117  InternalEnumerator_1_get_Current_m32581_gshared (InternalEnumerator_1_t6118 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral3646, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1380 * L_3 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_3, (String_t*)(String_t*) &_stringLiteral3647, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14822((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		KeyValuePair_2_t6117  L_8 = (( KeyValuePair_2_t6117  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45MethodDeclarations.h"



// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m32582_gshared (KeyValuePair_2_t6117 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t6117 *, int64_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((KeyValuePair_2_t6117 *)__this, (int64_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t6117 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyValuePair_2_t6117 *)__this, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::get_Key()
extern "C" int64_t KeyValuePair_2_get_Key_m32583_gshared (KeyValuePair_2_t6117 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (int64_t)(__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m32584_gshared (KeyValuePair_2_t6117 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::get_Value()
extern "C" uint8_t KeyValuePair_2_get_Value_m32585_gshared (KeyValuePair_2_t6117 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (uint8_t)(__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m32586_gshared (KeyValuePair_2_t6117 * __this, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>::ToString()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m32587_gshared (KeyValuePair_2_t6117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint8_t V_1 = 0x0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t75* G_B2_1 = {0};
	StringU5BU5D_t75* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t75* G_B1_1 = {0};
	StringU5BU5D_t75* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t75* G_B3_2 = {0};
	StringU5BU5D_t75* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t75* G_B5_1 = {0};
	StringU5BU5D_t75* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t75* G_B4_1 = {0};
	StringU5BU5D_t75* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t75* G_B6_2 = {0};
	StringU5BU5D_t75* G_B6_3 = {0};
	{
		StringU5BU5D_t75* L_0 = (StringU5BU5D_t75*)((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1211);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1211;
		StringU5BU5D_t75* L_1 = (StringU5BU5D_t75*)L_0;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t6117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int64_t L_5 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t6117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int64_t)L_5;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t75* L_8 = (StringU5BU5D_t75*)G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral120);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral120;
		StringU5BU5D_t75* L_9 = (StringU5BU5D_t75*)L_8;
		uint8_t L_10 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t6117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		uint8_t L_13 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t6117 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (uint8_t)L_13;
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t75* L_16 = (StringU5BU5D_t75*)G_B6_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral123);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4)) = (String_t*)(String_t*) &_stringLiteral123;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m450(NULL /*static, unused*/, (StringU5BU5D_t75*)L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_47.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_45.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_51.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_47MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_45MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_51MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_52MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__39MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int64>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_4MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_6MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
struct Dictionary_2_t6120;
struct DictionaryEntryU5BU5D_t9643;
struct Transform_1_t6119;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2090_TisDictionaryEntry_t2090_m64092_gshared (Dictionary_2_t6120 * __this, DictionaryEntryU5BU5D_t9643* p0, int32_t p1, Transform_1_t6119 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2090_TisDictionaryEntry_t2090_m64092(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6120 *, DictionaryEntryU5BU5D_t9643*, int32_t, Transform_1_t6119 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2090_TisDictionaryEntry_t2090_m64092_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t6120;
struct Array_t;
struct Transform_1_t6128;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6117_m64094_gshared (Dictionary_2_t6120 * __this, Array_t * p0, int32_t p1, Transform_1_t6128 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6117_m64094(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, Transform_1_t6128 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6117_m64094_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t6120;
struct KeyValuePair_2U5BU5D_t9042;
struct Transform_1_t6128;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6117_TisKeyValuePair_2_t6117_m64095_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2U5BU5D_t9042* p0, int32_t p1, Transform_1_t6128 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6117_TisKeyValuePair_2_t6117_m64095(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6120 *, KeyValuePair_2U5BU5D_t9042*, int32_t, Transform_1_t6128 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6117_TisKeyValuePair_2_t6117_m64095_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m32588_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6120 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32589_gshared (Dictionary_2_t6120 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6120 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32590_gshared (Dictionary_2_t6120 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t6120 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32591_gshared (Dictionary_2_t6120 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6120 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m32592_gshared (Dictionary_2_t6120 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t6117  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral3759, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6120 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t6117  L_9 = (KeyValuePair_2_t6117 )InterfaceFuncInvoker0< KeyValuePair_2_t6117  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t6117 )L_9;
			int64_t L_10 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6117 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			uint8_t L_11 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6117 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t6120 *)__this);
			VirtActionInvoker2< int64_t, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t6120 *)__this, (int64_t)L_10, (uint8_t)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32593_gshared (Dictionary_2_t6120 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t2871 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32594_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t6120 *)__this);
		KeyCollection_t6121 * L_0 = (( KeyCollection_t6121 * (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32595_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t6120 *)__this);
		ValueCollection_t6125 * L_0 = (( ValueCollection_t6125 * (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m32596_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t6120 *)__this);
		KeyCollection_t6121 * L_0 = (( KeyCollection_t6121 * (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32597_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t6120 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t6120 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t6120 *)__this);
		int64_t L_4 = (( int64_t (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t6120 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t6120 *)__this);
		uint8_t L_5 = (uint8_t)VirtFuncInvoker1< uint8_t, int64_t >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey) */, (Dictionary_2_t6120 *)__this, (int64_t)L_4);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32598_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t6120 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t6120 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t6120 *)__this);
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t6120 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t6120 *)__this);
		VirtActionInvoker2< int64_t, uint8_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue) */, (Dictionary_2_t6120 *)__this, (int64_t)L_1, (uint8_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32599_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t6120 *)__this);
		int64_t L_1 = (( int64_t (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t6120 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t6120 *)__this);
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t6120 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t6120 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t6120 *)__this);
		VirtActionInvoker2< int64_t, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t6120 *)__this, (int64_t)L_1, (uint8_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32600_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t6120 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t6120 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32601_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t6120 *)__this);
		VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey) */, (Dictionary_2_t6120 *)__this, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32602_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32603_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32604_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32605_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2_t6117  ___keyValuePair, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6117 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6117 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t6120 *)__this);
		VirtActionInvoker2< int64_t, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t6120 *)__this, (int64_t)L_0, (uint8_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32606_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2_t6117  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t6117  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t6120 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t6120 *, KeyValuePair_2_t6117 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t6120 *)__this, (KeyValuePair_2_t6117 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32607_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2U5BU5D_t9042* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t9042* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, KeyValuePair_2U5BU5D_t9042*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t6120 *)__this, (KeyValuePair_2U5BU5D_t9042*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32608_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2_t6117  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t6117  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t6120 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t6120 *, KeyValuePair_2_t6117 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t6120 *)__this, (KeyValuePair_2_t6117 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6117 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t6120 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey) */, (Dictionary_2_t6120 *)__this, (int64_t)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t9643_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32609_gshared (Dictionary_2_t6120 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t9643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14807);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t9042* V_0 = {0};
	DictionaryEntryU5BU5D_t9643* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t9643* G_B5_1 = {0};
	Dictionary_2_t6120 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t9643* G_B4_1 = {0};
	Dictionary_2_t6120 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t9042*)((KeyValuePair_2U5BU5D_t9042*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t9042* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t9042* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, KeyValuePair_2U5BU5D_t9042*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t6120 *)__this, (KeyValuePair_2U5BU5D_t9042*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t6120 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t9643*)((DictionaryEntryU5BU5D_t9643*)IsInst(L_6, DictionaryEntryU5BU5D_t9643_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t9643* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t9643* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t6119 * L_10 = ((Dictionary_2_t6120_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t6120 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t6120 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t6119 * L_12 = (Transform_1_t6119 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t6119 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t6120_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t6120 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t6119 * L_13 = ((Dictionary_2_t6120_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t6120 *)G_B5_2);
		(( void (*) (Dictionary_2_t6120 *, DictionaryEntryU5BU5D_t9643*, int32_t, Transform_1_t6119 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t6120 *)G_B5_2, (DictionaryEntryU5BU5D_t9643*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t6119 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t6128 * L_17 = (Transform_1_t6128 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t6128 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, Transform_1_t6128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t6120 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t6128 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32610_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123  L_0 = {0};
		(( void (*) (Enumerator_t6123 *, Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t6123  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32611_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123  L_0 = {0};
		(( void (*) (Enumerator_t6123 *, Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t6123  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32612_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t6129 * L_0 = (ShimEnumerator_t6129 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t6129 *, Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32613_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t4387_il2cpp_TypeInfo_var;
extern "C" uint8_t Dictionary_2_get_Item_m32614_gshared (Dictionary_2_t6120 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		KeyNotFoundException_t4387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8863);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_3 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_3, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t549* L_7 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t549* L_9 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t5347* L_11 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4828* L_16 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_t66* L_21 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t5347* L_24 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t4387 * L_28 = (KeyNotFoundException_t4387 *)il2cpp_codegen_object_new (KeyNotFoundException_t4387_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m16547(L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m32615_gshared (Dictionary_2_t6120 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_3 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_3, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t549* L_9 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t5347* L_13 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4828* L_18 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_18, L_20)), (int64_t)L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t5347* L_24 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		int32_t L_30 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = (int32_t)L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_33 = V_0;
		Int32U5BU5D_t549* L_34 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_34);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_38 = (int32_t)L_37;
		V_4 = (int32_t)L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = (int32_t)L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t5347* L_40 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
		LinkU5BU5D_t5347* L_43 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t549* L_45 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t549* L_48 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		LinkU5BU5D_t5347* L_51 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int64U5BU5D_t4828* L_54 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_55 = V_2;
		int64_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_54, L_55)) = (int64_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t5347* L_58 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t5347* L_60 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t5347* L_63 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t549* L_65 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t549* L_68 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		ByteU5BU5D_t66* L_71 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_72 = V_2;
		uint8_t L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, L_72)) = (uint8_t)L_73;
		int32_t L_74 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5947_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m32616_gshared (Dictionary_2_t6120 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2464);
		EqualityComparer_1_t5947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11294);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t6120 * G_B4_0 = {0};
	Dictionary_2_t6120 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t6120 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1424 * L_1 = (ArgumentOutOfRangeException_t1424 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11213(L_1, (String_t*)(String_t*) &_stringLiteral2443, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t6120 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t6120 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t6120 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5947_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5947 * L_5 = (( EqualityComparer_1_t5947 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t6120 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t6120 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t549_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5347_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m32617_gshared (Dictionary_2_t6120 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		LinkU5BU5D_t5347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14808);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t549*)SZArrayNew(Int32U5BU5D_t549_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t5347*)SZArrayNew(LinkU5BU5D_t5347_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int64U5BU5D_t4828*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ByteU5BU5D_t66*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t549* L_4 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t549* L_6 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m32618_gshared (Dictionary_2_t6120 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2464);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral1913, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1424 * L_3 = (ArgumentOutOfRangeException_t1424 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11213(L_3, (String_t*)(String_t*) &_stringLiteral2255, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14822((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t664 * L_7 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3842(L_7, (String_t*)(String_t*) &_stringLiteral2444, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m14822((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t6120 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count() */, (Dictionary_2_t6120 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t664 * L_12 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3842(L_12, (String_t*)(String_t*) &_stringLiteral2445, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6117  Dictionary_2_make_pair_m32619_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		uint8_t L_1 = ___value;
		KeyValuePair_2_t6117  L_2 = {0};
		(( void (*) (KeyValuePair_2_t6117 *, int64_t, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (int64_t)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_key(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_key_m32620_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32621_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32622_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2U5BU5D_t9042* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t9042* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t6120 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t9042* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t6128 * L_5 = (Transform_1_t6128 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t6128 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, KeyValuePair_2U5BU5D_t9042*, int32_t, Transform_1_t6128 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t6120 *)__this, (KeyValuePair_2U5BU5D_t9042*)L_2, (int32_t)L_3, (Transform_1_t6128 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Resize()
extern TypeInfo* Hashtable_t1278_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t549_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5347_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m32623_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3239);
		Int32U5BU5D_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		LinkU5BU5D_t5347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14808);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t549* V_1 = {0};
	LinkU5BU5D_t5347* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int64U5BU5D_t4828* V_7 = {0};
	ByteU5BU5D_t66* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t549* L_0 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1278_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m16775(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t549*)((Int32U5BU5D_t549*)SZArrayNew(Int32U5BU5D_t549_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t5347*)((LinkU5BU5D_t5347*)SZArrayNew(LinkU5BU5D_t5347_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t549* L_4 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t5347* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4828* L_10 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t5347* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t549* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t549* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t5347* L_26 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t549* L_32 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t549* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t5347* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (Int64U5BU5D_t4828*)((Int64U5BU5D_t4828*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (ByteU5BU5D_t66*)((ByteU5BU5D_t66*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		Int64U5BU5D_t4828* L_37 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		Int64U5BU5D_t4828* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11229(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_40 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		ByteU5BU5D_t66* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11229(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		Int64U5BU5D_t4828* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ByteU5BU5D_t66* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m32624_gshared (Dictionary_2_t6120 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_3 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_3, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t549* L_9 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t5347* L_12 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4828* L_17 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int64_t L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_17, L_19)), (int64_t)L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t664 * L_22 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3842(L_22, (String_t*)(String_t*) &_stringLiteral3761, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t5347* L_23 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (int32_t)(__this->___count_10);
		int32_t L_28 = (int32_t)((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = (int32_t)L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_31 = V_0;
		Int32U5BU5D_t549* L_32 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_32);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_36 = (int32_t)L_35;
		V_3 = (int32_t)L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = (int32_t)L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t5347* L_38 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t5347* L_41 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t5347* L_44 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t549* L_46 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t549* L_49 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int64U5BU5D_t4828* L_52 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_53 = V_2;
		int64_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_52, L_53)) = (int64_t)L_54;
		ByteU5BU5D_t66* L_55 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_56 = V_2;
		uint8_t L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_55, L_56)) = (uint8_t)L_57;
		int32_t L_58 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32625_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t549* L_0 = (Int32U5BU5D_t549*)(__this->___table_4);
		Int32U5BU5D_t549* L_1 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m12894(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		Int64U5BU5D_t4828* L_2 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		Int64U5BU5D_t4828* L_3 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m12894(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_4 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		ByteU5BU5D_t66* L_5 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m12894(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t5347* L_6 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		LinkU5BU5D_t5347* L_7 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m12894(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m32626_gshared (Dictionary_2_t6120 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_3 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_3, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t549* L_7 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t549* L_9 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t5347* L_11 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4828* L_16 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t5347* L_21 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = (int32_t)L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t6130_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m32627_gshared (Dictionary_2_t6120 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11575);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6130_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6130 * L_0 = (( EqualityComparer_1_t6130 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t549* L_1 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		ByteU5BU5D_t66* L_5 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		uint8_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)), (uint8_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t5347* L_10 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t549* L_16 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m32628_gshared (Dictionary_2_t6120 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t9042* V_0 = {0};
	{
		SerializationInfo_t2871 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral2872, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t2871 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t2871 *)L_2);
		SerializationInfo_AddValue_m11223((SerializationInfo_t2871 *)L_2, (String_t*)(String_t*) &_stringLiteral2874, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t2871 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t2871 *)L_4);
		SerializationInfo_AddValue_m11224((SerializationInfo_t2871 *)L_4, (String_t*)(String_t*) &_stringLiteral2876, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t9042*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t9042*)((KeyValuePair_2U5BU5D_t9042*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t9042* L_8 = V_0;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, KeyValuePair_2U5BU5D_t9042*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t6120 *)__this, (KeyValuePair_2U5BU5D_t9042*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t2871 * L_9 = ___info;
		Int32U5BU5D_t549* L_10 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t2871 *)L_9);
		SerializationInfo_AddValue_m11223((SerializationInfo_t2871 *)L_9, (String_t*)(String_t*) &_stringLiteral3762, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t2871 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t9042* L_12 = V_0;
		NullCheck((SerializationInfo_t2871 *)L_11);
		SerializationInfo_AddValue_m11224((SerializationInfo_t2871 *)L_11, (String_t*)(String_t*) &_stringLiteral3763, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m32629_gshared (Dictionary_2_t6120 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t9042* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t2871 * L_0 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t2871 * L_1 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2871 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m11219((SerializationInfo_t2871 *)L_1, (String_t*)(String_t*) &_stringLiteral2874, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t2871 * L_3 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2871 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m11221((SerializationInfo_t2871 *)L_3, (String_t*)(String_t*) &_stringLiteral2876, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t2871 * L_6 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2871 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m11219((SerializationInfo_t2871 *)L_6, (String_t*)(String_t*) &_stringLiteral3762, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t2871 * L_8 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2871 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m11221((SerializationInfo_t2871 *)L_8, (String_t*)(String_t*) &_stringLiteral3763, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t9042*)((KeyValuePair_2U5BU5D_t9042*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t6120 *)__this);
		(( void (*) (Dictionary_2_t6120 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t6120 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t9042* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t9042* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int64_t L_16 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6117 *)((KeyValuePair_2_t6117 *)(KeyValuePair_2_t6117 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t9042* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		uint8_t L_19 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6117 *)((KeyValuePair_2_t6117 *)(KeyValuePair_2_t6117 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t6120 *)__this);
		VirtActionInvoker2< int64_t, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t6120 *)__this, (int64_t)L_16, (uint8_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t9042* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t2871 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m32630_gshared (Dictionary_2_t6120 * __this, int64_t ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	uint8_t V_5 = 0x0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_3 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_3, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_8);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t549* L_9 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t5347* L_13 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4828* L_18 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int64_t L_21 = ___key;
		NullCheck((Object_t*)L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_17, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_18, L_20)), (int64_t)L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = (int32_t)L_23;
		LinkU5BU5D_t5347* L_24 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = (int32_t)L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t549* L_31 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t5347* L_33 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t5347* L_36 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t5347* L_38 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t5347* L_41 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (int32_t)(__this->___emptySlot_9);
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t5347* L_45 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int64U5BU5D_t4828* L_47 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (Int64_t89_il2cpp_TypeInfo_var, (&V_4));
		int64_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_47, L_48)) = (int64_t)L_49;
		ByteU5BU5D_t66* L_50 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (Byte_t694_il2cpp_TypeInfo_var, (&V_5));
		uint8_t L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_51)) = (uint8_t)L_52;
		int32_t L_53 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m32631_gshared (Dictionary_2_t6120 * __this, int64_t ___key, uint8_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_3 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_3, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (Object_t*)(__this->___hcp_12);
		int64_t L_5 = ___key;
		NullCheck((Object_t*)L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Int64>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_4, (int64_t)L_5);
		V_0 = (int32_t)((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t549* L_7 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t549* L_9 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t5347* L_11 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		Int64U5BU5D_t4828* L_16 = (Int64U5BU5D_t4828*)(__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int64_t L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int64_t, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Int64>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_16, L_18)), (int64_t)L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		uint8_t* L_21 = ___value;
		ByteU5BU5D_t66* L_22 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t5347* L_25 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = (int32_t)L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_29 = ___value;
		Initobj (Byte_t694_il2cpp_TypeInfo_var, (&V_2));
		uint8_t L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Keys()
extern "C" KeyCollection_t6121 * Dictionary_2_get_Keys_m32632_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t6121 * L_0 = (KeyCollection_t6121 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t6121 *, Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Values()
extern "C" ValueCollection_t6125 * Dictionary_2_get_Values_m32633_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t6125 * L_0 = (ValueCollection_t6125 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t6125 *, Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" int64_t Dictionary_2_ToTKey_m32634_gshared (Dictionary_2_t6120 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3764, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t664 * L_6 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3487(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((*(int64_t*)((int64_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" uint8_t Dictionary_2_ToTValue_m32635_gshared (Dictionary_2_t6120 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Byte_t694_il2cpp_TypeInfo_var, (&V_0));
		uint8_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3764, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t664 * L_8 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3487(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1311, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(uint8_t*)((uint8_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t6130_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32636_gshared (Dictionary_2_t6120 * __this, KeyValuePair_2_t6117  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11575);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		int64_t L_0 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6117 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t6120 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, int64_t, uint8_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t6120 *)__this, (int64_t)L_0, (uint8_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6130_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6130 * L_2 = (( EqualityComparer_1_t6130 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		uint8_t L_3 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6117 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t6130 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, (EqualityComparer_1_t6130 *)L_2, (uint8_t)L_3, (uint8_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6123  Dictionary_2_GetEnumerator_m32637_gshared (Dictionary_2_t6120 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123  L_0 = {0};
		(( void (*) (Enumerator_t6123 *, Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t6120 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m32638_gshared (Object_t * __this /* static, unused */, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___key;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		uint8_t L_3 = ___value;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		DictionaryEntry_t2090  L_6 = {0};
		DictionaryEntry__ctor_m14821(&L_6, (Object_t *)L_2, (Object_t *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_48.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_49MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_48MethodDeclarations.h"
struct Dictionary_2_t6120;
struct Array_t;
struct Transform_1_t6124;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Int64>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt64_t89_m64087_gshared (Dictionary_2_t6120 * __this, Array_t * p0, int32_t p1, Transform_1_t6124 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt64_t89_m64087(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, Transform_1_t6124 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt64_t89_m64087_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t6120;
struct Int64U5BU5D_t4828;
struct Transform_1_t6124;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Int64,System.Int64>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt64_t89_TisInt64_t89_m64088_gshared (Dictionary_2_t6120 * __this, Int64U5BU5D_t4828* p0, int32_t p1, Transform_1_t6124 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt64_t89_TisInt64_t89_m64088(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6120 *, Int64U5BU5D_t4828*, int32_t, Transform_1_t6124 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt64_t89_TisInt64_t89_m64088_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m32639_gshared (KeyCollection_t6121 * __this, Dictionary_2_t6120 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t6120 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral3759, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t6120 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m32640_gshared (KeyCollection_t6121 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m32641_gshared (KeyCollection_t6121 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m32642_gshared (KeyCollection_t6121 * __this, int64_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		int64_t L_1 = ___item;
		NullCheck((Dictionary_2_t6120 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int64_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t6120 *)L_0, (int64_t)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m32643_gshared (KeyCollection_t6121 * __this, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m32644_gshared (KeyCollection_t6121 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t6121 *)__this);
		Enumerator_t6122  L_0 = (( Enumerator_t6122  (*) (KeyCollection_t6121 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t6121 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6122  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m32645_gshared (KeyCollection_t6121 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int64U5BU5D_t4828* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int64U5BU5D_t4828*)((Int64U5BU5D_t4828*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int64U5BU5D_t4828* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int64U5BU5D_t4828* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t6121 *)__this);
		VirtActionInvoker2< Int64U5BU5D_t4828*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t6121 *)__this, (Int64U5BU5D_t4828*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t6120 * L_4 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t6120 *)L_4);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t6120 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t6120 * L_7 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t6124 * L_11 = (Transform_1_t6124 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t6124 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t6120 *)L_7);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, Transform_1_t6124 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t6120 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t6124 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m32646_gshared (KeyCollection_t6121 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t6121 *)__this);
		Enumerator_t6122  L_0 = (( Enumerator_t6122  (*) (KeyCollection_t6121 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t6121 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6122  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m32647_gshared (KeyCollection_t6121 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m32648_gshared (KeyCollection_t6121 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t707_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m32649_gshared (KeyCollection_t6121 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t707_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m32650_gshared (KeyCollection_t6121 * __this, Int64U5BU5D_t4828* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		Int64U5BU5D_t4828* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t6120 *)L_0);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t6120 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t6120 * L_3 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		Int64U5BU5D_t4828* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t6124 * L_7 = (Transform_1_t6124 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t6124 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t6120 *)L_3);
		(( void (*) (Dictionary_2_t6120 *, Int64U5BU5D_t4828*, int32_t, Transform_1_t6124 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t6120 *)L_3, (Int64U5BU5D_t4828*)L_4, (int32_t)L_5, (Transform_1_t6124 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6122  KeyCollection_GetEnumerator_m32651_gshared (KeyCollection_t6121 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		Enumerator_t6122  L_1 = {0};
		(( void (*) (Enumerator_t6122 *, Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t6120 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Byte>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m32652_gshared (KeyCollection_t6121 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t6120 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count() */, (Dictionary_2_t6120 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32653_gshared (Enumerator_t6122 * __this, Dictionary_2_t6120 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = ___host;
		NullCheck((Dictionary_2_t6120 *)L_0);
		Enumerator_t6123  L_1 = (( Enumerator_t6123  (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6120 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32654_gshared (Enumerator_t6122 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		int64_t L_1 = (( int64_t (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32655_gshared (Enumerator_t6122 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32656_gshared (Enumerator_t6122 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32657_gshared (Enumerator_t6122 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" int64_t Enumerator_get_Current_m32658_gshared (Enumerator_t6122 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t6117 * L_1 = (KeyValuePair_2_t6117 *)&(L_0->___current_3);
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6117 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32659_gshared (Enumerator_t6123 * __this, Dictionary_2_t6120 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t6120 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32660_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6117  L_0 = (KeyValuePair_2_t6117 )(__this->___current_3);
		KeyValuePair_2_t6117  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32661_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32662_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6117 * L_0 = (KeyValuePair_2_t6117 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t6117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_2);
		KeyValuePair_2_t6117 * L_4 = (KeyValuePair_2_t6117 *)&(__this->___current_3);
		uint8_t L_5 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6117 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_6);
		DictionaryEntry_t2090  L_8 = {0};
		DictionaryEntry__ctor_m14821(&L_8, (Object_t *)L_3, (Object_t *)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32663_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (( int64_t (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32664_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32665_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t6120 * L_4 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t5347* L_5 = (LinkU5BU5D_t5347*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t6120 * L_8 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck(L_8);
		Int64U5BU5D_t4828* L_9 = (Int64U5BU5D_t4828*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t6120 * L_12 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ByteU5BU5D_t66* L_13 = (ByteU5BU5D_t66*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t6117  L_16 = {0};
		(( void (*) (KeyValuePair_2_t6117 *, int64_t, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(&L_16, (int64_t)(*(int64_t*)(int64_t*)SZArrayLdElema(L_9, L_11)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t6120 * L_18 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6117  Enumerator_get_Current_m32666_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t6117  L_0 = (KeyValuePair_2_t6117 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m32667_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6117 * L_0 = (KeyValuePair_2_t6117 *)&(__this->___current_3);
		int64_t L_1 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t6117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32668_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6117 * L_0 = (KeyValuePair_2_t6117 *)&(__this->___current_3);
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6117 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32669_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___next_1 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3250_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m32670_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5375);
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t3250 * L_1 = (ObjectDisposedException_t3250 *)il2cpp_codegen_object_new (ObjectDisposedException_t3250_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11583(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t6120 * L_2 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1380 * L_5 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_5, (String_t*)(String_t*) &_stringLiteral3765, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m32671_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t6123 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral2446, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32672_gshared (Enumerator_t6123 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t6120 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32673_gshared (Transform_1_t6124 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::Invoke(TKey,TValue)
extern "C" int64_t Transform_1_Invoke_m32674_gshared (Transform_1_t6124 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32674((Transform_1_t6124 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int64_t (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int64_t (*FunctionPointerType) (Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m32675_gshared (Transform_1_t6124 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Byte_t694_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Transform_1_EndInvoke_m32676_gshared (Transform_1_t6124 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int64_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_46.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_50MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_46MethodDeclarations.h"
struct Dictionary_2_t6120;
struct Array_t;
struct Transform_1_t6127;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t694_m64090_gshared (Dictionary_2_t6120 * __this, Array_t * p0, int32_t p1, Transform_1_t6127 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t694_m64090(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, Transform_1_t6127 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t694_m64090_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t6120;
struct ByteU5BU5D_t66;
struct Transform_1_t6127;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisByte_t694_TisByte_t694_m64091_gshared (Dictionary_2_t6120 * __this, ByteU5BU5D_t66* p0, int32_t p1, Transform_1_t6127 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisByte_t694_TisByte_t694_m64091(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6120 *, ByteU5BU5D_t66*, int32_t, Transform_1_t6127 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisByte_t694_TisByte_t694_m64091_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m32677_gshared (ValueCollection_t6125 * __this, Dictionary_2_t6120 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t6120 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral3759, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t6120 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32678_gshared (ValueCollection_t6125 * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32679_gshared (ValueCollection_t6125 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32680_gshared (ValueCollection_t6125 * __this, uint8_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		uint8_t L_1 = ___item;
		NullCheck((Dictionary_2_t6120 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t6120 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6120 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32681_gshared (ValueCollection_t6125 * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32682_gshared (ValueCollection_t6125 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t6125 *)__this);
		Enumerator_t6126  L_0 = (( Enumerator_t6126  (*) (ValueCollection_t6125 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t6125 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6126  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m32683_gshared (ValueCollection_t6125 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ByteU5BU5D_t66* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ByteU5BU5D_t66*)((ByteU5BU5D_t66*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ByteU5BU5D_t66* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_t66* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t6125 *)__this);
		VirtActionInvoker2< ByteU5BU5D_t66*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t6125 *)__this, (ByteU5BU5D_t66*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t6120 * L_4 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t6120 *)L_4);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t6120 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t6120 * L_7 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t6127 * L_11 = (Transform_1_t6127 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t6127 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t6120 *)L_7);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, Transform_1_t6127 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t6120 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t6127 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32684_gshared (ValueCollection_t6125 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t6125 *)__this);
		Enumerator_t6126  L_0 = (( Enumerator_t6126  (*) (ValueCollection_t6125 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t6125 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6126  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32685_gshared (ValueCollection_t6125 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32686_gshared (ValueCollection_t6125 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t707_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m32687_gshared (ValueCollection_t6125 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t707_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m32688_gshared (ValueCollection_t6125 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		ByteU5BU5D_t66* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t6120 *)L_0);
		(( void (*) (Dictionary_2_t6120 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t6120 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t6120 * L_3 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		ByteU5BU5D_t66* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t6127 * L_7 = (Transform_1_t6127 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t6127 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t6120 *)L_3);
		(( void (*) (Dictionary_2_t6120 *, ByteU5BU5D_t66*, int32_t, Transform_1_t6127 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t6120 *)L_3, (ByteU5BU5D_t66*)L_4, (int32_t)L_5, (Transform_1_t6127 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6126  ValueCollection_GetEnumerator_m32689_gshared (ValueCollection_t6125 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		Enumerator_t6126  L_1 = {0};
		(( void (*) (Enumerator_t6126 *, Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t6120 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m32690_gshared (ValueCollection_t6125 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = (Dictionary_2_t6120 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t6120 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>::get_Count() */, (Dictionary_2_t6120 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32691_gshared (Enumerator_t6126 * __this, Dictionary_2_t6120 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t6120 * L_0 = ___host;
		NullCheck((Dictionary_2_t6120 *)L_0);
		Enumerator_t6123  L_1 = (( Enumerator_t6123  (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6120 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32692_gshared (Enumerator_t6126 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		uint8_t L_1 = (( uint8_t (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32693_gshared (Enumerator_t6126 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32694_gshared (Enumerator_t6126 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32695_gshared (Enumerator_t6126 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" uint8_t Enumerator_get_Current_m32696_gshared (Enumerator_t6126 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t6117 * L_1 = (KeyValuePair_2_t6117 *)&(L_0->___current_3);
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6117 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32697_gshared (Transform_1_t6127 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m32698_gshared (Transform_1_t6127 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32698((Transform_1_t6127 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m32699_gshared (Transform_1_t6127 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Byte_t694_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m32700_gshared (Transform_1_t6127 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32701_gshared (Transform_1_t6119 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2090  Transform_1_Invoke_m32702_gshared (Transform_1_t6119 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32702((Transform_1_t6119 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t2090  (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t2090  (*FunctionPointerType) (Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m32703_gshared (Transform_1_t6119 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Byte_t694_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2090  Transform_1_EndInvoke_m32704_gshared (Transform_1_t6119 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t2090 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32705_gshared (Transform_1_t6128 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t6117  Transform_1_Invoke_m32706_gshared (Transform_1_t6128 * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32706((Transform_1_t6128 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t6117  (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t6117  (*FunctionPointerType) (Object_t * __this, int64_t ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m32707_gshared (Transform_1_t6128 * __this, int64_t ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Byte_t694_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6117  Transform_1_EndInvoke_m32708_gshared (Transform_1_t6128 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t6117 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32709_gshared (ShimEnumerator_t6129 * __this, Dictionary_2_t6120 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t6120 * L_0 = ___host;
		NullCheck((Dictionary_2_t6120 *)L_0);
		Enumerator_t6123  L_1 = (( Enumerator_t6123  (*) (Dictionary_2_t6120 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6120 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32710_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t3913_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m32711_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t3913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6892);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t6123  L_0 = (Enumerator_t6123 )(__this->___host_enumerator_0);
		Enumerator_t6123  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t2090  L_3 = (DictionaryEntry_t2090 )InterfaceFuncInvoker0< DictionaryEntry_t2090  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t3913_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32712_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t6117  V_0 = {0};
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t6117  L_1 = (( KeyValuePair_2_t6117  (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t6117 )L_1;
		int64_t L_2 = (( int64_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t6117 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32713_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t6117  V_0 = {0};
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t6117  L_1 = (( KeyValuePair_2_t6117  (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t6117 )L_1;
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t6117 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6117 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Current()
extern TypeInfo* DictionaryEntry_t2090_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m32714_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t2090_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3234);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t6129 *)__this);
		DictionaryEntry_t2090  L_0 = (DictionaryEntry_t2090 )VirtFuncInvoker0< DictionaryEntry_t2090  >::Invoke(7 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::get_Entry() */, (ShimEnumerator_t6129 *)__this);
		DictionaryEntry_t2090  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t2090_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m32715_gshared (ShimEnumerator_t6129 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6123 * L_0 = (Enumerator_t6123 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6123 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t6123 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Byte>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_6MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
extern "C" void EqualityComparer_1__ctor_m32716_gshared (EqualityComparer_1_t6130 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t4893_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1152_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m32717_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t4893_0_0_0_var = il2cpp_codegen_type_from_index(8845);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2566);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(GenericEqualityComparer_1_t4893_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1152* L_4 = (TypeU5BU5D_t1152*)((TypeU5BU5D_t1152*)SZArrayNew(TypeU5BU5D_t1152_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1152* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1152*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7217(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t6130_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t6130 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t6132 * L_8 = (DefaultComparer_t6132 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t6132 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t6130_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32718_gshared (EqualityComparer_1_t6130 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t6130 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint8_t >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::GetHashCode(T) */, (EqualityComparer_1_t6130 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32719_gshared (EqualityComparer_1_t6130 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t6130 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, (EqualityComparer_1_t6130 *)__this, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte>::get_Default()
extern "C" EqualityComparer_1_t6130 * EqualityComparer_1_get_Default_m32720_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t6130 * L_0 = ((EqualityComparer_1_t6130_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::.ctor()
extern TypeInfo* EqualityComparer_1_t6130_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m32721_gshared (GenericEqualityComparer_1_t6131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11575);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t6130 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6130_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t6130 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t6130 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m32722_gshared (GenericEqualityComparer_1_t6131 * __this, uint8_t ___obj, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___obj;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m32723_gshared (GenericEqualityComparer_1_t6131 * __this, uint8_t ___x, uint8_t ___y, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___x;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = ___y;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint8_t >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Byte>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (uint8_t)L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Byte>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::.ctor()
extern TypeInfo* EqualityComparer_1_t6130_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m32724_gshared (DefaultComparer_t6132 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11575);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t6130 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6130_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t6130 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t6130 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32725_gshared (DefaultComparer_t6132 * __this, uint8_t ___obj, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___obj;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32726_gshared (DefaultComparer_t6132 * __this, uint8_t ___x, uint8_t ___y, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___x;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = ___y;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = ___y;
		uint8_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Func`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m32727_gshared (Func_1_t6115 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`1<System.Byte>::Invoke()
extern "C" uint8_t Func_1_Invoke_m32728_gshared (Func_1_t6115 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_1_Invoke_m32728((Func_1_t6115 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`1<System.Byte>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m32729_gshared (Func_1_t6115 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_1_EndInvoke_m32730_gshared (Func_1_t6115 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_55.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_55MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_49.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_49MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_47MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
struct Dictionary_2_t6135;
struct DictionaryEntryU5BU5D_t9643;
struct Transform_1_t6134;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2090_TisDictionaryEntry_t2090_m64101_gshared (Dictionary_2_t6135 * __this, DictionaryEntryU5BU5D_t9643* p0, int32_t p1, Transform_1_t6134 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2090_TisDictionaryEntry_t2090_m64101(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6135 *, DictionaryEntryU5BU5D_t9643*, int32_t, Transform_1_t6134 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisDictionaryEntry_t2090_TisDictionaryEntry_t2090_m64101_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t6135;
struct Array_t;
struct Transform_1_t6143;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6111_m64103_gshared (Dictionary_2_t6135 * __this, Array_t * p0, int32_t p1, Transform_1_t6143 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6111_m64103(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, Transform_1_t6143 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t6111_m64103_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t6135;
struct KeyValuePair_2U5BU5D_t7214;
struct Transform_1_t6143;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6111_TisKeyValuePair_2_t6111_m64104_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2U5BU5D_t7214* p0, int32_t p1, Transform_1_t6143 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6111_TisKeyValuePair_2_t6111_m64104(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6135 *, KeyValuePair_2U5BU5D_t7214*, int32_t, Transform_1_t6143 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t6111_TisKeyValuePair_2_t6111_m64104_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m32753_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6135 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32754_gshared (Dictionary_2_t6135 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6135 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32756_gshared (Dictionary_2_t6135 * __this, Object_t* ___dictionary, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Dictionary_2_t6135 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32758_gshared (Dictionary_2_t6135 * __this, int32_t ___capacity, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6135 *)__this, (int32_t)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2__ctor_m32760_gshared (Dictionary_2_t6135 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t6111  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral3759, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck((Object_t*)L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6135 *)__this, (int32_t)L_4, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck((Object_t*)L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_6);
		V_2 = (Object_t*)L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck((Object_t*)L_8);
			KeyValuePair_2_t6111  L_9 = (KeyValuePair_2_t6111 )InterfaceFuncInvoker0< KeyValuePair_2_t6111  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_8);
			V_1 = (KeyValuePair_2_t6111 )L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6111 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			uint8_t L_11 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6111 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			NullCheck((Dictionary_2_t6135 *)__this);
			VirtActionInvoker2< Object_t *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t6135 *)__this, (Object_t *)L_10, (uint8_t)L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck((Object_t *)L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32762_gshared (Dictionary_2_t6135 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t2871 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32764_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t6135 *)__this);
		KeyCollection_t6136 * L_0 = (( KeyCollection_t6136 * (*) (Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32766_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t6135 *)__this);
		ValueCollection_t6140 * L_0 = (( ValueCollection_t6140 * (*) (Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Keys()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m32768_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		NullCheck((Dictionary_2_t6135 *)__this);
		KeyCollection_t6136 * L_0 = (( KeyCollection_t6136 * (*) (Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32770_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		NullCheck((Dictionary_2_t6135 *)__this);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t6135 *)__this, (Object_t *)((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t6135 *)__this);
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t6135 *)__this, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		NullCheck((Dictionary_2_t6135 *)__this);
		uint8_t L_5 = (uint8_t)VirtFuncInvoker1< uint8_t, Object_t * >::Invoke(22 /* TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey) */, (Dictionary_2_t6135 *)__this, (Object_t *)L_4);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32772_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t6135 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t6135 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t6135 *)__this);
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t6135 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t6135 *)__this);
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue) */, (Dictionary_2_t6135 *)__this, (Object_t *)L_1, (uint8_t)L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32774_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		NullCheck((Dictionary_2_t6135 *)__this);
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((Dictionary_2_t6135 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		NullCheck((Dictionary_2_t6135 *)__this);
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t6135 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((Dictionary_2_t6135 *)__this, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		NullCheck((Dictionary_2_t6135 *)__this);
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t6135 *)__this, (Object_t *)L_1, (uint8_t)L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32776_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t6135 *)__this);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t6135 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32778_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		NullCheck((Dictionary_2_t6135 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey) */, (Dictionary_2_t6135 *)__this, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32780_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32782_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32784_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32786_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2_t6111  ___keyValuePair, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6111 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6111 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t6135 *)__this);
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t6135 *)__this, (Object_t *)L_0, (uint8_t)L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32788_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2_t6111  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t6111  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t6135 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t6135 *, KeyValuePair_2_t6111 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t6135 *)__this, (KeyValuePair_2_t6111 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32790_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2U5BU5D_t7214* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7214* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t6135 *)__this, (KeyValuePair_2U5BU5D_t7214*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32792_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2_t6111  ___keyValuePair, const MethodInfo* method)
{
	{
		KeyValuePair_2_t6111  L_0 = ___keyValuePair;
		NullCheck((Dictionary_2_t6135 *)__this);
		bool L_1 = (( bool (*) (Dictionary_2_t6135 *, KeyValuePair_2_t6111 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((Dictionary_2_t6135 *)__this, (KeyValuePair_2_t6111 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6111 *)(&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t6135 *)__this);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey) */, (Dictionary_2_t6135 *)__this, (Object_t *)L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* DictionaryEntryU5BU5D_t9643_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32794_gshared (Dictionary_2_t6135 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntryU5BU5D_t9643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14807);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t7214* V_0 = {0};
	DictionaryEntryU5BU5D_t9643* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t9643* G_B5_1 = {0};
	Dictionary_2_t6135 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t9643* G_B4_1 = {0};
	Dictionary_2_t6135 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (KeyValuePair_2U5BU5D_t7214*)((KeyValuePair_2U5BU5D_t7214*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t7214* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7214* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t6135 *)__this, (KeyValuePair_2U5BU5D_t7214*)L_2, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t6135 *)__this, (Array_t *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = (DictionaryEntryU5BU5D_t9643*)((DictionaryEntryU5BU5D_t9643*)IsInst(L_6, DictionaryEntryU5BU5D_t9643_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t9643* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t9643* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t6134 * L_10 = ((Dictionary_2_t6135_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t6135 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t6135 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t6134 * L_12 = (Transform_1_t6134 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t6134 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, (Object_t *)NULL, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t6135_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t6135 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t6134 * L_13 = ((Dictionary_2_t6135_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__amU24cacheB_15;
		NullCheck((Dictionary_2_t6135 *)G_B5_2);
		(( void (*) (Dictionary_2_t6135 *, DictionaryEntryU5BU5D_t9643*, int32_t, Transform_1_t6134 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((Dictionary_2_t6135 *)G_B5_2, (DictionaryEntryU5BU5D_t9643*)G_B5_1, (int32_t)G_B5_0, (Transform_1_t6134 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t6143 * L_17 = (Transform_1_t6143 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t6143 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, (Object_t *)NULL, (IntPtr_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, Transform_1_t6143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)((Dictionary_2_t6135 *)__this, (Array_t *)L_14, (int32_t)L_15, (Transform_1_t6143 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32796_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138  L_0 = {0};
		(( void (*) (Enumerator_t6138 *, Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t6138  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32798_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138  L_0 = {0};
		(( void (*) (Enumerator_t6138 *, Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t6138  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32800_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		ShimEnumerator_t6144 * L_0 = (ShimEnumerator_t6144 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t6144 *, Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, (Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32802_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* KeyNotFoundException_t4387_il2cpp_TypeInfo_var;
extern "C" uint8_t Dictionary_2_get_Item_m32804_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		KeyNotFoundException_t4387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8863);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_2 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_2, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t549* L_6 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t5347* L_10 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t638* L_15 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		ByteU5BU5D_t66* L_20 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t5347* L_23 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = (int32_t)L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t4387 * L_27 = (KeyNotFoundException_t4387 *)il2cpp_codegen_object_new (KeyNotFoundException_t4387_il2cpp_TypeInfo_var);
		KeyNotFoundException__ctor_m16547(L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_set_Item_m32806_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_2 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_2, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t549* L_7 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (int32_t)(-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t5347* L_12 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t638* L_17 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t5347* L_23 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		int32_t L_29 = (int32_t)((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = (int32_t)L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_32 = V_0;
		Int32U5BU5D_t549* L_33 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_33);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_37 = (int32_t)L_36;
		V_4 = (int32_t)L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = (int32_t)L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t5347* L_39 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t5347* L_42 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t549* L_44 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t549* L_47 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t5347* L_50 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t638* L_53 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t5347* L_57 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t5347* L_59 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t5347* L_62 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t549* L_64 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t549* L_67 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		ByteU5BU5D_t66* L_70 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_71 = V_2;
		uint8_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_70, L_71)) = (uint8_t)L_72;
		int32_t L_73 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5371_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m32808_gshared (Dictionary_2_t6135 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2464);
		EqualityComparer_1_t5371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10287);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t6135 * G_B4_0 = {0};
	Dictionary_2_t6135 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t6135 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1424 * L_1 = (ArgumentOutOfRangeException_t1424 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11213(L_1, (String_t*)(String_t*) &_stringLiteral2443, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t6135 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t6135 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = (Object_t*)L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t6135 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5371 * L_5 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t6135 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t6135 *)__this, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t549_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5347_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m32810_gshared (Dictionary_2_t6135 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		LinkU5BU5D_t5347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14808);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t549*)SZArrayNew(Int32U5BU5D_t549_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t5347*)SZArrayNew(LinkU5BU5D_t5347_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t638*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((ByteU5BU5D_t66*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t549* L_4 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (int32_t)(__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t549* L_6 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_CopyToCheck_m32812_gshared (Dictionary_2_t6135 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2464);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral1913, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1424 * L_3 = (ArgumentOutOfRangeException_t1424 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11213(L_3, (String_t*)(String_t*) &_stringLiteral2255, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14822((Array_t *)L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t664 * L_7 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3842(L_7, (String_t*)(String_t*) &_stringLiteral2444, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck((Array_t *)L_8);
		int32_t L_9 = Array_get_Length_m14822((Array_t *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t6135 *)__this);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (Dictionary_2_t6135 *)__this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t664 * L_12 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3842(L_12, (String_t*)(String_t*) &_stringLiteral2445, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t6111  Dictionary_2_make_pair_m32814_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		uint8_t L_1 = ___value;
		KeyValuePair_2_t6111  L_2 = {0};
		(( void (*) (KeyValuePair_2_t6111 *, Object_t *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43)->method)(&L_2, (Object_t *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 43));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m32816_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32818_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32820_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2U5BU5D_t7214* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t7214* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((Dictionary_2_t6135 *)__this, (Array_t *)(Array_t *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t7214* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t6143 * L_5 = (Transform_1_t6143 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t6143 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, (Object_t *)NULL, (IntPtr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, KeyValuePair_2U5BU5D_t7214*, int32_t, Transform_1_t6143 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)((Dictionary_2_t6135 *)__this, (KeyValuePair_2U5BU5D_t7214*)L_2, (int32_t)L_3, (Transform_1_t6143 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern TypeInfo* Hashtable_t1278_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t549_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t5347_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m32822_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t1278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3239);
		Int32U5BU5D_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(471);
		LinkU5BU5D_t5347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14808);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t549* V_1 = {0};
	LinkU5BU5D_t5347* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t638* V_7 = {0};
	ByteU5BU5D_t66* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t549* L_0 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t1278_il2cpp_TypeInfo_var);
		int32_t L_1 = Hashtable_ToPrime_m16775(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t549*)((Int32U5BU5D_t549*)SZArrayNew(Int32U5BU5D_t549_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t5347*)((LinkU5BU5D_t5347*)SZArrayNew(LinkU5BU5D_t5347_il2cpp_TypeInfo_var, L_3));
		V_3 = (int32_t)0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t549* L_4 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t5347* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t638* L_10 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((Object_t*)L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_9, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = (int32_t)((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = (int32_t)L_14;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = (int32_t)L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t5347* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t549* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t549* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t5347* L_26 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = (int32_t)L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t549* L_32 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t549* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t5347* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = (ObjectU5BU5D_t638*)((ObjectU5BU5D_t638*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39), L_35));
		int32_t L_36 = V_0;
		V_8 = (ByteU5BU5D_t66*)((ByteU5BU5D_t66*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_36));
		ObjectU5BU5D_t638* L_37 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		ObjectU5BU5D_t638* L_38 = V_7;
		int32_t L_39 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11229(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, (int32_t)0, (Array_t *)(Array_t *)L_38, (int32_t)0, (int32_t)L_39, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_40 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		ByteU5BU5D_t66* L_41 = V_8;
		int32_t L_42 = (int32_t)(__this->___touchedSlots_8);
		Array_Copy_m11229(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, (int32_t)0, (Array_t *)(Array_t *)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		ObjectU5BU5D_t638* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ByteU5BU5D_t66* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Add_m32824_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_2 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_2, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t549* L_7 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t5347* L_11 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t638* L_16 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck((Object_t*)L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_15, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), (Object_t *)L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t664 * L_21 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3842(L_21, (String_t*)(String_t*) &_stringLiteral3761, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t5347* L_22 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = (int32_t)L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (int32_t)(__this->___count_10);
		int32_t L_27 = (int32_t)((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = (int32_t)L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (int32_t)(__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)((Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		int32_t L_30 = V_0;
		Int32U5BU5D_t549* L_31 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_31);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (int32_t)(__this->___emptySlot_9);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (int32_t)(__this->___touchedSlots_8);
		int32_t L_35 = (int32_t)L_34;
		V_3 = (int32_t)L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = (int32_t)L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t5347* L_37 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t5347* L_40 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t5347* L_43 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t549* L_45 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t549* L_48 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t638* L_51 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		ByteU5BU5D_t66* L_54 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_55 = V_2;
		uint8_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)) = (uint8_t)L_56;
		int32_t L_57 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32826_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t549* L_0 = (Int32U5BU5D_t549*)(__this->___table_4);
		Int32U5BU5D_t549* L_1 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m12894(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t638* L_2 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		ObjectU5BU5D_t638* L_3 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m12894(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_4 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		ByteU5BU5D_t66* L_5 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m12894(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t5347* L_6 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		LinkU5BU5D_t5347* L_7 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m12894(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKey_m32828_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_2 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_2, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t549* L_6 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t5347* L_10 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t638* L_15 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t5347* L_20 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = (int32_t)L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern TypeInfo* EqualityComparer_1_t6130_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m32830_gshared (Dictionary_2_t6135 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11575);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6130_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6130 * L_0 = (( EqualityComparer_1_t6130 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		V_0 = (Object_t*)L_0;
		V_1 = (int32_t)0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t549* L_1 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		ByteU5BU5D_t66* L_5 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		uint8_t L_8 = ___value;
		NullCheck((Object_t*)L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46), (Object_t*)L_4, (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)), (uint8_t)L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t5347* L_10 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = (int32_t)L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t549* L_16 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_GetObjectData_m32832_gshared (Dictionary_2_t6135 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	KeyValuePair_2U5BU5D_t7214* V_0 = {0};
	{
		SerializationInfo_t2871 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral2872, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t2871 * L_2 = ___info;
		int32_t L_3 = (int32_t)(__this->___generation_14);
		NullCheck((SerializationInfo_t2871 *)L_2);
		SerializationInfo_AddValue_m11223((SerializationInfo_t2871 *)L_2, (String_t*)(String_t*) &_stringLiteral2874, (int32_t)L_3, /*hidden argument*/NULL);
		SerializationInfo_t2871 * L_4 = ___info;
		Object_t* L_5 = (Object_t*)(__this->___hcp_12);
		NullCheck((SerializationInfo_t2871 *)L_4);
		SerializationInfo_AddValue_m11224((SerializationInfo_t2871 *)L_4, (String_t*)(String_t*) &_stringLiteral2876, (Object_t *)L_5, /*hidden argument*/NULL);
		V_0 = (KeyValuePair_2U5BU5D_t7214*)NULL;
		int32_t L_6 = (int32_t)(__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (int32_t)(__this->___count_10);
		V_0 = (KeyValuePair_2U5BU5D_t7214*)((KeyValuePair_2U5BU5D_t7214*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_7));
		KeyValuePair_2U5BU5D_t7214* L_8 = V_0;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((Dictionary_2_t6135 *)__this, (KeyValuePair_2U5BU5D_t7214*)L_8, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t2871 * L_9 = ___info;
		Int32U5BU5D_t549* L_10 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_10);
		NullCheck((SerializationInfo_t2871 *)L_9);
		SerializationInfo_AddValue_m11223((SerializationInfo_t2871 *)L_9, (String_t*)(String_t*) &_stringLiteral3762, (int32_t)(((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		SerializationInfo_t2871 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t7214* L_12 = V_0;
		NullCheck((SerializationInfo_t2871 *)L_11);
		SerializationInfo_AddValue_m11224((SerializationInfo_t2871 *)L_11, (String_t*)(String_t*) &_stringLiteral3763, (Object_t *)(Object_t *)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_OnDeserialization_m32834_gshared (Dictionary_2_t6135 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t7214* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t2871 * L_0 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t2871 * L_1 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2871 *)L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m11219((SerializationInfo_t2871 *)L_1, (String_t*)(String_t*) &_stringLiteral2874, /*hidden argument*/NULL);
		__this->___generation_14 = L_2;
		SerializationInfo_t2871 * L_3 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2871 *)L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m11221((SerializationInfo_t2871 *)L_3, (String_t*)(String_t*) &_stringLiteral2876, (Type_t *)L_4, /*hidden argument*/NULL);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)));
		SerializationInfo_t2871 * L_6 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		NullCheck((SerializationInfo_t2871 *)L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m11219((SerializationInfo_t2871 *)L_6, (String_t*)(String_t*) &_stringLiteral3762, /*hidden argument*/NULL);
		V_0 = (int32_t)L_7;
		SerializationInfo_t2871 * L_8 = (SerializationInfo_t2871 *)(__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2871 *)L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m11221((SerializationInfo_t2871 *)L_8, (String_t*)(String_t*) &_stringLiteral3763, (Type_t *)L_9, /*hidden argument*/NULL);
		V_1 = (KeyValuePair_2U5BU5D_t7214*)((KeyValuePair_2U5BU5D_t7214*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (int32_t)((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		NullCheck((Dictionary_2_t6135 *)__this);
		(( void (*) (Dictionary_2_t6135 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)((Dictionary_2_t6135 *)__this, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t7214* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = (int32_t)0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t7214* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6111 *)((KeyValuePair_2_t6111 *)(KeyValuePair_2_t6111 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t7214* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		uint8_t L_19 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6111 *)((KeyValuePair_2_t6111 *)(KeyValuePair_2_t6111 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		NullCheck((Dictionary_2_t6135 *)__this);
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue) */, (Dictionary_2_t6135 *)__this, (Object_t *)L_16, (uint8_t)L_19);
		int32_t L_20 = V_2;
		V_2 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t7214* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t2871 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_Remove_m32836_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	uint8_t V_5 = 0x0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_2 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_2, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t549* L_7 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_7);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (int32_t)(-1);
	}

IL_004a:
	{
		LinkU5BU5D_t5347* L_12 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t638* L_17 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck((Object_t*)L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), (Object_t *)L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = (int32_t)L_22;
		LinkU5BU5D_t5347* L_23 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = (int32_t)L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (int32_t)(__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t549* L_30 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t5347* L_32 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t5347* L_35 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t5347* L_37 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t5347* L_40 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)(__this->___emptySlot_9);
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t5347* L_44 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t638* L_46 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		ByteU5BU5D_t66* L_49 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (Byte_t694_il2cpp_TypeInfo_var, (&V_5));
		uint8_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_50)) = (uint8_t)L_51;
		int32_t L_52 = (int32_t)(__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_TryGetValue_m32838_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t723 * L_2 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_2, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (Object_t*)(__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck((Object_t*)L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_3, (Object_t *)L_4);
		V_0 = (int32_t)((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t549* L_6 = (Int32U5BU5D_t549*)(__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t549* L_8 = (Int32U5BU5D_t549*)(__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t5347* L_10 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___hcp_12);
		ObjectU5BU5D_t638* L_15 = (ObjectU5BU5D_t638*)(__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck((Object_t*)L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), (Object_t*)L_14, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), (Object_t *)L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		uint8_t* L_20 = ___value;
		ByteU5BU5D_t66* L_21 = (ByteU5BU5D_t66*)(__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t5347* L_24 = (LinkU5BU5D_t5347*)(__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = (int32_t)L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		uint8_t* L_28 = ___value;
		Initobj (Byte_t694_il2cpp_TypeInfo_var, (&V_2));
		uint8_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t6136 * Dictionary_2_get_Keys_m32840_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		KeyCollection_t6136 * L_0 = (KeyCollection_t6136 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50));
		(( void (*) (KeyCollection_t6136 *, Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)->method)(L_0, (Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t6140 * Dictionary_2_get_Values_m32842_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		ValueCollection_t6140 * L_0 = (ValueCollection_t6140 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (ValueCollection_t6140 *, Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, (Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" Object_t * Dictionary_2_ToTKey_m32844_gshared (Dictionary_2_t6135 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3764, (String_t*)L_4, /*hidden argument*/NULL);
		ArgumentException_t664 * L_6 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3487(L_6, (String_t*)L_5, (String_t*)(String_t*) &_stringLiteral1337, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" uint8_t Dictionary_2_ToTValue_m32846_gshared (Dictionary_2_t6135 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (Byte_t694_il2cpp_TypeInfo_var, (&V_0));
		uint8_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, (Type_t *)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*)(String_t*) &_stringLiteral3764, (String_t*)L_6, /*hidden argument*/NULL);
		ArgumentException_t664 * L_8 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3487(L_8, (String_t*)L_7, (String_t*)(String_t*) &_stringLiteral1311, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(uint8_t*)((uint8_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t6130_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32848_gshared (Dictionary_2_t6135 * __this, KeyValuePair_2_t6111  ___pair, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t6130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11575);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6111 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		NullCheck((Dictionary_2_t6135 *)__this);
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, uint8_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&) */, (Dictionary_2_t6135 *)__this, (Object_t *)L_0, (uint8_t*)(&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t6130_il2cpp_TypeInfo_var);
		EqualityComparer_1_t6130 * L_2 = (( EqualityComparer_1_t6130 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		uint8_t L_3 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6111 *)(&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_4 = V_0;
		NullCheck((EqualityComparer_1_t6130 *)L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, (EqualityComparer_1_t6130 *)L_2, (uint8_t)L_3, (uint8_t)L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6138  Dictionary_2_GetEnumerator_m32850_gshared (Dictionary_2_t6135 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138  L_0 = {0};
		(( void (*) (Enumerator_t6138 *, Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, (Dictionary_2_t6135 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t2090  Dictionary_2_U3CCopyToU3Em__0_m32852_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		uint8_t L_2 = ___value;
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t2090  L_5 = {0};
		DictionaryEntry__ctor_m14821(&L_5, (Object_t *)((Object_t *)L_1), (Object_t *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_50.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_53MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_50MethodDeclarations.h"
struct Dictionary_2_t6135;
struct Array_t;
struct Transform_1_t6139;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m64097_gshared (Dictionary_2_t6135 * __this, Array_t * p0, int32_t p1, Transform_1_t6139 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m64097(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, Transform_1_t6139 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m64097_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t6135;
struct ObjectU5BU5D_t638;
struct Transform_1_t6139;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m64096_gshared (Dictionary_2_t6135 * __this, ObjectU5BU5D_t638* p0, int32_t p1, Transform_1_t6139 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m64096(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6135 *, ObjectU5BU5D_t638*, int32_t, Transform_1_t6139 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m64096_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void KeyCollection__ctor_m32853_gshared (KeyCollection_t6136 * __this, Dictionary_2_t6135 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t6135 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral3759, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t6135 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m32854_gshared (KeyCollection_t6136 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m32855_gshared (KeyCollection_t6136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m32856_gshared (KeyCollection_t6136 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t6135 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey) */, (Dictionary_2_t6135 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m32857_gshared (KeyCollection_t6136 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m32858_gshared (KeyCollection_t6136 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t6136 *)__this);
		Enumerator_t6137  L_0 = (( Enumerator_t6137  (*) (KeyCollection_t6136 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t6136 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6137  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m32859_gshared (KeyCollection_t6136 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ObjectU5BU5D_t638* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t638*)((ObjectU5BU5D_t638*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t638* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t638* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((KeyCollection_t6136 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t638*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32) */, (KeyCollection_t6136 *)__this, (ObjectU5BU5D_t638*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t6135 * L_4 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t6135 *)L_4);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t6135 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t6135 * L_7 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t6139 * L_11 = (Transform_1_t6139 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t6139 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t6135 *)L_7);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, Transform_1_t6139 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t6135 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t6139 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m32860_gshared (KeyCollection_t6136 * __this, const MethodInfo* method)
{
	{
		NullCheck((KeyCollection_t6136 *)__this);
		Enumerator_t6137  L_0 = (( Enumerator_t6137  (*) (KeyCollection_t6136 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((KeyCollection_t6136 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6137  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m32861_gshared (KeyCollection_t6136 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m32862_gshared (KeyCollection_t6136 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t707_il2cpp_TypeInfo_var;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m32863_gshared (KeyCollection_t6136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t707_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m32864_gshared (KeyCollection_t6136 * __this, ObjectU5BU5D_t638* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		ObjectU5BU5D_t638* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t6135 *)L_0);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t6135 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t6135 * L_3 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		ObjectU5BU5D_t638* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t6139 * L_7 = (Transform_1_t6139 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t6139 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t6135 *)L_3);
		(( void (*) (Dictionary_2_t6135 *, ObjectU5BU5D_t638*, int32_t, Transform_1_t6139 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t6135 *)L_3, (ObjectU5BU5D_t638*)L_4, (int32_t)L_5, (Transform_1_t6139 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6137  KeyCollection_GetEnumerator_m32865_gshared (KeyCollection_t6136 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		Enumerator_t6137  L_1 = {0};
		(( void (*) (Enumerator_t6137 *, Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t6135 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m32866_gshared (KeyCollection_t6136 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t6135 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (Dictionary_2_t6135 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32867_gshared (Enumerator_t6137 * __this, Dictionary_2_t6135 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = ___host;
		NullCheck((Dictionary_2_t6135 *)L_0);
		Enumerator_t6138  L_1 = (( Enumerator_t6138  (*) (Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6135 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32868_gshared (Enumerator_t6137 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32869_gshared (Enumerator_t6137 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32870_gshared (Enumerator_t6137 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32871_gshared (Enumerator_t6137 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m32872_gshared (Enumerator_t6137 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t6111 * L_1 = (KeyValuePair_2_t6111 *)&(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6111 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32873_gshared (Enumerator_t6138 * __this, Dictionary_2_t6135 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t6135 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32874_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6111  L_0 = (KeyValuePair_2_t6111 )(__this->___current_3);
		KeyValuePair_2_t6111  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32875_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2090  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32876_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6111 * L_0 = (KeyValuePair_2_t6111 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t6111 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t6111 * L_3 = (KeyValuePair_2_t6111 *)&(__this->___current_3);
		uint8_t L_4 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6111 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint8_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_5);
		DictionaryEntry_t2090  L_7 = {0};
		DictionaryEntry__ctor_m14821(&L_7, (Object_t *)((Object_t *)L_2), (Object_t *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32877_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32878_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32879_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t6135 * L_4 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t5347* L_5 = (LinkU5BU5D_t5347*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t4386 *)(Link_t4386 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t6135 * L_8 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t638* L_9 = (ObjectU5BU5D_t638*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t6135 * L_12 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck(L_12);
		ByteU5BU5D_t66* L_13 = (ByteU5BU5D_t66*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t6111  L_16 = {0};
		(( void (*) (KeyValuePair_2_t6111 *, Object_t *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(&L_16, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t6135 * L_18 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6111  Enumerator_get_Current_m32880_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t6111  L_0 = (KeyValuePair_2_t6111 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m32881_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6111 * L_0 = (KeyValuePair_2_t6111 *)&(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((KeyValuePair_2_t6111 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32882_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t6111 * L_0 = (KeyValuePair_2_t6111 *)&(__this->___current_3);
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t6111 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32883_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___next_1 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3250_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m32884_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5375);
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t3250 * L_1 = (ObjectDisposedException_t3250 *)il2cpp_codegen_object_new (ObjectDisposedException_t3250_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11583(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t6135 * L_2 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1380 * L_5 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_5, (String_t*)(String_t*) &_stringLiteral3765, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m32885_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t6138 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral2446, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32886_gshared (Enumerator_t6138 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t6135 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32887_gshared (Transform_1_t6139 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m32888_gshared (Transform_1_t6139 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32888((Transform_1_t6139 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m32889_gshared (Transform_1_t6139 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Byte_t694_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m32890_gshared (Transform_1_t6139 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_54MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_48MethodDeclarations.h"
struct Dictionary_2_t6135;
struct Array_t;
struct Transform_1_t6142;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t694_m64099_gshared (Dictionary_2_t6135 * __this, Array_t * p0, int32_t p1, Transform_1_t6142 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t694_m64099(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, Transform_1_t6142 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t694_m64099_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t6135;
struct ByteU5BU5D_t66;
struct Transform_1_t6142;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisByte_t694_TisByte_t694_m64100_gshared (Dictionary_2_t6135 * __this, ByteU5BU5D_t66* p0, int32_t p1, Transform_1_t6142 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisByte_t694_TisByte_t694_m64100(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t6135 *, ByteU5BU5D_t66*, int32_t, Transform_1_t6142 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisByte_t694_TisByte_t694_m64100_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m32891_gshared (ValueCollection_t6140 * __this, Dictionary_2_t6135 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t6135 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3837(L_1, (String_t*)(String_t*) &_stringLiteral3759, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t6135 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32892_gshared (ValueCollection_t6140 * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32893_gshared (ValueCollection_t6140 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32894_gshared (ValueCollection_t6140 * __this, uint8_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		uint8_t L_1 = ___item;
		NullCheck((Dictionary_2_t6135 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t6135 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6135 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32895_gshared (ValueCollection_t6140 * __this, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10175(L_0, (String_t*)(String_t*) &_stringLiteral3766, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32896_gshared (ValueCollection_t6140 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t6140 *)__this);
		Enumerator_t6141  L_0 = (( Enumerator_t6141  (*) (ValueCollection_t6140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t6140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6141  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m32897_gshared (ValueCollection_t6140 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	ByteU5BU5D_t66* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ByteU5BU5D_t66*)((ByteU5BU5D_t66*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ByteU5BU5D_t66* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_t66* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t6140 *)__this);
		VirtActionInvoker2< ByteU5BU5D_t66*, int32_t >::Invoke(14 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t6140 *)__this, (ByteU5BU5D_t66*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t6135 * L_4 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t6135 *)L_4);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t6135 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t6135 * L_7 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t6142 * L_11 = (Transform_1_t6142 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t6142 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t6135 *)L_7);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, Transform_1_t6142 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t6135 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t6142 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32898_gshared (ValueCollection_t6140 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t6140 *)__this);
		Enumerator_t6141  L_0 = (( Enumerator_t6141  (*) (ValueCollection_t6140 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t6140 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6141  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32899_gshared (ValueCollection_t6140 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32900_gshared (ValueCollection_t6140 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t707_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m32901_gshared (ValueCollection_t6140 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t707_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m32902_gshared (ValueCollection_t6140 * __this, ByteU5BU5D_t66* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		ByteU5BU5D_t66* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t6135 *)L_0);
		(( void (*) (Dictionary_2_t6135 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t6135 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t6135 * L_3 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		ByteU5BU5D_t66* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t6142 * L_7 = (Transform_1_t6142 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t6142 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t6135 *)L_3);
		(( void (*) (Dictionary_2_t6135 *, ByteU5BU5D_t66*, int32_t, Transform_1_t6142 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t6135 *)L_3, (ByteU5BU5D_t66*)L_4, (int32_t)L_5, (Transform_1_t6142 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t6141  ValueCollection_GetEnumerator_m32903_gshared (ValueCollection_t6140 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		Enumerator_t6141  L_1 = {0};
		(( void (*) (Enumerator_t6141 *, Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t6135 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m32904_gshared (ValueCollection_t6140 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = (Dictionary_2_t6135 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t6135 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count() */, (Dictionary_2_t6135 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32905_gshared (Enumerator_t6141 * __this, Dictionary_2_t6135 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t6135 * L_0 = ___host;
		NullCheck((Dictionary_2_t6135 *)L_0);
		Enumerator_t6138  L_1 = (( Enumerator_t6138  (*) (Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6135 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32906_gshared (Enumerator_t6141 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		uint8_t L_1 = (( uint8_t (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32907_gshared (Enumerator_t6141 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32908_gshared (Enumerator_t6141 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32909_gshared (Enumerator_t6141 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" uint8_t Enumerator_get_Current_m32910_gshared (Enumerator_t6141 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t6111 * L_1 = (KeyValuePair_2_t6111 *)&(L_0->___current_3);
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6111 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32911_gshared (Transform_1_t6142 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m32912_gshared (Transform_1_t6142 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32912((Transform_1_t6142 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m32913_gshared (Transform_1_t6142 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Byte_t694_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m32914_gshared (Transform_1_t6142 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32915_gshared (Transform_1_t6134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t2090  Transform_1_Invoke_m32916_gshared (Transform_1_t6134 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32916((Transform_1_t6134 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t2090  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t2090  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t2090  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m32917_gshared (Transform_1_t6134 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Byte_t694_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t2090  Transform_1_EndInvoke_m32918_gshared (Transform_1_t6134 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t2090 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32919_gshared (Transform_1_t6143 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t6111  Transform_1_Invoke_m32920_gshared (Transform_1_t6143 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32920((Transform_1_t6143 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t6111  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t6111  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t6111  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m32921_gshared (Transform_1_t6143 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(Byte_t694_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6111  Transform_1_EndInvoke_m32922_gshared (Transform_1_t6143 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t6111 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32923_gshared (ShimEnumerator_t6144 * __this, Dictionary_2_t6135 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t6135 * L_0 = ___host;
		NullCheck((Dictionary_2_t6135 *)L_0);
		Enumerator_t6138  L_1 = (( Enumerator_t6138  (*) (Dictionary_2_t6135 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t6135 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32924_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t3913_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m32925_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t3913_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6892);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t6138  L_0 = (Enumerator_t6138 )(__this->___host_enumerator_0);
		Enumerator_t6138  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t2090  L_3 = (DictionaryEntry_t2090 )InterfaceFuncInvoker0< DictionaryEntry_t2090  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t3913_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32926_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t6111  V_0 = {0};
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t6111  L_1 = (( KeyValuePair_2_t6111  (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t6111 )L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t6111 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32927_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t6111  V_0 = {0};
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t6111  L_1 = (( KeyValuePair_2_t6111  (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t6111 )L_1;
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t6111 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t6111 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern TypeInfo* DictionaryEntry_t2090_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m32928_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t2090_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3234);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t6144 *)__this);
		DictionaryEntry_t2090  L_0 = (DictionaryEntry_t2090 )VirtFuncInvoker0< DictionaryEntry_t2090  >::Invoke(7 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry() */, (ShimEnumerator_t6144 *)__this);
		DictionaryEntry_t2090  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t2090_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m32929_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6138 * L_0 = (Enumerator_t6138 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t6138 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Enumerator_t6138 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// Parse.ParseRelation`1<System.Object>
#include "Parse_Unity_Parse_ParseRelation_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// Parse.ParseRelation`1<System.Object>
#include "Parse_Unity_Parse_ParseRelation_1_gen_2MethodDeclarations.h"

// Parse.ParseQuery`1<System.Object>
#include "Parse_Unity_Parse_ParseQuery_1_gen_1.h"
// Parse.ParseRelationBase
#include "Parse_Unity_Parse_ParseRelationBaseMethodDeclarations.h"
struct ParseRelationBase_t1249;
struct ParseQuery_1_t1466;
// Parse.ParseRelationBase
#include "Parse_Unity_Parse_ParseRelationBase.h"
// Declaration Parse.ParseQuery`1<T> Parse.ParseRelationBase::GetQuery<System.Object>()
// Parse.ParseQuery`1<T> Parse.ParseRelationBase::GetQuery<System.Object>()
extern "C" ParseQuery_1_t1466 * ParseRelationBase_GetQuery_TisObject_t_m64106_gshared (ParseRelationBase_t1249 * __this, const MethodInfo* method);
#define ParseRelationBase_GetQuery_TisObject_t_m64106(__this, method) (( ParseQuery_1_t1466 * (*) (ParseRelationBase_t1249 *, const MethodInfo*))ParseRelationBase_GetQuery_TisObject_t_m64106_gshared)(__this, method)


// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m33180_gshared (ParseRelation_1_t1469 * __this, ParseObject_t1170 * ___parent, String_t* ___key, const MethodInfo* method)
{
	{
		ParseObject_t1170 * L_0 = ___parent;
		String_t* L_1 = ___key;
		NullCheck((ParseRelationBase_t1249 *)__this);
		ParseRelationBase__ctor_m6749((ParseRelationBase_t1249 *)__this, (ParseObject_t1170 *)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m33181_gshared (ParseRelation_1_t1469 * __this, ParseObject_t1170 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method)
{
	{
		ParseObject_t1170 * L_0 = ___parent;
		String_t* L_1 = ___key;
		String_t* L_2 = ___targetClassName;
		NullCheck((ParseRelationBase_t1249 *)__this);
		ParseRelationBase__ctor_m6750((ParseRelationBase_t1249 *)__this, (ParseObject_t1170 *)L_0, (String_t*)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m33182_gshared (ParseRelation_1_t1469 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		NullCheck((ParseRelationBase_t1249 *)__this);
		ParseRelationBase_Add_m6752((ParseRelationBase_t1249 *)__this, (ParseObject_t1170 *)((Object_t *)L_1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m33183_gshared (ParseRelation_1_t1469 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		NullCheck((ParseRelationBase_t1249 *)__this);
		ParseRelationBase_Remove_m6753((ParseRelationBase_t1249 *)__this, (ParseObject_t1170 *)((Object_t *)L_1), /*hidden argument*/NULL);
		return;
	}
}
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t1466 * ParseRelation_1_get_Query_m33184_gshared (ParseRelation_1_t1469 * __this, const MethodInfo* method)
{
	{
		NullCheck((ParseRelationBase_t1249 *)__this);
		ParseQuery_1_t1466 * L_0 = (( ParseQuery_1_t1466 * (*) (ParseRelationBase_t1249 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ParseRelationBase_t1249 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_0;
	}
}
// System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateOfTypeIteratorU3.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateOfTypeIteratorU3MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::.ctor()
extern "C" void U3CCreateOfTypeIteratorU3Ec__IteratorC_1__ctor_m33185_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateOfTypeIteratorU3Ec__IteratorC_1_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m33186_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateOfTypeIteratorU3Ec__IteratorC_1_System_Collections_IEnumerator_get_Current_m33187_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateOfTypeIteratorU3Ec__IteratorC_1_System_Collections_IEnumerable_GetEnumerator_m33188_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateOfTypeIteratorU3Ec__IteratorC_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m33189_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * __this, const MethodInfo* method)
{
	U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_3);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * L_2 = (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 *)L_2;
		U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * L_3 = V_0;
		Object_t * L_4 = (Object_t *)(__this->___U3CU24U3Esource_5);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateOfTypeIteratorU3Ec__IteratorC_1_MoveNext_m33190_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
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
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00bf;
	}

IL_0023:
	{
		Object_t * L_2 = (Object_t *)(__this->___source_0);
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___U3CU24s_69U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0088;
			}
		}

IL_0043:
		{
			goto IL_0088;
		}

IL_0048:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU24s_69U3E__0_1);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CelementU3E__1_2);
			if (!((Object_t *)IsInst(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
			{
				goto IL_0088;
			}
		}

IL_0069:
		{
			Object_t * L_8 = (Object_t *)(__this->___U3CelementU3E__1_2);
			__this->___U24current_4 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
			__this->___U24PC_3 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC1, FINALLY_009d);
		}

IL_0088:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU24s_69U3E__0_1);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0048;
			}
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xB8, FINALLY_009d);
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
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_00a1;
			}
		}

IL_00a0:
		{
			IL2CPP_END_FINALLY(157)
		}

IL_00a1:
		{
			Object_t * L_12 = (Object_t *)(__this->___U3CU24s_69U3E__0_1);
			V_2 = (Object_t *)((Object_t *)IsInst(L_12, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_00b1;
			}
		}

IL_00b0:
		{
			IL2CPP_END_FINALLY(157)
		}

IL_00b1:
		{
			Object_t * L_14 = V_2;
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(157)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xC1, IL_00c1)
		IL2CPP_JUMP_TBL(0xB8, IL_00b8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00b8:
	{
		__this->___U24PC_3 = (-1);
	}

IL_00bf:
	{
		return 0;
	}

IL_00c1:
	{
		return 1;
	}
	// Dead block : IL_00c3: ldloc.3
}
// System.Void System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateOfTypeIteratorU3Ec__IteratorC_1_Dispose_m33191_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * __this, const MethodInfo* method)
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
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
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
			Object_t * L_2 = (Object_t *)(__this->___U3CU24s_69U3E__0_1);
			V_1 = (Object_t *)((Object_t *)IsInst(L_2, IDisposable_t58_il2cpp_TypeInfo_var));
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
			NullCheck((Object_t *)L_4);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_4);
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
// System.Void System.Linq.Enumerable/<CreateOfTypeIterator>c__IteratorC`1<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateOfTypeIteratorU3Ec__IteratorC_1_Reset_m33192_gshared (U3CCreateOfTypeIteratorU3Ec__IteratorC_1_t6160 * __this, const MethodInfo* method)
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
// System.Threading.Tasks.Task`1/<>c__DisplayClass4`1<System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1/<>c__DisplayClass4`1<System.Object,System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_2MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_64.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_64MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass4`1<System.Object,System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4_1__ctor_m33250_gshared (U3CU3Ec__DisplayClass4_1_t6162 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Threading.Tasks.Task`1/<>c__DisplayClass4`1<System.Object,System.Object>::<ContinueWith>b__3(System.Threading.Tasks.Task)
extern "C" Object_t * U3CU3Ec__DisplayClass4_1_U3CContinueWithU3Eb__3_m33251_gshared (U3CU3Ec__DisplayClass4_1_t6162 * __this, Task_t1159 * ___t, const MethodInfo* method)
{
	{
		Func_2_t1414 * L_0 = (Func_2_t1414 *)(__this->___continuation_0);
		Task_t1159 * L_1 = ___t;
		NullCheck((Func_2_t1414 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Task_1_t1344 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>::Invoke(!0) */, (Func_2_t1414 *)L_0, (Task_1_t1344 *)((Task_1_t1344 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Byte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_9.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Byte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_9MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_89.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>
#include "System_Core_System_Func_2_gen_89MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Byte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m33399_gshared (U3CU3Ec__DisplayClass1_2_t6171 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Object,System.Byte>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" uint8_t U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m33400_gshared (U3CU3Ec__DisplayClass1_2_t6171 * __this, Task_t1159 * ___t, const MethodInfo* method)
{
	{
		Func_2_t1447 * L_0 = (Func_2_t1447 *)(__this->___continuation_0);
		Task_t1159 * L_1 = ___t;
		NullCheck((Func_2_t1447 *)L_0);
		uint8_t L_2 = (uint8_t)VirtFuncInvoker1< uint8_t, Task_1_t1344 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::Invoke(!0) */, (Func_2_t1447 *)L_0, (Task_1_t1344 *)((Task_1_t1344 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// <>f__AnonymousType3`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType3_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType3`2<System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType3_2_gen_0MethodDeclarations.h"

// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void <>f__AnonymousType3`2<System.Object,System.Object>::.ctor(<item>j__TPar,<ops>j__TPar)
extern "C" void U3CU3Ef__AnonymousType3_2__ctor_m33816_gshared (U3CU3Ef__AnonymousType3_2_t6198 * __this, Object_t * ___item, Object_t * ___ops, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___item;
		__this->___U3CitemU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___ops;
		__this->___U3CopsU3Ei__Field_1 = L_1;
		return;
	}
}
// <item>j__TPar <>f__AnonymousType3`2<System.Object,System.Object>::get_item()
extern "C" Object_t * U3CU3Ef__AnonymousType3_2_get_item_m33817_gshared (U3CU3Ef__AnonymousType3_2_t6198 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CitemU3Ei__Field_0);
		return L_0;
	}
}
// <ops>j__TPar <>f__AnonymousType3`2<System.Object,System.Object>::get_ops()
extern "C" Object_t * U3CU3Ef__AnonymousType3_2_get_ops_m33818_gshared (U3CU3Ef__AnonymousType3_2_t6198 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CopsU3Ei__Field_1);
		return L_0;
	}
}
// System.String <>f__AnonymousType3`2<System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType3_2_ToString_m33820_gshared (U3CU3Ef__AnonymousType3_2_t6198 * __this, const MethodInfo* method)
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
		StringBuilder__ctor_m3613(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t261 *)L_0;
		StringBuilder_t261 * L_1 = V_0;
		NullCheck((StringBuilder_t261 *)L_1);
		StringBuilder_Append_m3620((StringBuilder_t261 *)L_1, (String_t*)(String_t*) &_stringLiteral1711, /*hidden argument*/NULL);
		StringBuilder_t261 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CitemU3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t261 *)L_2);
		StringBuilder_Append_m3759((StringBuilder_t261 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t261 * L_5 = V_0;
		NullCheck((StringBuilder_t261 *)L_5);
		StringBuilder_Append_m3620((StringBuilder_t261 *)L_5, (String_t*)(String_t*) &_stringLiteral1712, /*hidden argument*/NULL);
		StringBuilder_t261 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CopsU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t261 *)L_6);
		StringBuilder_Append_m3759((StringBuilder_t261 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t261 * L_9 = V_0;
		NullCheck((StringBuilder_t261 *)L_9);
		StringBuilder_Append_m3620((StringBuilder_t261 *)L_9, (String_t*)(String_t*) &_stringLiteral1706, /*hidden argument*/NULL);
		StringBuilder_t261 * L_10 = V_0;
		NullCheck((Object_t *)L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_10);
		return L_11;
	}
}
// System.Boolean <>f__AnonymousType3`2<System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t5371_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType3_2_Equals_m33822_gshared (U3CU3Ef__AnonymousType3_2_t6198 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10287);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType3_2_t6198 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType3_2_t6198 *)((U3CU3Ef__AnonymousType3_2_t6198 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		U3CU3Ef__AnonymousType3_2_t6198 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5371 * L_2 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_3 = (Object_t *)(__this->___U3CitemU3Ei__Field_0);
		U3CU3Ef__AnonymousType3_2_t6198 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CitemU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t5371 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5371 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5371 * L_7 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_8 = (Object_t *)(__this->___U3CopsU3Ei__Field_1);
		U3CU3Ef__AnonymousType3_2_t6198 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CopsU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t5371 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5371 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		return L_11;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType3`2<System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t5371_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType3_2_GetHashCode_m33824_gshared (U3CU3Ef__AnonymousType3_2_t6198 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10287);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)-450822121);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5371 * L_1 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_2 = (Object_t *)(__this->___U3CitemU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t5371 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t5371 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t5371 * L_5 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_6 = (Object_t *)(__this->___U3CopsU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t5371 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t5371 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		return L_8;
	}
}
// <>f__AnonymousType4`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType4_3_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// <>f__AnonymousType4`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_U3CU3Ef__AnonymousType4_3_gen_0MethodDeclarations.h"



// System.Void <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::.ctor(<Obj>j__TPar,<Result>j__TPar,<Operation>j__TPar)
extern "C" void U3CU3Ef__AnonymousType4_3__ctor_m33828_gshared (U3CU3Ef__AnonymousType4_3_t6199 * __this, Object_t * ___Obj, Object_t * ___Result, Object_t * ___Operation, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___Obj;
		__this->___U3CObjU3Ei__Field_0 = L_0;
		Object_t * L_1 = ___Result;
		__this->___U3CResultU3Ei__Field_1 = L_1;
		Object_t * L_2 = ___Operation;
		__this->___U3COperationU3Ei__Field_2 = L_2;
		return;
	}
}
// <Obj>j__TPar <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::get_Obj()
extern "C" Object_t * U3CU3Ef__AnonymousType4_3_get_Obj_m33829_gshared (U3CU3Ef__AnonymousType4_3_t6199 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CObjU3Ei__Field_0);
		return L_0;
	}
}
// <Result>j__TPar <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::get_Result()
extern "C" Object_t * U3CU3Ef__AnonymousType4_3_get_Result_m33830_gshared (U3CU3Ef__AnonymousType4_3_t6199 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CResultU3Ei__Field_1);
		return L_0;
	}
}
// <Operation>j__TPar <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::get_Operation()
extern "C" Object_t * U3CU3Ef__AnonymousType4_3_get_Operation_m33831_gshared (U3CU3Ef__AnonymousType4_3_t6199 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3COperationU3Ei__Field_2);
		return L_0;
	}
}
// System.String <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::ToString()
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" String_t* U3CU3Ef__AnonymousType4_3_ToString_m33833_gshared (U3CU3Ef__AnonymousType4_3_t6199 * __this, const MethodInfo* method)
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
		StringBuilder__ctor_m3613(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t261 *)L_0;
		StringBuilder_t261 * L_1 = V_0;
		NullCheck((StringBuilder_t261 *)L_1);
		StringBuilder_Append_m3620((StringBuilder_t261 *)L_1, (String_t*)(String_t*) &_stringLiteral1713, /*hidden argument*/NULL);
		StringBuilder_t261 * L_2 = V_0;
		Object_t * L_3 = (Object_t *)(__this->___U3CObjU3Ei__Field_0);
		Object_t * L_4 = L_3;
		NullCheck((StringBuilder_t261 *)L_2);
		StringBuilder_Append_m3759((StringBuilder_t261 *)L_2, (Object_t *)((Object_t *)L_4), /*hidden argument*/NULL);
		StringBuilder_t261 * L_5 = V_0;
		NullCheck((StringBuilder_t261 *)L_5);
		StringBuilder_Append_m3620((StringBuilder_t261 *)L_5, (String_t*)(String_t*) &_stringLiteral1714, /*hidden argument*/NULL);
		StringBuilder_t261 * L_6 = V_0;
		Object_t * L_7 = (Object_t *)(__this->___U3CResultU3Ei__Field_1);
		Object_t * L_8 = L_7;
		NullCheck((StringBuilder_t261 *)L_6);
		StringBuilder_Append_m3759((StringBuilder_t261 *)L_6, (Object_t *)((Object_t *)L_8), /*hidden argument*/NULL);
		StringBuilder_t261 * L_9 = V_0;
		NullCheck((StringBuilder_t261 *)L_9);
		StringBuilder_Append_m3620((StringBuilder_t261 *)L_9, (String_t*)(String_t*) &_stringLiteral1715, /*hidden argument*/NULL);
		StringBuilder_t261 * L_10 = V_0;
		Object_t * L_11 = (Object_t *)(__this->___U3COperationU3Ei__Field_2);
		Object_t * L_12 = L_11;
		NullCheck((StringBuilder_t261 *)L_10);
		StringBuilder_Append_m3759((StringBuilder_t261 *)L_10, (Object_t *)((Object_t *)L_12), /*hidden argument*/NULL);
		StringBuilder_t261 * L_13 = V_0;
		NullCheck((StringBuilder_t261 *)L_13);
		StringBuilder_Append_m3620((StringBuilder_t261 *)L_13, (String_t*)(String_t*) &_stringLiteral1706, /*hidden argument*/NULL);
		StringBuilder_t261 * L_14 = V_0;
		NullCheck((Object_t *)L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Object_t *)L_14);
		return L_15;
	}
}
// System.Boolean <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::Equals(System.Object)
extern TypeInfo* EqualityComparer_1_t5371_il2cpp_TypeInfo_var;
extern "C" bool U3CU3Ef__AnonymousType4_3_Equals_m33835_gshared (U3CU3Ef__AnonymousType4_3_t6199 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10287);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ef__AnonymousType4_3_t6199 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		V_0 = (U3CU3Ef__AnonymousType4_3_t6199 *)((U3CU3Ef__AnonymousType4_3_t6199 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		U3CU3Ef__AnonymousType4_3_t6199 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5371 * L_2 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = (Object_t *)(__this->___U3CObjU3Ei__Field_0);
		U3CU3Ef__AnonymousType4_3_t6199 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)(L_4->___U3CObjU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t5371 *)L_2);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5371 *)L_2, (Object_t *)L_3, (Object_t *)L_5);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5371 * L_7 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_8 = (Object_t *)(__this->___U3CResultU3Ei__Field_1);
		U3CU3Ef__AnonymousType4_3_t6199 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)(L_9->___U3CResultU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t5371 *)L_7);
		bool L_11 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5371 *)L_7, (Object_t *)L_8, (Object_t *)L_10);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5371 * L_12 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Object_t * L_13 = (Object_t *)(__this->___U3COperationU3Ei__Field_2);
		U3CU3Ef__AnonymousType4_3_t6199 * L_14 = V_0;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)(L_14->___U3COperationU3Ei__Field_2);
		NullCheck((EqualityComparer_1_t5371 *)L_12);
		bool L_16 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(!0,!0) */, (EqualityComparer_1_t5371 *)L_12, (Object_t *)L_13, (Object_t *)L_15);
		return L_16;
	}

IL_0051:
	{
		return 0;
	}
}
// System.Int32 <>f__AnonymousType4`3<System.Object,System.Object,System.Object>::GetHashCode()
extern TypeInfo* EqualityComparer_1_t5371_il2cpp_TypeInfo_var;
extern "C" int32_t U3CU3Ef__AnonymousType4_3_GetHashCode_m33837_gshared (U3CU3Ef__AnonymousType4_3_t6199 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10287);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)((int32_t)-783070452);
		int32_t L_0 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5371_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5371 * L_1 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_2 = (Object_t *)(__this->___U3CObjU3Ei__Field_0);
		NullCheck((EqualityComparer_1_t5371 *)L_1);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t5371 *)L_1, (Object_t *)L_2);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_0))+(int32_t)L_3));
		int32_t L_4 = V_0;
		EqualityComparer_1_t5371 * L_5 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_6 = (Object_t *)(__this->___U3CResultU3Ei__Field_1);
		NullCheck((EqualityComparer_1_t5371 *)L_5);
		int32_t L_7 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t5371 *)L_5, (Object_t *)L_6);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_4))+(int32_t)L_7));
		int32_t L_8 = V_0;
		EqualityComparer_1_t5371 * L_9 = (( EqualityComparer_1_t5371 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		Object_t * L_10 = (Object_t *)(__this->___U3COperationU3Ei__Field_2);
		NullCheck((EqualityComparer_1_t5371 *)L_9);
		int32_t L_11 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(!0) */, (EqualityComparer_1_t5371 *)L_9, (Object_t *)L_10);
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)-1521134295)*(int32_t)L_8))+(int32_t)L_11));
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Func`2<System.Int32,System.Object>
#include "System_Core_System_Func_2_gen_90.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Int32,System.Object>
#include "System_Core_System_Func_2_gen_90MethodDeclarations.h"



// System.Void System.Func`2<System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m33838_gshared (Func_2_t1430 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Int32,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m33840_gshared (Func_2_t1430 * __this, int32_t ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m33840((Func_2_t1430 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Int32,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m33842_gshared (Func_2_t1430 * __this, int32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m33844_gshared (Func_2_t1430 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_2MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m33845_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m33846_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m33847_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m33848_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m33849_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * L_5 = V_0;
		Func_2_t1430 * L_6 = (Func_2_t1430 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m33850_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t1430 * L_7 = (Func_2_t1430 *)(__this->___selector_3);
			int32_t L_8 = (int32_t)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t1430 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(11 /* TResult System.Func`2<System.Int32,System.Object>::Invoke(T) */, (Func_2_t1430 *)L_7, (int32_t)L_8);
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m33851_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int32,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m33852_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6200 * __this, const MethodInfo* method)
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
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_3MethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m19934_gshared (Nullable_1_t1245 * __this, TimeSpan_t334  ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		TimeSpan_t334  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m7423_gshared (Nullable_1_t1245 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  Nullable_1_get_Value_m7425_gshared (Nullable_1_t1245 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral3684, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		TimeSpan_t334  L_2 = (TimeSpan_t334 )(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m33931_gshared (Nullable_1_t1245 * __this, Object_t * ___other, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___other;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = (bool)(__this->___has_value_1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		Object_t * L_2 = ___other;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		Object_t * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t1245 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t1245 *, Nullable_1_t1245 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t1245 *)__this, (Nullable_1_t1245 )((*(Nullable_1_t1245 *)((Nullable_1_t1245 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m33932_gshared (Nullable_1_t1245 * __this, Nullable_1_t1245  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)((&___other)->___has_value_1);
		bool L_1 = (bool)(__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (bool)(__this->___has_value_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		TimeSpan_t334 * L_3 = (TimeSpan_t334 *)&((&___other)->___value_0);
		TimeSpan_t334  L_4 = (TimeSpan_t334 )(__this->___value_0);
		TimeSpan_t334  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m33933_gshared (Nullable_1_t1245 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
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
		TimeSpan_t334 * L_1 = (TimeSpan_t334 *)&(__this->___value_0);
		NullCheck((ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// T System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern TypeInfo* TimeSpan_t334_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  Nullable_1_GetValueOrDefault_m33934_gshared (Nullable_1_t1245 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2347);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t334  V_0 = {0};
	TimeSpan_t334  G_B3_0 = {0};
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		TimeSpan_t334  L_1 = (TimeSpan_t334 )(__this->___value_0);
		G_B3_0 = L_1;
		goto IL_0019;
	}

IL_0010:
	{
		Initobj (TimeSpan_t334_il2cpp_TypeInfo_var, (&V_0));
		TimeSpan_t334  L_2 = V_0;
		G_B3_0 = L_2;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m33935_gshared (Nullable_1_t1245 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TimeSpan_t334 * L_1 = (TimeSpan_t334 *)&(__this->___value_0);
		NullCheck((ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.ValueType::ToString() */, (ValueType_t1078 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}
}
// System.Linq.Expressions.Expression`1<System.Object>
#include "System_Core_System_Linq_Expressions_Expression_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Expressions.Expression`1<System.Object>
#include "System_Core_System_Linq_Expressions_Expression_1_gen_0MethodDeclarations.h"

// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_2.h"
// System.Linq.Expressions.LambdaExpression
#include "System_Core_System_Linq_Expressions_LambdaExpressionMethodDeclarations.h"


// System.Void System.Linq.Expressions.Expression`1<System.Object>::.ctor(System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void Expression_1__ctor_m33941_gshared (Expression_1_t1474 * __this, Expression_t1471 * ___body, ReadOnlyCollection_1_t3272 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3831(NULL /*static, unused*/, (RuntimeTypeHandle_t4298 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Expression_t1471 * L_1 = ___body;
		ReadOnlyCollection_1_t3272 * L_2 = ___parameters;
		NullCheck((LambdaExpression_t3273 *)__this);
		LambdaExpression__ctor_m11362((LambdaExpression_t3273 *)__this, (Type_t *)L_0, (Expression_t1471 *)L_1, (ReadOnlyCollection_1_t3272 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Linq.Enumerable/ReadOnlyCollectionOf`1<System.Object>
#include "System_Core_System_Linq_Enumerable_ReadOnlyCollectionOf_1_ge.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/ReadOnlyCollectionOf`1<System.Object>
#include "System_Core_System_Linq_Enumerable_ReadOnlyCollectionOf_1_geMethodDeclarations.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"


// System.Void System.Linq.Enumerable/ReadOnlyCollectionOf`1<System.Object>::.cctor()
extern "C" void ReadOnlyCollectionOf_1__cctor_m33987_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t1134 * L_0 = (ReadOnlyCollection_1_t1134 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (ReadOnlyCollection_1_t1134 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, (Object_t*)(Object_t*)((ObjectU5BU5D_t638*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), 0)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		((ReadOnlyCollectionOf_1_t6208_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->___Empty_0 = L_0;
		return;
	}
}
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_genMethodDeclarations.h"


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m34474_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		__this->____array_0 = ((ObjectU5BU5D_t638*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), 0));
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayTypeMismatchException_t4742_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t664_il2cpp_TypeInfo_var;
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m34476_gshared (Queue_1_t6233 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2464);
		ArrayTypeMismatchException_t4742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7821);
		ArgumentException_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7108(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000c:
	{
		int32_t L_2 = ___idx;
		Array_t * L_3 = ___array;
		NullCheck((Array_t *)L_3);
		int32_t L_4 = Array_get_Length_m14822((Array_t *)L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) > ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t1424 * L_5 = (ArgumentOutOfRangeException_t1424 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11242(L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001e:
	{
		Array_t * L_6 = ___array;
		NullCheck((Array_t *)L_6);
		int32_t L_7 = Array_get_Length_m14822((Array_t *)L_6, /*hidden argument*/NULL);
		int32_t L_8 = ___idx;
		int32_t L_9 = (int32_t)(__this->____size_3);
		if ((((int32_t)((int32_t)((int32_t)L_7-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentOutOfRangeException_t1424 * L_10 = (ArgumentOutOfRangeException_t1424 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1424_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11242(L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0037:
	{
		int32_t L_11 = (int32_t)(__this->____size_3);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t638* L_12 = (ObjectU5BU5D_t638*)(__this->____array_0);
			NullCheck(L_12);
			V_0 = (int32_t)(((int32_t)(((Array_t *)L_12)->max_length)));
			int32_t L_13 = V_0;
			int32_t L_14 = (int32_t)(__this->____head_1);
			V_1 = (int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14));
			ObjectU5BU5D_t638* L_15 = (ObjectU5BU5D_t638*)(__this->____array_0);
			int32_t L_16 = (int32_t)(__this->____head_1);
			Array_t * L_17 = ___array;
			int32_t L_18 = ___idx;
			int32_t L_19 = (int32_t)(__this->____size_3);
			int32_t L_20 = V_1;
			int32_t L_21 = Math_Min_m11228(NULL /*static, unused*/, (int32_t)L_19, (int32_t)L_20, /*hidden argument*/NULL);
			Array_Copy_m11229(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (Array_t *)L_17, (int32_t)L_18, (int32_t)L_21, /*hidden argument*/NULL);
			int32_t L_22 = (int32_t)(__this->____size_3);
			int32_t L_23 = V_1;
			if ((((int32_t)L_22) <= ((int32_t)L_23)))
			{
				goto IL_0098;
			}
		}

IL_0080:
		{
			ObjectU5BU5D_t638* L_24 = (ObjectU5BU5D_t638*)(__this->____array_0);
			Array_t * L_25 = ___array;
			int32_t L_26 = ___idx;
			int32_t L_27 = V_1;
			int32_t L_28 = (int32_t)(__this->____size_3);
			int32_t L_29 = V_1;
			Array_Copy_m11229(NULL /*static, unused*/, (Array_t *)(Array_t *)L_24, (int32_t)0, (Array_t *)L_25, (int32_t)((int32_t)((int32_t)L_26+(int32_t)L_27)), (int32_t)((int32_t)((int32_t)L_28-(int32_t)L_29)), /*hidden argument*/NULL);
		}

IL_0098:
		{
			goto IL_00a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArrayTypeMismatchException_t4742_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_009d;
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t664 * L_30 = (ArgumentException_t664 *)il2cpp_codegen_object_new (ArgumentException_t664_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11240(L_30, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_30);
		goto IL_00a9;
	} // end catch (depth: 1)

IL_00a9:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m34478_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m34480_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m34482_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	{
		NullCheck((Queue_1_t6233 *)__this);
		Enumerator_t6234  L_0 = (( Enumerator_t6234  (*) (Queue_1_t6233 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Queue_1_t6233 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6234  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m34484_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	{
		NullCheck((Queue_1_t6233 *)__this);
		Enumerator_t6234  L_0 = (( Enumerator_t6234  (*) (Queue_1_t6233 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Queue_1_t6233 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t6234  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t707_il2cpp_TypeInfo_var;
extern "C" void Queue_1_CopyTo_m34486_gshared (Queue_1_t6233 * __this, ObjectU5BU5D_t638* ___array, int32_t ___idx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ICollection_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t638* L_0 = ___array;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t723 * L_1 = (ArgumentNullException_t723 *)il2cpp_codegen_object_new (ArgumentNullException_t723_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7108(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000c:
	{
		ObjectU5BU5D_t638* L_2 = ___array;
		int32_t L_3 = ___idx;
		NullCheck((Object_t *)__this);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t707_il2cpp_TypeInfo_var, (Object_t *)__this, (Array_t *)(Array_t *)L_2, (int32_t)L_3);
		return;
	}
}
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" Object_t * Queue_1_Dequeue_m34487_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	{
		NullCheck((Queue_1_t6233 *)__this);
		Object_t * L_0 = (( Object_t * (*) (Queue_1_t6233 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Queue_1_t6233 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (Object_t *)L_0;
		ObjectU5BU5D_t638* L_1 = (ObjectU5BU5D_t638*)(__this->____array_0);
		int32_t L_2 = (int32_t)(__this->____head_1);
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_1));
		Object_t * L_3 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2)) = (Object_t *)L_3;
		int32_t L_4 = (int32_t)(__this->____head_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)1));
		V_2 = (int32_t)L_5;
		__this->____head_1 = L_5;
		int32_t L_6 = V_2;
		ObjectU5BU5D_t638* L_7 = (ObjectU5BU5D_t638*)(__this->____array_0);
		NullCheck(L_7);
		if ((!(((uint32_t)L_6) == ((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))))))
		{
			goto IL_0046;
		}
	}
	{
		__this->____head_1 = 0;
	}

IL_0046:
	{
		int32_t L_8 = (int32_t)(__this->____size_3);
		__this->____size_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
		int32_t L_9 = (int32_t)(__this->____version_4);
		__this->____version_4 = ((int32_t)((int32_t)L_9+(int32_t)1));
		Object_t * L_10 = V_0;
		return L_10;
	}
}
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" Object_t * Queue_1_Peek_m34489_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->____size_3);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11241(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ObjectU5BU5D_t638* L_2 = (ObjectU5BU5D_t638*)(__this->____array_0);
		int32_t L_3 = (int32_t)(__this->____head_1);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m34490_gshared (Queue_1_t6233 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_3);
		ObjectU5BU5D_t638* L_1 = (ObjectU5BU5D_t638*)(__this->____array_0);
		NullCheck(L_1);
		if ((((int32_t)L_0) == ((int32_t)(((int32_t)(((Array_t *)L_1)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = (int32_t)(__this->____tail_2);
		ObjectU5BU5D_t638* L_3 = (ObjectU5BU5D_t638*)(__this->____array_0);
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0045;
		}
	}

IL_0026:
	{
		int32_t L_4 = (int32_t)(__this->____size_3);
		int32_t L_5 = (int32_t)(__this->____tail_2);
		int32_t L_6 = Math_Max_m11237(NULL /*static, unused*/, (int32_t)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		int32_t L_7 = Math_Max_m11237(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_6*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		NullCheck((Queue_1_t6233 *)__this);
		(( void (*) (Queue_1_t6233 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Queue_1_t6233 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0045:
	{
		ObjectU5BU5D_t638* L_8 = (ObjectU5BU5D_t638*)(__this->____array_0);
		int32_t L_9 = (int32_t)(__this->____tail_2);
		Object_t * L_10 = ___item;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)) = (Object_t *)L_10;
		int32_t L_11 = (int32_t)(__this->____tail_2);
		int32_t L_12 = (int32_t)((int32_t)((int32_t)L_11+(int32_t)1));
		V_0 = (int32_t)L_12;
		__this->____tail_2 = L_12;
		int32_t L_13 = V_0;
		ObjectU5BU5D_t638* L_14 = (ObjectU5BU5D_t638*)(__this->____array_0);
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) == ((uint32_t)(((int32_t)(((Array_t *)L_14)->max_length)))))))
		{
			goto IL_007c;
		}
	}
	{
		__this->____tail_2 = 0;
	}

IL_007c:
	{
		int32_t L_15 = (int32_t)(__this->____size_3);
		__this->____size_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = (int32_t)(__this->____version_4);
		__this->____version_4 = ((int32_t)((int32_t)L_16+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" void Queue_1_SetCapacity_m34492_gshared (Queue_1_t6233 * __this, int32_t ___new_size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t638* V_0 = {0};
	{
		int32_t L_0 = ___new_size;
		ObjectU5BU5D_t638* L_1 = (ObjectU5BU5D_t638*)(__this->____array_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		int32_t L_2 = ___new_size;
		int32_t L_3 = (int32_t)(__this->____size_3);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t1380 * L_4 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_4, (String_t*)(String_t*) &_stringLiteral2852, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___new_size;
		V_0 = (ObjectU5BU5D_t638*)((ObjectU5BU5D_t638*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_5));
		int32_t L_6 = (int32_t)(__this->____size_3);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t638* L_7 = V_0;
		NullCheck((Queue_1_t6233 *)__this);
		(( void (*) (Queue_1_t6233 *, ObjectU5BU5D_t638*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Queue_1_t6233 *)__this, (ObjectU5BU5D_t638*)L_7, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0041:
	{
		ObjectU5BU5D_t638* L_8 = V_0;
		__this->____array_0 = L_8;
		int32_t L_9 = (int32_t)(__this->____size_3);
		__this->____tail_2 = L_9;
		__this->____head_1 = 0;
		int32_t L_10 = (int32_t)(__this->____version_4);
		__this->____version_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
		return;
	}
}
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m34494_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_3);
		return L_0;
	}
}
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t6234  Queue_1_GetEnumerator_m34496_gshared (Queue_1_t6233 * __this, const MethodInfo* method)
{
	{
		Enumerator_t6234  L_0 = {0};
		(( void (*) (Enumerator_t6234 *, Queue_1_t6233 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(&L_0, (Queue_1_t6233 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Queue`1<T>)
extern "C" void Enumerator__ctor_m34497_gshared (Enumerator_t6234 * __this, Queue_1_t6233 * ___q, const MethodInfo* method)
{
	{
		Queue_1_t6233 * L_0 = ___q;
		__this->___q_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		Queue_1_t6233 * L_1 = ___q;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_4);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m34498_gshared (Enumerator_t6234 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___ver_2);
		Queue_1_t6233 * L_1 = (Queue_1_t6233 *)(__this->___q_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_4);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1380 * L_3 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11241(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Collections.Generic.Queue`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m34499_gshared (Enumerator_t6234 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t6234 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t6234 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m34500_gshared (Enumerator_t6234 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" bool Enumerator_MoveNext_m34501_gshared (Enumerator_t6234 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___ver_2);
		Queue_1_t6233 * L_1 = (Queue_1_t6233 *)(__this->___q_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_4);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1380 * L_3 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11241(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_003a;
		}
	}
	{
		Queue_1_t6233 * L_5 = (Queue_1_t6233 *)(__this->___q_0);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)(L_5->____size_3);
		__this->___idx_1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (int32_t)(__this->___idx_1);
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8-(int32_t)1));
		V_0 = (int32_t)L_9;
		__this->___idx_1 = L_9;
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_get_Current_m34502_gshared (Enumerator_t6234 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11241(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Queue_1_t6233 * L_2 = (Queue_1_t6233 *)(__this->___q_0);
		NullCheck(L_2);
		ObjectU5BU5D_t638* L_3 = (ObjectU5BU5D_t638*)(L_2->____array_0);
		Queue_1_t6233 * L_4 = (Queue_1_t6233 *)(__this->___q_0);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)(L_4->____size_3);
		int32_t L_6 = (int32_t)(__this->___idx_1);
		Queue_1_t6233 * L_7 = (Queue_1_t6233 *)(__this->___q_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____head_1);
		Queue_1_t6233 * L_9 = (Queue_1_t6233 *)(__this->___q_0);
		NullCheck(L_9);
		ObjectU5BU5D_t638* L_10 = (ObjectU5BU5D_t638*)(L_9->____array_0);
		NullCheck(L_10);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)1))-(int32_t)L_6))+(int32_t)L_8))%(int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))));
		int32_t L_11 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)1))-(int32_t)L_6))+(int32_t)L_8))%(int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))));
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_11));
	}
}
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_1MethodDeclarations.h"

// System.Func`2<System.Byte,System.Object>
#include "System_Core_System_Func_2_gen_99.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_0.h"
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClientMethodDeclarations.h"
// System.Func`2<System.Byte,System.Object>
#include "System_Core_System_Func_2_gen_99MethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_0MethodDeclarations.h"
struct ParseClient_t1179;
struct Object_t;
// Parse.ParseClient
#include "Parse_Unity_Parse_ParseClient.h"
// Declaration System.Object Parse.ParseClient::ConvertTo<System.Object>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.Object>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisObject_t_m7125_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisObject_t_m7125(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisObject_t_m7125_gshared)(__this /* static, unused */, ___value, method)
struct ParseClient_t1179;
struct Object_t;
// Declaration System.Object Parse.ParseClient::ConvertTo<System.Byte>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.Byte>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisByte_t694_m64123_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisByte_t694_m64123(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisByte_t694_m64123_gshared)(__this /* static, unused */, ___value, method)
struct Enumerable_t68;
struct IEnumerable_1_t662;
struct IEnumerable_1_t6240;
struct Func_2_t6239;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Byte,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Byte,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisByte_t694_TisObject_t_m64125_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t6239 * p1, const MethodInfo* method);
#define Enumerable_Select_TisByte_t694_TisObject_t_m64125(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6239 *, const MethodInfo*))Enumerable_Select_TisByte_t694_TisObject_t_m64125_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t68;
struct List_1_t640;
struct IEnumerable_1_t662;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t640 * Enumerable_ToList_TisObject_t_m3480_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m3480(__this /* static, unused */, p0, method) (( List_1_t640 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3480_gshared)(__this /* static, unused */, p0, method)


// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IList`1<TIn>)
extern "C" void FlexibleListWrapper_2__ctor_m34516_gshared (FlexibleListWrapper_2_t1514 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m34518_gshared (FlexibleListWrapper_2_t1514 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, uint8_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Byte>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m34520_gshared (FlexibleListWrapper_2_t1514 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, uint8_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Byte>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m34522_gshared (FlexibleListWrapper_2_t1514 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Byte>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::get_Item(System.Int32)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m34524_gshared (FlexibleListWrapper_2_t1514 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		uint8_t L_2 = (uint8_t)InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m34526_gshared (FlexibleListWrapper_2_t1514 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, uint8_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Byte>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::Add(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m34528_gshared (FlexibleListWrapper_2_t1514 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< uint8_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m34530_gshared (FlexibleListWrapper_2_t1514 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::Contains(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m34532_gshared (FlexibleListWrapper_2_t1514 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, uint8_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m34534_gshared (FlexibleListWrapper_2_t1514 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t6239 * L_1 = ((FlexibleListWrapper_2_t1514_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t6239 * L_3 = (Func_2_t6239 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t6239 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t1514_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t6239 * L_4 = ((FlexibleListWrapper_2_t1514_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6239 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t6239 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t640 * L_6 = (( List_1_t640 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t638* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t640 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t638*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t640 *)L_6, (ObjectU5BU5D_t638*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m34536_gshared (FlexibleListWrapper_2_t1514 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m34538_gshared (FlexibleListWrapper_2_t1514 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::Remove(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m34540_gshared (FlexibleListWrapper_2_t1514 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, uint8_t >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Byte>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m34542_gshared (FlexibleListWrapper_2_t1514 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t6243 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t6243 * L_0 = (U3CGetEnumeratorU3Ed__2_t6243 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6243 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t6243 *)L_0;
		U3CGetEnumeratorU3Ed__2_t6243 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t6243 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m34544_gshared (FlexibleListWrapper_2_t1514 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t1514 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t1514 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t1514 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Byte>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m34546_gshared (Object_t * __this /* static, unused */, uint8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint8_t L_0 = ___item;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Func`2<System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34547_gshared (Func_2_t6239 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Byte,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34548_gshared (Func_2_t6239 * __this, uint8_t ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m34548((Func_2_t6239 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint8_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Byte,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t694_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m34549_gshared (Func_2_t6239 * __this, uint8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Byte_t694_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34550_gshared (Func_2_t6239 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_3MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m34551_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m34552_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m34553_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m34554_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m34555_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * L_5 = V_0;
		Func_2_t6239 * L_6 = (Func_2_t6239 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m34556_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			uint8_t L_6 = (uint8_t)InterfaceFuncInvoker0< uint8_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Byte>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t6239 * L_7 = (Func_2_t6239 *)(__this->___selector_3);
			uint8_t L_8 = (uint8_t)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t6239 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(11 /* TResult System.Func`2<System.Byte,System.Object>::Invoke(T) */, (Func_2_t6239 *)L_7, (uint8_t)L_8);
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m34557_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Byte,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m34558_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6242 * __this, const MethodInfo* method)
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



// System.Boolean Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__2_MoveNext_m34559_gshared (U3CGetEnumeratorU3Ed__2_t6243 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
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

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001b;
			}
			if (L_1 == 1)
			{
				goto IL_008d;
			}
			if (L_1 == 2)
			{
				goto IL_0073;
			}
		}

IL_0019:
		{
			goto IL_008d;
		}

IL_001b:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleListWrapper_2_t1514 * L_2 = (FlexibleListWrapper_2_t1514 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t *)L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_3);
			__this->___U3CU3E7__wrap4_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_007a;
		}

IL_0041:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CitemU3E5__3_3 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CitemU3E5__3_3);
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
			Object_t * L_8 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			__this->___U3CU3E2__current_0 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_0098;
		}

IL_0073:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_007a:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0041;
			}
		}

IL_0087:
		{
			NullCheck((U3CGetEnumeratorU3Ed__2_t6243 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__2_t6243 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6243 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		}

IL_008d:
		{
			V_0 = (bool)0;
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FAULT_0091;
	}

FAULT_0091:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6243 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6243 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((U3CGetEnumeratorU3Ed__2_t6243 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_END_FINALLY(145)
	} // end fault
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0098:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>::System.Collections.Generic.IEnumerator<TOut>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CTOutU3E_get_Current_m34560_gshared (U3CGetEnumeratorU3Ed__2_t6243 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m34561_gshared (U3CGetEnumeratorU3Ed__2_t6243 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m34562_gshared (U3CGetEnumeratorU3Ed__2_t6243 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6243 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6243 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6243 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
// System.Object Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m34563_gshared (U3CGetEnumeratorU3Ed__2_t6243 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__2__ctor_m34564_gshared (U3CGetEnumeratorU3Ed__2_t6243 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Byte>::<>m__Finally6()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally6_m34565_gshared (U3CGetEnumeratorU3Ed__2_t6243 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
		__this->___U3CU3E7__wrap5_5 = ((Object_t *)IsInst(L_0, IDisposable_t58_il2cpp_TypeInfo_var));
		Object_t * L_1 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		NullCheck((Object_t *)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_2);
	}

IL_002b:
	{
		return;
	}
}
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_2MethodDeclarations.h"

// System.SByte
#include "mscorlib_System_SByte.h"
// System.Func`2<System.SByte,System.Object>
#include "System_Core_System_Func_2_gen_101.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_1.h"
// System.Func`2<System.SByte,System.Object>
#include "System_Core_System_Func_2_gen_101MethodDeclarations.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_1MethodDeclarations.h"
struct ParseClient_t1179;
struct Object_t;
// Declaration System.Object Parse.ParseClient::ConvertTo<System.SByte>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.SByte>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisSByte_t88_m64137_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisSByte_t88_m64137(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisSByte_t88_m64137_gshared)(__this /* static, unused */, ___value, method)
struct Enumerable_t68;
struct IEnumerable_1_t662;
struct IEnumerable_1_t6247;
struct Func_2_t6245;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.SByte,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.SByte,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisSByte_t88_TisObject_t_m64139_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t6245 * p1, const MethodInfo* method);
#define Enumerable_Select_TisSByte_t88_TisObject_t_m64139(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6245 *, const MethodInfo*))Enumerable_Select_TisSByte_t88_TisObject_t_m64139_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::.ctor(System.Collections.Generic.IList`1<TIn>)
extern "C" void FlexibleListWrapper_2__ctor_m34570_gshared (FlexibleListWrapper_2_t1515 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m34571_gshared (FlexibleListWrapper_2_t1515 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int8_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.SByte>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int8_t)((*(int8_t*)((int8_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m34572_gshared (FlexibleListWrapper_2_t1515 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int8_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.SByte>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (int8_t)((*(int8_t*)((int8_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m34573_gshared (FlexibleListWrapper_2_t1515 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.SByte>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::get_Item(System.Int32)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m34574_gshared (FlexibleListWrapper_2_t1515 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int8_t L_2 = (int8_t)InterfaceFuncInvoker1< int8_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.SByte>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		int8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m34575_gshared (FlexibleListWrapper_2_t1515 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int8_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.SByte>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (int8_t)((*(int8_t*)((int8_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::Add(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m34576_gshared (FlexibleListWrapper_2_t1515 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int8_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.SByte>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int8_t)((*(int8_t*)((int8_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m34577_gshared (FlexibleListWrapper_2_t1515 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.SByte>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::Contains(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m34578_gshared (FlexibleListWrapper_2_t1515 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int8_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int8_t)((*(int8_t*)((int8_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m34579_gshared (FlexibleListWrapper_2_t1515 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t6245 * L_1 = ((FlexibleListWrapper_2_t1515_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t6245 * L_3 = (Func_2_t6245 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t6245 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t1515_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t6245 * L_4 = ((FlexibleListWrapper_2_t1515_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6245 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t6245 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t640 * L_6 = (( List_1_t640 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t638* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t640 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t638*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t640 *)L_6, (ObjectU5BU5D_t638*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m34580_gshared (FlexibleListWrapper_2_t1515 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.SByte>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m34581_gshared (FlexibleListWrapper_2_t1515 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::Remove(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m34582_gshared (FlexibleListWrapper_2_t1515 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int8_t >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int8_t)((*(int8_t*)((int8_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m34583_gshared (FlexibleListWrapper_2_t1515 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t6250 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t6250 * L_0 = (U3CGetEnumeratorU3Ed__2_t6250 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6250 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t6250 *)L_0;
		U3CGetEnumeratorU3Ed__2_t6250 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t6250 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m34584_gshared (FlexibleListWrapper_2_t1515 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t1515 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t1515 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t1515 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.SByte>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m34585_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		int8_t L_0 = ___item;
		int8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.SByte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.SByte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.SByte>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.SByte>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SByte>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.SByte>::get_Current()
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t88_m64127_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSByte_t88_m64127(__this, p0, method) (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSByte_t88_m64127_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m34586_gshared (InternalEnumerator_1_t6246 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m34587_gshared (InternalEnumerator_1_t6246 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m34588_gshared (InternalEnumerator_1_t6246 * __this, const MethodInfo* method)
{
	{
		int8_t L_0 = (( int8_t (*) (InternalEnumerator_1_t6246 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6246 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m34589_gshared (InternalEnumerator_1_t6246 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m34590_gshared (InternalEnumerator_1_t6246 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14822((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" int8_t InternalEnumerator_1_get_Current_m34591_gshared (InternalEnumerator_1_t6246 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral3646, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1380 * L_3 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_3, (String_t*)(String_t*) &_stringLiteral3647, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14822((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int8_t L_8 = (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Func`2<System.SByte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34592_gshared (Func_2_t6245 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.SByte,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34593_gshared (Func_2_t6245 * __this, int8_t ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m34593((Func_2_t6245 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int8_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int8_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.SByte,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* SByte_t88_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m34594_gshared (Func_2_t6245 * __this, int8_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t88_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SByte_t88_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.SByte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34595_gshared (Func_2_t6245 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_4MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m34596_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m34597_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m34598_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m34599_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m34600_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * L_5 = V_0;
		Func_2_t6245 * L_6 = (Func_2_t6245 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m34601_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.SByte>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			int8_t L_6 = (int8_t)InterfaceFuncInvoker0< int8_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.SByte>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t6245 * L_7 = (Func_2_t6245 *)(__this->___selector_3);
			int8_t L_8 = (int8_t)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t6245 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, int8_t >::Invoke(11 /* TResult System.Func`2<System.SByte,System.Object>::Invoke(T) */, (Func_2_t6245 *)L_7, (int8_t)L_8);
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m34602_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.SByte,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m34603_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6249 * __this, const MethodInfo* method)
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



// System.Boolean Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__2_MoveNext_m34604_gshared (U3CGetEnumeratorU3Ed__2_t6250 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
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

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001b;
			}
			if (L_1 == 1)
			{
				goto IL_008d;
			}
			if (L_1 == 2)
			{
				goto IL_0073;
			}
		}

IL_0019:
		{
			goto IL_008d;
		}

IL_001b:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleListWrapper_2_t1515 * L_2 = (FlexibleListWrapper_2_t1515 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t *)L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_3);
			__this->___U3CU3E7__wrap4_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_007a;
		}

IL_0041:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CitemU3E5__3_3 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CitemU3E5__3_3);
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
			Object_t * L_8 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			__this->___U3CU3E2__current_0 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_0098;
		}

IL_0073:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_007a:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0041;
			}
		}

IL_0087:
		{
			NullCheck((U3CGetEnumeratorU3Ed__2_t6250 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__2_t6250 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6250 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		}

IL_008d:
		{
			V_0 = (bool)0;
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FAULT_0091;
	}

FAULT_0091:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6250 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6250 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((U3CGetEnumeratorU3Ed__2_t6250 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_END_FINALLY(145)
	} // end fault
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0098:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>::System.Collections.Generic.IEnumerator<TOut>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CTOutU3E_get_Current_m34605_gshared (U3CGetEnumeratorU3Ed__2_t6250 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m34606_gshared (U3CGetEnumeratorU3Ed__2_t6250 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m34607_gshared (U3CGetEnumeratorU3Ed__2_t6250 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6250 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6250 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6250 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
// System.Object Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m34608_gshared (U3CGetEnumeratorU3Ed__2_t6250 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__2__ctor_m34609_gshared (U3CGetEnumeratorU3Ed__2_t6250 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.SByte>::<>m__Finally6()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally6_m34610_gshared (U3CGetEnumeratorU3Ed__2_t6250 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
		__this->___U3CU3E7__wrap5_5 = ((Object_t *)IsInst(L_0, IDisposable_t58_il2cpp_TypeInfo_var));
		Object_t * L_1 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		NullCheck((Object_t *)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_2);
	}

IL_002b:
	{
		return;
	}
}
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_3MethodDeclarations.h"

// System.Int16
#include "mscorlib_System_Int16.h"
// System.Func`2<System.Int16,System.Object>
#include "System_Core_System_Func_2_gen_102.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_2.h"
// System.Func`2<System.Int16,System.Object>
#include "System_Core_System_Func_2_gen_102MethodDeclarations.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_2MethodDeclarations.h"
struct ParseClient_t1179;
struct Object_t;
// Declaration System.Object Parse.ParseClient::ConvertTo<System.Int16>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.Int16>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisInt16_t695_m64151_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisInt16_t695_m64151(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisInt16_t695_m64151_gshared)(__this /* static, unused */, ___value, method)
struct Enumerable_t68;
struct IEnumerable_1_t662;
struct IEnumerable_1_t6254;
struct Func_2_t6252;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int16,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int16,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisInt16_t695_TisObject_t_m64153_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t6252 * p1, const MethodInfo* method);
#define Enumerable_Select_TisInt16_t695_TisObject_t_m64153(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6252 *, const MethodInfo*))Enumerable_Select_TisInt16_t695_TisObject_t_m64153_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::.ctor(System.Collections.Generic.IList`1<TIn>)
extern "C" void FlexibleListWrapper_2__ctor_m34611_gshared (FlexibleListWrapper_2_t1516 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m34612_gshared (FlexibleListWrapper_2_t1516 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int16>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int16_t)((*(int16_t*)((int16_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m34613_gshared (FlexibleListWrapper_2_t1516 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int16_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Int16>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (int16_t)((*(int16_t*)((int16_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m34614_gshared (FlexibleListWrapper_2_t1516 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Int16>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::get_Item(System.Int32)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m34615_gshared (FlexibleListWrapper_2_t1516 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int16_t L_2 = (int16_t)InterfaceFuncInvoker1< int16_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Int16>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		int16_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m34616_gshared (FlexibleListWrapper_2_t1516 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int16_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int16>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (int16_t)((*(int16_t*)((int16_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::Add(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m34617_gshared (FlexibleListWrapper_2_t1516 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Int16>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int16_t)((*(int16_t*)((int16_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m34618_gshared (FlexibleListWrapper_2_t1516 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int16>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::Contains(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m34619_gshared (FlexibleListWrapper_2_t1516 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int16_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int16_t)((*(int16_t*)((int16_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m34620_gshared (FlexibleListWrapper_2_t1516 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t6252 * L_1 = ((FlexibleListWrapper_2_t1516_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t6252 * L_3 = (Func_2_t6252 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t6252 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t1516_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t6252 * L_4 = ((FlexibleListWrapper_2_t1516_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t6252 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t640 * L_6 = (( List_1_t640 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t638* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t640 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t638*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t640 *)L_6, (ObjectU5BU5D_t638*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m34621_gshared (FlexibleListWrapper_2_t1516 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int16>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m34622_gshared (FlexibleListWrapper_2_t1516 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::Remove(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m34623_gshared (FlexibleListWrapper_2_t1516 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int16_t >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int16_t)((*(int16_t*)((int16_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m34624_gshared (FlexibleListWrapper_2_t1516 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t6257 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t6257 * L_0 = (U3CGetEnumeratorU3Ed__2_t6257 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6257 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t6257 *)L_0;
		U3CGetEnumeratorU3Ed__2_t6257 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t6257 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m34625_gshared (FlexibleListWrapper_2_t1516 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t1516 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t1516 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t1516 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int16>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m34626_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		int16_t L_0 = ___item;
		int16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Int16>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int16>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int16>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Int16>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current()
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_52MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t695_m64141_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt16_t695_m64141(__this, p0, method) (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt16_t695_m64141_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m34627_gshared (InternalEnumerator_1_t6253 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m34628_gshared (InternalEnumerator_1_t6253 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m34629_gshared (InternalEnumerator_1_t6253 * __this, const MethodInfo* method)
{
	{
		int16_t L_0 = (( int16_t (*) (InternalEnumerator_1_t6253 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6253 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m34630_gshared (InternalEnumerator_1_t6253 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m34631_gshared (InternalEnumerator_1_t6253 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14822((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" int16_t InternalEnumerator_1_get_Current_m34632_gshared (InternalEnumerator_1_t6253 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral3646, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1380 * L_3 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_3, (String_t*)(String_t*) &_stringLiteral3647, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14822((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int16_t L_8 = (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Func`2<System.Int16,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34633_gshared (Func_2_t6252 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Int16,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34634_gshared (Func_2_t6252 * __this, int16_t ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m34634((Func_2_t6252 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int16_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int16_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Int16,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Int16_t695_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m34635_gshared (Func_2_t6252 * __this, int16_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(272);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int16_t695_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Int16,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34636_gshared (Func_2_t6252 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_5.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_5MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m34637_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m34638_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m34639_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m34640_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m34641_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * L_5 = V_0;
		Func_2_t6252 * L_6 = (Func_2_t6252 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m34642_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			int16_t L_6 = (int16_t)InterfaceFuncInvoker0< int16_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t6252 * L_7 = (Func_2_t6252 *)(__this->___selector_3);
			int16_t L_8 = (int16_t)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t6252 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, int16_t >::Invoke(11 /* TResult System.Func`2<System.Int16,System.Object>::Invoke(T) */, (Func_2_t6252 *)L_7, (int16_t)L_8);
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m34643_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.Int16,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m34644_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6256 * __this, const MethodInfo* method)
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



// System.Boolean Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__2_MoveNext_m34645_gshared (U3CGetEnumeratorU3Ed__2_t6257 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
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

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001b;
			}
			if (L_1 == 1)
			{
				goto IL_008d;
			}
			if (L_1 == 2)
			{
				goto IL_0073;
			}
		}

IL_0019:
		{
			goto IL_008d;
		}

IL_001b:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleListWrapper_2_t1516 * L_2 = (FlexibleListWrapper_2_t1516 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t *)L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_3);
			__this->___U3CU3E7__wrap4_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_007a;
		}

IL_0041:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CitemU3E5__3_3 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CitemU3E5__3_3);
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
			Object_t * L_8 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			__this->___U3CU3E2__current_0 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_0098;
		}

IL_0073:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_007a:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0041;
			}
		}

IL_0087:
		{
			NullCheck((U3CGetEnumeratorU3Ed__2_t6257 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__2_t6257 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6257 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		}

IL_008d:
		{
			V_0 = (bool)0;
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FAULT_0091;
	}

FAULT_0091:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6257 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6257 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((U3CGetEnumeratorU3Ed__2_t6257 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_END_FINALLY(145)
	} // end fault
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0098:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>::System.Collections.Generic.IEnumerator<TOut>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CTOutU3E_get_Current_m34646_gshared (U3CGetEnumeratorU3Ed__2_t6257 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m34647_gshared (U3CGetEnumeratorU3Ed__2_t6257 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m34648_gshared (U3CGetEnumeratorU3Ed__2_t6257 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6257 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6257 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6257 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
// System.Object Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m34649_gshared (U3CGetEnumeratorU3Ed__2_t6257 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__2__ctor_m34650_gshared (U3CGetEnumeratorU3Ed__2_t6257 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int16>::<>m__Finally6()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally6_m34651_gshared (U3CGetEnumeratorU3Ed__2_t6257 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
		__this->___U3CU3E7__wrap5_5 = ((Object_t *)IsInst(L_0, IDisposable_t58_il2cpp_TypeInfo_var));
		Object_t * L_1 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		NullCheck((Object_t *)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_2);
	}

IL_002b:
	{
		return;
	}
}
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_4.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_4MethodDeclarations.h"

// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.Func`2<System.UInt16,System.Object>
#include "System_Core_System_Func_2_gen_103.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_3.h"
// System.Func`2<System.UInt16,System.Object>
#include "System_Core_System_Func_2_gen_103MethodDeclarations.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_3MethodDeclarations.h"
struct ParseClient_t1179;
struct Object_t;
// Declaration System.Object Parse.ParseClient::ConvertTo<System.UInt16>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.UInt16>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisUInt16_t696_m64154_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisUInt16_t696_m64154(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisUInt16_t696_m64154_gshared)(__this /* static, unused */, ___value, method)
struct Enumerable_t68;
struct IEnumerable_1_t662;
struct IEnumerable_1_t6260;
struct Func_2_t6259;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.UInt16,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.UInt16,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisUInt16_t696_TisObject_t_m64156_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t6259 * p1, const MethodInfo* method);
#define Enumerable_Select_TisUInt16_t696_TisObject_t_m64156(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6259 *, const MethodInfo*))Enumerable_Select_TisUInt16_t696_TisObject_t_m64156_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IList`1<TIn>)
extern "C" void FlexibleListWrapper_2__ctor_m34652_gshared (FlexibleListWrapper_2_t1517 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m34653_gshared (FlexibleListWrapper_2_t1517 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, uint16_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.UInt16>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m34654_gshared (FlexibleListWrapper_2_t1517 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, uint16_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.UInt16>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m34655_gshared (FlexibleListWrapper_2_t1517 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.UInt16>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::get_Item(System.Int32)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m34656_gshared (FlexibleListWrapper_2_t1517 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		uint16_t L_2 = (uint16_t)InterfaceFuncInvoker1< uint16_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.UInt16>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		uint16_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m34657_gshared (FlexibleListWrapper_2_t1517 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, uint16_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.UInt16>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::Add(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m34658_gshared (FlexibleListWrapper_2_t1517 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< uint16_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.UInt16>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m34659_gshared (FlexibleListWrapper_2_t1517 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.UInt16>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::Contains(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m34660_gshared (FlexibleListWrapper_2_t1517 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, uint16_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m34661_gshared (FlexibleListWrapper_2_t1517 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t6259 * L_1 = ((FlexibleListWrapper_2_t1517_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t6259 * L_3 = (Func_2_t6259 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t6259 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t1517_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t6259 * L_4 = ((FlexibleListWrapper_2_t1517_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6259 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t6259 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t640 * L_6 = (( List_1_t640 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t638* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t640 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t638*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t640 *)L_6, (ObjectU5BU5D_t638*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m34662_gshared (FlexibleListWrapper_2_t1517 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.UInt16>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m34663_gshared (FlexibleListWrapper_2_t1517 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::Remove(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m34664_gshared (FlexibleListWrapper_2_t1517 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, uint16_t >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint16_t)((*(uint16_t*)((uint16_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m34665_gshared (FlexibleListWrapper_2_t1517 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t6263 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t6263 * L_0 = (U3CGetEnumeratorU3Ed__2_t6263 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6263 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t6263 *)L_0;
		U3CGetEnumeratorU3Ed__2_t6263 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t6263 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m34666_gshared (FlexibleListWrapper_2_t1517 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t1517 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t1517 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t1517 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt16>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m34667_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___item;
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Func`2<System.UInt16,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34668_gshared (Func_2_t6259 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.UInt16,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34669_gshared (Func_2_t6259 * __this, uint16_t ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m34669((Func_2_t6259 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, uint16_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint16_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.UInt16,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* UInt16_t696_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m34670_gshared (Func_2_t6259 * __this, uint16_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt16_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt16_t696_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.UInt16,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34671_gshared (Func_2_t6259 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_6MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m34672_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m34673_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m34674_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m34675_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m34676_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * L_5 = V_0;
		Func_2_t6259 * L_6 = (Func_2_t6259 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m34677_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.UInt16>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			uint16_t L_6 = (uint16_t)InterfaceFuncInvoker0< uint16_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.UInt16>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t6259 * L_7 = (Func_2_t6259 *)(__this->___selector_3);
			uint16_t L_8 = (uint16_t)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t6259 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, uint16_t >::Invoke(11 /* TResult System.Func`2<System.UInt16,System.Object>::Invoke(T) */, (Func_2_t6259 *)L_7, (uint16_t)L_8);
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m34678_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt16,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m34679_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6262 * __this, const MethodInfo* method)
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



// System.Boolean Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__2_MoveNext_m34680_gshared (U3CGetEnumeratorU3Ed__2_t6263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
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

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001b;
			}
			if (L_1 == 1)
			{
				goto IL_008d;
			}
			if (L_1 == 2)
			{
				goto IL_0073;
			}
		}

IL_0019:
		{
			goto IL_008d;
		}

IL_001b:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleListWrapper_2_t1517 * L_2 = (FlexibleListWrapper_2_t1517 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t *)L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_3);
			__this->___U3CU3E7__wrap4_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_007a;
		}

IL_0041:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CitemU3E5__3_3 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CitemU3E5__3_3);
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
			Object_t * L_8 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			__this->___U3CU3E2__current_0 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_0098;
		}

IL_0073:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_007a:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0041;
			}
		}

IL_0087:
		{
			NullCheck((U3CGetEnumeratorU3Ed__2_t6263 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__2_t6263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6263 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		}

IL_008d:
		{
			V_0 = (bool)0;
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FAULT_0091;
	}

FAULT_0091:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6263 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((U3CGetEnumeratorU3Ed__2_t6263 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_END_FINALLY(145)
	} // end fault
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0098:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerator<TOut>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CTOutU3E_get_Current_m34681_gshared (U3CGetEnumeratorU3Ed__2_t6263 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m34682_gshared (U3CGetEnumeratorU3Ed__2_t6263 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m34683_gshared (U3CGetEnumeratorU3Ed__2_t6263 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6263 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6263 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6263 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
// System.Object Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m34684_gshared (U3CGetEnumeratorU3Ed__2_t6263 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__2__ctor_m34685_gshared (U3CGetEnumeratorU3Ed__2_t6263 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt16>::<>m__Finally6()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally6_m34686_gshared (U3CGetEnumeratorU3Ed__2_t6263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
		__this->___U3CU3E7__wrap5_5 = ((Object_t *)IsInst(L_0, IDisposable_t58_il2cpp_TypeInfo_var));
		Object_t * L_1 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		NullCheck((Object_t *)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_2);
	}

IL_002b:
	{
		return;
	}
}
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_5.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_5MethodDeclarations.h"

// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_4.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_4MethodDeclarations.h"
struct ParseClient_t1179;
struct Object_t;
// Declaration System.Object Parse.ParseClient::ConvertTo<System.Int32>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.Int32>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisInt32_t82_m64114_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisInt32_t82_m64114(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisInt32_t82_m64114_gshared)(__this /* static, unused */, ___value, method)
struct Enumerable_t68;
struct IEnumerable_1_t662;
struct IEnumerable_1_t1428;
struct Func_2_t1430;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int32,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int32,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisInt32_t82_TisObject_t_m7268_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1430 * p1, const MethodInfo* method);
#define Enumerable_Select_TisInt32_t82_TisObject_t_m7268(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1430 *, const MethodInfo*))Enumerable_Select_TisInt32_t82_TisObject_t_m7268_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IList`1<TIn>)
extern "C" void FlexibleListWrapper_2__ctor_m34687_gshared (FlexibleListWrapper_2_t1518 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m34688_gshared (FlexibleListWrapper_2_t1518 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m34689_gshared (FlexibleListWrapper_2_t1518 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Int32>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m34690_gshared (FlexibleListWrapper_2_t1518 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::get_Item(System.Int32)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m34691_gshared (FlexibleListWrapper_2_t1518 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m34692_gshared (FlexibleListWrapper_2_t1518 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int32>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::Add(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m34693_gshared (FlexibleListWrapper_2_t1518 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m34694_gshared (FlexibleListWrapper_2_t1518 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::Contains(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m34695_gshared (FlexibleListWrapper_2_t1518 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m34696_gshared (FlexibleListWrapper_2_t1518 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t1430 * L_1 = ((FlexibleListWrapper_2_t1518_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t1430 * L_3 = (Func_2_t1430 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t1430 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t1518_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t1430 * L_4 = ((FlexibleListWrapper_2_t1518_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1430 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t1430 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t640 * L_6 = (( List_1_t640 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t638* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t640 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t638*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t640 *)L_6, (ObjectU5BU5D_t638*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m34697_gshared (FlexibleListWrapper_2_t1518 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m34698_gshared (FlexibleListWrapper_2_t1518 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::Remove(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m34699_gshared (FlexibleListWrapper_2_t1518 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m34700_gshared (FlexibleListWrapper_2_t1518 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t6264 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t6264 * L_0 = (U3CGetEnumeratorU3Ed__2_t6264 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6264 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t6264 *)L_0;
		U3CGetEnumeratorU3Ed__2_t6264 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t6264 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m34701_gshared (FlexibleListWrapper_2_t1518 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t1518 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t1518 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t1518 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int32>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m34702_gshared (Object_t * __this /* static, unused */, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___item;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__2_MoveNext_m34703_gshared (U3CGetEnumeratorU3Ed__2_t6264 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
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

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001b;
			}
			if (L_1 == 1)
			{
				goto IL_008d;
			}
			if (L_1 == 2)
			{
				goto IL_0073;
			}
		}

IL_0019:
		{
			goto IL_008d;
		}

IL_001b:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleListWrapper_2_t1518 * L_2 = (FlexibleListWrapper_2_t1518 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t *)L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_3);
			__this->___U3CU3E7__wrap4_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_007a;
		}

IL_0041:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CitemU3E5__3_3 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CitemU3E5__3_3);
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
			Object_t * L_8 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			__this->___U3CU3E2__current_0 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_0098;
		}

IL_0073:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_007a:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0041;
			}
		}

IL_0087:
		{
			NullCheck((U3CGetEnumeratorU3Ed__2_t6264 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__2_t6264 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6264 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		}

IL_008d:
		{
			V_0 = (bool)0;
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FAULT_0091;
	}

FAULT_0091:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6264 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6264 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((U3CGetEnumeratorU3Ed__2_t6264 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_END_FINALLY(145)
	} // end fault
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0098:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>::System.Collections.Generic.IEnumerator<TOut>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CTOutU3E_get_Current_m34704_gshared (U3CGetEnumeratorU3Ed__2_t6264 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m34705_gshared (U3CGetEnumeratorU3Ed__2_t6264 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m34706_gshared (U3CGetEnumeratorU3Ed__2_t6264 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6264 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6264 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6264 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
// System.Object Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m34707_gshared (U3CGetEnumeratorU3Ed__2_t6264 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__2__ctor_m34708_gshared (U3CGetEnumeratorU3Ed__2_t6264 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int32>::<>m__Finally6()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally6_m34709_gshared (U3CGetEnumeratorU3Ed__2_t6264 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
		__this->___U3CU3E7__wrap5_5 = ((Object_t *)IsInst(L_0, IDisposable_t58_il2cpp_TypeInfo_var));
		Object_t * L_1 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		NullCheck((Object_t *)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_2);
	}

IL_002b:
	{
		return;
	}
}
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_6.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_6MethodDeclarations.h"

// System.Func`2<System.UInt32,System.Object>
#include "System_Core_System_Func_2_gen_104.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_5.h"
// System.Func`2<System.UInt32,System.Object>
#include "System_Core_System_Func_2_gen_104MethodDeclarations.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_5MethodDeclarations.h"
struct ParseClient_t1179;
struct Object_t;
// Declaration System.Object Parse.ParseClient::ConvertTo<System.UInt32>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.UInt32>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisUInt32_t693_m64168_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisUInt32_t693_m64168(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisUInt32_t693_m64168_gshared)(__this /* static, unused */, ___value, method)
struct Enumerable_t68;
struct IEnumerable_1_t662;
struct IEnumerable_1_t6268;
struct Func_2_t6266;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.UInt32,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.UInt32,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisUInt32_t693_TisObject_t_m64170_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t6266 * p1, const MethodInfo* method);
#define Enumerable_Select_TisUInt32_t693_TisObject_t_m64170(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6266 *, const MethodInfo*))Enumerable_Select_TisUInt32_t693_TisObject_t_m64170_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IList`1<TIn>)
extern "C" void FlexibleListWrapper_2__ctor_m34710_gshared (FlexibleListWrapper_2_t1519 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m34711_gshared (FlexibleListWrapper_2_t1519 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.UInt32>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m34712_gshared (FlexibleListWrapper_2_t1519 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, uint32_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.UInt32>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m34713_gshared (FlexibleListWrapper_2_t1519 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.UInt32>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::get_Item(System.Int32)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m34714_gshared (FlexibleListWrapper_2_t1519 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		uint32_t L_2 = (uint32_t)InterfaceFuncInvoker1< uint32_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.UInt32>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		uint32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m34715_gshared (FlexibleListWrapper_2_t1519 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, uint32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.UInt32>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::Add(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m34716_gshared (FlexibleListWrapper_2_t1519 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m34717_gshared (FlexibleListWrapper_2_t1519 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::Contains(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m34718_gshared (FlexibleListWrapper_2_t1519 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m34719_gshared (FlexibleListWrapper_2_t1519 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t6266 * L_1 = ((FlexibleListWrapper_2_t1519_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t6266 * L_3 = (Func_2_t6266 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t6266 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t1519_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t6266 * L_4 = ((FlexibleListWrapper_2_t1519_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t6266 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t640 * L_6 = (( List_1_t640 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t638* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t640 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t638*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t640 *)L_6, (ObjectU5BU5D_t638*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m34720_gshared (FlexibleListWrapper_2_t1519 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.UInt32>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m34721_gshared (FlexibleListWrapper_2_t1519 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::Remove(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m34722_gshared (FlexibleListWrapper_2_t1519 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, uint32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (uint32_t)((*(uint32_t*)((uint32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m34723_gshared (FlexibleListWrapper_2_t1519 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t6271 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t6271 * L_0 = (U3CGetEnumeratorU3Ed__2_t6271 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6271 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t6271 *)L_0;
		U3CGetEnumeratorU3Ed__2_t6271 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t6271 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m34724_gshared (FlexibleListWrapper_2_t1519 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t1519 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t1519 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t1519 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.UInt32>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m34725_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint32_t L_0 = ___item;
		uint32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.UInt32>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt32>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt32>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt32>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.UInt32>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_53MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t693_m64158_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt32_t693_m64158(__this, p0, method) (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt32_t693_m64158_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m34726_gshared (InternalEnumerator_1_t6267 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m34727_gshared (InternalEnumerator_1_t6267 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m34728_gshared (InternalEnumerator_1_t6267 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (( uint32_t (*) (InternalEnumerator_1_t6267 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t6267 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m34729_gshared (InternalEnumerator_1_t6267 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m34730_gshared (InternalEnumerator_1_t6267 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m14822((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
extern TypeInfo* InvalidOperationException_t1380_il2cpp_TypeInfo_var;
extern "C" uint32_t InternalEnumerator_1_get_Current_m34731_gshared (InternalEnumerator_1_t6267 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2351);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1380 * L_1 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_1, (String_t*)(String_t*) &_stringLiteral3646, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1380 * L_3 = (InvalidOperationException_t1380 *)il2cpp_codegen_object_new (InvalidOperationException_t1380_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7081(L_3, (String_t*)(String_t*) &_stringLiteral3647, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m14822((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint32_t L_8 = (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Func`2<System.UInt32,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34732_gshared (Func_2_t6266 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.UInt32,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34733_gshared (Func_2_t6266 * __this, uint32_t ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m34733((Func_2_t6266 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, uint32_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint32_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.UInt32,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* UInt32_t693_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m34734_gshared (Func_2_t6266 * __this, uint32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt32_t693_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.UInt32,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34735_gshared (Func_2_t6266 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_7.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateSelectIteratorU3_7MethodDeclarations.h"



// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::.ctor()
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2__ctor_m34736_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m34737_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerator_get_Current_m34738_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_IEnumerable_GetEnumerator_m34739_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator() */, (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern "C" Object_t* U3CCreateSelectIteratorU3Ec__Iterator10_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m34740_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * __this, const MethodInfo* method)
{
	U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * V_0 = {0};
	{
		int32_t* L_0 = (int32_t*)&(__this->___U24PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, (int32_t*)L_0, (int32_t)0, (int32_t)((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * L_2 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 *)L_2;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * L_5 = V_0;
		Func_2_t6266 * L_6 = (Func_2_t6266 *)(__this->___U3CU24U3Eselector_7);
		NullCheck(L_5);
		L_5->___selector_3 = L_6;
		U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateSelectIteratorU3Ec__Iterator10_2_MoveNext_m34741_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0037;
		}
	}
	{
		goto IL_00b3;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.UInt32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_70U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_007e;
			}
		}

IL_0043:
		{
			goto IL_007e;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t*)L_5);
			uint32_t L_6 = (uint32_t)InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.UInt32>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t6266 * L_7 = (Func_2_t6266 *)(__this->___selector_3);
			uint32_t L_8 = (uint32_t)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t6266 *)L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, uint32_t >::Invoke(11 /* TResult System.Func`2<System.UInt32,System.Object>::Invoke(T) */, (Func_2_t6266 *)L_7, (uint32_t)L_8);
			__this->___U24current_5 = L_9;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xB5, FINALLY_0093);
		}

IL_007e:
		{
			Object_t* L_10 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_10);
			if (L_11)
			{
				goto IL_0048;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0093);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0093;
	}

FINALLY_0093:
	{ // begin finally (depth: 1)
		{
			bool L_12 = V_1;
			if (!L_12)
			{
				goto IL_0097;
			}
		}

IL_0096:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_0097:
		{
			Object_t* L_13 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_13)
			{
				goto IL_00a0;
			}
		}

IL_009f:
		{
			IL2CPP_END_FINALLY(147)
		}

IL_00a0:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_14);
			IL2CPP_END_FINALLY(147)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(147)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ac:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00b3:
	{
		return 0;
	}

IL_00b5:
	{
		return 1;
	}
	// Dead block : IL_00b7: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Dispose_m34742_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_4);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003b;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_70U3E__0_1);
			NullCheck((Object_t *)L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Linq.Enumerable/<CreateSelectIterator>c__Iterator10`2<System.UInt32,System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateSelectIteratorU3Ec__Iterator10_2_Reset_m34743_gshared (U3CCreateSelectIteratorU3Ec__Iterator10_2_t6270 * __this, const MethodInfo* method)
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



// System.Boolean Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ed__2_MoveNext_m34744_gshared (U3CGetEnumeratorU3Ed__2_t6271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
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

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
			V_1 = (int32_t)L_0;
			int32_t L_1 = V_1;
			if (L_1 == 0)
			{
				goto IL_001b;
			}
			if (L_1 == 1)
			{
				goto IL_008d;
			}
			if (L_1 == 2)
			{
				goto IL_0073;
			}
		}

IL_0019:
		{
			goto IL_008d;
		}

IL_001b:
		{
			__this->___U3CU3E1__state_1 = (-1);
			FlexibleListWrapper_2_t1519 * L_2 = (FlexibleListWrapper_2_t1519 *)(__this->___U3CU3E4__this_2);
			NullCheck(L_2);
			Object_t* L_3 = (Object_t*)(L_2->___toWrap_0);
			NullCheck((Object_t *)L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_3);
			__this->___U3CU3E7__wrap4_4 = L_4;
			__this->___U3CU3E1__state_1 = 1;
			goto IL_007a;
		}

IL_0041:
		{
			Object_t * L_5 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			__this->___U3CitemU3E5__3_3 = L_6;
			Object_t * L_7 = (Object_t *)(__this->___U3CitemU3E5__3_3);
			IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
			Object_t * L_8 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (Object_t *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
			__this->___U3CU3E2__current_0 = ((Object_t *)Castclass(L_8, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
			__this->___U3CU3E1__state_1 = 2;
			V_0 = (bool)1;
			goto IL_0098;
		}

IL_0073:
		{
			__this->___U3CU3E1__state_1 = 1;
		}

IL_007a:
		{
			Object_t * L_9 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
			NullCheck((Object_t *)L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_9);
			if (L_10)
			{
				goto IL_0041;
			}
		}

IL_0087:
		{
			NullCheck((U3CGetEnumeratorU3Ed__2_t6271 *)__this);
			(( void (*) (U3CGetEnumeratorU3Ed__2_t6271 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6271 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		}

IL_008d:
		{
			V_0 = (bool)0;
			goto IL_0098;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FAULT_0091;
	}

FAULT_0091:
	{ // begin fault (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6271 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6271 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((U3CGetEnumeratorU3Ed__2_t6271 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		IL2CPP_END_FINALLY(145)
	} // end fault
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0098:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>::System.Collections.Generic.IEnumerator<TOut>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_Generic_IEnumeratorU3CTOutU3E_get_Current_m34745_gshared (U3CGetEnumeratorU3Ed__2_t6271 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_Reset_m34746_gshared (U3CGetEnumeratorU3Ed__2_t6271 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>::System.IDisposable.Dispose()
extern "C" void U3CGetEnumeratorU3Ed__2_System_IDisposable_Dispose_m34747_gshared (U3CGetEnumeratorU3Ed__2_t6271 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0018;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		NullCheck((U3CGetEnumeratorU3Ed__2_t6271 *)__this);
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6271 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CGetEnumeratorU3Ed__2_t6271 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
// System.Object Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ed__2_System_Collections_IEnumerator_get_Current_m34748_gshared (U3CGetEnumeratorU3Ed__2_t6271 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>::.ctor(System.Int32)
extern "C" void U3CGetEnumeratorU3Ed__2__ctor_m34749_gshared (U3CGetEnumeratorU3Ed__2_t6271 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.UInt32>::<>m__Finally6()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ed__2_U3CU3Em__Finally6_m34750_gshared (U3CGetEnumeratorU3Ed__2_t6271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E7__wrap4_4);
		__this->___U3CU3E7__wrap5_5 = ((Object_t *)IsInst(L_0, IDisposable_t58_il2cpp_TypeInfo_var));
		Object_t * L_1 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_2 = (Object_t *)(__this->___U3CU3E7__wrap5_5);
		NullCheck((Object_t *)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_2);
	}

IL_002b:
	{
		return;
	}
}
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_7.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_gen_7MethodDeclarations.h"

// System.Func`2<System.Int64,System.Object>
#include "System_Core_System_Func_2_gen_105.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int64>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_6.h"
// System.Func`2<System.Int64,System.Object>
#include "System_Core_System_Func_2_gen_105MethodDeclarations.h"
// Parse.Internal.FlexibleListWrapper`2/<GetEnumerator>d__2<System.Object,System.Int64>
#include "Parse_Unity_Parse_Internal_FlexibleListWrapper_2_U3CGetEnume_6MethodDeclarations.h"
struct ParseClient_t1179;
struct Object_t;
// Declaration System.Object Parse.ParseClient::ConvertTo<System.Int64>(System.Object)
// System.Object Parse.ParseClient::ConvertTo<System.Int64>(System.Object)
extern "C" Object_t * ParseClient_ConvertTo_TisInt64_t89_m64171_gshared (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method);
#define ParseClient_ConvertTo_TisInt64_t89_m64171(__this /* static, unused */, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))ParseClient_ConvertTo_TisInt64_t89_m64171_gshared)(__this /* static, unused */, ___value, method)
struct Enumerable_t68;
struct IEnumerable_1_t662;
struct IEnumerable_1_t6274;
struct Func_2_t6273;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int64,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Int64,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisInt64_t89_TisObject_t_m64173_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t6273 * p1, const MethodInfo* method);
#define Enumerable_Select_TisInt64_t89_TisObject_t_m64173(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6273 *, const MethodInfo*))Enumerable_Select_TisInt64_t89_TisObject_t_m64173_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IList`1<TIn>)
extern "C" void FlexibleListWrapper_2__ctor_m34751_gshared (FlexibleListWrapper_2_t1520 * __this, Object_t* ___toWrap, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___toWrap;
		__this->___toWrap_0 = L_0;
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::IndexOf(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" int32_t FlexibleListWrapper_2_IndexOf_m34752_gshared (FlexibleListWrapper_2_t1520 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, int64_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::Insert(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Insert_m34753_gshared (FlexibleListWrapper_2_t1520 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int64_t >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::RemoveAt(System.Int32)
extern "C" void FlexibleListWrapper_2_RemoveAt_m34754_gshared (FlexibleListWrapper_2_t1520 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::get_Item(System.Int32)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_get_Item_m34755_gshared (FlexibleListWrapper_2_t1520 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		int64_t L_2 = (int64_t)InterfaceFuncInvoker1< int64_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1);
		int64_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_5 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::set_Item(System.Int32,TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_set_Item_m34756_gshared (FlexibleListWrapper_2_t1520 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_3), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, int64_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (int32_t)L_1, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::Add(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" void FlexibleListWrapper_2_Add_m34757_gshared (FlexibleListWrapper_2_t1520 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int64_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Int64>::Add(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::Clear()
extern "C" void FlexibleListWrapper_2_Clear_m34758_gshared (FlexibleListWrapper_2_t1520 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int64>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::Contains(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Contains_m34759_gshared (FlexibleListWrapper_2_t1520 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int64_t >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Contains(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Void Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::CopyTo(TOut[],System.Int32)
extern "C" void FlexibleListWrapper_2_CopyTo_m34760_gshared (FlexibleListWrapper_2_t1520 * __this, ObjectU5BU5D_t638* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	Object_t* G_B2_0 = {0};
	Object_t* G_B1_0 = {0};
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Func_2_t6273 * L_1 = ((FlexibleListWrapper_2_t1520_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7) };
		Func_2_t6273 * L_3 = (Func_2_t6273 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		(( void (*) (Func_2_t6273 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_3, (Object_t *)NULL, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		((FlexibleListWrapper_2_t1520_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t6273 * L_4 = ((FlexibleListWrapper_2_t1520_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->static_fields)->___CSU24U3CU3E9__CachedAnonymousMethodDelegate1_1;
		Object_t* L_5 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t6273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(NULL /*static, unused*/, (Object_t*)G_B2_0, (Func_2_t6273 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		List_1_t640 * L_6 = (( List_1_t640 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, (Object_t*)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		ObjectU5BU5D_t638* L_7 = ___array;
		int32_t L_8 = ___arrayIndex;
		NullCheck((List_1_t640 *)L_6);
		VirtActionInvoker2< ObjectU5BU5D_t638*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t640 *)L_6, (ObjectU5BU5D_t638*)L_7, (int32_t)L_8);
		return;
	}
}
// System.Int32 Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t FlexibleListWrapper_2_get_Count_m34761_gshared (FlexibleListWrapper_2_t1520 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int64>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleListWrapper_2_get_IsReadOnly_m34762_gshared (FlexibleListWrapper_2_t1520 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Boolean Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::Remove(TOut)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" bool FlexibleListWrapper_2_Remove_m34763_gshared (FlexibleListWrapper_2_t1520 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___toWrap_0);
		Object_t * L_1 = ___item;
		Object_t * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)((Object_t *)L_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((Object_t*)L_0);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, int64_t >::Invoke(6 /* System.Boolean System.Collections.Generic.ICollection`1<System.Int64>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0, (int64_t)((*(int64_t*)((int64_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}
}
// System.Collections.Generic.IEnumerator`1<TOut> Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleListWrapper_2_GetEnumerator_m34764_gshared (FlexibleListWrapper_2_t1520 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ed__2_t6277 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ed__2_t6277 * L_0 = (U3CGetEnumeratorU3Ed__2_t6277 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		(( void (*) (U3CGetEnumeratorU3Ed__2_t6277 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(L_0, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (U3CGetEnumeratorU3Ed__2_t6277 *)L_0;
		U3CGetEnumeratorU3Ed__2_t6277 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		U3CGetEnumeratorU3Ed__2_t6277 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleListWrapper_2_System_Collections_IEnumerable_GetEnumerator_m34765_gshared (FlexibleListWrapper_2_t1520 * __this, const MethodInfo* method)
{
	{
		NullCheck((FlexibleListWrapper_2_t1520 *)__this);
		Object_t* L_0 = (( Object_t* (*) (FlexibleListWrapper_2_t1520 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((FlexibleListWrapper_2_t1520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_0;
	}
}
// TOut Parse.Internal.FlexibleListWrapper`2<System.Object,System.Int64>::<CopyTo>b__0(TIn)
extern TypeInfo* ParseClient_t1179_il2cpp_TypeInfo_var;
extern "C" Object_t * FlexibleListWrapper_2_U3CCopyToU3Eb__0_m34766_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParseClient_t1179_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		int64_t L_0 = ___item;
		int64_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ParseClient_t1179_il2cpp_TypeInfo_var);
		Object_t * L_3 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Func`2<System.Int64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34767_gshared (Func_2_t6273 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Int64,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m34768_gshared (Func_2_t6273 * __this, int64_t ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m34768((Func_2_t6273 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, int64_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int64_t ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Int64,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_2_BeginInvoke_m34769_gshared (Func_2_t6273 * __this, int64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int64_t89_il2cpp_TypeInfo_var, &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Int64,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m34770_gshared (Func_2_t6273 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
