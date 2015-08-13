#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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

// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Array
#include "mscorlib_System_Array.h"

// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_33MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit2D>(System.Int32)
extern "C" RaycastHit2D_t1057  Array_InternalArray__get_Item_TisRaycastHit2D_t1057_m64524_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit2D_t1057_m64524(__this, p0, method) (( RaycastHit2D_t1057  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit2D_t1057_m64524_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28686_gshared (InternalEnumerator_1_t5822 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28687_gshared (InternalEnumerator_1_t5822 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28688_gshared (InternalEnumerator_1_t5822 * __this, const MethodInfo* method)
{
	{
		RaycastHit2D_t1057  L_0 = (( RaycastHit2D_t1057  (*) (InternalEnumerator_1_t5822 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5822 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit2D_t1057  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28689_gshared (InternalEnumerator_1_t5822 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28690_gshared (InternalEnumerator_1_t5822 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15067((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit2D>::get_Current()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" RaycastHit2D_t1057  InternalEnumerator_1_get_Current_m28691_gshared (InternalEnumerator_1_t5822 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
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
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral3681, /*hidden argument*/NULL);
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
		InvalidOperationException_t1429 * L_3 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_3, (String_t*)(String_t*) &_stringLiteral3682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15067((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		RaycastHit2D_t1057  L_8 = (( RaycastHit2D_t1057  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit2D>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit2D>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit2D>::set_Item(System.Int32,T)
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Comparison_1_gen_0MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m5876_gshared (Comparison_1_t898 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28692_gshared (Comparison_1_t898 * __this, RaycastHit_t763  ___x, RaycastHit_t763  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m28692((Comparison_1_t898 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, RaycastHit_t763  ___x, RaycastHit_t763  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, RaycastHit_t763  ___x, RaycastHit_t763  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* RaycastHit_t763_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m28693_gshared (Comparison_1_t898 * __this, RaycastHit_t763  ___x, RaycastHit_t763  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RaycastHit_t763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1820);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(RaycastHit_t763_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(RaycastHit_t763_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28694_gshared (Comparison_1_t898 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_34MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
extern "C" RaycastHit_t763  Array_InternalArray__get_Item_TisRaycastHit_t763_m64535_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisRaycastHit_t763_m64535(__this, p0, method) (( RaycastHit_t763  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisRaycastHit_t763_m64535_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28695_gshared (InternalEnumerator_1_t5823 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28696_gshared (InternalEnumerator_1_t5823 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28697_gshared (InternalEnumerator_1_t5823 * __this, const MethodInfo* method)
{
	{
		RaycastHit_t763  L_0 = (( RaycastHit_t763  (*) (InternalEnumerator_1_t5823 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5823 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RaycastHit_t763  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28698_gshared (InternalEnumerator_1_t5823 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28699_gshared (InternalEnumerator_1_t5823 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15067((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.RaycastHit>::get_Current()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" RaycastHit_t763  InternalEnumerator_1_get_Current_m28700_gshared (InternalEnumerator_1_t5823 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
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
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral3681, /*hidden argument*/NULL);
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
		InvalidOperationException_t1429 * L_3 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_3, (String_t*)(String_t*) &_stringLiteral3682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15067((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		RaycastHit_t763  L_8 = (( RaycastHit_t763  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RaycastHit>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RaycastHit>::set_Item(System.Int32,T)
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_1MethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_0MethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m5881_gshared (UnityEvent_1_t902 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase__ctor_m10054((UnityEventBase_t2891 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5883_gshared (UnityEvent_1_t902 * __this, UnityAction_1_t1040 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1040 * L_0 = ___call;
		BaseInvokableCall_t2883 * L_1 = (( BaseInvokableCall_t2883 * (*) (Object_t * /* static, unused */, UnityAction_1_t1040 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t1040 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_AddCall_m10059((UnityEventBase_t2891 *)__this, (BaseInvokableCall_t2883 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m28701_gshared (UnityEvent_1_t902 * __this, UnityAction_1_t1040 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1040 * L_0 = ___call;
		NullCheck((Delegate_t724 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3751((Delegate_t724 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t1040 * L_2 = ___call;
		NullCheck((Delegate_t724 *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m10185((Delegate_t724 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_RemoveListener_m10060((UnityEventBase_t2891 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6329_gshared (UnityEvent_1_t902 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t1203* L_2 = (TypeU5BU5D_t1203*)((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m10062(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t1203*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2883 * UnityEvent_1_GetDelegate_m6330_gshared (UnityEvent_1_t902 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t5824 * L_2 = (InvokableCall_1_t5824 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5824 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2883 * UnityEvent_1_GetDelegate_m28702_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1040 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t1040 * L_0 = ___action;
		InvokableCall_1_t5824 * L_1 = (InvokableCall_1_t5824 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5824 *, UnityAction_1_t1040 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (UnityAction_1_t1040 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5882_gshared (UnityEvent_1_t902 * __this, Color_t325  ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (ObjectU5BU5D_t682*)(__this->___m_InvokeArray_4);
		Color_t325  L_1 = ___arg0;
		Color_t325  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t682* L_4 = (ObjectU5BU5D_t682*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_Invoke_m10061((UnityEventBase_t2891 *)__this, (ObjectU5BU5D_t682*)L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_1MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m5927_gshared (UnityAction_1_t1040 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m28703_gshared (UnityAction_1_t1040 * __this, Color_t325  ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m28703((UnityAction_1_t1040 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Color_t325  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Color_t325  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern TypeInfo* Color_t325_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m28704_gshared (UnityAction_1_t1040 * __this, Color_t325  ___arg0, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color_t325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1050);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Color_t325_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m28705_gshared (UnityAction_1_t1040 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
struct BaseInvokableCall_t2883;
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Color>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisColor_t325_m64548_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisColor_t325_m64548(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisColor_t325_m64548_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m28706_gshared (InvokableCall_1_t5824 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t2883 *)__this);
		BaseInvokableCall__ctor_m10032((BaseInvokableCall_t2883 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t1040 * L_2 = (UnityAction_1_t1040 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t724 * L_6 = Delegate_CreateDelegate_m10186(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t724 * L_7 = Delegate_Combine_m3759(NULL /*static, unused*/, (Delegate_t724 *)L_2, (Delegate_t724 *)((UnityAction_1_t1040 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1040 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m28707_gshared (InvokableCall_1_t5824 * __this, UnityAction_1_t1040 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t2883 *)__this);
		BaseInvokableCall__ctor_m10031((BaseInvokableCall_t2883 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t1040 * L_0 = (UnityAction_1_t1040 *)(__this->___Delegate_0);
		UnityAction_1_t1040 * L_1 = ___callback;
		Delegate_t724 * L_2 = Delegate_Combine_m3759(NULL /*static, unused*/, (Delegate_t724 *)L_0, (Delegate_t724 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1040 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1_Invoke_m28708_gshared (InvokableCall_1_t5824 * __this, ObjectU5BU5D_t682* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t682* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t711 * L_1 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_1, (String_t*)(String_t*) &_stringLiteral2020, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t682* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t1040 * L_4 = (UnityAction_1_t1040 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m10033(NULL /*static, unused*/, (Delegate_t724 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t1040 * L_6 = (UnityAction_1_t1040 *)(__this->___Delegate_0);
		ObjectU5BU5D_t682* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t1040 *)L_6);
		VirtActionInvoker1< Color_t325  >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0) */, (UnityAction_1_t1040 *)L_6, (Color_t325 )((*(Color_t325 *)((Color_t325 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m28709_gshared (InvokableCall_1_t5824 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t1040 * L_0 = (UnityAction_1_t1040 *)(__this->___Delegate_0);
		NullCheck((Delegate_t724 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3751((Delegate_t724 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t1040 * L_3 = (UnityAction_1_t1040 *)(__this->___Delegate_0);
		NullCheck((Delegate_t724 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m10185((Delegate_t724 *)L_3, /*hidden argument*/NULL);
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
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_49.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_49MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"


// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m28710_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method)
{
	{
		List_1_t684 * L_0 = (List_1_t684 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t684 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___m_List_0 = L_0;
		Dictionary_2_t5531 * L_1 = (Dictionary_2_t5531 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Dictionary_2_t5531 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Dictionary_1 = L_1;
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m28712_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method)
{
	{
		NullCheck((IndexedSet_1_t5826 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(16 /* System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator() */, (IndexedSet_1_t5826 *)__this);
		return L_0;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m28714_gshared (IndexedSet_1_t5826 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5531 * L_0 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t5531 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0) */, (Dictionary_2_t5531 *)L_0, (Object_t *)L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		List_1_t684 * L_3 = (List_1_t684 *)(__this->___m_List_0);
		Object_t * L_4 = ___item;
		NullCheck((List_1_t684 *)L_3);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, (List_1_t684 *)L_3, (Object_t *)L_4);
		Dictionary_2_t5531 * L_5 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_6 = ___item;
		List_1_t684 * L_7 = (List_1_t684 *)(__this->___m_List_0);
		NullCheck((List_1_t684 *)L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t684 *)L_7);
		NullCheck((Dictionary_2_t5531 *)L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1) */, (Dictionary_2_t5531 *)L_5, (Object_t *)L_6, (int32_t)((int32_t)((int32_t)L_8-(int32_t)1)));
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m28716_gshared (IndexedSet_1_t5826 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t5531 * L_0 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t5531 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&) */, (Dictionary_2_t5531 *)L_0, (Object_t *)L_1, (int32_t*)(&V_0));
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		NullCheck((IndexedSet_1_t5826 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32) */, (IndexedSet_1_t5826 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern TypeInfo* NotImplementedException_t1440_il2cpp_TypeInfo_var;
extern "C" Object_t* IndexedSet_1_GetEnumerator_m28718_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2501);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1440 * L_0 = (NotImplementedException_t1440 *)il2cpp_codegen_object_new (NotImplementedException_t1440_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7378(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m28720_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method)
{
	{
		List_1_t684 * L_0 = (List_1_t684 *)(__this->___m_List_0);
		NullCheck((List_1_t684 *)L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Object>::Clear() */, (List_1_t684 *)L_0);
		Dictionary_2_t5531 * L_1 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		NullCheck((Dictionary_2_t5531 *)L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear() */, (Dictionary_2_t5531 *)L_1);
		return;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m28722_gshared (IndexedSet_1_t5826 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t5531 * L_0 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t5531 *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0) */, (Dictionary_2_t5531 *)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m28724_gshared (IndexedSet_1_t5826 * __this, ObjectU5BU5D_t682* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		List_1_t684 * L_0 = (List_1_t684 *)(__this->___m_List_0);
		ObjectU5BU5D_t682* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		NullCheck((List_1_t684 *)L_0);
		VirtActionInvoker2< ObjectU5BU5D_t682*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(!0[],System.Int32) */, (List_1_t684 *)L_0, (ObjectU5BU5D_t682*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m28726_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method)
{
	{
		List_1_t684 * L_0 = (List_1_t684 *)(__this->___m_List_0);
		NullCheck((List_1_t684 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t684 *)L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m28728_gshared (IndexedSet_1_t5826 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m28730_gshared (IndexedSet_1_t5826 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)(-1);
		Dictionary_2_t5531 * L_0 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_1 = ___item;
		NullCheck((Dictionary_2_t5531 *)L_0);
		VirtFuncInvoker2< bool, Object_t *, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&) */, (Dictionary_2_t5531 *)L_0, (Object_t *)L_1, (int32_t*)(&V_0));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void IndexedSet_1_Insert_m28732_gshared (IndexedSet_1_t5826 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10417(L_0, (String_t*)(String_t*) &_stringLiteral1232, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m28734_gshared (IndexedSet_1_t5826 * __this, int32_t ___index, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		List_1_t684 * L_0 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t684 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t684 *)L_0, (int32_t)L_1);
		V_0 = (Object_t *)L_2;
		Dictionary_2_t5531 * L_3 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck((Dictionary_2_t5531 *)L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0) */, (Dictionary_2_t5531 *)L_3, (Object_t *)L_4);
		int32_t L_5 = ___index;
		List_1_t684 * L_6 = (List_1_t684 *)(__this->___m_List_0);
		NullCheck((List_1_t684 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t684 *)L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)((int32_t)L_7-(int32_t)1))))))
		{
			goto IL_003e;
		}
	}
	{
		List_1_t684 * L_8 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_9 = ___index;
		NullCheck((List_1_t684 *)L_8);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (List_1_t684 *)L_8, (int32_t)L_9);
		goto IL_007f;
	}

IL_003e:
	{
		List_1_t684 * L_10 = (List_1_t684 *)(__this->___m_List_0);
		NullCheck((List_1_t684 *)L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t684 *)L_10);
		V_1 = (int32_t)((int32_t)((int32_t)L_11-(int32_t)1));
		List_1_t684 * L_12 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_13 = V_1;
		NullCheck((List_1_t684 *)L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t684 *)L_12, (int32_t)L_13);
		V_2 = (Object_t *)L_14;
		List_1_t684 * L_15 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_16 = ___index;
		Object_t * L_17 = V_2;
		NullCheck((List_1_t684 *)L_15);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0) */, (List_1_t684 *)L_15, (int32_t)L_16, (Object_t *)L_17);
		Dictionary_2_t5531 * L_18 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_19 = V_2;
		int32_t L_20 = ___index;
		NullCheck((Dictionary_2_t5531 *)L_18);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1) */, (Dictionary_2_t5531 *)L_18, (Object_t *)L_19, (int32_t)L_20);
		List_1_t684 * L_21 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_22 = V_1;
		NullCheck((List_1_t684 *)L_21);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32) */, (List_1_t684 *)L_21, (int32_t)L_22);
	}

IL_007f:
	{
		return;
	}
}
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m28736_gshared (IndexedSet_1_t5826 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		List_1_t684 * L_0 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t684 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t684 *)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m28738_gshared (IndexedSet_1_t5826 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		List_1_t684 * L_0 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_1 = ___index;
		NullCheck((List_1_t684 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t684 *)L_0, (int32_t)L_1);
		V_0 = (Object_t *)L_2;
		Dictionary_2_t5531 * L_3 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_4 = V_0;
		NullCheck((Dictionary_2_t5531 *)L_3);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0) */, (Dictionary_2_t5531 *)L_3, (Object_t *)L_4);
		List_1_t684 * L_5 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_6 = ___index;
		Object_t * L_7 = ___value;
		NullCheck((List_1_t684 *)L_5);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(32 /* System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0) */, (List_1_t684 *)L_5, (int32_t)L_6, (Object_t *)L_7);
		Dictionary_2_t5531 * L_8 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_9 = V_0;
		int32_t L_10 = ___index;
		NullCheck((Dictionary_2_t5531 *)L_8);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1) */, (Dictionary_2_t5531 *)L_8, (Object_t *)L_9, (int32_t)L_10);
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m28739_gshared (IndexedSet_1_t5826 * __this, Predicate_1_t5427 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0007:
	{
		List_1_t684 * L_0 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_1 = V_0;
		NullCheck((List_1_t684 *)L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t684 *)L_0, (int32_t)L_1);
		V_1 = (Object_t *)L_2;
		Predicate_1_t5427 * L_3 = ___match;
		Object_t * L_4 = V_1;
		NullCheck((Predicate_1_t5427 *)L_3);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* System.Boolean System.Predicate`1<System.Object>::Invoke(!0) */, (Predicate_1_t5427 *)L_3, (Object_t *)L_4);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_6 = V_1;
		NullCheck((IndexedSet_1_t5826 *)__this);
		VirtFuncInvoker1< bool, Object_t * >::Invoke(15 /* System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T) */, (IndexedSet_1_t5826 *)__this, (Object_t *)L_6);
		goto IL_0031;
	}

IL_002d:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_8 = V_0;
		List_1_t684 * L_9 = (List_1_t684 *)(__this->___m_List_0);
		NullCheck((List_1_t684 *)L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t684 *)L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m28740_gshared (IndexedSet_1_t5826 * __this, Comparison_1_t5433 * ___sortLayoutFunction, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		List_1_t684 * L_0 = (List_1_t684 *)(__this->___m_List_0);
		Comparison_1_t5433 * L_1 = ___sortLayoutFunction;
		NullCheck((List_1_t684 *)L_0);
		(( void (*) (List_1_t684 *, Comparison_1_t5433 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)((List_1_t684 *)L_0, (Comparison_1_t5433 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		V_0 = (int32_t)0;
		goto IL_0031;
	}

IL_0013:
	{
		List_1_t684 * L_2 = (List_1_t684 *)(__this->___m_List_0);
		int32_t L_3 = V_0;
		NullCheck((List_1_t684 *)L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, (List_1_t684 *)L_2, (int32_t)L_3);
		V_1 = (Object_t *)L_4;
		Dictionary_2_t5531 * L_5 = (Dictionary_2_t5531 *)(__this->___m_Dictionary_1);
		Object_t * L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck((Dictionary_2_t5531 *)L_5);
		VirtActionInvoker2< Object_t *, int32_t >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1) */, (Dictionary_2_t5531 *)L_5, (Object_t *)L_6, (int32_t)L_7);
		int32_t L_8 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		List_1_t684 * L_10 = (List_1_t684 *)(__this->___m_List_0);
		NullCheck((List_1_t684 *)L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, (List_1_t684 *)L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"

// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_41.h"
// System.Predicate`1<UnityEngine.UIVertex>
#include "mscorlib_System_Predicate_1_gen_38.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3.h"
// System.Comparison`1<UnityEngine.UIVertex>
#include "mscorlib_System_Comparison_1_gen_38.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_41MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.UIVertex>
#include "mscorlib_System_Predicate_1_gen_38MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_41MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3MethodDeclarations.h"
struct Array_t;
struct UIVertexU5BU5D_t948;
// Declaration System.Void System.Array::Resize<UnityEngine.UIVertex>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UIVertex>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUIVertex_t949_m64550_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t948** p0, int32_t p1, const MethodInfo* method);
#define Array_Resize_TisUIVertex_t949_m64550(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948**, int32_t, const MethodInfo*))Array_Resize_TisUIVertex_t949_m64550_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
struct UIVertexU5BU5D_t948;
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UIVertex>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UIVertex>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUIVertex_t949_m64551_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t948* p0, UIVertex_t949  p1, int32_t p2, int32_t p3, const MethodInfo* method);
#define Array_IndexOf_TisUIVertex_t949_m64551(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948*, UIVertex_t949 , int32_t, int32_t, const MethodInfo*))Array_IndexOf_TisUIVertex_t949_m64551_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct UIVertexU5BU5D_t948;
struct IComparer_1_t9008;
// Declaration System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUIVertex_t949_m64553_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t948* p0, int32_t p1, int32_t p2, Object_t* p3, const MethodInfo* method);
#define Array_Sort_TisUIVertex_t949_m64553(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948*, int32_t, int32_t, Object_t*, const MethodInfo*))Array_Sort_TisUIVertex_t949_m64553_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct UIVertexU5BU5D_t948;
struct Comparison_1_t5848;
// Declaration System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UIVertex>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisUIVertex_t949_m64559_gshared (Object_t * __this /* static, unused */, UIVertexU5BU5D_t948* p0, int32_t p1, Comparison_1_t5848 * p2, const MethodInfo* method);
#define Array_Sort_TisUIVertex_t949_m64559(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948*, int32_t, Comparison_1_t5848 *, const MethodInfo*))Array_Sort_TisUIVertex_t949_m64559_gshared)(__this /* static, unused */, p0, p1, p2, method)


// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m6008_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertexU5BU5D_t948* L_0 = ((List_1_t951_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m29108_gshared (List_1_t951 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t951 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UIVertexU5BU5D_t948* L_3 = ((List_1_t951_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t951 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck((Object_t*)L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5);
		__this->____items_1 = ((UIVertexU5BU5D_t948*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6));
		Object_t* L_7 = V_0;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t951 *)__this, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern "C" void List_1__ctor_m10118_gshared (List_1_t951 * __this, int32_t ___capacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_1 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_1, (String_t*)(String_t*) &_stringLiteral2478, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((UIVertexU5BU5D_t948*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(T[],System.Int32)
extern "C" void List_1__ctor_m29109_gshared (List_1_t951 * __this, UIVertexU5BU5D_t948* ___data, int32_t ___size, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		UIVertexU5BU5D_t948* L_0 = ___data;
		__this->____items_1 = L_0;
		int32_t L_1 = ___size;
		__this->____size_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m29110_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		((List_1_t951_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((UIVertexU5BU5D_t948*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29111_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t951 *)__this);
		Enumerator_t5847  L_0 = (( Enumerator_t5847  (*) (List_1_t951 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t951 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5847  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m29112_gshared (List_1_t951 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11470(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m29113_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		NullCheck((List_1_t951 *)__this);
		Enumerator_t5847  L_0 = (( Enumerator_t5847  (*) (List_1_t951 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((List_1_t951 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Enumerator_t5847  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NullReferenceException_t767_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_Add_m29114_gshared (List_1_t951 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2511);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t951 *)__this);
			VirtActionInvoker1< UIVertex_t949  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (List_1_t951 *)__this, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			int32_t L_1 = (int32_t)(__this->____size_2);
			V_0 = (int32_t)((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t767_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1446_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t711 * L_2 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_2, (String_t*)(String_t*) &_stringLiteral3803, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern TypeInfo* NullReferenceException_t767_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1446_il2cpp_TypeInfo_var;
extern "C" bool List_1_System_Collections_IList_Contains_m29115_gshared (List_1_t951 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2511);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t951 *)__this);
			bool L_1 = (bool)VirtFuncInvoker1< bool, UIVertex_t949  >::Invoke(24 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T) */, (List_1_t951 *)__this, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (bool)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t767_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1446_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern TypeInfo* NullReferenceException_t767_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1446_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m29116_gshared (List_1_t951 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2511);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t951 *)__this);
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (List_1_t951 *)__this, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			V_0 = (int32_t)L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t767_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1446_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t767_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Insert_m29117_gshared (List_1_t951 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2511);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t951 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			NullCheck((List_1_t951 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, (List_1_t951 *)__this, (int32_t)L_1, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t767_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1446_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t711 * L_3 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_3, (String_t*)(String_t*) &_stringLiteral3803, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NullReferenceException_t767_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1446_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_Remove_m29118_gshared (List_1_t951 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2511);
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
			Object_t * L_0 = ___item;
			NullCheck((List_1_t951 *)__this);
			VirtFuncInvoker1< bool, UIVertex_t949  >::Invoke(26 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T) */, (List_1_t951 *)__this, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t767_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1446_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29119_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m29120_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m29121_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m29122_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m29123_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m29124_gshared (List_1_t951 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t951 *)__this);
		UIVertex_t949  L_1 = (UIVertex_t949 )VirtFuncInvoker1< UIVertex_t949 , int32_t >::Invoke(31 /* T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (List_1_t951 *)__this, (int32_t)L_0);
		UIVertex_t949  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NullReferenceException_t767_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidCastException_t1446_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void List_1_System_Collections_IList_set_Item_m29125_gshared (List_1_t951 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NullReferenceException_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		InvalidCastException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2511);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			NullCheck((List_1_t951 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(32 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, (List_1_t951 *)__this, (int32_t)L_0, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t767_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (InvalidCastException_t1446_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t711 * L_2 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_2, (String_t*)(String_t*) &_stringLiteral956, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m29126_gshared (List_1_t951 * __this, UIVertex_t949  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		UIVertexU5BU5D_t948* L_1 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t951 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		UIVertexU5BU5D_t948* L_2 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_3 = (int32_t)(__this->____size_2);
		int32_t L_4 = (int32_t)L_3;
		V_0 = (int32_t)L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UIVertex_t949  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_2, L_5)) = (UIVertex_t949 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m29127_gshared (List_1_t951 * __this, int32_t ___newCount, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UIVertexU5BU5D_t948* L_3 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		NullCheck((List_1_t951 *)__this);
		int32_t L_4 = (( int32_t (*) (List_1_t951 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((List_1_t951 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_5 = Math_Max_m11478(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)L_4*(int32_t)2)), (int32_t)4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m11478(NULL /*static, unused*/, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t951 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckRange(System.Int32,System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckRange_m29128_gshared (List_1_t951 * __this, int32_t ___idx, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___idx;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_1 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_1, (String_t*)(String_t*) &_stringLiteral2292, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_3 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_3, (String_t*)(String_t*) &_stringLiteral632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		int32_t L_4 = ___idx;
		int32_t L_5 = ___count;
		int32_t L_6 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))) > ((uint32_t)L_6))))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t711 * L_7 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_7, (String_t*)(String_t*) &_stringLiteral3804, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m29129_gshared (List_1_t951 * __this, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t951 *)__this, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		Object_t* L_4 = ___collection;
		UIVertexU5BU5D_t948* L_5 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		NullCheck((Object_t*)L_4);
		InterfaceActionInvoker2< UIVertexU5BU5D_t948*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4, (UIVertexU5BU5D_t948*)L_5, (int32_t)L_6);
		int32_t L_7 = (int32_t)(__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_AddEnumerable_m29130_gshared (List_1_t951 * __this, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t949  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			UIVertex_t949  L_3 = (UIVertex_t949 )InterfaceFuncInvoker0< UIVertex_t949  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (UIVertex_t949 )L_3;
			UIVertex_t949  L_4 = V_0;
			NullCheck((List_1_t951 *)__this);
			VirtActionInvoker1< UIVertex_t949  >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T) */, (List_1_t951 *)__this, (UIVertex_t949 )L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck((Object_t *)L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck((Object_t *)L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m29131_gshared (List_1_t951 * __this, Object_t* ___collection, const MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t951 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = (Object_t*)((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((List_1_t951 *)__this, (Object_t*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((List_1_t951 *)__this, (Object_t*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t5845 * List_1_AsReadOnly_m29132_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t5845 * L_0 = (ReadOnlyCollection_1_t5845 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22));
		(( void (*) (ReadOnlyCollection_1_t5845 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23)->method)(L_0, (Object_t*)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m29133_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		UIVertexU5BU5D_t948* L_1 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m13135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		__this->____size_2 = 0;
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m29134_gshared (List_1_t951 * __this, UIVertex_t949  ___item, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		UIVertex_t949  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948*, UIVertex_t949 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t948*)L_0, (UIVertex_t949 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m29135_gshared (List_1_t951 * __this, UIVertexU5BU5D_t948* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		UIVertexU5BU5D_t948* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11470(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern TypeInfo* List_1_t951_il2cpp_TypeInfo_var;
extern TypeInfo* UIVertex_t949_il2cpp_TypeInfo_var;
extern "C" UIVertex_t949  List_1_Find_m29136_gshared (List_1_t951 * __this, Predicate_1_t5846 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1843);
		UIVertex_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1844);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	UIVertex_t949  V_1 = {0};
	UIVertex_t949  G_B3_0 = {0};
	{
		Predicate_1_t5846 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t951_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t5846 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t5846 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		int32_t L_1 = (int32_t)(__this->____size_2);
		Predicate_1_t5846 * L_2 = ___match;
		NullCheck((List_1_t951 *)__this);
		int32_t L_3 = (( int32_t (*) (List_1_t951 *, int32_t, int32_t, Predicate_1_t5846 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)((List_1_t951 *)__this, (int32_t)0, (int32_t)L_1, (Predicate_1_t5846 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		UIVertexU5BU5D_t948* L_5 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (UIVertex_t949_il2cpp_TypeInfo_var, (&V_1));
		UIVertex_t949  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckMatch_m29137_gshared (Object_t * __this /* static, unused */, Predicate_1_t5846 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Predicate_1_t5846 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*)(String_t*) &_stringLiteral3679, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m29138_gshared (List_1_t951 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t5846 * ___match, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = (int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = (int32_t)L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t5846 * L_3 = ___match;
		UIVertexU5BU5D_t948* L_4 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((Predicate_1_t5846 *)L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, UIVertex_t949  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T) */, (Predicate_1_t5846 *)L_3, (UIVertex_t949 )(*(UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t5847  List_1_GetEnumerator_m29139_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5847  L_0 = {0};
		(( void (*) (Enumerator_t5847 *, List_1_t951 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(&L_0, (List_1_t951 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		return L_0;
	}
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetRange(System.Int32,System.Int32)
extern "C" List_1_t951 * List_1_GetRange_m29140_gshared (List_1_t951 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	UIVertexU5BU5D_t948* V_0 = {0};
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t951 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		V_0 = (UIVertexU5BU5D_t948*)((UIVertexU5BU5D_t948*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2));
		UIVertexU5BU5D_t948* L_3 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_4 = ___index;
		UIVertexU5BU5D_t948* L_5 = V_0;
		int32_t L_6 = ___count;
		Array_Copy_m11470(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, (int32_t)L_4, (Array_t *)(Array_t *)L_5, (int32_t)0, (int32_t)L_6, /*hidden argument*/NULL);
		UIVertexU5BU5D_t948* L_7 = V_0;
		int32_t L_8 = ___count;
		List_1_t951 * L_9 = (List_1_t951 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		(( void (*) (List_1_t951 *, UIVertexU5BU5D_t948*, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(L_9, (UIVertexU5BU5D_t948*)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		return L_9;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m29141_gshared (List_1_t951 * __this, UIVertex_t949  ___item, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		UIVertex_t949  L_1 = ___item;
		int32_t L_2 = (int32_t)(__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948*, UIVertex_t949 , int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t948*)L_0, (UIVertex_t949 )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m29142_gshared (List_1_t951 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = (int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		UIVertexU5BU5D_t948* L_5 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_6 = ___start;
		UIVertexU5BU5D_t948* L_7 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (int32_t)(__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m11470(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (Array_t *)(Array_t *)L_7, (int32_t)((int32_t)((int32_t)L_8+(int32_t)L_9)), (int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/NULL);
	}

IL_0031:
	{
		int32_t L_12 = (int32_t)(__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		UIVertexU5BU5D_t948* L_15 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_16 = (int32_t)(__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m13135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, (int32_t)L_16, (int32_t)((-L_17)), /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckIndex_m29143_gshared (List_1_t951 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1473 * L_3 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_3, (String_t*)(String_t*) &_stringLiteral2292, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m29144_gshared (List_1_t951 * __this, int32_t ___index, UIVertex_t949  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t951 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = (int32_t)(__this->____size_2);
		UIVertexU5BU5D_t948* L_2 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t951 *)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t951 *)__this, (int32_t)L_3, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		UIVertexU5BU5D_t948* L_4 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_5 = ___index;
		UIVertex_t949  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_4, L_5)) = (UIVertex_t949 )L_6;
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern "C" void List_1_CheckCollection_m29145_gshared (List_1_t951 * __this, Object_t* ___collection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*)(String_t*) &_stringLiteral2477, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_InsertRange_m29146_gshared (List_1_t951 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	UIVertexU5BU5D_t948* V_0 = {0};
	Object_t* V_1 = {0};
	{
		Object_t* L_0 = ___collection;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((List_1_t951 *)__this, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_1 = ___index;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t951 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t* L_2 = ___collection;
		if ((!(((Object_t*)(Object_t*)L_2) == ((Object_t*)(List_1_t951 *)__this))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->____size_2);
		V_0 = (UIVertexU5BU5D_t948*)((UIVertexU5BU5D_t948*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_3));
		UIVertexU5BU5D_t948* L_4 = V_0;
		NullCheck((List_1_t951 *)__this);
		VirtActionInvoker2< UIVertexU5BU5D_t948*, int32_t >::Invoke(25 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, (List_1_t951 *)__this, (UIVertexU5BU5D_t948*)L_4, (int32_t)0);
		int32_t L_5 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t951 *)__this, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_6 = ___index;
		UIVertexU5BU5D_t948* L_7 = V_0;
		NullCheck(L_7);
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t951 *)__this, (int32_t)L_6, (int32_t)(((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		UIVertexU5BU5D_t948* L_8 = V_0;
		UIVertexU5BU5D_t948* L_9 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_10 = ___index;
		UIVertexU5BU5D_t948* L_11 = V_0;
		NullCheck(L_11);
		Array_Copy_m11470(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (int32_t)0, (Array_t *)(Array_t *)L_9, (int32_t)L_10, (int32_t)(((int32_t)(((Array_t *)L_11)->max_length))), /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_004f:
	{
		Object_t* L_12 = ___collection;
		V_1 = (Object_t*)((Object_t*)IsInst(L_12, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_14 = ___index;
		Object_t* L_15 = V_1;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)((List_1_t951 *)__this, (int32_t)L_14, (Object_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		goto IL_006b;
	}

IL_0063:
	{
		int32_t L_16 = ___index;
		Object_t* L_17 = ___collection;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)((List_1_t951 *)__this, (int32_t)L_16, (Object_t*)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
	}

IL_006b:
	{
		int32_t L_18 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_18+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertCollection(System.Int32,System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_InsertCollection_m29147_gshared (List_1_t951 * __this, int32_t ___index, Object_t* ___collection, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((List_1_t951 *)__this, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		int32_t L_3 = ___index;
		int32_t L_4 = V_0;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t951 *)__this, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Object_t* L_5 = ___collection;
		UIVertexU5BU5D_t948* L_6 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_7 = ___index;
		NullCheck((Object_t*)L_5);
		InterfaceActionInvoker2< UIVertexU5BU5D_t948*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_5, (UIVertexU5BU5D_t948*)L_6, (int32_t)L_7);
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::InsertEnumeration(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void List_1_InsertEnumeration_m29148_gshared (List_1_t951 * __this, int32_t ___index, Object_t* ___enumerable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t949  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), (Object_t*)L_0);
		V_1 = (Object_t*)L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck((Object_t*)L_2);
			UIVertex_t949  L_3 = (UIVertex_t949 )InterfaceFuncInvoker0< UIVertex_t949  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), (Object_t*)L_2);
			V_0 = (UIVertex_t949 )L_3;
			int32_t L_4 = ___index;
			int32_t L_5 = (int32_t)L_4;
			___index = (int32_t)((int32_t)((int32_t)L_5+(int32_t)1));
			UIVertex_t949  L_6 = V_0;
			NullCheck((List_1_t951 *)__this);
			VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(29 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, (List_1_t951 *)__this, (int32_t)L_5, (UIVertex_t949 )L_6);
		}

IL_001f:
		{
			Object_t* L_7 = V_1;
			NullCheck((Object_t *)L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
			if (L_8)
			{
				goto IL_0009;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x34, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		{
			Object_t* L_9 = V_1;
			if (L_9)
			{
				goto IL_002d;
			}
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(41)
		}

IL_002d:
		{
			Object_t* L_10 = V_1;
			NullCheck((Object_t *)L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			IL2CPP_END_FINALLY(41)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m29149_gshared (List_1_t951 * __this, UIVertex_t949  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UIVertex_t949  L_0 = ___item;
		NullCheck((List_1_t951 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(28 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T) */, (List_1_t951 *)__this, (UIVertex_t949 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		NullCheck((List_1_t951 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(30 /* System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, (List_1_t951 *)__this, (int32_t)L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern TypeInfo* List_1_t951_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m29150_gshared (List_1_t951 * __this, Predicate_1_t5846 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t951_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1843);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5846 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t951_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t5846 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(NULL /*static, unused*/, (Predicate_1_t5846 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		V_0 = (int32_t)0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t5846 * L_1 = ___match;
		UIVertexU5BU5D_t948* L_2 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck((Predicate_1_t5846 *)L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, UIVertex_t949  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T) */, (Predicate_1_t5846 *)L_1, (UIVertex_t949 )(*(UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = (int32_t)((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t5846 * L_13 = ___match;
		UIVertexU5BU5D_t948* L_14 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((Predicate_1_t5846 *)L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, UIVertex_t949  >::Invoke(11 /* System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T) */, (Predicate_1_t5846 *)L_13, (UIVertex_t949 )(*(UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		UIVertexU5BU5D_t948* L_18 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = (int32_t)L_19;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		UIVertexU5BU5D_t948* L_21 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_18, L_20)) = (UIVertex_t949 )(*(UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (int32_t)(__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UIVertexU5BU5D_t948* L_29 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m13135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, (int32_t)L_30, (int32_t)((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/NULL);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern "C" void List_1_RemoveAt_m29151_gshared (List_1_t951 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1473 * L_3 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_3, (String_t*)(String_t*) &_stringLiteral2292, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t951 *)__this, (int32_t)L_4, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		UIVertexU5BU5D_t948* L_5 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		Array_Clear_m13135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
extern "C" void List_1_RemoveRange_m29152_gshared (List_1_t951 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = ___count;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)((List_1_t951 *)__this, (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		int32_t L_2 = ___count;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)((List_1_t951 *)__this, (int32_t)L_3, (int32_t)((-L_4)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		UIVertexU5BU5D_t948* L_5 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_6 = (int32_t)(__this->____size_2);
		int32_t L_7 = ___count;
		Array_Clear_m13135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (int32_t)L_6, (int32_t)L_7, /*hidden argument*/NULL);
		int32_t L_8 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0035:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m29153_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Array_Reverse_m13161(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern TypeInfo* Comparer_1_t5853_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m29154_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11214);
		s_Il2CppMethodIntialized = true;
	}
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5853_il2cpp_TypeInfo_var);
		Comparer_1_t5853 * L_2 = (( Comparer_1_t5853 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t948*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Collections.Generic.IComparer`1<T>)
extern "C" void List_1_Sort_m29155_gshared (List_1_t951 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Object_t* L_2 = ___comparer;
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948*, int32_t, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t948*)L_0, (int32_t)0, (int32_t)L_1, (Object_t*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m29156_gshared (List_1_t951 * __this, Comparison_1_t5848 * ___comparison, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_1 = (int32_t)(__this->____size_2);
		Comparison_1_t5848 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948*, int32_t, Comparison_1_t5848 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t948*)L_0, (int32_t)L_1, (Comparison_1_t5848 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		int32_t L_3 = (int32_t)(__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t948* List_1_ToArray_m6051_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	UIVertexU5BU5D_t948* V_0 = {0};
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		V_0 = (UIVertexU5BU5D_t948*)((UIVertexU5BU5D_t948*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0));
		UIVertexU5BU5D_t948* L_1 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		UIVertexU5BU5D_t948* L_2 = V_0;
		int32_t L_3 = (int32_t)(__this->____size_2);
		Array_Copy_m11453(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, (int32_t)L_3, /*hidden argument*/NULL);
		UIVertexU5BU5D_t948* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m29157_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((List_1_t951 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m5930_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		UIVertexU5BU5D_t948* L_0 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Capacity_m5931_gshared (List_1_t951 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_2 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11483(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		UIVertexU5BU5D_t948** L_3 = (UIVertexU5BU5D_t948**)&(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UIVertexU5BU5D_t948**, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40)->method)(NULL /*static, unused*/, (UIVertexU5BU5D_t948**)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m29158_gshared (List_1_t951 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern "C" UIVertex_t949  List_1_get_Item_m29159_gshared (List_1_t951 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_2 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_2, (String_t*)(String_t*) &_stringLiteral2292, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		UIVertexU5BU5D_t948* L_3 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern "C" void List_1_set_Item_m29160_gshared (List_1_t951 * __this, int32_t ___index, UIVertex_t949  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		NullCheck((List_1_t951 *)__this);
		(( void (*) (List_1_t951 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((List_1_t951 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_3 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_3, (String_t*)(String_t*) &_stringLiteral2292, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		UIVertexU5BU5D_t948* L_4 = (UIVertexU5BU5D_t948*)(__this->____items_1);
		int32_t L_5 = ___index;
		UIVertex_t949  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_4, L_5)) = (UIVertex_t949 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m29101_gshared (Enumerator_t5847 * __this, List_1_t951 * ___l, const MethodInfo* method)
{
	{
		List_1_t951 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t951 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m29102_gshared (Enumerator_t5847 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5847 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5847 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m29103_gshared (Enumerator_t5847 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t5847 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5847 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11482(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		UIVertex_t949  L_2 = (UIVertex_t949 )(__this->___current_3);
		UIVertex_t949  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::Dispose()
extern "C" void Enumerator_Dispose_m29104_gshared (Enumerator_t5847 * __this, const MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t951 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::VerifyState()
extern TypeInfo* ObjectDisposedException_t3296_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m29105_gshared (Enumerator_t5847 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5488);
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t951 * L_0 = (List_1_t951 *)(__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t5847  L_1 = (*(Enumerator_t5847 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		Type_t * L_3 = Object_GetType_m4060((Object_t *)L_2, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, (Type_t *)L_3);
		ObjectDisposedException_t3296 * L_5 = (ObjectDisposedException_t3296 *)il2cpp_codegen_object_new (ObjectDisposedException_t3296_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11824(L_5, (String_t*)L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (int32_t)(__this->___ver_2);
		List_1_t951 * L_7 = (List_1_t951 *)(__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)(L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1429 * L_9 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_9, (String_t*)(String_t*) &_stringLiteral3805, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::MoveNext()
extern "C" bool Enumerator_MoveNext_m29106_gshared (Enumerator_t5847 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t5847 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5847 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		int32_t L_1 = (int32_t)(__this->___next_1);
		List_1_t951 * L_2 = (List_1_t951 *)(__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t951 * L_4 = (List_1_t951 *)(__this->___l_0);
		NullCheck(L_4);
		UIVertexU5BU5D_t948* L_5 = (UIVertexU5BU5D_t948*)(L_4->____items_1);
		int32_t L_6 = (int32_t)(__this->___next_1);
		int32_t L_7 = (int32_t)L_6;
		V_0 = (int32_t)L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UIVertex_t949 *)(UIVertex_t949 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>::get_Current()
extern "C" UIVertex_t949  Enumerator_get_Current_m29107_gshared (Enumerator_t5847 * __this, const MethodInfo* method)
{
	{
		UIVertex_t949  L_0 = (UIVertex_t949 )(__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m29067_gshared (ReadOnlyCollection_1_t5845 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*)(String_t*) &_stringLiteral3806, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29068_gshared (ReadOnlyCollection_1_t5845 * __this, UIVertex_t949  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m29069_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m29070_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, UIVertex_t949  ___item, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m29071_gshared (ReadOnlyCollection_1_t5845 * __this, UIVertex_t949  ___item, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m29072_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, const MethodInfo* method)
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
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" UIVertex_t949  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m29073_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t5845 *)__this);
		UIVertex_t949  L_1 = (UIVertex_t949 )VirtFuncInvoker1< UIVertex_t949 , int32_t >::Invoke(33 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t5845 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m29074_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, UIVertex_t949  ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29075_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t754_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m29076_gshared (ReadOnlyCollection_1_t5845 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t754_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t754_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t754_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m29077_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m29078_gshared (ReadOnlyCollection_1_t5845 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m29079_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m29080_gshared (ReadOnlyCollection_1_t5845 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t949  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m29081_gshared (ReadOnlyCollection_1_t5845 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m29082_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m29083_gshared (ReadOnlyCollection_1_t5845 * __this, Object_t * ___value, const MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m29084_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m29085_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m29086_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m29087_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m29088_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m29089_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t949  L_2 = (UIVertex_t949 )InterfaceFuncInvoker1< UIVertex_t949 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		UIVertex_t949  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m29090_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m29091_gshared (ReadOnlyCollection_1_t5845 * __this, UIVertex_t949  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t949  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t949  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (UIVertex_t949 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m29092_gshared (ReadOnlyCollection_1_t5845 * __this, UIVertexU5BU5D_t948* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertexU5BU5D_t948* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UIVertexU5BU5D_t948*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (UIVertexU5BU5D_t948*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m29093_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m29094_gshared (ReadOnlyCollection_1_t5845 * __this, UIVertex_t949  ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t949  L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (UIVertex_t949 )L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m29095_gshared (ReadOnlyCollection_1_t5845 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t949  ReadOnlyCollection_1_get_Item_m29096_gshared (ReadOnlyCollection_1_t5845 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t949  L_2 = (UIVertex_t949 )InterfaceFuncInvoker1< UIVertex_t949 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::.ctor()
extern TypeInfo* ICollection_t754_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m29180_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t951 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t951 * L_0 = (List_1_t951 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t951 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t951 *)L_0;
		List_1_t951 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t754_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t951 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29181_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t754_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m29182_gshared (Collection_1_t5850 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t754_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t754_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t754_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m29183_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m29184_gshared (Collection_1_t5850 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		UIVertex_t949  L_4 = (( UIVertex_t949  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t5850 *)__this, (int32_t)L_2, (UIVertex_t949 )L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m29185_gshared (Collection_1_t5850 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t949  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m29186_gshared (Collection_1_t5850 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m29187_gshared (Collection_1_t5850 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UIVertex_t949  L_2 = (( UIVertex_t949  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t5850 *)__this, (int32_t)L_0, (UIVertex_t949 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m29188_gshared (Collection_1_t5850 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		UIVertex_t949  L_2 = (( UIVertex_t949  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5850 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T) */, (Collection_1_t5850 *)__this, (UIVertex_t949 )L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t5850 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m29189_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m29190_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m29191_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m29192_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m29193_gshared (Collection_1_t5850 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t949  L_2 = (UIVertex_t949 )InterfaceFuncInvoker1< UIVertex_t949 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		UIVertex_t949  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m29194_gshared (Collection_1_t5850 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UIVertex_t949  L_2 = (( UIVertex_t949  (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T) */, (Collection_1_t5850 *)__this, (int32_t)L_0, (UIVertex_t949 )L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Add(T)
extern "C" void Collection_1_Add_m29195_gshared (Collection_1_t5850 * __this, UIVertex_t949  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		UIVertex_t949  L_3 = ___item;
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t5850 *)__this, (int32_t)L_2, (UIVertex_t949 )L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Clear()
extern "C" void Collection_1_Clear_m29196_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker0::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ClearItems() */, (Collection_1_t5850 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ClearItems()
extern "C" void Collection_1_ClearItems_m29197_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool Collection_1_Contains_m29198_gshared (Collection_1_t5850 * __this, UIVertex_t949  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t949  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UIVertex_t949  >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UIVertex_t949 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m29199_gshared (Collection_1_t5850 * __this, UIVertexU5BU5D_t948* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertexU5BU5D_t948* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< UIVertexU5BU5D_t948*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (UIVertexU5BU5D_t948*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m29200_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m29201_gshared (Collection_1_t5850 * __this, UIVertex_t949  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		UIVertex_t949  L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<UnityEngine.UIVertex>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (UIVertex_t949 )L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m29202_gshared (Collection_1_t5850 * __this, int32_t ___index, UIVertex_t949  ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UIVertex_t949  L_1 = ___item;
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(34 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T) */, (Collection_1_t5850 *)__this, (int32_t)L_0, (UIVertex_t949 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m29203_gshared (Collection_1_t5850 * __this, int32_t ___index, UIVertex_t949  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UIVertex_t949  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UIVertex_t949  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (UIVertex_t949 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool Collection_1_Remove_m29204_gshared (Collection_1_t5850 * __this, UIVertex_t949  ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UIVertex_t949  L_0 = ___item;
		NullCheck((Collection_1_t5850 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(27 /* System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IndexOf(T) */, (Collection_1_t5850 *)__this, (UIVertex_t949 )L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t5850 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m29205_gshared (Collection_1_t5850 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(35 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32) */, (Collection_1_t5850 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m29206_gshared (Collection_1_t5850 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t Collection_1_get_Count_m29207_gshared (Collection_1_t5850 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t949  Collection_1_get_Item_m29208_gshared (Collection_1_t5850 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		UIVertex_t949  L_2 = (UIVertex_t949 )InterfaceFuncInvoker1< UIVertex_t949 , int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m29209_gshared (Collection_1_t5850 * __this, int32_t ___index, UIVertex_t949  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UIVertex_t949  L_1 = ___value;
		NullCheck((Collection_1_t5850 *)__this);
		VirtActionInvoker2< int32_t, UIVertex_t949  >::Invoke(36 /* System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T) */, (Collection_1_t5850 *)__this, (int32_t)L_0, (UIVertex_t949 )L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m29210_gshared (Collection_1_t5850 * __this, int32_t ___index, UIVertex_t949  ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		UIVertex_t949  L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, UIVertex_t949  >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.UIVertex>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (UIVertex_t949 )L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m29211_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" UIVertex_t949  Collection_1_ConvertItem_m29212_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)))));
	}

IL_000f:
	{
		ArgumentException_t711 * L_3 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_3, (String_t*)(String_t*) &_stringLiteral3803, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m29213_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t56 * L_2 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ICollection_t754_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsSynchronized_m29214_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, ICollection_t754_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t754_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UIVertex>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern TypeInfo* IList_t686_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsFixedSize_m29215_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = (Object_t *)((Object_t *)IsInst(L_0, IList_t686_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t686_il2cpp_TypeInfo_var, (Object_t *)L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_3MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_3MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::.ctor()
extern "C" void EqualityComparer_1__ctor_m29216_gshared (EqualityComparer_1_t5851 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t4937_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m29217_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t4937_0_0_0_var = il2cpp_codegen_type_from_index(8956);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(GenericEqualityComparer_1_t4937_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1203* L_4 = (TypeU5BU5D_t1203*)((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1203* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1203*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7462(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t5851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t5851 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t5852 * L_8 = (DefaultComparer_t5852 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t5852 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t5851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29218_gshared (EqualityComparer_1_t5851 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t5851 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T) */, (EqualityComparer_1_t5851 *)__this, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29219_gshared (EqualityComparer_1_t5851 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t5851 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, UIVertex_t949 , UIVertex_t949  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T) */, (EqualityComparer_1_t5851 *)__this, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UIVertex>::get_Default()
extern "C" EqualityComparer_1_t5851 * EqualityComparer_1_get_Default_m29220_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t5851 * L_0 = ((EqualityComparer_1_t5851_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIVertex>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIVertex>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<UnityEngine.UIVertex>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern TypeInfo* EqualityComparer_1_t5851_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m29221_gshared (DefaultComparer_t5852 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t5851_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11210);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t5851 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5851_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t5851 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t5851 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29222_gshared (DefaultComparer_t5852 * __this, UIVertex_t949  ___obj, const MethodInfo* method)
{
	{
		UIVertex_t949  L_0 = ___obj;
		UIVertex_t949  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29223_gshared (DefaultComparer_t5852 * __this, UIVertex_t949  ___x, UIVertex_t949  ___y, const MethodInfo* method)
{
	{
		UIVertex_t949  L_0 = ___x;
		UIVertex_t949  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UIVertex_t949  L_3 = ___y;
		UIVertex_t949  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UIVertex_t949  L_6 = ___y;
		UIVertex_t949  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m29097_gshared (Predicate_1_t5846 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m29098_gshared (Predicate_1_t5846 * __this, UIVertex_t949  ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m29098((Predicate_1_t5846 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UIVertex_t949  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, UIVertex_t949  ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern TypeInfo* UIVertex_t949_il2cpp_TypeInfo_var;
extern "C" Object_t * Predicate_1_BeginInvoke_m29099_gshared (Predicate_1_t5846 * __this, UIVertex_t949  ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1844);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UIVertex_t949_il2cpp_TypeInfo_var, &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m29100_gshared (Predicate_1_t5846 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::.ctor()
extern "C" void Comparer_1__ctor_m29224_gshared (Comparer_1_t5853 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::.cctor()
extern const Il2CppType* GenericComparer_1_t4926_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m29225_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t4926_0_0_0_var = il2cpp_codegen_type_from_index(8841);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(GenericComparer_1_t4926_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1203* L_4 = (TypeU5BU5D_t1203*)((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1203* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t1203*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m7462(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t5853_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t5853 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t5854 * L_8 = (DefaultComparer_t5854 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t5854 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t5853_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m29226_gshared (Comparer_1_t5853 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t5853 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UIVertex_t949 , UIVertex_t949  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::Compare(T,T) */, (Comparer_1_t5853 *)__this, (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (UIVertex_t949 )((*(UIVertex_t949 *)((UIVertex_t949 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t711 * L_8 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m11481(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UIVertex>::get_Default()
extern "C" Comparer_1_t5853 * Comparer_1_get_Default_m29227_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t5853 * L_0 = ((Comparer_1_t5853_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UIVertex>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<UnityEngine.UIVertex>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern TypeInfo* Comparer_1_t5853_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m29228_gshared (DefaultComparer_t5854 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t5853_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11214);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t5853 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t5853_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t5853 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t5853 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UIVertex>::Compare(T,T)
extern TypeInfo* IComparable_t99_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m29229_gshared (DefaultComparer_t5854 * __this, UIVertex_t949  ___x, UIVertex_t949  ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t99_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		UIVertex_t949  L_0 = ___x;
		UIVertex_t949  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		UIVertex_t949  L_3 = ___y;
		UIVertex_t949  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		UIVertex_t949  L_6 = ___y;
		UIVertex_t949  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		UIVertex_t949  L_9 = ___x;
		UIVertex_t949  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		UIVertex_t949  L_12 = ___x;
		UIVertex_t949  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		UIVertex_t949  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, UIVertex_t949  >::Invoke(0 /* System.Int32 System.IComparable`1<UnityEngine.UIVertex>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (UIVertex_t949 )L_15);
		return L_16;
	}

IL_003e:
	{
		UIVertex_t949  L_17 = ___x;
		UIVertex_t949  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t99_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		UIVertex_t949  L_20 = ___x;
		UIVertex_t949  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		UIVertex_t949  L_23 = ___y;
		UIVertex_t949  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t99_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t99_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t711 * L_27 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_27, (String_t*)(String_t*) &_stringLiteral3793, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<UnityEngine.UIVertex>
#include "mscorlib_System_Comparison_1_gen_38MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m29161_gshared (Comparison_1_t5848 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m29162_gshared (Comparison_1_t5848 * __this, UIVertex_t949  ___x, UIVertex_t949  ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m29162((Comparison_1_t5848 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UIVertex_t949  ___x, UIVertex_t949  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, UIVertex_t949  ___x, UIVertex_t949  ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern TypeInfo* UIVertex_t949_il2cpp_TypeInfo_var;
extern "C" Object_t * Comparison_1_BeginInvoke_m29163_gshared (Comparison_1_t5848 * __this, UIVertex_t949  ___x, UIVertex_t949  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t949_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1844);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UIVertex_t949_il2cpp_TypeInfo_var, &___x);
	__d_args[1] = Box(UIVertex_t949_il2cpp_TypeInfo_var, &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m29164_gshared (Comparison_1_t5848 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_g.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_gMethodDeclarations.h"

// UnityEngine.UI.CoroutineTween.ColorTween
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorTween.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_U.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_TweenRunner_1_UMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"


// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" void TweenRunner_1__ctor_m5904_gshared (TweenRunner_1_t920 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Start(T)
extern "C" Object_t * TweenRunner_1_Start_m29230_gshared (Object_t * __this /* static, unused */, ColorTween_t903  ___tweenInfo, const MethodInfo* method)
{
	U3CStartU3Ec__Iterator0_t5855 * V_0 = {0};
	{
		U3CStartU3Ec__Iterator0_t5855 * L_0 = (U3CStartU3Ec__Iterator0_t5855 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CStartU3Ec__Iterator0_t5855 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CStartU3Ec__Iterator0_t5855 *)L_0;
		U3CStartU3Ec__Iterator0_t5855 * L_1 = V_0;
		ColorTween_t903  L_2 = ___tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo_0 = L_2;
		U3CStartU3Ec__Iterator0_t5855 * L_3 = V_0;
		ColorTween_t903  L_4 = ___tweenInfo;
		NullCheck(L_3);
		L_3->___U3CU24U3EtweenInfo_5 = L_4;
		U3CStartU3Ec__Iterator0_t5855 * L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::Init(UnityEngine.MonoBehaviour)
extern "C" void TweenRunner_1_Init_m5905_gshared (TweenRunner_1_t920 * __this, MonoBehaviour_t13 * ___coroutineContainer, const MethodInfo* method)
{
	{
		MonoBehaviour_t13 * L_0 = ___coroutineContainer;
		__this->___m_CoroutineContainer_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>::StartTween(T)
extern TypeInfo* ITweenValue_t1110_il2cpp_TypeInfo_var;
extern "C" void TweenRunner_1_StartTween_m5928_gshared (TweenRunner_1_t920 * __this, ColorTween_t903  ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITweenValue_t1110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2098);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_t13 * L_0 = (MonoBehaviour_t13 *)(__this->___m_CoroutineContainer_0);
		bool L_1 = Object_op_Equality_m3781(NULL /*static, unused*/, (Object_t703 *)L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (Object_t *)(String_t*) &_stringLiteral1208, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		Object_t * L_2 = (Object_t *)(__this->___m_Tween_1);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		MonoBehaviour_t13 * L_3 = (MonoBehaviour_t13 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_4 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t13 *)L_3);
		MonoBehaviour_StopCoroutine_m4180((MonoBehaviour_t13 *)L_3, (Object_t *)L_4, /*hidden argument*/NULL);
		__this->___m_Tween_1 = (Object_t *)NULL;
	}

IL_003f:
	{
		MonoBehaviour_t13 * L_5 = (MonoBehaviour_t13 *)(__this->___m_CoroutineContainer_0);
		NullCheck((Component_t761 *)L_5);
		GameObject_t352 * L_6 = Component_get_gameObject_m3756((Component_t761 *)L_5, /*hidden argument*/NULL);
		NullCheck((GameObject_t352 *)L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m5809((GameObject_t352 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___info)));
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void UnityEngine.UI.CoroutineTween.ITweenValue::TweenValue(System.Single) */, ITweenValue_t1110_il2cpp_TypeInfo_var, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (&___info)), (float)(1.0f));
		return;
	}

IL_0067:
	{
		ColorTween_t903  L_8 = ___info;
		Object_t * L_9 = (( Object_t * (*) (Object_t * /* static, unused */, ColorTween_t903 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(NULL /*static, unused*/, (ColorTween_t903 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		__this->___m_Tween_1 = L_9;
		MonoBehaviour_t13 * L_10 = (MonoBehaviour_t13 *)(__this->___m_CoroutineContainer_0);
		Object_t * L_11 = (Object_t *)(__this->___m_Tween_1);
		NullCheck((MonoBehaviour_t13 *)L_10);
		MonoBehaviour_StartCoroutine_m3719((MonoBehaviour_t13 *)L_10, (Object_t *)L_11, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"


// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::.ctor()
extern "C" void U3CStartU3Ec__Iterator0__ctor_m29231_gshared (U3CStartU3Ec__Iterator0_t5855 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m29232_gshared (U3CStartU3Ec__Iterator0_t5855 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Object UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m29233_gshared (U3CStartU3Ec__Iterator0_t5855 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::MoveNext()
extern TypeInfo* ITweenValue_t1110_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t727_il2cpp_TypeInfo_var;
extern "C" bool U3CStartU3Ec__Iterator0_MoveNext_m29234_gshared (U3CStartU3Ec__Iterator0_t5855 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITweenValue_t1110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2098);
		Mathf_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	float G_B7_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t5855 * G_B7_1 = {0};
	float G_B6_0 = 0.0f;
	U3CStartU3Ec__Iterator0_t5855 * G_B6_1 = {0};
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	U3CStartU3Ec__Iterator0_t5855 * G_B8_2 = {0};
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_3);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0104;
	}

IL_0021:
	{
		ColorTween_t903 * L_2 = (ColorTween_t903 *)&(__this->___tweenInfo_0);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_2));
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityEngine.UI.CoroutineTween.ITweenValue::ValidTarget() */, ITweenValue_t1110_il2cpp_TypeInfo_var, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_2));
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0104;
	}

IL_003c:
	{
		__this->___U3CelapsedTimeU3E__0_1 = (0.0f);
		goto IL_00cb;
	}

IL_004c:
	{
		float L_4 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t903 * L_5 = (ColorTween_t903 *)&(__this->___tweenInfo_0);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_5));
		bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.UI.CoroutineTween.ITweenValue::get_ignoreTimeScale() */, ITweenValue_t1110_il2cpp_TypeInfo_var, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_5));
		G_B6_0 = L_4;
		G_B6_1 = ((U3CStartU3Ec__Iterator0_t5855 *)(__this));
		if (!L_6)
		{
			G_B7_0 = L_4;
			G_B7_1 = ((U3CStartU3Ec__Iterator0_t5855 *)(__this));
			goto IL_0073;
		}
	}
	{
		float L_7 = Time_get_unscaledDeltaTime_m5885(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B6_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t5855 *)(G_B6_1));
		goto IL_0078;
	}

IL_0073:
	{
		float L_8 = Time_get_deltaTime_m4147(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B8_0 = L_8;
		G_B8_1 = G_B7_0;
		G_B8_2 = ((U3CStartU3Ec__Iterator0_t5855 *)(G_B7_1));
	}

IL_0078:
	{
		NullCheck(G_B8_2);
		G_B8_2->___U3CelapsedTimeU3E__0_1 = ((float)((float)G_B8_1+(float)G_B8_0));
		float L_9 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t903 * L_10 = (ColorTween_t903 *)&(__this->___tweenInfo_0);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_10));
		float L_11 = (float)InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single UnityEngine.UI.CoroutineTween.ITweenValue::get_duration() */, ITweenValue_t1110_il2cpp_TypeInfo_var, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_10));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t727_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp01_m5956(NULL /*static, unused*/, (float)((float)((float)L_9/(float)L_11)), /*hidden argument*/NULL);
		__this->___U3CpercentageU3E__1_2 = L_12;
		ColorTween_t903 * L_13 = (ColorTween_t903 *)&(__this->___tweenInfo_0);
		float L_14 = (float)(__this->___U3CpercentageU3E__1_2);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_13));
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void UnityEngine.UI.CoroutineTween.ITweenValue::TweenValue(System.Single) */, ITweenValue_t1110_il2cpp_TypeInfo_var, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_13), (float)L_14);
		__this->___U24current_4 = NULL;
		__this->___U24PC_3 = 1;
		goto IL_0106;
	}

IL_00cb:
	{
		float L_15 = (float)(__this->___U3CelapsedTimeU3E__0_1);
		ColorTween_t903 * L_16 = (ColorTween_t903 *)&(__this->___tweenInfo_0);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_16));
		float L_17 = (float)InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single UnityEngine.UI.CoroutineTween.ITweenValue::get_duration() */, ITweenValue_t1110_il2cpp_TypeInfo_var, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_16));
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_004c;
		}
	}
	{
		ColorTween_t903 * L_18 = (ColorTween_t903 *)&(__this->___tweenInfo_0);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_18));
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void UnityEngine.UI.CoroutineTween.ITweenValue::TweenValue(System.Single) */, ITweenValue_t1110_il2cpp_TypeInfo_var, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_18), (float)(1.0f));
		__this->___U24PC_3 = (-1);
	}

IL_0104:
	{
		return 0;
	}

IL_0106:
	{
		return 1;
	}
	// Dead block : IL_0108: ldloc.1
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Dispose()
extern "C" void U3CStartU3Ec__Iterator0_Dispose_m29235_gshared (U3CStartU3Ec__Iterator0_t5855 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void UnityEngine.UI.CoroutineTween.TweenRunner`1/<Start>c__Iterator0<UnityEngine.UI.CoroutineTween.ColorTween>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__Iterator0_Reset_m29236_gshared (U3CStartU3Ec__Iterator0_t5855 * __this, const MethodInfo* method)
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

// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"


// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_36MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UILineInfo>(System.Int32)
extern "C" UILineInfo_t1076  Array_InternalArray__get_Item_TisUILineInfo_t1076_m64562_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUILineInfo_t1076_m64562(__this, p0, method) (( UILineInfo_t1076  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUILineInfo_t1076_m64562_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m29719_gshared (InternalEnumerator_1_t5884 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m29720_gshared (InternalEnumerator_1_t5884 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29721_gshared (InternalEnumerator_1_t5884 * __this, const MethodInfo* method)
{
	{
		UILineInfo_t1076  L_0 = (( UILineInfo_t1076  (*) (InternalEnumerator_1_t5884 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5884 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UILineInfo_t1076  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m29722_gshared (InternalEnumerator_1_t5884 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m29723_gshared (InternalEnumerator_1_t5884 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15067((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.UILineInfo>::get_Current()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" UILineInfo_t1076  InternalEnumerator_1_get_Current_m29724_gshared (InternalEnumerator_1_t5884 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
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
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral3681, /*hidden argument*/NULL);
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
		InvalidOperationException_t1429 * L_3 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_3, (String_t*)(String_t*) &_stringLiteral3682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15067((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		UILineInfo_t1076  L_8 = (( UILineInfo_t1076  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"


// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_37MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UICharInfo>(System.Int32)
extern "C" UICharInfo_t1078  Array_InternalArray__get_Item_TisUICharInfo_t1078_m64573_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUICharInfo_t1078_m64573(__this, p0, method) (( UICharInfo_t1078  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUICharInfo_t1078_m64573_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m29725_gshared (InternalEnumerator_1_t5885 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m29726_gshared (InternalEnumerator_1_t5885 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m29727_gshared (InternalEnumerator_1_t5885 * __this, const MethodInfo* method)
{
	{
		UICharInfo_t1078  L_0 = (( UICharInfo_t1078  (*) (InternalEnumerator_1_t5885 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5885 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UICharInfo_t1078  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m29728_gshared (InternalEnumerator_1_t5885 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m29729_gshared (InternalEnumerator_1_t5885 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15067((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<UnityEngine.UICharInfo>::get_Current()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" UICharInfo_t1078  InternalEnumerator_1_get_Current_m29730_gshared (InternalEnumerator_1_t5885 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
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
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral3681, /*hidden argument*/NULL);
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
		InvalidOperationException_t1429 * L_3 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_3, (String_t*)(String_t*) &_stringLiteral3682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15067((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		UICharInfo_t1078  L_8 = (( UICharInfo_t1078  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
// UnityEngine.Events.UnityEvent`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_2MethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_1MethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m6077_gshared (UnityEvent_1_t959 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase__ctor_m10054((UnityEventBase_t2891 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m6090_gshared (UnityEvent_1_t959 * __this, UnityAction_1_t1082 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1082 * L_0 = ___call;
		BaseInvokableCall_t2883 * L_1 = (( BaseInvokableCall_t2883 * (*) (Object_t * /* static, unused */, UnityAction_1_t1082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t1082 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_AddCall_m10059((UnityEventBase_t2891 *)__this, (BaseInvokableCall_t2883 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m6089_gshared (UnityEvent_1_t959 * __this, UnityAction_1_t1082 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t1082 * L_0 = ___call;
		NullCheck((Delegate_t724 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3751((Delegate_t724 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t1082 * L_2 = ___call;
		NullCheck((Delegate_t724 *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m10185((Delegate_t724 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_RemoveListener_m10060((UnityEventBase_t2891 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6337_gshared (UnityEvent_1_t959 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t1203* L_2 = (TypeU5BU5D_t1203*)((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m10062(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t1203*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2883 * UnityEvent_1_GetDelegate_m6338_gshared (UnityEvent_1_t959 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t5886 * L_2 = (InvokableCall_1_t5886 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5886 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2883 * UnityEvent_1_GetDelegate_m29731_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1082 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t1082 * L_0 = ___action;
		InvokableCall_1_t5886 * L_1 = (InvokableCall_1_t5886 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5886 *, UnityAction_1_t1082 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (UnityAction_1_t1082 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m6082_gshared (UnityEvent_1_t959 * __this, float ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (ObjectU5BU5D_t682*)(__this->___m_InvokeArray_4);
		float L_1 = ___arg0;
		float L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t682* L_4 = (ObjectU5BU5D_t682*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_Invoke_m10061((UnityEventBase_t2891 *)__this, (ObjectU5BU5D_t682*)L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityAction`1<System.Single>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m6088_gshared (UnityAction_1_t1082 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m29732_gshared (UnityAction_1_t1082 * __this, float ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m29732((UnityAction_1_t1082 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, float ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, float ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m29733_gshared (UnityAction_1_t1082 * __this, float ___arg0, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t87_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m29734_gshared (UnityAction_1_t1082 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

struct BaseInvokableCall_t2883;
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Single>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Single>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t87_m64583_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t87_m64583(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisSingle_t87_m64583_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m29735_gshared (InvokableCall_1_t5886 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t2883 *)__this);
		BaseInvokableCall__ctor_m10032((BaseInvokableCall_t2883 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t1082 * L_2 = (UnityAction_1_t1082 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t724 * L_6 = Delegate_CreateDelegate_m10186(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t724 * L_7 = Delegate_Combine_m3759(NULL /*static, unused*/, (Delegate_t724 *)L_2, (Delegate_t724 *)((UnityAction_1_t1082 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1082 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m29736_gshared (InvokableCall_1_t5886 * __this, UnityAction_1_t1082 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t2883 *)__this);
		BaseInvokableCall__ctor_m10031((BaseInvokableCall_t2883 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t1082 * L_0 = (UnityAction_1_t1082 *)(__this->___Delegate_0);
		UnityAction_1_t1082 * L_1 = ___callback;
		Delegate_t724 * L_2 = Delegate_Combine_m3759(NULL /*static, unused*/, (Delegate_t724 *)L_0, (Delegate_t724 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t1082 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1_Invoke_m29737_gshared (InvokableCall_1_t5886 * __this, ObjectU5BU5D_t682* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t682* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t711 * L_1 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_1, (String_t*)(String_t*) &_stringLiteral2020, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t682* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t1082 * L_4 = (UnityAction_1_t1082 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m10033(NULL /*static, unused*/, (Delegate_t724 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t1082 * L_6 = (UnityAction_1_t1082 *)(__this->___Delegate_0);
		ObjectU5BU5D_t682* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t1082 *)L_6);
		VirtActionInvoker1< float >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0) */, (UnityAction_1_t1082 *)L_6, (float)((*(float*)((float*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m29738_gshared (InvokableCall_1_t5886 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t1082 * L_0 = (UnityAction_1_t1082 *)(__this->___Delegate_0);
		NullCheck((Delegate_t724 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3751((Delegate_t724 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t1082 * L_3 = (UnityAction_1_t1082 *)(__this->___Delegate_0);
		NullCheck((Delegate_t724 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m10185((Delegate_t724 *)L_3, /*hidden argument*/NULL);
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
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_3MethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_9.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2MethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m6087_gshared (UnityEvent_1_t966 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase__ctor_m10054((UnityEventBase_t2891 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m29739_gshared (UnityEvent_1_t966 * __this, UnityAction_1_t5887 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t5887 * L_0 = ___call;
		BaseInvokableCall_t2883 * L_1 = (( BaseInvokableCall_t2883 * (*) (Object_t * /* static, unused */, UnityAction_1_t5887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t5887 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_AddCall_m10059((UnityEventBase_t2891 *)__this, (BaseInvokableCall_t2883 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m29740_gshared (UnityEvent_1_t966 * __this, UnityAction_1_t5887 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t5887 * L_0 = ___call;
		NullCheck((Delegate_t724 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3751((Delegate_t724 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t5887 * L_2 = ___call;
		NullCheck((Delegate_t724 *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m10185((Delegate_t724 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_RemoveListener_m10060((UnityEventBase_t2891 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m6339_gshared (UnityEvent_1_t966 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t1203* L_2 = (TypeU5BU5D_t1203*)((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m10062(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t1203*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2883 * UnityEvent_1_GetDelegate_m6340_gshared (UnityEvent_1_t966 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t5888 * L_2 = (InvokableCall_1_t5888 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5888 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2883 * UnityEvent_1_GetDelegate_m29741_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5887 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t5887 * L_0 = ___action;
		InvokableCall_1_t5888 * L_1 = (InvokableCall_1_t5888 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5888 *, UnityAction_1_t5887 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (UnityAction_1_t5887 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m6096_gshared (UnityEvent_1_t966 * __this, Vector2_t110  ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (ObjectU5BU5D_t682*)(__this->___m_InvokeArray_4);
		Vector2_t110  L_1 = ___arg0;
		Vector2_t110  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t682* L_4 = (ObjectU5BU5D_t682*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_Invoke_m10061((UnityEventBase_t2891 *)__this, (ObjectU5BU5D_t682*)L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_9MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m29742_gshared (UnityAction_1_t5887 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m29743_gshared (UnityAction_1_t5887 * __this, Vector2_t110  ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m29743((UnityAction_1_t5887 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Vector2_t110  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Vector2_t110  ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern TypeInfo* Vector2_t110_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m29744_gshared (UnityAction_1_t5887 * __this, Vector2_t110  ___arg0, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t110_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m29745_gshared (UnityAction_1_t5887 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

struct BaseInvokableCall_t2883;
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Vector2>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Vector2>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t110_m64584_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t110_m64584(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisVector2_t110_m64584_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m29746_gshared (InvokableCall_1_t5888 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t2883 *)__this);
		BaseInvokableCall__ctor_m10032((BaseInvokableCall_t2883 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t5887 * L_2 = (UnityAction_1_t5887 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t724 * L_6 = Delegate_CreateDelegate_m10186(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t724 * L_7 = Delegate_Combine_m3759(NULL /*static, unused*/, (Delegate_t724 *)L_2, (Delegate_t724 *)((UnityAction_1_t5887 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t5887 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m29747_gshared (InvokableCall_1_t5888 * __this, UnityAction_1_t5887 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t2883 *)__this);
		BaseInvokableCall__ctor_m10031((BaseInvokableCall_t2883 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t5887 * L_0 = (UnityAction_1_t5887 *)(__this->___Delegate_0);
		UnityAction_1_t5887 * L_1 = ___callback;
		Delegate_t724 * L_2 = Delegate_Combine_m3759(NULL /*static, unused*/, (Delegate_t724 *)L_0, (Delegate_t724 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t5887 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1_Invoke_m29748_gshared (InvokableCall_1_t5888 * __this, ObjectU5BU5D_t682* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t682* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t711 * L_1 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_1, (String_t*)(String_t*) &_stringLiteral2020, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t682* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t5887 * L_4 = (UnityAction_1_t5887 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m10033(NULL /*static, unused*/, (Delegate_t724 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t5887 * L_6 = (UnityAction_1_t5887 *)(__this->___Delegate_0);
		ObjectU5BU5D_t682* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t5887 *)L_6);
		VirtActionInvoker1< Vector2_t110  >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0) */, (UnityAction_1_t5887 *)L_6, (Vector2_t110 )((*(Vector2_t110 *)((Vector2_t110 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m29749_gshared (InvokableCall_1_t5888 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t5887 * L_0 = (UnityAction_1_t5887 *)(__this->___Delegate_0);
		NullCheck((Delegate_t724 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3751((Delegate_t724 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t5887 * L_3 = (UnityAction_1_t5887 *)(__this->___Delegate_0);
		NullCheck((Delegate_t724 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m10185((Delegate_t724 *)L_3, /*hidden argument*/NULL);
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
// UnityEngine.Events.UnityEvent`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6MethodDeclarations.h"

// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10.h"
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"


// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_1__ctor_m30056_gshared (UnityEvent_1_t5907 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase__ctor_m10054((UnityEventBase_t2891 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m30058_gshared (UnityEvent_1_t5907 * __this, UnityAction_1_t5908 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t5908 * L_0 = ___call;
		BaseInvokableCall_t2883 * L_1 = (( BaseInvokableCall_t2883 * (*) (Object_t * /* static, unused */, UnityAction_1_t5908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (UnityAction_1_t5908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_AddCall_m10059((UnityEventBase_t2891 *)__this, (BaseInvokableCall_t2883 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m30060_gshared (UnityEvent_1_t5907 * __this, UnityAction_1_t5908 * ___call, const MethodInfo* method)
{
	{
		UnityAction_1_t5908 * L_0 = ___call;
		NullCheck((Delegate_t724 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3751((Delegate_t724 *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t5908 * L_2 = ___call;
		NullCheck((Delegate_t724 *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m10185((Delegate_t724 *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_RemoveListener_m10060((UnityEventBase_t2891 *)__this, (Object_t *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Byte>::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m30061_gshared (UnityEvent_1_t5907 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t1203* L_2 = (TypeU5BU5D_t1203*)((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		MethodInfo_t * L_4 = UnityEventBase_GetValidMethodInfo_m10062(NULL /*static, unused*/, (Object_t *)L_0, (String_t*)L_1, (TypeU5BU5D_t1203*)L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t2883 * UnityEvent_1_GetDelegate_m30062_gshared (UnityEvent_1_t5907 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_1_t5909 * L_2 = (InvokableCall_1_t5909 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5909 *, Object_t *, MethodInfo_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Byte>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t2883 * UnityEvent_1_GetDelegate_m30064_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5908 * ___action, const MethodInfo* method)
{
	{
		UnityAction_1_t5908 * L_0 = ___action;
		InvokableCall_1_t5909 * L_1 = (InvokableCall_1_t5909 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_1_t5909 *, UnityAction_1_t5908 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_1, (UnityAction_1_t5908 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m30065_gshared (UnityEvent_1_t5907 * __this, uint8_t ___arg0, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (ObjectU5BU5D_t682*)(__this->___m_InvokeArray_4);
		uint8_t L_1 = ___arg0;
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t682* L_4 = (ObjectU5BU5D_t682*)(__this->___m_InvokeArray_4);
		NullCheck((UnityEventBase_t2891 *)__this);
		UnityEventBase_Invoke_m10061((UnityEventBase_t2891 *)__this, (ObjectU5BU5D_t682*)L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityAction`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_10MethodDeclarations.h"



// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m30066_gshared (UnityAction_1_t5908 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m30067_gshared (UnityAction_1_t5908 * __this, uint8_t ___arg0, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m30067((UnityAction_1_t5908 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, uint8_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, uint8_t ___arg0, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Byte>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern TypeInfo* Byte_t741_il2cpp_TypeInfo_var;
extern "C" Object_t * UnityAction_1_BeginInvoke_m30068_gshared (UnityAction_1_t5908 * __this, uint8_t ___arg0, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Byte_t741_il2cpp_TypeInfo_var, &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m30069_gshared (UnityAction_1_t5908 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

struct BaseInvokableCall_t2883;
struct Object_t;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Byte>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Byte>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisByte_t741_m64585_gshared (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisByte_t741_m64585(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisByte_t741_m64585_gshared)(__this /* static, unused */, p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1__ctor_m30070_gshared (InvokableCall_1_t5909 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		NullCheck((BaseInvokableCall_t2883 *)__this);
		BaseInvokableCall__ctor_m10032((BaseInvokableCall_t2883 *)__this, (Object_t *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		UnityAction_1_t5908 * L_2 = (UnityAction_1_t5908 *)(__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t724 * L_6 = Delegate_CreateDelegate_m10186(NULL /*static, unused*/, (Type_t *)L_3, (Object_t *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		Delegate_t724 * L_7 = Delegate_Combine_m3759(NULL /*static, unused*/, (Delegate_t724 *)L_2, (Delegate_t724 *)((UnityAction_1_t5908 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t5908 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m30071_gshared (InvokableCall_1_t5909 * __this, UnityAction_1_t5908 * ___callback, const MethodInfo* method)
{
	{
		NullCheck((BaseInvokableCall_t2883 *)__this);
		BaseInvokableCall__ctor_m10031((BaseInvokableCall_t2883 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t5908 * L_0 = (UnityAction_1_t5908 *)(__this->___Delegate_0);
		UnityAction_1_t5908 * L_1 = ___callback;
		Delegate_t724 * L_2 = Delegate_Combine_m3759(NULL /*static, unused*/, (Delegate_t724 *)L_0, (Delegate_t724 *)L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_1_t5908 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Byte>::Invoke(System.Object[])
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void InvokableCall_1_Invoke_m30072_gshared (InvokableCall_1_t5909 * __this, ObjectU5BU5D_t682* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t682* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t711 * L_1 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_1, (String_t*)(String_t*) &_stringLiteral2020, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t682* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t5908 * L_4 = (UnityAction_1_t5908 *)(__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m10033(NULL /*static, unused*/, (Delegate_t724 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t5908 * L_6 = (UnityAction_1_t5908 *)(__this->___Delegate_0);
		ObjectU5BU5D_t682* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck((UnityAction_1_t5908 *)L_6);
		VirtActionInvoker1< uint8_t >::Invoke(11 /* System.Void UnityEngine.Events.UnityAction`1<System.Byte>::Invoke(T0) */, (UnityAction_1_t5908 *)L_6, (uint8_t)((*(uint8_t*)((uint8_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Byte>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m30073_gshared (InvokableCall_1_t5909 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t5908 * L_0 = (UnityAction_1_t5908 *)(__this->___Delegate_0);
		NullCheck((Delegate_t724 *)L_0);
		Object_t * L_1 = Delegate_get_Target_m3751((Delegate_t724 *)L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t5908 * L_3 = (UnityAction_1_t5908 *)(__this->___Delegate_0);
		NullCheck((Delegate_t724 *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m10185((Delegate_t724 *)L_3, /*hidden argument*/NULL);
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
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m30178_gshared (Func_2_t5916 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m30180_gshared (Func_2_t5916 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m30180((Func_2_t5916 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m30182_gshared (Func_2_t5916 * __this, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m30184_gshared (Func_2_t5916 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>
#include "System_Core_System_Linq_Enumerable_U3CCreateWhereIteratorU3E_0MethodDeclarations.h"

// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_8.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_8MethodDeclarations.h"


// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::.ctor()
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1__ctor_m30188_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TSource System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerator<TSource>.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m30189_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		return L_0;
	}
}
// System.Object System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerator_get_Current_m30190_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_IEnumerable_GetEnumerator_m30191_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(9 /* System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator() */, (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 *)__this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
extern "C" Object_t* U3CCreateWhereIteratorU3Ec__Iterator1D_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m30192_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * __this, const MethodInfo* method)
{
	U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * V_0 = {0};
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
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * L_2 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 *)L_2;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * L_3 = V_0;
		Object_t* L_4 = (Object_t*)(__this->___U3CU24U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * L_5 = V_0;
		Func_2_t1087 * L_6 = (Func_2_t1087 *)(__this->___U3CU24U3Epredicate_7);
		NullCheck(L_5);
		L_5->___predicate_3 = L_6;
		U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CCreateWhereIteratorU3Ec__Iterator1D_1_MoveNext_m30193_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * __this, const MethodInfo* method)
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
		goto IL_00be;
	}

IL_0023:
	{
		Object_t* L_2 = (Object_t*)(__this->___source_0);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2);
		__this->___U3CU24s_97U3E__0_1 = L_3;
		V_0 = (uint32_t)((int32_t)-3);
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_4 = V_0;
			if (((int32_t)((int32_t)L_4-(int32_t)1)) == 0)
			{
				goto IL_0089;
			}
		}

IL_0043:
		{
			goto IL_0089;
		}

IL_0048:
		{
			Object_t* L_5 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t*)L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_5);
			__this->___U3CelementU3E__1_2 = L_6;
			Func_2_t1087 * L_7 = (Func_2_t1087 *)(__this->___predicate_3);
			Object_t * L_8 = (Object_t *)(__this->___U3CelementU3E__1_2);
			NullCheck((Func_2_t1087 *)L_7);
			bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(11 /* TResult System.Func`2<System.Object,System.Boolean>::Invoke(T) */, (Func_2_t1087 *)L_7, (Object_t *)L_8);
			if (!L_9)
			{
				goto IL_0089;
			}
		}

IL_006f:
		{
			Object_t * L_10 = (Object_t *)(__this->___U3CelementU3E__1_2);
			__this->___U24current_5 = L_10;
			__this->___U24PC_4 = 1;
			V_1 = (bool)1;
			IL2CPP_LEAVE(0xC0, FINALLY_009e);
		}

IL_0089:
		{
			Object_t* L_11 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t *)L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_11);
			if (L_12)
			{
				goto IL_0048;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_1;
			if (!L_13)
			{
				goto IL_00a2;
			}
		}

IL_00a1:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00a2:
		{
			Object_t* L_14 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			if (L_14)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(158)
		}

IL_00ab:
		{
			Object_t* L_15 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
			NullCheck((Object_t *)L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_15);
			IL2CPP_END_FINALLY(158)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00b7:
	{
		__this->___U24PC_4 = (-1);
	}

IL_00be:
	{
		return 0;
	}

IL_00c0:
	{
		return 1;
	}
	// Dead block : IL_00c2: ldloc.2
}
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Dispose_m30194_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * __this, const MethodInfo* method)
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
			Object_t* L_2 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
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
			Object_t* L_3 = (Object_t*)(__this->___U3CU24s_97U3E__0_1);
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
// System.Void System.Linq.Enumerable/<CreateWhereIterator>c__Iterator1D`1<System.Object>::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCreateWhereIteratorU3Ec__Iterator1D_1_Reset_m30195_gshared (U3CCreateWhereIteratorU3Ec__Iterator1D_1_t5917 * __this, const MethodInfo* method)
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

// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"


// System.Boolean System.IEquatable`1<UnityEngine.UI.LayoutRebuilder>::Equals(T)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_58.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_58MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m30301_gshared (Func_2_t5923 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m30303_gshared (Func_2_t5923 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m30303((Func_2_t5923 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef float (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m30305_gshared (Func_2_t5923 * __this, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m30307_gshared (Func_2_t5923 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_1MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_51.h"
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_2.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator_.h"
// System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_2.h"
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_3.h"
// System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_51MethodDeclarations.h"
// System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator_MethodDeclarations.h"
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_2MethodDeclarations.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
#include "Parse_Unity_System_Runtime_CompilerServices_ConditionalWeakT_3MethodDeclarations.h"


// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
extern "C" void ConditionalWeakTable_2__ctor_m30346_gshared (ConditionalWeakTable_2_t5929 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t5934 * L_0 = (Dictionary_2_t5934 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Dictionary_2_t5934 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___data_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::CleanUp()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ConditionalWeakTable_2_CleanUp_m30347_gshared (ConditionalWeakTable_2_t5929 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Reference_t5930 * V_0 = {0};
	Enumerator_t5940  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = (Object_t*)(__this->___data_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::get_Keys() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		HashSet_1_t5939 * L_2 = (HashSet_1_t5939 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (HashSet_1_t5939 *, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, (Object_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((HashSet_1_t5939 *)L_2);
		Enumerator_t5940  L_3 = (( Enumerator_t5940  (*) (HashSet_1_t5939 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((HashSet_1_t5939 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_1 = (Enumerator_t5940 )L_3;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0018:
		{
			Reference_t5930 * L_4 = (( Reference_t5930 * (*) (Enumerator_t5940 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t5940 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			V_0 = (Reference_t5930 *)L_4;
			Reference_t5930 * L_5 = V_0;
			NullCheck((Reference_t5930 *)L_5);
			WeakReference_t2224 * L_6 = (( WeakReference_t2224 * (*) (Reference_t5930 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Reference_t5930 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
			NullCheck((WeakReference_t2224 *)L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, (WeakReference_t2224 *)L_6);
			if (L_7)
			{
				goto IL_003a;
			}
		}

IL_002d:
		{
			Object_t* L_8 = (Object_t*)(__this->___data_0);
			Reference_t5930 * L_9 = V_0;
			NullCheck((Object_t*)L_8);
			InterfaceFuncInvoker1< bool, Reference_t5930 * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::Remove(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_8, (Reference_t5930 *)L_9);
		}

IL_003a:
		{
			bool L_10 = (( bool (*) (Enumerator_t5940 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t5940 *)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
			if (L_10)
			{
				goto IL_0018;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (&V_1)));
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (&V_1)));
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0053:
	{
		return;
	}
}
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
extern "C" Object_t * ConditionalWeakTable_2_GetValue_m30348_gshared (ConditionalWeakTable_2_t5929 * __this, Object_t * ___key, CreateValueCallback_t5948 * ___createValueCallback, const MethodInfo* method)
{
	Reference_t5930 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	{
		NullCheck((ConditionalWeakTable_2_t5929 *)__this);
		(( void (*) (ConditionalWeakTable_2_t5929 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((ConditionalWeakTable_2_t5929 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		Object_t * L_0 = ___key;
		Reference_t5930 * L_1 = (Reference_t5930 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		(( void (*) (Reference_t5930 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(L_1, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		V_0 = (Reference_t5930 *)L_1;
		Object_t* L_2 = (Object_t*)(__this->___data_0);
		Reference_t5930 * L_3 = V_0;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker2< bool, Reference_t5930 *, Object_t ** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::TryGetValue(!0,!1&) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (Reference_t5930 *)L_3, (Object_t **)(&V_1));
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		Object_t * L_5 = V_1;
		return L_5;
	}

IL_001f:
	{
		Object_t* L_6 = (Object_t*)(__this->___data_0);
		Reference_t5930 * L_7 = V_0;
		CreateValueCallback_t5948 * L_8 = ___createValueCallback;
		Object_t * L_9 = ___key;
		NullCheck((CreateValueCallback_t5948 *)L_8);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::Invoke(TKey) */, (CreateValueCallback_t5948 *)L_8, (Object_t *)L_9);
		Object_t * L_11 = (Object_t *)L_10;
		V_2 = (Object_t *)L_11;
		NullCheck((Object_t*)L_6);
		InterfaceActionInvoker2< Reference_t5930 *, Object_t * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>::set_Item(!0,!1) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_6, (Reference_t5930 *)L_7, (Object_t *)L_11);
		Object_t * L_12 = V_2;
		return L_12;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::.ctor(TKey)
extern TypeInfo* WeakReference_t2224_il2cpp_TypeInfo_var;
extern "C" void Reference__ctor_m30349_gshared (Reference_t5930 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t2224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3417);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((Object_t *)(*(&___obj)));
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)(*(&___obj)));
		__this->___hashCode_0 = L_0;
		Object_t * L_1 = ___obj;
		Object_t * L_2 = L_1;
		WeakReference_t2224 * L_3 = (WeakReference_t2224 *)il2cpp_codegen_object_new (WeakReference_t2224_il2cpp_TypeInfo_var);
		WeakReference__ctor_m15140(L_3, (Object_t *)((Object_t *)L_2), /*hidden argument*/NULL);
		NullCheck((Reference_t5930 *)__this);
		(( void (*) (Reference_t5930 *, WeakReference_t2224 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Reference_t5930 *)__this, (WeakReference_t2224 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.WeakReference System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_WeakReference()
extern "C" WeakReference_t2224 * Reference_get_WeakReference_m30350_gshared (Reference_t5930 * __this, const MethodInfo* method)
{
	{
		WeakReference_t2224 * L_0 = (WeakReference_t2224 *)(__this->___U3CWeakReferenceU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::set_WeakReference(System.WeakReference)
extern "C" void Reference_set_WeakReference_m30351_gshared (Reference_t5930 * __this, WeakReference_t2224 * ___value, const MethodInfo* method)
{
	{
		WeakReference_t2224 * L_0 = ___value;
		__this->___U3CWeakReferenceU3Ek__BackingField_1 = L_0;
		return;
	}
}
// TKey System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::get_Value()
extern "C" Object_t * Reference_get_Value_m30352_gshared (Reference_t5930 * __this, const MethodInfo* method)
{
	{
		NullCheck((Reference_t5930 *)__this);
		WeakReference_t2224 * L_0 = (( WeakReference_t2224 * (*) (Reference_t5930 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Reference_t5930 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((WeakReference_t2224 *)L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t2224 *)L_0);
		return ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)));
	}
}
// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::GetHashCode()
extern "C" int32_t Reference_GetHashCode_m30353_gshared (Reference_t5930 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___hashCode_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>::Equals(System.Object)
extern "C" bool Reference_Equals_m30354_gshared (Reference_t5930 * __this, Object_t * ___obj, const MethodInfo* method)
{
	Reference_t5930 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = (Reference_t5930 *)((Reference_t5930 *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Reference_t5930 * L_1 = V_0;
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
		Reference_t5930 * L_2 = V_0;
		NullCheck((Object_t *)L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)L_2);
		NullCheck((Object_t *)__this);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)__this);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		Reference_t5930 * L_5 = V_0;
		NullCheck((Reference_t5930 *)L_5);
		WeakReference_t2224 * L_6 = (( WeakReference_t2224 * (*) (Reference_t5930 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Reference_t5930 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((WeakReference_t2224 *)L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t2224 *)L_6);
		NullCheck((Reference_t5930 *)__this);
		WeakReference_t2224 * L_8 = (( WeakReference_t2224 * (*) (Reference_t5930 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Reference_t5930 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		NullCheck((WeakReference_t2224 *)L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, (WeakReference_t2224 *)L_8);
		bool L_10 = Object_ReferenceEquals_m405(NULL /*static, unused*/, (Object_t *)L_7, (Object_t *)L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0MethodDeclarations.h"

// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_0.h"
// System.Collections.Generic.HashSet`1<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_gen_0MethodDeclarations.h"


// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.HashSet`1<T>)
extern "C" void Enumerator__ctor_m30459_gshared (Enumerator_t5941 * __this, HashSet_1_t1467 * ___hashset, const MethodInfo* method)
{
	{
		HashSet_1_t1467 * L_0 = ___hashset;
		__this->___hashset_0 = L_0;
		HashSet_1_t1467 * L_1 = ___hashset;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_9);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.HashSet`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m30461_gshared (Enumerator_t5941 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t5941 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5941 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral2481, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001d:
	{
		Object_t * L_2 = (Object_t *)(__this->___current_3);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m30463_gshared (Enumerator_t5941 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t5941 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5941 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___next_1 = 0;
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m30465_gshared (Enumerator_t5941 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t5941 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t5941 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		goto IL_0055;
	}

IL_0019:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		HashSet_1_t1467 * L_4 = (HashSet_1_t1467 *)(__this->___hashset_0);
		int32_t L_5 = V_0;
		NullCheck((HashSet_1_t1467 *)L_4);
		int32_t L_6 = (( int32_t (*) (HashSet_1_t1467 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((HashSet_1_t1467 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		HashSet_1_t1467 * L_7 = (HashSet_1_t1467 *)(__this->___hashset_0);
		NullCheck(L_7);
		ObjectU5BU5D_t682* L_8 = (ObjectU5BU5D_t682*)(L_7->___slots_2);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		__this->___current_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_8, L_10));
		return 1;
	}

IL_0055:
	{
		int32_t L_11 = (int32_t)(__this->___next_1);
		HashSet_1_t1467 * L_12 = (HashSet_1_t1467 *)(__this->___hashset_0);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)(L_12->___touched_3);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0019;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m30467_gshared (Enumerator_t5941 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___current_3);
		return L_0;
	}
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m30469_gshared (Enumerator_t5941 * __this, const MethodInfo* method)
{
	{
		__this->___hashset_0 = (HashSet_1_t1467 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::CheckState()
extern TypeInfo* ObjectDisposedException_t3296_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void Enumerator_CheckState_m30471_gshared (Enumerator_t5941 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5488);
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		HashSet_1_t1467 * L_0 = (HashSet_1_t1467 *)(__this->___hashset_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t3296 * L_1 = (ObjectDisposedException_t3296 *)il2cpp_codegen_object_new (ObjectDisposedException_t3296_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11824(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		HashSet_1_t1467 * L_2 = (HashSet_1_t1467 *)(__this->___hashset_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_9);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1429 * L_5 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_5, (String_t*)(String_t*) &_stringLiteral2482, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
#include "System.Core_ArrayTypes.h"
// System.Collections.Generic.HashSet`1/Link<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Link_gen.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_PrimeHelperMethodDeclarations.h"


// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m30472_gshared (HashSet_1_t1467 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		NullCheck((HashSet_1_t1467 *)__this);
		(( void (*) (HashSet_1_t1467 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((HashSet_1_t1467 *)__this, (int32_t)((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1__ctor_m7481_gshared (HashSet_1_t1467 * __this, Object_t* ___comparer, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___comparer;
		NullCheck((HashSet_1_t1467 *)__this);
		(( void (*) (HashSet_1_t1467 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((HashSet_1_t1467 *)__this, (int32_t)((int32_t)10), (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void HashSet_1__ctor_m30473_gshared (HashSet_1_t1467 * __this, Object_t* ___collection, const MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		NullCheck((HashSet_1_t1467 *)__this);
		(( void (*) (HashSet_1_t1467 *, Object_t*, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((HashSet_1_t1467 *)__this, (Object_t*)L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void HashSet_1__ctor_m30474_gshared (HashSet_1_t1467 * __this, Object_t* ___collection, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t* V_1 = {0};
	Object_t * V_2 = {0};
	Object_t* V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*)(String_t*) &_stringLiteral2477, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		V_0 = (int32_t)0;
		Object_t* L_2 = ___collection;
		V_1 = (Object_t*)((Object_t*)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Object_t* L_4 = V_1;
		NullCheck((Object_t*)L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_4);
		V_0 = (int32_t)L_5;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		Object_t* L_7 = ___comparer;
		NullCheck((HashSet_1_t1467 *)__this);
		(( void (*) (HashSet_1_t1467 *, int32_t, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((HashSet_1_t1467 *)__this, (int32_t)L_6, (Object_t*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_8 = ___collection;
		NullCheck((Object_t*)L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_8);
		V_3 = (Object_t*)L_9;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0041:
		{
			Object_t* L_10 = V_3;
			NullCheck((Object_t*)L_10);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_10);
			V_2 = (Object_t *)L_11;
			Object_t * L_12 = V_2;
			NullCheck((HashSet_1_t1467 *)__this);
			(( bool (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((HashSet_1_t1467 *)__this, (Object_t *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		}

IL_0050:
		{
			Object_t* L_13 = V_3;
			NullCheck((Object_t *)L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_13);
			if (L_14)
			{
				goto IL_0041;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			Object_t* L_15 = V_3;
			if (L_15)
			{
				goto IL_0064;
			}
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(96)
		}

IL_0064:
		{
			Object_t* L_16 = V_3;
			NullCheck((Object_t *)L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_16);
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m30475_gshared (HashSet_1_t1467 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_0 = ___info;
		__this->___si_8 = L_0;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30476_gshared (HashSet_1_t1467 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5941  L_0 = {0};
		(( void (*) (Enumerator_t5941 *, HashSet_1_t1467 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(&L_0, (HashSet_1_t1467 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t5941  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30477_gshared (HashSet_1_t1467 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m30478_gshared (HashSet_1_t1467 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = ___array;
		int32_t L_1 = ___index;
		NullCheck((HashSet_1_t1467 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t682*, int32_t >::Invoke(15 /* System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32) */, (HashSet_1_t1467 *)__this, (ObjectU5BU5D_t682*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30479_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		NullCheck((HashSet_1_t1467 *)__this);
		(( bool (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((HashSet_1_t1467 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m30480_gshared (HashSet_1_t1467 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5941  L_0 = {0};
		(( void (*) (Enumerator_t5941 *, HashSet_1_t1467 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(&L_0, (HashSet_1_t1467 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t5941  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m30481_gshared (HashSet_1_t1467 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)(__this->___count_5);
		return L_0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern TypeInfo* EqualityComparer_1_t5415_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_Init_m30482_gshared (HashSet_1_t1467 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		EqualityComparer_1_t5415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10398);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* G_B4_0 = {0};
	HashSet_1_t1467 * G_B4_1 = {0};
	Object_t* G_B3_0 = {0};
	HashSet_1_t1467 * G_B3_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_1 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_1, (String_t*)(String_t*) &_stringLiteral2478, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Object_t* L_2 = ___comparer;
		Object_t* L_3 = (Object_t*)L_2;
		G_B3_0 = L_3;
		G_B3_1 = ((HashSet_1_t1467 *)(__this));
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = ((HashSet_1_t1467 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t5415_il2cpp_TypeInfo_var);
		EqualityComparer_1_t5415 * L_4 = (( EqualityComparer_1_t5415 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		G_B4_0 = ((Object_t*)(L_4));
		G_B4_1 = ((HashSet_1_t1467 *)(G_B3_1));
	}

IL_0020:
	{
		NullCheck(G_B4_1);
		G_B4_1->___comparer_7 = G_B4_0;
		int32_t L_5 = ___capacity;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		___capacity = (int32_t)((int32_t)10);
	}

IL_002f:
	{
		int32_t L_6 = ___capacity;
		___capacity = (int32_t)((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_6))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_7 = ___capacity;
		NullCheck((HashSet_1_t1467 *)__this);
		(( void (*) (HashSet_1_t1467 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((HashSet_1_t1467 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		__this->___generation_9 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_InitArrays_m30483_gshared (HashSet_1_t1467 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_0 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___links_1 = ((LinkU5BU5D_t5942*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), L_1));
		__this->___empty_slot_4 = (-1);
		int32_t L_2 = ___size;
		__this->___slots_2 = ((ObjectU5BU5D_t682*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_2));
		__this->___touched_3 = 0;
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_3);
		__this->___threshold_6 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_3)->max_length)))))*(float)(0.9f)))));
		int32_t L_4 = (int32_t)(__this->___threshold_6);
		if (L_4)
		{
			goto IL_0068;
		}
	}
	{
		Int32U5BU5D_t484* L_5 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		__this->___threshold_6 = 1;
	}

IL_0068:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m30484_gshared (HashSet_1_t1467 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Link_t5943  V_1 = {0};
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___table_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2))-(int32_t)1));
		goto IL_00a9;
	}

IL_0010:
	{
		LinkU5BU5D_t5942* L_3 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		V_1 = (Link_t5943 )(*(Link_t5943 *)((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_3, L_4)));
		int32_t L_5 = (int32_t)((&V_1)->___HashCode_0);
		int32_t L_6 = ___hash;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_7 = ___hash;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)-2147483648)))))
		{
			goto IL_0082;
		}
	}
	{
		Object_t * L_8 = ___item;
		Object_t * L_9 = L_8;
		if (!((Object_t *)L_9))
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t682* L_10 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		Object_t * L_13 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12));
		if (((Object_t *)L_13))
		{
			goto IL_0082;
		}
	}

IL_005b:
	{
		Object_t * L_14 = ___item;
		Object_t * L_15 = L_14;
		if (((Object_t *)L_15))
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t682* L_16 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18));
		G_B8_0 = ((((Object_t*)(Object_t *)NULL) == ((Object_t*)(Object_t *)((Object_t *)L_19)))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = 0;
	}

IL_007d:
	{
		G_B10_0 = G_B8_0;
		goto IL_009a;
	}

IL_0082:
	{
		Object_t* L_20 = (Object_t*)(__this->___comparer_7);
		Object_t * L_21 = ___item;
		ObjectU5BU5D_t682* L_22 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_23 = V_0;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		NullCheck((Object_t*)L_20);
		bool L_25 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), (Object_t*)L_20, (Object_t *)L_21, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_22, L_24)));
		G_B10_0 = ((int32_t)(L_25));
	}

IL_009a:
	{
		if (!G_B10_0)
		{
			goto IL_00a1;
		}
	}
	{
		return 1;
	}

IL_00a1:
	{
		int32_t L_26 = (int32_t)((&V_1)->___Next_1);
		V_0 = (int32_t)L_26;
	}

IL_00a9:
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m30485_gshared (HashSet_1_t1467 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = ___array;
		int32_t L_1 = ___index;
		int32_t L_2 = (int32_t)(__this->___count_5);
		NullCheck((HashSet_1_t1467 *)__this);
		(( void (*) (HashSet_1_t1467 *, ObjectU5BU5D_t682*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)((HashSet_1_t1467 *)__this, (ObjectU5BU5D_t682*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_CopyTo_m30486_gshared (HashSet_1_t1467 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t682* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*)(String_t*) &_stringLiteral1952, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_3 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_3, (String_t*)(String_t*) &_stringLiteral2292, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index;
		ObjectU5BU5D_t682* L_5 = ___array;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentException_t711 * L_6 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_6, (String_t*)(String_t*) &_stringLiteral2479, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0037:
	{
		ObjectU5BU5D_t682* L_7 = ___array;
		NullCheck(L_7);
		int32_t L_8 = ___index;
		int32_t L_9 = ___count;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_t711 * L_10 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_10, (String_t*)(String_t*) &_stringLiteral2480, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_004d:
	{
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		goto IL_007e;
	}

IL_0056:
	{
		int32_t L_11 = V_0;
		NullCheck((HashSet_1_t1467 *)__this);
		int32_t L_12 = (( int32_t (*) (HashSet_1_t1467 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)((HashSet_1_t1467 *)__this, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		ObjectU5BU5D_t682* L_13 = ___array;
		int32_t L_14 = ___index;
		int32_t L_15 = (int32_t)L_14;
		___index = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
		ObjectU5BU5D_t682* L_16 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18));
	}

IL_007a:
	{
		int32_t L_19 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = (int32_t)(__this->___touched_3);
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_22 = V_1;
		int32_t L_23 = ___count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}

IL_0091:
	{
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern TypeInfo* PrimeHelper_t5945_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_Resize_m30487_gshared (HashSet_1_t1467 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PrimeHelper_t5945_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11341);
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t484* V_1 = {0};
	LinkU5BU5D_t5942* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t682* V_7 = {0};
	int32_t V_8 = 0;
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(PrimeHelper_t5945_il2cpp_TypeInfo_var);
		int32_t L_1 = (( int32_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t484*)((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t5942*)((LinkU5BU5D_t5942*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), L_3));
		V_3 = (int32_t)0;
		goto IL_00a6;
	}

IL_0027:
	{
		Int32U5BU5D_t484* L_4 = (Int32U5BU5D_t484*)(__this->___table_0);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_009a;
	}

IL_0038:
	{
		LinkU5BU5D_t5942* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ObjectU5BU5D_t682* L_9 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_10 = V_4;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((HashSet_1_t1467 *)__this);
		int32_t L_12 = (( int32_t (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t1467 *)__this, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_13 = (int32_t)L_12;
		V_8 = (int32_t)L_13;
		((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_13;
		int32_t L_14 = V_8;
		V_5 = (int32_t)L_14;
		int32_t L_15 = V_5;
		int32_t L_16 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)2147483647)))%(int32_t)L_16));
		LinkU5BU5D_t5942* L_17 = V_2;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Int32U5BU5D_t484* L_19 = V_1;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_17, L_18))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_19, L_21))-(int32_t)1));
		Int32U5BU5D_t484* L_22 = V_1;
		int32_t L_23 = V_6;
		int32_t L_24 = V_4;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_22, L_23)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		LinkU5BU5D_t5942* L_25 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_26 = V_4;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)(((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_4 = (int32_t)L_27;
	}

IL_009a:
	{
		int32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_29 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_30 = V_3;
		Int32U5BU5D_t484* L_31 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t484* L_32 = V_1;
		__this->___table_0 = L_32;
		LinkU5BU5D_t5942* L_33 = V_2;
		__this->___links_1 = L_33;
		int32_t L_34 = V_0;
		V_7 = (ObjectU5BU5D_t682*)((ObjectU5BU5D_t682*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_34));
		ObjectU5BU5D_t682* L_35 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		ObjectU5BU5D_t682* L_36 = V_7;
		int32_t L_37 = (int32_t)(__this->___touched_3);
		Array_Copy_m11470(NULL /*static, unused*/, (Array_t *)(Array_t *)L_35, (int32_t)0, (Array_t *)(Array_t *)L_36, (int32_t)0, (int32_t)L_37, /*hidden argument*/NULL);
		ObjectU5BU5D_t682* L_38 = V_7;
		__this->___slots_2 = L_38;
		int32_t L_39 = V_0;
		__this->___threshold_6 = (((int32_t)((float)((float)(((float)L_39))*(float)(0.9f)))));
		return;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m30488_gshared (HashSet_1_t1467 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		LinkU5BU5D_t5942* L_0 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)(((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_0, L_1))->___HashCode_0);
		return ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648)));
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m30489_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0011;
		}
	}
	{
		return ((int32_t)-2147483648);
	}

IL_0011:
	{
		Object_t* L_2 = (Object_t*)(__this->___comparer_7);
		Object_t * L_3 = ___item;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), (Object_t*)L_2, (Object_t *)L_3);
		return ((int32_t)((int32_t)L_4|(int32_t)((int32_t)-2147483648)));
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m30490_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((HashSet_1_t1467 *)__this);
		int32_t L_1 = (( int32_t (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t1467 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Object_t * L_6 = ___item;
		NullCheck((HashSet_1_t1467 *)__this);
		bool L_7 = (( bool (*) (HashSet_1_t1467 *, int32_t, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((HashSet_1_t1467 *)__this, (int32_t)L_4, (int32_t)L_5, (Object_t *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		int32_t L_8 = (int32_t)(__this->___count_5);
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
		V_3 = (int32_t)L_9;
		__this->___count_5 = L_9;
		int32_t L_10 = V_3;
		int32_t L_11 = (int32_t)(__this->___threshold_6);
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_005c;
		}
	}
	{
		NullCheck((HashSet_1_t1467 *)__this);
		(( void (*) (HashSet_1_t1467 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)((HashSet_1_t1467 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		int32_t L_12 = V_0;
		Int32U5BU5D_t484* L_13 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_13);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_13)->max_length)))));
	}

IL_005c:
	{
		int32_t L_14 = (int32_t)(__this->___empty_slot_4);
		V_2 = (int32_t)L_14;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_16 = (int32_t)(__this->___touched_3);
		int32_t L_17 = (int32_t)L_16;
		V_3 = (int32_t)L_17;
		__this->___touched_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		int32_t L_18 = V_3;
		V_2 = (int32_t)L_18;
		goto IL_0098;
	}

IL_0081:
	{
		LinkU5BU5D_t5942* L_19 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_20 = V_2;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)(((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_19, L_20))->___Next_1);
		__this->___empty_slot_4 = L_21;
	}

IL_0098:
	{
		LinkU5BU5D_t5942* L_22 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = V_0;
		((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_22, L_23))->___HashCode_0 = L_24;
		LinkU5BU5D_t5942* L_25 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		Int32U5BU5D_t484* L_27 = (Int32U5BU5D_t484*)(__this->___table_0);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		int32_t L_29 = L_28;
		((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_25, L_26))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_27, L_29))-(int32_t)1));
		Int32U5BU5D_t484* L_30 = (Int32U5BU5D_t484*)(__this->___table_0);
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
		ObjectU5BU5D_t682* L_33 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_34 = V_2;
		Object_t * L_35 = ___item;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, L_34)) = (Object_t *)L_35;
		int32_t L_36 = (int32_t)(__this->___generation_9);
		__this->___generation_9 = ((int32_t)((int32_t)L_36+(int32_t)1));
		return 1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m30491_gshared (HashSet_1_t1467 * __this, const MethodInfo* method)
{
	{
		__this->___count_5 = 0;
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)(__this->___table_0);
		Int32U5BU5D_t484* L_1 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_1);
		Array_Clear_m13135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t682* L_2 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		ObjectU5BU5D_t682* L_3 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		NullCheck(L_3);
		Array_Clear_m13135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/NULL);
		LinkU5BU5D_t5942* L_4 = (LinkU5BU5D_t5942*)(__this->___links_1);
		LinkU5BU5D_t5942* L_5 = (LinkU5BU5D_t5942*)(__this->___links_1);
		NullCheck(L_5);
		Array_Clear_m13135(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (int32_t)0, (int32_t)(((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		__this->___empty_slot_4 = (-1);
		__this->___touched_3 = 0;
		int32_t L_6 = (int32_t)(__this->___generation_9);
		__this->___generation_9 = ((int32_t)((int32_t)L_6+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m30492_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((HashSet_1_t1467 *)__this);
		int32_t L_1 = (( int32_t (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t1467 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Object_t * L_6 = ___item;
		NullCheck((HashSet_1_t1467 *)__this);
		bool L_7 = (( bool (*) (HashSet_1_t1467 *, int32_t, int32_t, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((HashSet_1_t1467 *)__this, (int32_t)L_4, (int32_t)L_5, (Object_t *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return L_7;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" bool HashSet_1_Remove_m30493_gshared (HashSet_1_t1467 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Link_t5943  V_4 = {0};
	Object_t * V_5 = {0};
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((HashSet_1_t1467 *)__this);
		int32_t L_1 = (( int32_t (*) (HashSet_1_t1467 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t1467 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t484* L_3 = (Int32U5BU5D_t484*)(__this->___table_0);
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
		Int32U5BU5D_t484* L_4 = (Int32U5BU5D_t484*)(__this->___table_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_2 = (int32_t)((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		V_3 = (int32_t)(-1);
	}

IL_002f:
	{
		LinkU5BU5D_t5942* L_8 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		V_4 = (Link_t5943 )(*(Link_t5943 *)((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_8, L_9)));
		int32_t L_10 = (int32_t)((&V_4)->___HashCode_0);
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-2147483648)))))
		{
			goto IL_00a2;
		}
	}
	{
		Object_t * L_13 = ___item;
		Object_t * L_14 = L_13;
		if (!((Object_t *)L_14))
		{
			goto IL_007b;
		}
	}
	{
		ObjectU5BU5D_t682* L_15 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17));
		if (((Object_t *)L_18))
		{
			goto IL_00a2;
		}
	}

IL_007b:
	{
		Object_t * L_19 = ___item;
		Object_t * L_20 = L_19;
		if (((Object_t *)L_20))
		{
			goto IL_009c;
		}
	}
	{
		ObjectU5BU5D_t682* L_21 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		Object_t * L_24 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
		G_B10_0 = ((((Object_t*)(Object_t *)NULL) == ((Object_t*)(Object_t *)((Object_t *)L_24)))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B10_0 = 0;
	}

IL_009d:
	{
		G_B12_0 = G_B10_0;
		goto IL_00ba;
	}

IL_00a2:
	{
		Object_t* L_25 = (Object_t*)(__this->___comparer_7);
		ObjectU5BU5D_t682* L_26 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_27 = V_2;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		Object_t * L_29 = ___item;
		NullCheck((Object_t*)L_25);
		bool L_30 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), (Object_t*)L_25, (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_26, L_28)), (Object_t *)L_29);
		G_B12_0 = ((int32_t)(L_30));
	}

IL_00ba:
	{
		if (!G_B12_0)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c4:
	{
		int32_t L_31 = V_2;
		V_3 = (int32_t)L_31;
		int32_t L_32 = (int32_t)((&V_4)->___Next_1);
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}

IL_00d5:
	{
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00de;
		}
	}
	{
		return 0;
	}

IL_00de:
	{
		int32_t L_35 = (int32_t)(__this->___count_5);
		__this->___count_5 = ((int32_t)((int32_t)L_35-(int32_t)1));
		int32_t L_36 = V_3;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_0113;
		}
	}
	{
		Int32U5BU5D_t484* L_37 = (Int32U5BU5D_t484*)(__this->___table_0);
		int32_t L_38 = V_1;
		LinkU5BU5D_t5942* L_39 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (int32_t)(((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_37, L_38)) = (int32_t)((int32_t)((int32_t)L_41+(int32_t)1));
		goto IL_0135;
	}

IL_0113:
	{
		LinkU5BU5D_t5942* L_42 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_43 = V_3;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		LinkU5BU5D_t5942* L_44 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = (int32_t)(((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_44, L_45))->___Next_1);
		((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_42, L_43))->___Next_1 = L_46;
	}

IL_0135:
	{
		LinkU5BU5D_t5942* L_47 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_48 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		int32_t L_49 = (int32_t)(__this->___empty_slot_4);
		((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_47, L_48))->___Next_1 = L_49;
		int32_t L_50 = V_2;
		__this->___empty_slot_4 = L_50;
		LinkU5BU5D_t5942* L_51 = (LinkU5BU5D_t5942*)(__this->___links_1);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		((Link_t5943 *)(Link_t5943 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = 0;
		ObjectU5BU5D_t682* L_53 = (ObjectU5BU5D_t682*)(__this->___slots_2);
		int32_t L_54 = V_2;
		Initobj (Object_t_il2cpp_TypeInfo_var, (&V_5));
		Object_t * L_55 = V_5;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		int32_t L_56 = (int32_t)(__this->___generation_9);
		__this->___generation_9 = ((int32_t)((int32_t)L_56+(int32_t)1));
		return 1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t1440_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_GetObjectData_m30494_gshared (HashSet_1_t1467 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2501);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1440 * L_0 = (NotImplementedException_t1440 *)il2cpp_codegen_object_new (NotImplementedException_t1440_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7378(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern TypeInfo* NotImplementedException_t1440_il2cpp_TypeInfo_var;
extern "C" void HashSet_1_OnDeserialization_m30495_gshared (HashSet_1_t1467 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2501);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2919 * L_0 = (SerializationInfo_t2919 *)(__this->___si_8);
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
		NotImplementedException_t1440 * L_1 = (NotImplementedException_t1440 *)il2cpp_codegen_object_new (NotImplementedException_t1440_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7378(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5941  HashSet_1_GetEnumerator_m30496_gshared (HashSet_1_t1467 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5941  L_0 = {0};
		(( void (*) (Enumerator_t5941 *, HashSet_1_t1467 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(&L_0, (HashSet_1_t1467 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_38MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.HashSet`1/Link<System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.HashSet`1/Link<System.Object>>(System.Int32)
extern "C" Link_t5943  Array_InternalArray__get_Item_TisLink_t5943_m64590_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisLink_t5943_m64590(__this, p0, method) (( Link_t5943  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisLink_t5943_m64590_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m30497_gshared (InternalEnumerator_1_t5944 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m30498_gshared (InternalEnumerator_1_t5944 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m30499_gshared (InternalEnumerator_1_t5944 * __this, const MethodInfo* method)
{
	{
		Link_t5943  L_0 = (( Link_t5943  (*) (InternalEnumerator_1_t5944 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t5944 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Link_t5943  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m30500_gshared (InternalEnumerator_1_t5944 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m30501_gshared (InternalEnumerator_1_t5944 * __this, const MethodInfo* method)
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
		int32_t L_2 = Array_get_Length_m15067((Array_t *)L_1, /*hidden argument*/NULL);
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Current()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" Link_t5943  InternalEnumerator_1_get_Current_m30502_gshared (InternalEnumerator_1_t5944 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
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
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral3681, /*hidden argument*/NULL);
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
		InvalidOperationException_t1429 * L_3 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_3, (String_t*)(String_t*) &_stringLiteral3682, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m15067((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Link_t5943  L_8 = (( Link_t5943  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.HashSet`1/Link<System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.HashSet`1/Link<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Link_genMethodDeclarations.h"



// System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_PrimeHelper.h"
#ifndef _MSC_VER
#else
#endif

// <PrivateImplementationDetails>
#include "System_Core_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$136
#include "System_Core_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Double
#include "mscorlib_System_Double.h"
// <PrivateImplementationDetails>
#include "System_Core_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"


// System.Void System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>::.cctor()
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3359____U24U24fieldU2D0_0_FieldInfo_var;
extern "C" void PrimeHelper__cctor_m30503_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		U3CPrivateImplementationDetailsU3E_t3359____U24U24fieldU2D0_0_FieldInfo_var = il2cpp_codegen_field_info_from_index(6610, 0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Int32U5BU5D_t484* L_0 = (Int32U5BU5D_t484*)((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, ((int32_t)34)));
		RuntimeHelpers_InitializeArray_m11435(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, (RuntimeFieldHandle_t4343 )LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3359____U24U24fieldU2D0_0_FieldInfo_var), /*hidden argument*/NULL);
		((PrimeHelper_t5945_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___primes_table_0 = L_0;
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>::TestPrime(System.Int32)
extern "C" bool PrimeHelper_TestPrime_m30504_gshared (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___x;
		if (!((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = ___x;
		double L_2 = sqrt((double)(((double)L_1)));
		V_0 = (int32_t)(((int32_t)L_2));
		V_1 = (int32_t)3;
		goto IL_0026;
	}

IL_0018:
	{
		int32_t L_3 = ___x;
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_3%(int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		int32_t L_5 = V_1;
		V_1 = (int32_t)((int32_t)((int32_t)L_5+(int32_t)2));
	}

IL_0026:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		int32_t L_8 = ___x;
		return ((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>::CalcPrime(System.Int32)
extern TypeInfo* PrimeHelper_t5945_il2cpp_TypeInfo_var;
extern "C" int32_t PrimeHelper_CalcPrime_m30505_gshared (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PrimeHelper_t5945_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11341);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___x;
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)-2)))-(int32_t)1));
		goto IL_001d;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PrimeHelper_t5945_il2cpp_TypeInfo_var);
		bool L_2 = (( bool (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_4+(int32_t)2));
	}

IL_001d:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)2147483647))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_6 = ___x;
		return L_6;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1/PrimeHelper<System.Object>::ToPrime(System.Int32)
extern TypeInfo* PrimeHelper_t5945_il2cpp_TypeInfo_var;
extern "C" int32_t PrimeHelper_ToPrime_m30506_gshared (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PrimeHelper_t5945_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11341);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)0;
		goto IL_0020;
	}

IL_0007:
	{
		int32_t L_0 = ___x;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t484* L_1 = ((PrimeHelper_t5945_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___primes_table_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		if ((((int32_t)L_0) > ((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3)))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t484* L_4 = ((PrimeHelper_t5945_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___primes_table_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Int32U5BU5D_t484* L_9 = ((PrimeHelper_t5945_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___primes_table_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_10 = ___x;
		IL2CPP_RUNTIME_CLASS_INIT(PrimeHelper_t5945_il2cpp_TypeInfo_var);
		int32_t L_11 = (( int32_t (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_11;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void CreateValueCallback__ctor_m30533_gshared (CreateValueCallback_t5948 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * CreateValueCallback_Invoke_m30534_gshared (CreateValueCallback_t5948 * __this, Object_t * ___key, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CreateValueCallback_Invoke_m30534((CreateValueCallback_t5948 *)__this->___prev_9,___key, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C" Object_t * CreateValueCallback_BeginInvoke_m30535_gshared (CreateValueCallback_t5948 * __this, Object_t * ___key, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___key;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * CreateValueCallback_EndInvoke_m30536_gshared (CreateValueCallback_t5948 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Func_6_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Func_6_gen_0MethodDeclarations.h"



// System.Void System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_6__ctor_m30537_gshared (Func_6_t5949 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5)
extern "C" Object_t * Func_6_Invoke_m30538_gshared (Func_6_t5949 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_6_Invoke_m30538((Func_6_t5949 *)__this->___prev_9,___arg1, ___arg2, ___arg3, ___arg4, ___arg5, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1, ___arg2, ___arg3, ___arg4, ___arg5,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1, ___arg2, ___arg3, ___arg4, ___arg5,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1, ___arg2, ___arg3, ___arg4, ___arg5,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(TArg1,TArg2,TArg3,TArg4,TArg5,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_6_BeginInvoke_m30539_gshared (Func_6_t5949 * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, Object_t * ___arg4, Object_t * ___arg5, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[6] = {0};
	__d_args[0] = ___arg1;
	__d_args[1] = ___arg2;
	__d_args[2] = ___arg3;
	__d_args[3] = ___arg4;
	__d_args[4] = ___arg5;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_6_EndInvoke_m30540_gshared (Func_6_t5949 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IProgress`1<System.Object>::Report(T)
// System.Linq.Enumerable/PredicateOf`1<System.Object>
#include "System_Core_System_Linq_Enumerable_PredicateOf_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/PredicateOf`1<System.Object>
#include "System_Core_System_Linq_Enumerable_PredicateOf_1_genMethodDeclarations.h"



// System.Void System.Linq.Enumerable/PredicateOf`1<System.Object>::.cctor()
extern "C" void PredicateOf_1__cctor_m30541_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Func_2_t1087 * L_0 = ((PredicateOf_1_t5950_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		IntPtr_t L_1 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1) };
		Func_2_t1087 * L_2 = (Func_2_t1087 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (Func_2_t1087 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, (Object_t *)NULL, (IntPtr_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		((PredicateOf_1_t5950_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1 = L_2;
	}

IL_0018:
	{
		Func_2_t1087 * L_3 = ((PredicateOf_1_t5950_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___U3CU3Ef__amU24cache1_1;
		((PredicateOf_1_t5950_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___Always_0 = L_3;
		return;
	}
}
// System.Boolean System.Linq.Enumerable/PredicateOf`1<System.Object>::<Always>m__76(T)
extern "C" bool PredicateOf_1_U3CAlwaysU3Em__76_m30542_gshared (Object_t * __this /* static, unused */, Object_t * ___t, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"

// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_Task.h"
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
#include "mscorlib_System_Action_1_gen_37.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl.h"
// System.Action`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Action_1_gen_13.h"
// System.AggregateException
#include "Parse_Unity_System_AggregateException.h"
// System.Threading.Tasks.Task
#include "Parse_Unity_System_Threading_Tasks_TaskMethodDeclarations.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayClMethodDeclarations.h"
// System.Action`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Action_1_gen_13MethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern TypeInfo* Task_t1210_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m30544_gshared (Task_1_t1393 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2446);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1210 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
		Task__ctor_m7241((Task_t1210 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m30545_gshared (Task_1_t1393 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1210 *)__this);
		Task_Wait_m7247((Task_t1210 *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = (Object_t *)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1172_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7285_MethodInfo_var;
extern "C" Task_t1210 * Task_1_ContinueWith_m30547_gshared (Task_1_t1393 * __this, Action_1_t1427 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2447);
		Action_1__ctor_m7285_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484485);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t5951 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t5951 * L_0 = (U3CU3Ec__DisplayClass1_t5951 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t5951 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t5951 *)L_0;
		U3CU3Ec__DisplayClass1_t5951 * L_1 = V_0;
		Action_1_t1427 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t5951 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1172 * L_5 = (Action_1_t1172 *)il2cpp_codegen_object_new (Action_1_t1172_il2cpp_TypeInfo_var);
		Action_1__ctor_m7285(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7285_MethodInfo_var);
		NullCheck((Task_t1210 *)__this);
		Task_t1210 * L_6 = Task_ContinueWith_m7248((Task_t1210 *)__this, (Action_1_t1172 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9574_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9575_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m30549_gshared (Task_1_t1393 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11354);
		IEnumerator_1_t9575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11352);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1172 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1210 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9574_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1172 * L_5 = (Action_1_t1172 *)InterfaceFuncInvoker0< Action_1_t1172 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9575_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1172 *)L_5;
				Action_1_t1172 * L_6 = V_0;
				NullCheck((Action_1_t1172 *)L_6);
				VirtActionInvoker1< Task_t1210 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1172 *)L_6, (Task_t1210 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1210 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30551_gshared (Task_1_t1393 * __this, Object_t * ___result, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			Object_t * L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1393 *)__this);
			(( void (*) (Task_1_t1393 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1393 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30553_gshared (Task_1_t1393 * __this, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			((Task_t1210 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1393 *)__this);
			(( void (*) (Task_1_t1393 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1393 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30555_gshared (Task_1_t1393 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1338 * L_3 = ___exception;
			((Task_t1210 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1393 *)__this);
			(( void (*) (Task_1_t1393 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1393 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
#include "mscorlib_System_Action_1_gen_37MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m30560_gshared (U3CU3Ec__DisplayClass1_t5951 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Object>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m30561_gshared (U3CU3Ec__DisplayClass1_t5951 * __this, Task_t1210 * ___t, const MethodInfo* method)
{
	{
		Action_1_t1427 * L_0 = (Action_1_t1427 *)(__this->___continuation_0);
		Task_t1210 * L_1 = ___t;
		NullCheck((Action_1_t1427 *)L_0);
		VirtActionInvoker1< Task_1_t1393 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Object>>::Invoke(!0) */, (Action_1_t1427 *)L_0, (Task_1_t1393 *)((Task_1_t1393 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`1<System.Object>
#include "System_Core_System_Func_1_gen_7MethodDeclarations.h"



// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m30568_gshared (Func_1_t1421 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`1<System.Object>::Invoke()
extern "C" Object_t * Func_1_Invoke_m30570_gshared (Func_1_t1421 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_1_Invoke_m30570((Func_1_t1421 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m30572_gshared (Func_1_t1421 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_1_EndInvoke_m30574_gshared (Func_1_t1421 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass1`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass1`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_1MethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_1__ctor_m30575_gshared (U3CU3Ec__DisplayClass1_1_t5952 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1`1<System.Object>::<StartNew>b__0()
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass1_1_U3CStartNewU3Eb__0_m30576_gshared (U3CU3Ec__DisplayClass1_1_t5952 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
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
		TaskCompletionSource_1_t1330 * L_0 = (TaskCompletionSource_1_t1330 *)(__this->___tcs_0);
		Func_1_t1421 * L_1 = (Func_1_t1421 *)(__this->___func_1);
		NullCheck((Func_1_t1421 *)L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(11 /* !0 System.Func`1<System.Object>::Invoke() */, (Func_1_t1421 *)L_1);
		NullCheck((TaskCompletionSource_1_t1330 *)L_0);
		(( void (*) (TaskCompletionSource_1_t1330 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t1330 *)L_0, (Object_t *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		goto IL_0027;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0018;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.Exception)
		V_0 = (Exception_t57 *)((Exception_t57 *)__exception_local);
		TaskCompletionSource_1_t1330 * L_3 = (TaskCompletionSource_1_t1330 *)(__this->___tcs_0);
		Exception_t57 * L_4 = V_0;
		NullCheck((TaskCompletionSource_1_t1330 *)L_3);
		(( void (*) (TaskCompletionSource_1_t1330 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t1330 *)L_3, (Exception_t57 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		goto IL_0027;
	} // end catch (depth: 1)

IL_0027:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AggregateException
#include "Parse_Unity_System_AggregateExceptionMethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7302_gshared (TaskCompletionSource_1_t1330 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1393 * L_0 = (Task_1_t1393 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1393 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		(( void (*) (TaskCompletionSource_1_t1330 *, Task_1_t1393 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t1330 *)__this, (Task_1_t1393 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1393 * TaskCompletionSource_1_get_Task_m7304_gshared (TaskCompletionSource_1_t1330 * __this, const MethodInfo* method)
{
	{
		Task_1_t1393 * L_0 = (Task_1_t1393 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30577_gshared (TaskCompletionSource_1_t1330 * __this, Task_1_t1393 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1393 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30578_gshared (TaskCompletionSource_1_t1330 * __this, Object_t * ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		Task_1_t1393 * L_0 = (( Task_1_t1393 * (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Object_t * L_1 = ___result;
		NullCheck((Task_1_t1393 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1393 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1393 *)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30579_gshared (TaskCompletionSource_1_t1330 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		Task_1_t1393 * L_0 = (( Task_1_t1393 * (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1338 * L_1 = ___exception;
		NullCheck((Task_1_t1393 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1393 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1393 *)L_0, (AggregateException_t1338 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m30580_gshared (TaskCompletionSource_1_t1330 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3373);
		ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14970);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1338 * V_0 = {0};
	ExceptionU5BU5D_t8332* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1338 *)((AggregateException_t1338 *)IsInst(L_0, AggregateException_t1338_il2cpp_TypeInfo_var));
		AggregateException_t1338 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		Task_1_t1393 * L_2 = (( Task_1_t1393 * (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1338 * L_3 = V_0;
		NullCheck((Task_1_t1393 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1393 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1393 *)L_2, (AggregateException_t1338 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		Task_1_t1393 * L_5 = (( Task_1_t1393 * (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8332*)((ExceptionU5BU5D_t8332*)SZArrayNew(ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8332* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8332* L_8 = V_1;
		AggregateException_t1338 * L_9 = (AggregateException_t1338 *)il2cpp_codegen_object_new (AggregateException_t1338_il2cpp_TypeInfo_var);
		AggregateException__ctor_m7209(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1338 *)L_9);
		AggregateException_t1338 * L_10 = AggregateException_Flatten_m7212((AggregateException_t1338 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1393 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1393 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1393 *)L_5, (AggregateException_t1338 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30581_gshared (TaskCompletionSource_1_t1330 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		Task_1_t1393 * L_0 = (( Task_1_t1393 * (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1393 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1393 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1393 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m7746_gshared (TaskCompletionSource_1_t1330 * __this, Object_t * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t1330 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t1330 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1740, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m30582_gshared (TaskCompletionSource_1_t1330 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1338 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t1330 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t1330 *)__this, (AggregateException_t1338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1741, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m30583_gshared (TaskCompletionSource_1_t1330 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t1330 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t1330 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1741, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m7303_gshared (TaskCompletionSource_1_t1330 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t1330 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t1330 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral1742, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
#include "mscorlib_System_Action_1_gen_38.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_0.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_0MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern TypeInfo* Task_t1210_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m30591_gshared (Task_1_t1418 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2446);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1210 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
		Task__ctor_m7241((Task_t1210 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m30592_gshared (Task_1_t1418 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1210 *)__this);
		Task_Wait_m7247((Task_t1210 *)__this, /*hidden argument*/NULL);
		uint8_t L_0 = (uint8_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1172_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7285_MethodInfo_var;
extern "C" Task_t1210 * Task_1_ContinueWith_m30594_gshared (Task_1_t1418 * __this, Action_1_t5954 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2447);
		Action_1__ctor_m7285_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484485);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t5955 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t5955 * L_0 = (U3CU3Ec__DisplayClass1_t5955 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t5955 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t5955 *)L_0;
		U3CU3Ec__DisplayClass1_t5955 * L_1 = V_0;
		Action_1_t5954 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t5955 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1172 * L_5 = (Action_1_t1172 *)il2cpp_codegen_object_new (Action_1_t1172_il2cpp_TypeInfo_var);
		Action_1__ctor_m7285(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7285_MethodInfo_var);
		NullCheck((Task_t1210 *)__this);
		Task_t1210 * L_6 = Task_ContinueWith_m7248((Task_t1210 *)__this, (Action_1_t1172 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9574_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9575_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m30596_gshared (Task_1_t1418 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11354);
		IEnumerator_1_t9575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11352);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1172 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1210 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9574_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1172 * L_5 = (Action_1_t1172 *)InterfaceFuncInvoker0< Action_1_t1172 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9575_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1172 *)L_5;
				Action_1_t1172 * L_6 = V_0;
				NullCheck((Action_1_t1172 *)L_6);
				VirtActionInvoker1< Task_t1210 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1172 *)L_6, (Task_t1210 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1210 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30598_gshared (Task_1_t1418 * __this, uint8_t ___result, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			uint8_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1418 *)__this);
			(( void (*) (Task_1_t1418 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1418 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30600_gshared (Task_1_t1418 * __this, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			((Task_t1210 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1418 *)__this);
			(( void (*) (Task_1_t1418 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1418 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30602_gshared (Task_1_t1418 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1338 * L_3 = ___exception;
			((Task_t1210 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1418 *)__this);
			(( void (*) (Task_1_t1418 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1418 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
#include "mscorlib_System_Action_1_gen_38MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Byte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m30607_gshared (U3CU3Ec__DisplayClass1_t5955 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Byte>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m30608_gshared (U3CU3Ec__DisplayClass1_t5955 * __this, Task_t1210 * ___t, const MethodInfo* method)
{
	{
		Action_1_t5954 * L_0 = (Action_1_t5954 *)(__this->___continuation_0);
		Task_t1210 * L_1 = ___t;
		NullCheck((Action_1_t5954 *)L_0);
		VirtActionInvoker1< Task_1_t1418 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>::Invoke(!0) */, (Action_1_t5954 *)L_0, (Task_1_t1418 *)((Task_1_t1418 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_0MethodDeclarations.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
#include "mscorlib_System_Action_1_gen_40.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_1.h"
// System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_Task_1_U3CU3Ec__DisplayCl_1MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern TypeInfo* Task_t1210_il2cpp_TypeInfo_var;
extern "C" void Task_1__ctor_m30619_gshared (Task_1_t1370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2446);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Task_t1210 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
		Task__ctor_m7241((Task_t1210 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7286_gshared (Task_1_t1370 * __this, const MethodInfo* method)
{
	{
		NullCheck((Task_t1210 *)__this);
		Task_Wait_m7247((Task_t1210 *)__this, /*hidden argument*/NULL);
		int32_t L_0 = (int32_t)(__this->___result_9);
		return L_0;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern TypeInfo* Action_1_t1172_il2cpp_TypeInfo_var;
extern const MethodInfo* Action_1__ctor_m7285_MethodInfo_var;
extern "C" Task_t1210 * Task_1_ContinueWith_m30620_gshared (Task_1_t1370 * __this, Action_1_t5957 * ___continuation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Action_1_t1172_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2447);
		Action_1__ctor_m7285_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484485);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass1_t5958 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass1_t5958 * L_0 = (U3CU3Ec__DisplayClass1_t5958 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass1_t5958 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CU3Ec__DisplayClass1_t5958 *)L_0;
		U3CU3Ec__DisplayClass1_t5958 * L_1 = V_0;
		Action_1_t5957 * L_2 = ___continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		U3CU3Ec__DisplayClass1_t5958 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Action_1_t1172 * L_5 = (Action_1_t1172 *)il2cpp_codegen_object_new (Action_1_t1172_il2cpp_TypeInfo_var);
		Action_1__ctor_m7285(L_5, (Object_t *)L_3, (IntPtr_t)L_4, /*hidden argument*/Action_1__ctor_m7285_MethodInfo_var);
		NullCheck((Task_t1210 *)__this);
		Task_t1210 * L_6 = Task_ContinueWith_m7248((Task_t1210 *)__this, (Action_1_t1172 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern TypeInfo* IEnumerable_1_t9574_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t9575_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Task_1_RunContinuations_m30621_gshared (Task_1_t1370 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_1_t9574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11354);
		IEnumerator_1_t9575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11352);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t1172 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Object_t* L_2 = (Object_t*)(((Task_t1210 *)__this)->___continuations_3);
			NullCheck((Object_t*)L_2);
			Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Action`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t9574_il2cpp_TypeInfo_var, (Object_t*)L_2);
			V_2 = (Object_t*)L_3;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0029;
			}

IL_001b:
			{
				Object_t* L_4 = V_2;
				NullCheck((Object_t*)L_4);
				Action_1_t1172 * L_5 = (Action_1_t1172 *)InterfaceFuncInvoker0< Action_1_t1172 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Action`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_t9575_il2cpp_TypeInfo_var, (Object_t*)L_4);
				V_0 = (Action_1_t1172 *)L_5;
				Action_1_t1172 * L_6 = V_0;
				NullCheck((Action_1_t1172 *)L_6);
				VirtActionInvoker1< Task_t1210 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0) */, (Action_1_t1172 *)L_6, (Task_t1210 *)__this);
			}

IL_0029:
			{
				Object_t* L_7 = V_2;
				NullCheck((Object_t *)L_7);
				bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_7);
				if (L_8)
				{
					goto IL_001b;
				}
			}

IL_0031:
			{
				IL2CPP_LEAVE(0x3D, FINALLY_0033);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0033;
		}

FINALLY_0033:
		{ // begin finally (depth: 2)
			{
				Object_t* L_9 = V_2;
				if (!L_9)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				Object_t* L_10 = V_2;
				NullCheck((Object_t *)L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, (Object_t *)L_10);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(51)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(51)
		{
			IL2CPP_JUMP_TBL(0x3D, IL_003d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_003d:
		{
			((Task_t1210 *)__this)->___continuations_3 = (Object_t*)NULL;
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Object_t * L_11 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m30622_gshared (Task_1_t1370 * __this, int32_t ___result, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			int32_t L_3 = ___result;
			__this->___result_9 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1370 *)__this);
			(( void (*) (Task_1_t1370 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1370 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m30623_gshared (Task_1_t1370 * __this, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			((Task_t1210 *)__this)->___isCanceled_5 = 1;
			Object_t * L_3 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/NULL);
			NullCheck((Task_1_t1370 *)__this);
			(( void (*) (Task_1_t1370 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1370 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m30624_gshared (Task_1_t1370 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
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
		Object_t * L_0 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
		Object_t * L_1 = (Object_t *)L_0;
		V_1 = (Object_t *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (bool)(((Task_t1210 *)__this)->___isCompleted_6);
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0019:
		{
			((Task_t1210 *)__this)->___isCompleted_6 = 1;
			AggregateException_t1338 * L_3 = ___exception;
			((Task_t1210 *)__this)->___exception_4 = L_3;
			Object_t * L_4 = (Object_t *)(((Task_t1210 *)__this)->___mutex_2);
			Monitor_PulseAll_m19251(NULL /*static, unused*/, (Object_t *)L_4, /*hidden argument*/NULL);
			NullCheck((Task_1_t1370 *)__this);
			(( void (*) (Task_1_t1370 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Task_1_t1370 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
			V_0 = (bool)1;
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_1;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0043:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
#include "mscorlib_System_Action_1_gen_40MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1__ctor_m30629_gshared (U3CU3Ec__DisplayClass1_t5958 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task`1/<>c__DisplayClass1<System.Int32>::<ContinueWith>b__0(System.Threading.Tasks.Task)
extern "C" void U3CU3Ec__DisplayClass1_U3CContinueWithU3Eb__0_m30630_gshared (U3CU3Ec__DisplayClass1_t5958 * __this, Task_t1210 * ___t, const MethodInfo* method)
{
	{
		Action_1_t5957 * L_0 = (Action_1_t5957 *)(__this->___continuation_0);
		Task_t1210 * L_1 = ___t;
		NullCheck((Action_1_t5957 *)L_0);
		VirtActionInvoker1< Task_1_t1370 * >::Invoke(11 /* System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>::Invoke(!0) */, (Action_1_t5957 *)L_0, (Task_1_t1370 *)((Task_1_t1370 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return;
	}
}
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_geMethodDeclarations.h"



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7297_gshared (TaskCompletionSource_1_t1343 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1370 * L_0 = (Task_1_t1370 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1370 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		(( void (*) (TaskCompletionSource_1_t1343 *, Task_1_t1370 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t1343 *)__this, (Task_1_t1370 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1370 * TaskCompletionSource_1_get_Task_m7299_gshared (TaskCompletionSource_1_t1343 * __this, const MethodInfo* method)
{
	{
		Task_1_t1370 * L_0 = (Task_1_t1370 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30631_gshared (TaskCompletionSource_1_t1343 * __this, Task_1_t1370 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1370 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7807_gshared (TaskCompletionSource_1_t1343 * __this, int32_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		Task_1_t1370 * L_0 = (( Task_1_t1370 * (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1343 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_1 = ___result;
		NullCheck((Task_1_t1370 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1370 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1370 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7828_gshared (TaskCompletionSource_1_t1343 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		Task_1_t1370 * L_0 = (( Task_1_t1370 * (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1343 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1338 * L_1 = ___exception;
		NullCheck((Task_1_t1370 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1370 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1370 *)L_0, (AggregateException_t1338 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m30632_gshared (TaskCompletionSource_1_t1343 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3373);
		ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14970);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1338 * V_0 = {0};
	ExceptionU5BU5D_t8332* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1338 *)((AggregateException_t1338 *)IsInst(L_0, AggregateException_t1338_il2cpp_TypeInfo_var));
		AggregateException_t1338 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		Task_1_t1370 * L_2 = (( Task_1_t1370 * (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1343 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1338 * L_3 = V_0;
		NullCheck((Task_1_t1370 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1370 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1370 *)L_2, (AggregateException_t1338 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		Task_1_t1370 * L_5 = (( Task_1_t1370 * (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1343 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8332*)((ExceptionU5BU5D_t8332*)SZArrayNew(ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8332* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8332* L_8 = V_1;
		AggregateException_t1338 * L_9 = (AggregateException_t1338 *)il2cpp_codegen_object_new (AggregateException_t1338_il2cpp_TypeInfo_var);
		AggregateException__ctor_m7209(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1338 *)L_9);
		AggregateException_t1338 * L_10 = AggregateException_Flatten_m7212((AggregateException_t1338 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1370 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1370 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1370 *)L_5, (AggregateException_t1338 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7829_gshared (TaskCompletionSource_1_t1343 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		Task_1_t1370 * L_0 = (( Task_1_t1370 * (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1343 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1370 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1370 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1370 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m7805_gshared (TaskCompletionSource_1_t1343 * __this, int32_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t1343 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t1343 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1740, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m7804_gshared (TaskCompletionSource_1_t1343 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1338 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t1343 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t1343 *)__this, (AggregateException_t1338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1741, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m30633_gshared (TaskCompletionSource_1_t1343 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t1343 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t1343 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1741, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m7298_gshared (TaskCompletionSource_1_t1343 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t1343 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t1343 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral1742, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Func_6_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>
#include "Parse_Unity_System_Func_6_gen_1MethodDeclarations.h"



// System.Void System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_6__ctor_m30634_gshared (Func_6_t5959 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5)
extern "C" Object_t * Func_6_Invoke_m30636_gshared (Func_6_t5959 * __this, Object_t * ___arg1, int32_t ___arg2, int32_t ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_6_Invoke_m30636((Func_6_t5959 *)__this->___prev_9,___arg1, ___arg2, ___arg3, ___arg4, ___arg5, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, int32_t ___arg2, int32_t ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1, ___arg2, ___arg3, ___arg4, ___arg5,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, int32_t ___arg2, int32_t ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1, ___arg2, ___arg3, ___arg4, ___arg5,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___arg2, int32_t ___arg3, Object_t * ___arg4, Object_t * ___arg5, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1, ___arg2, ___arg3, ___arg4, ___arg5,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>::BeginInvoke(TArg1,TArg2,TArg3,TArg4,TArg5,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * Func_6_BeginInvoke_m30638_gshared (Func_6_t5959 * __this, Object_t * ___arg1, int32_t ___arg2, int32_t ___arg3, Object_t * ___arg4, Object_t * ___arg5, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___arg1;
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___arg2);
	__d_args[2] = Box(Int32_t82_il2cpp_TypeInfo_var, &___arg3);
	__d_args[3] = ___arg4;
	__d_args[4] = ___arg5;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`6<System.Object,System.Int32,System.Int32,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_6_EndInvoke_m30640_gshared (Func_6_t5959 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_59.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_59MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m30641_gshared (Func_2_t5960 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Int32>::Invoke(T)
extern "C" int32_t Func_2_Invoke_m30643_gshared (Func_2_t5960 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m30643((Func_2_t5960 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m30645_gshared (Func_2_t5960 * __this, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_2_EndInvoke_m30647_gshared (Func_2_t5960 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass7`4<System.Object,System.Int32,System.Int32,System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass7`4<System.Object,System.Int32,System.Int32,System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_2MethodDeclarations.h"

// System.Func`6<System.Object,System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>
#include "Parse_Unity_System_Func_6_gen_2.h"
// System.Func`6<System.Object,System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>
#include "Parse_Unity_System_Func_6_gen_2MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass7`4<System.Object,System.Int32,System.Int32,System.Int32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_4__ctor_m30652_gshared (U3CU3Ec__DisplayClass7_4_t5961 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IAsyncResult System.Threading.Tasks.TaskFactory/<>c__DisplayClass7`4<System.Object,System.Int32,System.Int32,System.Int32>::<FromAsync>b__6(System.AsyncCallback,System.Object)
extern "C" Object_t * U3CU3Ec__DisplayClass7_4_U3CFromAsyncU3Eb__6_m30653_gshared (U3CU3Ec__DisplayClass7_4_t5961 * __this, AsyncCallback_t386 * ___callback, Object_t * ____, const MethodInfo* method)
{
	{
		Func_6_t1424 * L_0 = (Func_6_t1424 *)(__this->___beginMethod_0);
		Object_t * L_1 = (Object_t *)(__this->___arg1_1);
		int32_t L_2 = (int32_t)(__this->___arg2_2);
		int32_t L_3 = (int32_t)(__this->___arg3_3);
		AsyncCallback_t386 * L_4 = ___callback;
		Object_t * L_5 = (Object_t *)(__this->___state_4);
		NullCheck((Func_6_t1424 *)L_0);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, int32_t, AsyncCallback_t386 *, Object_t * >::Invoke(11 /* TResult System.Func`6<System.Object,System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5) */, (Func_6_t1424 *)L_0, (Object_t *)L_1, (int32_t)L_2, (int32_t)L_3, (AsyncCallback_t386 *)L_4, (Object_t *)L_5);
		return L_6;
	}
}
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_genMethodDeclarations.h"



// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_3__ctor_m7382_gshared (Func_3_t1194 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
extern "C" Object_t * Func_3_Invoke_m30656_gshared (Func_3_t1194 * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_3_Invoke_m30656((Func_3_t1194 *)__this->___prev_9,___arg1, ___arg2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg2, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1, ___arg2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_3_BeginInvoke_m30658_gshared (Func_3_t1194 * __this, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg1;
	__d_args[1] = ___arg2;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_3_EndInvoke_m30660_gshared (Func_3_t1194 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_3MethodDeclarations.h"

// System.Func`2<System.IAsyncResult,System.Int32>
#include "System_Core_System_Func_2_gen_3.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"
// System.Func`2<System.IAsyncResult,System.Int32>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistrationMethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Int32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1b_1__ctor_m30661_gshared (U3CU3Ec__DisplayClass1b_1_t5962 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Int32>::<FromAsync>b__18()
extern "C" void U3CU3Ec__DisplayClass1b_1_U3CFromAsyncU3Eb__18_m30662_gshared (U3CU3Ec__DisplayClass1b_1_t5962 * __this, const MethodInfo* method)
{
	{
		TaskCompletionSource_1_t1343 * L_0 = (TaskCompletionSource_1_t1343 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t1343 *)L_0);
		(( bool (*) (TaskCompletionSource_1_t1343 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t1343 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass1b`1<System.Int32>::<FromAsync>b__19(System.IAsyncResult)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass1b_1_U3CFromAsyncU3Eb__19_m30663_gshared (U3CU3Ec__DisplayClass1b_1_t5962 * __this, Object_t * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t57 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		Func_2_t1423 * L_0 = (Func_2_t1423 *)(__this->___endMethod_2);
		Object_t * L_1 = ___result;
		NullCheck((Func_2_t1423 *)L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(11 /* !1 System.Func`2<System.IAsyncResult,System.Int32>::Invoke(!0) */, (Func_2_t1423 *)L_0, (Object_t *)L_1);
		V_0 = (int32_t)L_2;
		TaskCompletionSource_1_t1343 * L_3 = (TaskCompletionSource_1_t1343 *)(__this->___tcs_0);
		int32_t L_4 = V_0;
		NullCheck((TaskCompletionSource_1_t1343 *)L_3);
		(( bool (*) (TaskCompletionSource_1_t1343 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t1343 *)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		CancellationTokenRegistration_t1340 * L_5 = (CancellationTokenRegistration_t1340 *)&(__this->___cancellation_1);
		CancellationTokenRegistration_Dispose_m7220((CancellationTokenRegistration_t1340 *)L_5, /*hidden argument*/NULL);
		goto IL_0042;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0027;
		throw e;
	}

CATCH_0027:
	{ // begin catch(System.Exception)
		V_1 = (Exception_t57 *)((Exception_t57 *)__exception_local);
		TaskCompletionSource_1_t1343 * L_6 = (TaskCompletionSource_1_t1343 *)(__this->___tcs_0);
		Exception_t57 * L_7 = V_1;
		NullCheck((TaskCompletionSource_1_t1343 *)L_6);
		(( bool (*) (TaskCompletionSource_1_t1343 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t1343 *)L_6, (Exception_t57 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		CancellationTokenRegistration_t1340 * L_8 = (CancellationTokenRegistration_t1340 *)&(__this->___cancellation_1);
		CancellationTokenRegistration_Dispose_m7220((CancellationTokenRegistration_t1340 *)L_8, /*hidden argument*/NULL);
		goto IL_0042;
	} // end catch (depth: 1)

IL_0042:
	{
		return;
	}
}
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass4`3<System.Object,System.Int32,System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskFactory/<>c__DisplayClass4`3<System.Object,System.Int32,System.Int32>
#include "Parse_Unity_System_Threading_Tasks_TaskFactory_U3CU3Ec__Disp_4MethodDeclarations.h"



// System.Void System.Threading.Tasks.TaskFactory/<>c__DisplayClass4`3<System.Object,System.Int32,System.Int32>::.ctor()
extern "C" void U3CU3Ec__DisplayClass4_3__ctor_m30667_gshared (U3CU3Ec__DisplayClass4_3_t5963 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IAsyncResult System.Threading.Tasks.TaskFactory/<>c__DisplayClass4`3<System.Object,System.Int32,System.Int32>::<FromAsync>b__3(System.AsyncCallback,System.Object)
extern "C" Object_t * U3CU3Ec__DisplayClass4_3_U3CFromAsyncU3Eb__3_m30668_gshared (U3CU3Ec__DisplayClass4_3_t5963 * __this, AsyncCallback_t386 * ___callback, Object_t * ____, const MethodInfo* method)
{
	{
		Func_6_t1424 * L_0 = (Func_6_t1424 *)(__this->___beginMethod_0);
		Object_t * L_1 = (Object_t *)(__this->___arg1_1);
		int32_t L_2 = (int32_t)(__this->___arg2_2);
		int32_t L_3 = (int32_t)(__this->___arg3_3);
		AsyncCallback_t386 * L_4 = ___callback;
		Object_t * L_5 = (Object_t *)(__this->___state_4);
		NullCheck((Func_6_t1424 *)L_0);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, int32_t, AsyncCallback_t386 *, Object_t * >::Invoke(11 /* TResult System.Func`6<System.Object,System.Int32,System.Int32,System.AsyncCallback,System.Object,System.IAsyncResult>::Invoke(TArg1,TArg2,TArg3,TArg4,TArg5) */, (Func_6_t1424 *)L_0, (Object_t *)L_1, (int32_t)L_2, (int32_t)L_3, (AsyncCallback_t386 *)L_4, (Object_t *)L_5);
		return L_6;
	}
}
// Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_MissingExtensions_U3CZipU3Ed__9_3.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>
#include "Parse_Unity_Parse_Internal_MissingExtensions_U3CZipU3Ed__9_3MethodDeclarations.h"

// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"


// System.Collections.Generic.IEnumerator`1<TResult> Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
extern TypeInfo* Thread_t1461_il2cpp_TypeInfo_var;
extern "C" Object_t* U3CZipU3Ed__9_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m30669_gshared (U3CZipU3Ed__9_3_t5964 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2546);
		s_Il2CppMethodIntialized = true;
	}
	U3CZipU3Ed__9_3_t5964 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
		Thread_t1461 * L_0 = Thread_get_CurrentThread_m7449(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((Thread_t1461 *)L_0);
		int32_t L_1 = Thread_get_ManagedThreadId_m7450((Thread_t1461 *)L_0, /*hidden argument*/NULL);
		int32_t L_2 = (int32_t)(__this->___U3CU3El__initialThreadId_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = (int32_t)(__this->___U3CU3E1__state_1);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U3CU3E1__state_1 = 0;
		V_0 = (U3CZipU3Ed__9_3_t5964 *)__this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CZipU3Ed__9_3_t5964 * L_4 = (U3CZipU3Ed__9_3_t5964 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CZipU3Ed__9_3_t5964 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_4, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (U3CZipU3Ed__9_3_t5964 *)L_4;
	}

IL_002e:
	{
		U3CZipU3Ed__9_3_t5964 * L_5 = V_0;
		Object_t* L_6 = (Object_t*)(__this->___U3CU3E3__list1_4);
		NullCheck(L_5);
		L_5->___list1_3 = L_6;
		U3CZipU3Ed__9_3_t5964 * L_7 = V_0;
		Object_t* L_8 = (Object_t*)(__this->___U3CU3E3__list2_6);
		NullCheck(L_7);
		L_7->___list2_5 = L_8;
		U3CZipU3Ed__9_3_t5964 * L_9 = V_0;
		Func_3_t1194 * L_10 = (Func_3_t1194 *)(__this->___U3CU3E3__zipper_8);
		NullCheck(L_9);
		L_9->___zipper_7 = L_10;
		U3CZipU3Ed__9_3_t5964 * L_11 = V_0;
		return L_11;
	}
}
// System.Collections.IEnumerator Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * U3CZipU3Ed__9_3_System_Collections_IEnumerable_GetEnumerator_m30670_gshared (U3CZipU3Ed__9_3_t5964 * __this, const MethodInfo* method)
{
	{
		NullCheck((U3CZipU3Ed__9_3_t5964 *)__this);
		Object_t* L_0 = (( Object_t* (*) (U3CZipU3Ed__9_3_t5964 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((U3CZipU3Ed__9_3_t5964 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_0;
	}
}
// System.Boolean Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" bool U3CZipU3Ed__9_3_MoveNext_m30671_gshared (U3CZipU3Ed__9_3_t5964 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___U3CU3E1__state_1);
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0017;
		}
		if (L_1 == 1)
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0093;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_1 = (-1);
		Object_t* L_2 = (Object_t*)(__this->___list1_3);
		NullCheck((Object_t*)L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2);
		__this->___U3Ce1U3E5__a_9 = L_3;
		Object_t* L_4 = (Object_t*)(__this->___list2_5);
		NullCheck((Object_t*)L_4);
		Object_t* L_5 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_4);
		__this->___U3Ce2U3E5__b_10 = L_5;
		goto IL_0079;
	}

IL_0042:
	{
		Func_3_t1194 * L_6 = (Func_3_t1194 *)(__this->___zipper_7);
		Object_t* L_7 = (Object_t*)(__this->___U3Ce1U3E5__a_9);
		NullCheck((Object_t*)L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_7);
		Object_t* L_9 = (Object_t*)(__this->___U3Ce2U3E5__b_10);
		NullCheck((Object_t*)L_9);
		Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), (Object_t*)L_9);
		NullCheck((Func_3_t1194 *)L_6);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, Object_t * >::Invoke(11 /* !2 System.Func`3<System.Object,System.Object,System.Object>::Invoke(!0,!1) */, (Func_3_t1194 *)L_6, (Object_t *)L_8, (Object_t *)L_10);
		__this->___U3CU3E2__current_0 = L_11;
		__this->___U3CU3E1__state_1 = 1;
		return 1;
	}

IL_0072:
	{
		__this->___U3CU3E1__state_1 = (-1);
	}

IL_0079:
	{
		Object_t* L_12 = (Object_t*)(__this->___U3Ce1U3E5__a_9);
		NullCheck((Object_t *)L_12);
		bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_12);
		if (!L_13)
		{
			goto IL_0093;
		}
	}
	{
		Object_t* L_14 = (Object_t*)(__this->___U3Ce2U3E5__b_10);
		NullCheck((Object_t *)L_14);
		bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, (Object_t *)L_14);
		if (L_15)
		{
			goto IL_0042;
		}
	}

IL_0093:
	{
		return 0;
	}
}
// TResult Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern "C" Object_t * U3CZipU3Ed__9_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m30672_gshared (U3CZipU3Ed__9_3_t5964 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CZipU3Ed__9_3_System_Collections_IEnumerator_Reset_m30673_gshared (U3CZipU3Ed__9_3_t5964 * __this, const MethodInfo* method)
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
// System.Void Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>::System.IDisposable.Dispose()
extern "C" void U3CZipU3Ed__9_3_System_IDisposable_Dispose_m30674_gshared (U3CZipU3Ed__9_3_t5964 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Object Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CZipU3Ed__9_3_System_Collections_IEnumerator_get_Current_m30675_gshared (U3CZipU3Ed__9_3_t5964 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void Parse.Internal.MissingExtensions/<Zip>d__9`3<System.Object,System.Object,System.Object>::.ctor(System.Int32)
extern TypeInfo* Thread_t1461_il2cpp_TypeInfo_var;
extern "C" void U3CZipU3Ed__9_3__ctor_m30676_gshared (U3CZipU3Ed__9_3_t5964 * __this, int32_t ___U3CU3E1__state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2546);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state;
		__this->___U3CU3E1__state_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
		Thread_t1461 * L_1 = Thread_get_CurrentThread_m7449(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck((Thread_t1461 *)L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m7450((Thread_t1461 *)L_1, /*hidden argument*/NULL);
		__this->___U3CU3El__initialThreadId_2 = L_2;
		return;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Int32,System.Byte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_1.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Int32,System.Byte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_1MethodDeclarations.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Byte>
#include "System_Core_System_Func_2_gen_60.h"
// System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Byte>
#include "System_Core_System_Func_2_gen_60MethodDeclarations.h"


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Int32,System.Byte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass1_2__ctor_m30684_gshared (U3CU3Ec__DisplayClass1_2_t5965 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// TResult Parse.Internal.InternalExtensions/<>c__DisplayClass1`2<System.Int32,System.Byte>::<OnSuccess>b__0(System.Threading.Tasks.Task)
extern "C" uint8_t U3CU3Ec__DisplayClass1_2_U3COnSuccessU3Eb__0_m30685_gshared (U3CU3Ec__DisplayClass1_2_t5965 * __this, Task_t1210 * ___t, const MethodInfo* method)
{
	{
		Func_2_t1419 * L_0 = (Func_2_t1419 *)(__this->___continuation_0);
		Task_t1210 * L_1 = ___t;
		NullCheck((Func_2_t1419 *)L_0);
		uint8_t L_2 = (uint8_t)VirtFuncInvoker1< uint8_t, Task_1_t1370 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task`1<System.Int32>,System.Byte>::Invoke(!0) */, (Func_2_t1419 *)L_0, (Task_1_t1370 *)((Task_1_t1370 *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))));
		return L_2;
	}
}
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Byte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_2.h"
#ifndef _MSC_VER
#else
#endif
// Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Byte>
#include "Parse_Unity_Parse_Internal_InternalExtensions_U3CU3Ec__Displ_2MethodDeclarations.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_5.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1.h"
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
#include "Parse_Unity_System_Runtime_ExceptionServices_ExceptionDispat.h"
// System.Func`2<System.Threading.Tasks.Task,System.Byte>
#include "System_Core_System_Func_2_gen_61.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_1MethodDeclarations.h"
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
#include "Parse_Unity_System_Runtime_ExceptionServices_ExceptionDispatMethodDeclarations.h"
// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_5MethodDeclarations.h"
// System.Func`2<System.Threading.Tasks.Task,System.Byte>
#include "System_Core_System_Func_2_gen_61MethodDeclarations.h"
struct Task_t1210;
struct Task_1_t1418;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Byte>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Byte>(T)
extern "C" Task_1_t1418 * Task_FromResult_TisByte_t741_m7435_gshared (Object_t * __this /* static, unused */, uint8_t ___result, const MethodInfo* method);
#define Task_FromResult_TisByte_t741_m7435(__this /* static, unused */, ___result, method) (( Task_1_t1418 * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))Task_FromResult_TisByte_t741_m7435_gshared)(__this /* static, unused */, ___result, method)


// System.Void Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Byte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m30690_gshared (U3CU3Ec__DisplayClass7_1_t5966 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> Parse.Internal.InternalExtensions/<>c__DisplayClass7`1<System.Byte>::<OnSuccess>b__6(System.Threading.Tasks.Task)
extern TypeInfo* Byte_t741_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1210_il2cpp_TypeInfo_var;
extern "C" Task_1_t1418 * U3CU3Ec__DisplayClass7_1_U3COnSuccessU3Eb__6_m30691_gshared (U3CU3Ec__DisplayClass7_1_t5966 * __this, Task_t1210 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		Task_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2446);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1338 * V_0 = {0};
	TaskCompletionSource_1_t5967 * V_1 = {0};
	uint8_t V_2 = 0x0;
	{
		Task_t1210 * L_0 = ___t;
		NullCheck((Task_t1210 *)L_0);
		bool L_1 = Task_get_IsFaulted_m7246((Task_t1210 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Task_t1210 * L_2 = ___t;
		NullCheck((Task_t1210 *)L_2);
		AggregateException_t1338 * L_3 = Task_get_Exception_m7243((Task_t1210 *)L_2, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1338 *)L_3);
		AggregateException_t1338 * L_4 = AggregateException_Flatten_m7212((AggregateException_t1338 *)L_3, /*hidden argument*/NULL);
		V_0 = (AggregateException_t1338 *)L_4;
		AggregateException_t1338 * L_5 = V_0;
		NullCheck((AggregateException_t1338 *)L_5);
		ReadOnlyCollection_1_t1337 * L_6 = AggregateException_get_InnerExceptions_m7210((AggregateException_t1338 *)L_5, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1337 *)L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Count() */, (ReadOnlyCollection_1_t1337 *)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AggregateException_t1338 * L_8 = V_0;
		NullCheck((AggregateException_t1338 *)L_8);
		ReadOnlyCollection_1_t1337 * L_9 = AggregateException_get_InnerExceptions_m7210((AggregateException_t1338 *)L_8, /*hidden argument*/NULL);
		NullCheck((ReadOnlyCollection_1_t1337 *)L_9);
		Exception_t57 * L_10 = (Exception_t57 *)VirtFuncInvoker1< Exception_t57 *, int32_t >::Invoke(33 /* !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t1337 *)L_9, (int32_t)0);
		ExceptionDispatchInfo_t1160 * L_11 = ExceptionDispatchInfo_Capture_m6373(NULL /*static, unused*/, (Exception_t57 *)L_10, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1160 *)L_11);
		ExceptionDispatchInfo_Throw_m6377((ExceptionDispatchInfo_t1160 *)L_11, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_003a:
	{
		AggregateException_t1338 * L_12 = V_0;
		ExceptionDispatchInfo_t1160 * L_13 = ExceptionDispatchInfo_Capture_m6373(NULL /*static, unused*/, (Exception_t57 *)L_12, /*hidden argument*/NULL);
		NullCheck((ExceptionDispatchInfo_t1160 *)L_13);
		ExceptionDispatchInfo_Throw_m6377((ExceptionDispatchInfo_t1160 *)L_13, /*hidden argument*/NULL);
	}

IL_0045:
	{
		Initobj (Byte_t741_il2cpp_TypeInfo_var, (&V_2));
		uint8_t L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
		Task_1_t1418 * L_15 = (( Task_1_t1418 * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (uint8_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_15;
	}

IL_0054:
	{
		Task_t1210 * L_16 = ___t;
		NullCheck((Task_t1210 *)L_16);
		bool L_17 = Task_get_IsCanceled_m7244((Task_t1210 *)L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_006f;
		}
	}
	{
		TaskCompletionSource_1_t5967 * L_18 = (TaskCompletionSource_1_t5967 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_1 = (TaskCompletionSource_1_t5967 *)L_18;
		TaskCompletionSource_1_t5967 * L_19 = V_1;
		NullCheck((TaskCompletionSource_1_t5967 *)L_19);
		(( void (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t5967 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		TaskCompletionSource_1_t5967 * L_20 = V_1;
		NullCheck((TaskCompletionSource_1_t5967 *)L_20);
		Task_1_t1418 * L_21 = (( Task_1_t1418 * (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((TaskCompletionSource_1_t5967 *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_21;
	}

IL_006f:
	{
		Func_2_t2154 * L_22 = (Func_2_t2154 *)(__this->___continuation_0);
		Task_t1210 * L_23 = ___t;
		NullCheck((Func_2_t2154 *)L_22);
		uint8_t L_24 = (uint8_t)VirtFuncInvoker1< uint8_t, Task_t1210 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Byte>::Invoke(!0) */, (Func_2_t2154 *)L_22, (Task_t1210 *)L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
		Task_1_t1418 * L_25 = (( Task_1_t1418 * (*) (Object_t * /* static, unused */, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, (uint8_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_25;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m30692_gshared (TaskCompletionSource_1_t5967 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Task_1_t1418 * L_0 = (Task_1_t1418 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (Task_1_t1418 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		(( void (*) (TaskCompletionSource_1_t5967 *, Task_1_t1418 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t5967 *)__this, (Task_1_t1418 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1418 * TaskCompletionSource_1_get_Task_m30693_gshared (TaskCompletionSource_1_t5967 * __this, const MethodInfo* method)
{
	{
		Task_1_t1418 * L_0 = (Task_1_t1418 *)(__this->___U3CTaskU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m30694_gshared (TaskCompletionSource_1_t5967 * __this, Task_1_t1418 * ___value, const MethodInfo* method)
{
	{
		Task_1_t1418 * L_0 = ___value;
		__this->___U3CTaskU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m30695_gshared (TaskCompletionSource_1_t5967 * __this, uint8_t ___result, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		Task_1_t1418 * L_0 = (( Task_1_t1418 * (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t5967 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		uint8_t L_1 = ___result;
		NullCheck((Task_1_t1418 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1418 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Task_1_t1418 *)L_0, (uint8_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m30696_gshared (TaskCompletionSource_1_t5967 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		Task_1_t1418 * L_0 = (( Task_1_t1418 * (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t5967 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1338 * L_1 = ___exception;
		NullCheck((Task_1_t1418 *)L_0);
		bool L_2 = (( bool (*) (Task_1_t1418 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1418 *)L_0, (AggregateException_t1338 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern TypeInfo* AggregateException_t1338_il2cpp_TypeInfo_var;
extern TypeInfo* ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var;
extern "C" bool TaskCompletionSource_1_TrySetException_m30697_gshared (TaskCompletionSource_1_t5967 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AggregateException_t1338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3373);
		ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14970);
		s_Il2CppMethodIntialized = true;
	}
	AggregateException_t1338 * V_0 = {0};
	ExceptionU5BU5D_t8332* V_1 = {0};
	{
		Exception_t57 * L_0 = ___exception;
		V_0 = (AggregateException_t1338 *)((AggregateException_t1338 *)IsInst(L_0, AggregateException_t1338_il2cpp_TypeInfo_var));
		AggregateException_t1338 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		Task_1_t1418 * L_2 = (( Task_1_t1418 * (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t5967 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		AggregateException_t1338 * L_3 = V_0;
		NullCheck((Task_1_t1418 *)L_2);
		bool L_4 = (( bool (*) (Task_1_t1418 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1418 *)L_2, (AggregateException_t1338 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_4;
	}

IL_0017:
	{
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		Task_1_t1418 * L_5 = (( Task_1_t1418 * (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t5967 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_1 = (ExceptionU5BU5D_t8332*)((ExceptionU5BU5D_t8332*)SZArrayNew(ExceptionU5BU5D_t8332_il2cpp_TypeInfo_var, 1));
		ExceptionU5BU5D_t8332* L_6 = V_1;
		Exception_t57 * L_7 = ___exception;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Exception_t57 **)(Exception_t57 **)SZArrayLdElema(L_6, 0)) = (Exception_t57 *)L_7;
		ExceptionU5BU5D_t8332* L_8 = V_1;
		AggregateException_t1338 * L_9 = (AggregateException_t1338 *)il2cpp_codegen_object_new (AggregateException_t1338_il2cpp_TypeInfo_var);
		AggregateException__ctor_m7209(L_9, (Object_t*)(Object_t*)L_8, /*hidden argument*/NULL);
		NullCheck((AggregateException_t1338 *)L_9);
		AggregateException_t1338 * L_10 = AggregateException_Flatten_m7212((AggregateException_t1338 *)L_9, /*hidden argument*/NULL);
		NullCheck((Task_1_t1418 *)L_5);
		bool L_11 = (( bool (*) (Task_1_t1418 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Task_1_t1418 *)L_5, (AggregateException_t1338 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_11;
	}
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m30698_gshared (TaskCompletionSource_1_t5967 * __this, const MethodInfo* method)
{
	{
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		Task_1_t1418 * L_0 = (( Task_1_t1418 * (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((TaskCompletionSource_1_t5967 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		NullCheck((Task_1_t1418 *)L_0);
		bool L_1 = (( bool (*) (Task_1_t1418 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1418 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_1;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetResult_m30699_gshared (TaskCompletionSource_1_t5967 * __this, uint8_t ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint8_t L_0 = ___result;
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t5967 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((TaskCompletionSource_1_t5967 *)__this, (uint8_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1740, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m30700_gshared (TaskCompletionSource_1_t5967 * __this, AggregateException_t1338 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		AggregateException_t1338 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t5967 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t5967 *)__this, (AggregateException_t1338 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1741, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetException_m30701_gshared (TaskCompletionSource_1_t5967 * __this, Exception_t57 * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		Exception_t57 * L_0 = ___exception;
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		bool L_1 = (( bool (*) (TaskCompletionSource_1_t5967 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((TaskCompletionSource_1_t5967 *)__this, (Exception_t57 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_2, (String_t*)(String_t*) &_stringLiteral1741, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		return;
	}
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void TaskCompletionSource_1_SetCanceled_m30702_gshared (TaskCompletionSource_1_t5967 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((TaskCompletionSource_1_t5967 *)__this);
		bool L_0 = (( bool (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((TaskCompletionSource_1_t5967 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1429 * L_1 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7326(L_1, (String_t*)(String_t*) &_stringLiteral1742, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18.h"
#ifndef _MSC_VER
#else
#endif
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"



// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m7470_gshared (Func_2_t1227 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m30734_gshared (Func_2_t1227 * __this, Object_t * ___arg1, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m30734((Func_2_t1227 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m30736_gshared (Func_2_t1227 * __this, Object_t * ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg1;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m30738_gshared (Func_2_t1227 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_4MethodDeclarations.h"

// System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_5.h"
// System.Action`1<System.Action>
#include "mscorlib_System_Action_1_gen_23.h"
// System.Action
#include "System_Core_System_Action.h"
// System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_U3CU3Ec__DisplayClas_5MethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
// System.Action`1<System.Action>
#include "mscorlib_System_Action_1_gen_23MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass3_1__ctor_m30742_gshared (U3CU3Ec__DisplayClass3_1_t5970 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Object>::<ContinueWith>b__0()
extern "C" void U3CU3Ec__DisplayClass3_1_U3CContinueWithU3Eb__0_m30743_gshared (U3CU3Ec__DisplayClass3_1_t5970 * __this, const MethodInfo* method)
{
	{
		TaskCompletionSource_1_t1330 * L_0 = (TaskCompletionSource_1_t1330 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t1330 *)L_0);
		(( bool (*) (TaskCompletionSource_1_t1330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t1330 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1<System.Object>::<ContinueWith>b__1(System.Threading.Tasks.Task)
extern TypeInfo* Task_t1210_il2cpp_TypeInfo_var;
extern TypeInfo* Action_t143_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass3_1_U3CContinueWithU3Eb__1_m30744_gshared (U3CU3Ec__DisplayClass3_1_t5970 * __this, Task_t1210 * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2446);
		Action_t143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		s_Il2CppMethodIntialized = true;
	}
	U3CU3Ec__DisplayClass5_t5971 * V_0 = {0};
	{
		U3CU3Ec__DisplayClass5_t5971 * L_0 = (U3CU3Ec__DisplayClass5_t5971 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		(( void (*) (U3CU3Ec__DisplayClass5_t5971 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (U3CU3Ec__DisplayClass5_t5971 *)L_0;
		U3CU3Ec__DisplayClass5_t5971 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___CSU24U3CU3E8__locals4_0 = __this;
		U3CU3Ec__DisplayClass5_t5971 * L_2 = V_0;
		Task_t1210 * L_3 = ___t;
		NullCheck(L_2);
		L_2->___t_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
		Action_1_t1352 * L_4 = ((Task_t1210_StaticFields*)Task_t1210_il2cpp_TypeInfo_var->static_fields)->___immediateExecutor_1;
		U3CU3Ec__DisplayClass5_t5971 * L_5 = V_0;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_t143 * L_7 = (Action_t143 *)il2cpp_codegen_object_new (Action_t143_il2cpp_TypeInfo_var);
		Action__ctor_m3758(L_7, (Object_t *)L_5, (IntPtr_t)L_6, /*hidden argument*/NULL);
		NullCheck((Action_1_t1352 *)L_4);
		VirtActionInvoker1< Action_t143 * >::Invoke(11 /* System.Void System.Action`1<System.Action>::Invoke(!0) */, (Action_1_t1352 *)L_4, (Action_t143 *)L_7);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Func`2<System.Threading.Tasks.Task,System.Object>
#include "System_Core_System_Func_2_gen_6.h"
// System.Func`2<System.Threading.Tasks.Task,System.Object>
#include "System_Core_System_Func_2_gen_6MethodDeclarations.h"


// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Object>::.ctor()
extern "C" void U3CU3Ec__DisplayClass5__ctor_m30745_gshared (U3CU3Ec__DisplayClass5_t5971 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.Task/<>c__DisplayClass3`1/<>c__DisplayClass5<System.Object>::<ContinueWith>b__2()
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void U3CU3Ec__DisplayClass5_U3CContinueWithU3Eb__2_m30746_gshared (U3CU3Ec__DisplayClass5_t5971 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
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
		U3CU3Ec__DisplayClass3_1_t5970 * L_0 = (U3CU3Ec__DisplayClass3_1_t5970 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_0);
		TaskCompletionSource_1_t1330 * L_1 = (TaskCompletionSource_1_t1330 *)(L_0->___tcs_0);
		U3CU3Ec__DisplayClass3_1_t5970 * L_2 = (U3CU3Ec__DisplayClass3_1_t5970 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_2);
		Func_2_t1433 * L_3 = (Func_2_t1433 *)(L_2->___continuation_2);
		Task_t1210 * L_4 = (Task_t1210 *)(__this->___t_1);
		NullCheck((Func_2_t1433 *)L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Task_t1210 * >::Invoke(11 /* !1 System.Func`2<System.Threading.Tasks.Task,System.Object>::Invoke(!0) */, (Func_2_t1433 *)L_3, (Task_t1210 *)L_4);
		NullCheck((TaskCompletionSource_1_t1330 *)L_1);
		(( bool (*) (TaskCompletionSource_1_t1330 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t1330 *)L_1, (Object_t *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		U3CU3Ec__DisplayClass3_1_t5970 * L_6 = (U3CU3Ec__DisplayClass3_1_t5970 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_6);
		CancellationTokenRegistration_t1340 * L_7 = (CancellationTokenRegistration_t1340 *)&(L_6->___cancellation_1);
		CancellationTokenRegistration_Dispose_m7220((CancellationTokenRegistration_t1340 *)L_7, /*hidden argument*/NULL);
		goto IL_005e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0039;
		throw e;
	}

CATCH_0039:
	{ // begin catch(System.Exception)
		V_0 = (Exception_t57 *)((Exception_t57 *)__exception_local);
		U3CU3Ec__DisplayClass3_1_t5970 * L_8 = (U3CU3Ec__DisplayClass3_1_t5970 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_8);
		TaskCompletionSource_1_t1330 * L_9 = (TaskCompletionSource_1_t1330 *)(L_8->___tcs_0);
		Exception_t57 * L_10 = V_0;
		NullCheck((TaskCompletionSource_1_t1330 *)L_9);
		(( bool (*) (TaskCompletionSource_1_t1330 *, Exception_t57 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((TaskCompletionSource_1_t1330 *)L_9, (Exception_t57 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		U3CU3Ec__DisplayClass3_1_t5970 * L_11 = (U3CU3Ec__DisplayClass3_1_t5970 *)(__this->___CSU24U3CU3E8__locals4_0);
		NullCheck(L_11);
		CancellationTokenRegistration_t1340 * L_12 = (CancellationTokenRegistration_t1340 *)&(L_11->___cancellation_1);
		CancellationTokenRegistration_Dispose_m7220((CancellationTokenRegistration_t1340 *)L_12, /*hidden argument*/NULL);
		goto IL_005e;
	} // end catch (depth: 1)

IL_005e:
	{
		return;
	}
}
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_TaskExtensions_U3CU3Ec__D_0MethodDeclarations.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_28.h"
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_28MethodDeclarations.h"


// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Byte>::.ctor()
extern "C" void U3CU3Ec__DisplayClass7_1__ctor_m30761_gshared (U3CU3Ec__DisplayClass7_1_t5974 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Byte>::<Unwrap>b__5(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<T>>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__5_m30762_gshared (U3CU3Ec__DisplayClass7_1_t5974 * __this, Task_1_t5972 * ___t, const MethodInfo* method)
{
	Action_1_t5954 * V_0 = {0};
	Task_1_t1418 * G_B6_0 = {0};
	Task_1_t1418 * G_B5_0 = {0};
	{
		V_0 = (Action_1_t5954 *)NULL;
		Task_1_t5972 * L_0 = ___t;
		NullCheck((Task_t1210 *)L_0);
		bool L_1 = Task_get_IsFaulted_m7246((Task_t1210 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TaskCompletionSource_1_t5967 * L_2 = (TaskCompletionSource_1_t5967 *)(__this->___tcs_0);
		Task_1_t5972 * L_3 = ___t;
		NullCheck((Task_t1210 *)L_3);
		AggregateException_t1338 * L_4 = Task_get_Exception_m7243((Task_t1210 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t5967 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t5967 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t5967 *)L_2, (AggregateException_t1338 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001d:
	{
		Task_1_t5972 * L_5 = ___t;
		NullCheck((Task_t1210 *)L_5);
		bool L_6 = Task_get_IsCanceled_m7244((Task_t1210 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t5967 * L_7 = (TaskCompletionSource_1_t5967 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t5967 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t5967 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0032:
	{
		Task_1_t5972 * L_8 = ___t;
		NullCheck((Task_1_t5972 *)L_8);
		Task_1_t1418 * L_9 = (( Task_1_t1418 * (*) (Task_1_t5972 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Task_1_t5972 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Action_1_t5954 * L_10 = V_0;
		G_B5_0 = L_9;
		if (L_10)
		{
			G_B6_0 = L_9;
			goto IL_0048;
		}
	}
	{
		IntPtr_t L_11 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3) };
		Action_1_t5954 * L_12 = (Action_1_t5954 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (Action_1_t5954 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_12, (Object_t *)__this, (IntPtr_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		V_0 = (Action_1_t5954 *)L_12;
		G_B6_0 = G_B5_0;
	}

IL_0048:
	{
		Action_1_t5954 * L_13 = V_0;
		NullCheck((Task_1_t1418 *)G_B6_0);
		(( Task_t1210 * (*) (Task_1_t1418 *, Action_1_t5954 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Task_1_t1418 *)G_B6_0, (Action_1_t5954 *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return;
	}
}
// System.Void System.Threading.Tasks.TaskExtensions/<>c__DisplayClass7`1<System.Byte>::<Unwrap>b__6(System.Threading.Tasks.Task`1<T>)
extern "C" void U3CU3Ec__DisplayClass7_1_U3CUnwrapU3Eb__6_m30763_gshared (U3CU3Ec__DisplayClass7_1_t5974 * __this, Task_1_t1418 * ___inner, const MethodInfo* method)
{
	{
		Task_1_t1418 * L_0 = ___inner;
		NullCheck((Task_t1210 *)L_0);
		bool L_1 = Task_get_IsFaulted_m7246((Task_t1210 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		TaskCompletionSource_1_t5967 * L_2 = (TaskCompletionSource_1_t5967 *)(__this->___tcs_0);
		Task_1_t1418 * L_3 = ___inner;
		NullCheck((Task_t1210 *)L_3);
		AggregateException_t1338 * L_4 = Task_get_Exception_m7243((Task_t1210 *)L_3, /*hidden argument*/NULL);
		NullCheck((TaskCompletionSource_1_t5967 *)L_2);
		(( bool (*) (TaskCompletionSource_1_t5967 *, AggregateException_t1338 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((TaskCompletionSource_1_t5967 *)L_2, (AggregateException_t1338 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}

IL_001b:
	{
		Task_1_t1418 * L_5 = ___inner;
		NullCheck((Task_t1210 *)L_5);
		bool L_6 = Task_get_IsCanceled_m7244((Task_t1210 *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		TaskCompletionSource_1_t5967 * L_7 = (TaskCompletionSource_1_t5967 *)(__this->___tcs_0);
		NullCheck((TaskCompletionSource_1_t5967 *)L_7);
		(( bool (*) (TaskCompletionSource_1_t5967 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((TaskCompletionSource_1_t5967 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}

IL_0030:
	{
		TaskCompletionSource_1_t5967 * L_8 = (TaskCompletionSource_1_t5967 *)(__this->___tcs_0);
		Task_1_t1418 * L_9 = ___inner;
		NullCheck((Task_1_t1418 *)L_9);
		uint8_t L_10 = (( uint8_t (*) (Task_1_t1418 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Task_1_t1418 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		NullCheck((TaskCompletionSource_1_t5967 *)L_8);
		(( bool (*) (TaskCompletionSource_1_t5967 *, uint8_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((TaskCompletionSource_1_t5967 *)L_8, (uint8_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Progress`1<System.Object>
#include "Parse_Unity_System_Progress_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Progress`1<System.Object>
#include "Parse_Unity_System_Progress_1_genMethodDeclarations.h"

// System.EventHandler`1<System.Object>
#include "mscorlib_System_EventHandler_1_gen_0.h"
// Parse.Internal.SynchronizedEventHandler`1<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_gen_1.h"
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34.h"
// System.Progress`1/<>c__DisplayClass6<System.Object>
#include "Parse_Unity_System_Progress_1_U3CU3Ec__DisplayClass6_gen.h"
// Parse.Internal.SynchronizedEventHandler`1<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_gen_1MethodDeclarations.h"
// System.EventHandler`1<System.Object>
#include "mscorlib_System_EventHandler_1_gen_0MethodDeclarations.h"
// System.Progress`1/<>c__DisplayClass6<System.Object>
#include "Parse_Unity_System_Progress_1_U3CU3Ec__DisplayClass6_genMethodDeclarations.h"


// System.Void System.Progress`1<System.Object>::.ctor()
extern "C" void Progress_1__ctor_m30764_gshared (Progress_1_t5976 * __this, const MethodInfo* method)
{
	EventHandler_1_t5998 * V_0 = {0};
	Progress_1_t5976 * G_B2_0 = {0};
	Progress_1_t5976 * G_B1_0 = {0};
	{
		V_0 = (EventHandler_1_t5998 *)NULL;
		SynchronizedEventHandler_1_t5975 * L_0 = (SynchronizedEventHandler_1_t5975 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (SynchronizedEventHandler_1_t5975 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___progressChanged_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		EventHandler_1_t5998 * L_1 = V_0;
		G_B1_0 = ((Progress_1_t5976 *)(__this));
		if (L_1)
		{
			G_B2_0 = ((Progress_1_t5976 *)(__this));
			goto IL_0024;
		}
	}
	{
		IntPtr_t L_2 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		EventHandler_1_t5998 * L_3 = (EventHandler_1_t5998 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (EventHandler_1_t5998 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, (Object_t *)__this, (IntPtr_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = (EventHandler_1_t5998 *)L_3;
		G_B2_0 = ((Progress_1_t5976 *)(G_B1_0));
	}

IL_0024:
	{
		EventHandler_1_t5998 * L_4 = V_0;
		NullCheck((Progress_1_t5976 *)G_B2_0);
		(( void (*) (Progress_1_t5976 *, EventHandler_1_t5998 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Progress_1_t5976 *)G_B2_0, (EventHandler_1_t5998 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return;
	}
}
// System.Void System.Progress`1<System.Object>::.ctor(System.Action`1<T>)
extern "C" void Progress_1__ctor_m30765_gshared (Progress_1_t5976 * __this, Action_1_t3369 * ___handler, const MethodInfo* method)
{
	EventHandler_1_t5998 * V_0 = {0};
	EventHandler_1_t5998 * V_1 = {0};
	U3CU3Ec__DisplayClass6_t5999 * V_2 = {0};
	Progress_1_t5976 * G_B2_0 = {0};
	Progress_1_t5976 * G_B1_0 = {0};
	Progress_1_t5976 * G_B4_0 = {0};
	Progress_1_t5976 * G_B3_0 = {0};
	{
		V_0 = (EventHandler_1_t5998 *)NULL;
		V_1 = (EventHandler_1_t5998 *)NULL;
		U3CU3Ec__DisplayClass6_t5999 * L_0 = (U3CU3Ec__DisplayClass6_t5999 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		(( void (*) (U3CU3Ec__DisplayClass6_t5999 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_2 = (U3CU3Ec__DisplayClass6_t5999 *)L_0;
		U3CU3Ec__DisplayClass6_t5999 * L_1 = V_2;
		Action_1_t3369 * L_2 = ___handler;
		NullCheck(L_1);
		L_1->___handler_1 = L_2;
		NullCheck((Progress_1_t5976 *)__this);
		(( void (*) (Progress_1_t5976 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Progress_1_t5976 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		U3CU3Ec__DisplayClass6_t5999 * L_3 = V_2;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_0 = __this;
		EventHandler_1_t5998 * L_4 = V_0;
		G_B1_0 = ((Progress_1_t5976 *)(__this));
		if (L_4)
		{
			G_B2_0 = ((Progress_1_t5976 *)(__this));
			goto IL_002f;
		}
	}
	{
		U3CU3Ec__DisplayClass6_t5999 * L_5 = V_2;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9) };
		EventHandler_1_t5998 * L_7 = (EventHandler_1_t5998 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (EventHandler_1_t5998 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_7, (Object_t *)L_5, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = (EventHandler_1_t5998 *)L_7;
		G_B2_0 = ((Progress_1_t5976 *)(G_B1_0));
	}

IL_002f:
	{
		EventHandler_1_t5998 * L_8 = V_0;
		NullCheck((Progress_1_t5976 *)G_B2_0);
		(( void (*) (Progress_1_t5976 *, EventHandler_1_t5998 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Progress_1_t5976 *)G_B2_0, (EventHandler_1_t5998 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		EventHandler_1_t5998 * L_9 = V_1;
		G_B3_0 = ((Progress_1_t5976 *)(__this));
		if (L_9)
		{
			G_B4_0 = ((Progress_1_t5976 *)(__this));
			goto IL_0046;
		}
	}
	{
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10) };
		EventHandler_1_t5998 * L_11 = (EventHandler_1_t5998 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (EventHandler_1_t5998 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_11, (Object_t *)__this, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (EventHandler_1_t5998 *)L_11;
		G_B4_0 = ((Progress_1_t5976 *)(G_B3_0));
	}

IL_0046:
	{
		EventHandler_1_t5998 * L_12 = V_1;
		NullCheck((Progress_1_t5976 *)G_B4_0);
		(( void (*) (Progress_1_t5976 *, EventHandler_1_t5998 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Progress_1_t5976 *)G_B4_0, (EventHandler_1_t5998 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return;
	}
}
// System.Void System.Progress`1<System.Object>::System.IProgress<T>.Report(T)
extern "C" void Progress_1_System_IProgressU3CTU3E_Report_m30766_gshared (Progress_1_t5976 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		SynchronizedEventHandler_1_t5975 * L_0 = (SynchronizedEventHandler_1_t5975 *)(__this->___progressChanged_0);
		Object_t * L_1 = ___value;
		NullCheck((SynchronizedEventHandler_1_t5975 *)L_0);
		(( Task_t1210 * (*) (SynchronizedEventHandler_1_t5975 *, Object_t *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((SynchronizedEventHandler_1_t5975 *)L_0, (Object_t *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return;
	}
}
// System.Void System.Progress`1<System.Object>::OnReport(T)
extern "C" void Progress_1_OnReport_m30767_gshared (Progress_1_t5976 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Progress`1<System.Object>::add_ProgressChanged(System.EventHandler`1<T>)
extern "C" void Progress_1_add_ProgressChanged_m30768_gshared (Progress_1_t5976 * __this, EventHandler_1_t5998 * ___value, const MethodInfo* method)
{
	{
		SynchronizedEventHandler_1_t5975 * L_0 = (SynchronizedEventHandler_1_t5975 *)(__this->___progressChanged_0);
		EventHandler_1_t5998 * L_1 = ___value;
		NullCheck((SynchronizedEventHandler_1_t5975 *)L_0);
		(( void (*) (SynchronizedEventHandler_1_t5975 *, Delegate_t724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((SynchronizedEventHandler_1_t5975 *)L_0, (Delegate_t724 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return;
	}
}
// System.Void System.Progress`1<System.Object>::remove_ProgressChanged(System.EventHandler`1<T>)
extern "C" void Progress_1_remove_ProgressChanged_m30769_gshared (Progress_1_t5976 * __this, EventHandler_1_t5998 * ___value, const MethodInfo* method)
{
	{
		SynchronizedEventHandler_1_t5975 * L_0 = (SynchronizedEventHandler_1_t5975 *)(__this->___progressChanged_0);
		EventHandler_1_t5998 * L_1 = ___value;
		NullCheck((SynchronizedEventHandler_1_t5975 *)L_0);
		(( void (*) (SynchronizedEventHandler_1_t5975 *, Delegate_t724 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((SynchronizedEventHandler_1_t5975 *)L_0, (Delegate_t724 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return;
	}
}
// System.Void System.Progress`1<System.Object>::<.ctor>b__0(System.Object,T)
extern "C" void Progress_1_U3C_ctorU3Eb__0_m30770_gshared (Progress_1_t5976 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___args;
		NullCheck((Progress_1_t5976 *)__this);
		VirtActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Progress`1<System.Object>::OnReport(T) */, (Progress_1_t5976 *)__this, (Object_t *)L_0);
		return;
	}
}
// System.Void System.Progress`1<System.Object>::<.ctor>b__3(System.Object,T)
extern "C" void Progress_1_U3C_ctorU3Eb__3_m30771_gshared (Progress_1_t5976 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___args;
		NullCheck((Progress_1_t5976 *)__this);
		VirtActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Progress`1<System.Object>::OnReport(T) */, (Progress_1_t5976 *)__this, (Object_t *)L_0);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactory.h"
// System.Collections.Generic.LinkedList`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "System_System_Collections_Generic_LinkedList_1_gen_0.h"
// System.Threading.SynchronizationContext
#include "mscorlib_System_Threading_SynchronizationContext.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.Tasks.TaskScheduler
#include "Parse_Unity_System_Threading_Tasks_TaskScheduler.h"
// System.Threading.Tasks.TaskCreationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskCreationOptions.h"
// System.Threading.Tasks.TaskContinuationOptions
#include "Parse_Unity_System_Threading_Tasks_TaskContinuationOptions.h"
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
#include "Parse_Unity_System_Tuple_2_gen_5.h"
// System.Collections.Generic.LinkedListNode`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "System_System_Collections_Generic_LinkedListNode_1_gen_1.h"
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
#include "mscorlib_System_Collections_Generic_List_1_gen_45.h"
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3E.h"
#include "Parse.Unity_ArrayTypes.h"
// System.Collections.Generic.List`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "mscorlib_System_Collections_Generic_List_1_gen_68.h"
// System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>
#include "System_Core_System_Func_2_gen_63.h"
// System.Threading.SynchronizationContext
#include "mscorlib_System_Threading_SynchronizationContextMethodDeclarations.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationTokenMethodDeclarations.h"
// System.Threading.Tasks.TaskScheduler
#include "Parse_Unity_System_Threading_Tasks_TaskSchedulerMethodDeclarations.h"
// System.Threading.Tasks.TaskFactory
#include "Parse_Unity_System_Threading_Tasks_TaskFactoryMethodDeclarations.h"
// System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>
#include "Parse_Unity_System_Tuple_2_gen_5MethodDeclarations.h"
// System.Collections.Generic.LinkedList`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "System_System_Collections_Generic_LinkedList_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.LinkedListNode`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>
#include "System_System_Collections_Generic_LinkedListNode_1_gen_1MethodDeclarations.h"
// Parse.Internal.SynchronizedEventHandler`1/<>c__DisplayClass2<System.Object>
#include "Parse_Unity_Parse_Internal_SynchronizedEventHandler_1_U3CU3EMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Func`2<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>
#include "System_Core_System_Func_2_gen_63MethodDeclarations.h"
struct Task_t1210;
struct Task_1_t1370;
// Declaration System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int32>(T)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::FromResult<System.Int32>(T)
extern "C" Task_1_t1370 * Task_FromResult_TisInt32_t82_m7332_gshared (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method);
#define Task_FromResult_TisInt32_t82_m7332(__this /* static, unused */, ___result, method) (( Task_1_t1370 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))Task_FromResult_TisInt32_t82_m7332_gshared)(__this /* static, unused */, ___result, method)
struct Enumerable_t68;
struct List_1_t5995;
struct IEnumerable_1_t9065;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
struct Enumerable_t68;
struct List_1_t684;
struct IEnumerable_1_t710;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t684 * Enumerable_ToList_TisObject_t_m3707_gshared (Object_t * __this /* static, unused */, Object_t* p0, const MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m3707(__this /* static, unused */, p0, method) (( List_1_t684 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3707_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisTuple_2_t2366_m66266(__this /* static, unused */, p0, method) (( List_1_t5995 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3707_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t68;
struct IEnumerable_1_t1414;
struct IEnumerable_1_t9065;
struct Func_2_t5996;
struct Enumerable_t68;
struct IEnumerable_1_t710;
struct Func_2_t1227;
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m7401_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t1227 * p1, const MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m7401(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t1227 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m7401_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>,System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisTuple_2_t2366_TisTask_t1210_m66267(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t5996 *, const MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m7401_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t68;
struct List_1_t1493;
struct IEnumerable_1_t1414;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Threading.Tasks.Task>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisTask_t1210_m7567(__this /* static, unused */, p0, method) (( List_1_t1493 * (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Enumerable_ToList_TisObject_t_m3707_gshared)(__this /* static, unused */, p0, method)


// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Add(System.Delegate)
extern TypeInfo* TaskScheduler_t1365_il2cpp_TypeInfo_var;
extern TypeInfo* TaskFactory_t1366_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1210_il2cpp_TypeInfo_var;
extern TypeInfo* Tuple_2_t2366_il2cpp_TypeInfo_var;
extern const MethodInfo* Tuple_2__ctor_m30852_MethodInfo_var;
extern const MethodInfo* LinkedList_1_AddLast_m30796_MethodInfo_var;
extern "C" void SynchronizedEventHandler_1_Add_m30772_gshared (SynchronizedEventHandler_1_t5975 * __this, Delegate_t724 * ___del, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TaskScheduler_t1365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3398);
		TaskFactory_t1366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3380);
		Task_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2446);
		Tuple_2_t2366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3723);
		Tuple_2__ctor_m30852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485288);
		LinkedList_1_AddLast_m30796_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485289);
		s_Il2CppMethodIntialized = true;
	}
	TaskFactory_t1366 * V_0 = {0};
	Delegate_t724 * V_1 = {0};
	LinkedList_1_t5977 * V_2 = {0};
	DelegateU5BU5D_t2150* V_3 = {0};
	int32_t V_4 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		LinkedList_1_t5977 * L_0 = (LinkedList_1_t5977 *)(__this->___delegates_0);
		LinkedList_1_t5977 * L_1 = (LinkedList_1_t5977 *)L_0;
		V_2 = (LinkedList_1_t5977 *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContext_t1368 * L_2 = SynchronizationContext_get_Current_m7842(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_002c;
			}
		}

IL_0014:
		{
			CancellationToken_t1164  L_3 = CancellationToken_get_None_m7215(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t1365_il2cpp_TypeInfo_var);
			TaskScheduler_t1365 * L_4 = TaskScheduler_FromCurrentSynchronizationContext_m7280(NULL /*static, unused*/, /*hidden argument*/NULL);
			TaskFactory_t1366 * L_5 = (TaskFactory_t1366 *)il2cpp_codegen_object_new (TaskFactory_t1366_il2cpp_TypeInfo_var);
			TaskFactory__ctor_m7272(L_5, (CancellationToken_t1164 )L_3, (int32_t)0, (int32_t)((int32_t)524288), (TaskScheduler_t1365 *)L_4, /*hidden argument*/NULL);
			V_0 = (TaskFactory_t1366 *)L_5;
			goto IL_0032;
		}

IL_002c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
			TaskFactory_t1366 * L_6 = Task_get_Factory_m7242(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_0 = (TaskFactory_t1366 *)L_6;
		}

IL_0032:
		{
			Delegate_t724 * L_7 = ___del;
			NullCheck((Delegate_t724 *)L_7);
			DelegateU5BU5D_t2150* L_8 = (DelegateU5BU5D_t2150*)VirtFuncInvoker0< DelegateU5BU5D_t2150* >::Invoke(8 /* System.Delegate[] System.Delegate::GetInvocationList() */, (Delegate_t724 *)L_7);
			V_3 = (DelegateU5BU5D_t2150*)L_8;
			V_4 = (int32_t)0;
			goto IL_005c;
		}

IL_003e:
		{
			DelegateU5BU5D_t2150* L_9 = V_3;
			int32_t L_10 = V_4;
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
			int32_t L_11 = L_10;
			V_1 = (Delegate_t724 *)(*(Delegate_t724 **)(Delegate_t724 **)SZArrayLdElema(L_9, L_11));
			LinkedList_1_t5977 * L_12 = (LinkedList_1_t5977 *)(__this->___delegates_0);
			Delegate_t724 * L_13 = V_1;
			TaskFactory_t1366 * L_14 = V_0;
			Tuple_2_t2366 * L_15 = (Tuple_2_t2366 *)il2cpp_codegen_object_new (Tuple_2_t2366_il2cpp_TypeInfo_var);
			Tuple_2__ctor_m30852(L_15, (Delegate_t724 *)L_13, (TaskFactory_t1366 *)L_14, /*hidden argument*/Tuple_2__ctor_m30852_MethodInfo_var);
			NullCheck((LinkedList_1_t5977 *)L_12);
			LinkedList_1_AddLast_m30796((LinkedList_1_t5977 *)L_12, (Tuple_2_t2366 *)L_15, /*hidden argument*/LinkedList_1_AddLast_m30796_MethodInfo_var);
			int32_t L_16 = V_4;
			V_4 = (int32_t)((int32_t)((int32_t)L_16+(int32_t)1));
		}

IL_005c:
		{
			int32_t L_17 = V_4;
			DelegateU5BU5D_t2150* L_18 = V_3;
			NullCheck(L_18);
			if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
			{
				goto IL_003e;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		LinkedList_1_t5977 * L_19 = V_2;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_19, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_006c:
	{
		return;
	}
}
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::Remove(System.Delegate)
extern const MethodInfo* LinkedList_1_get_First_m30822_MethodInfo_var;
extern const MethodInfo* LinkedListNode_1_get_Value_m30843_MethodInfo_var;
extern const MethodInfo* Tuple_2_get_Item1_m30844_MethodInfo_var;
extern const MethodInfo* LinkedList_1_Remove_m30814_MethodInfo_var;
extern const MethodInfo* LinkedListNode_1_get_Next_m30842_MethodInfo_var;
extern "C" void SynchronizedEventHandler_1_Remove_m30773_gshared (SynchronizedEventHandler_1_t5975 * __this, Delegate_t724 * ___del, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LinkedList_1_get_First_m30822_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485290);
		LinkedListNode_1_get_Value_m30843_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485291);
		Tuple_2_get_Item1_m30844_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485292);
		LinkedList_1_Remove_m30814_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485293);
		LinkedListNode_1_get_Next_m30842_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485294);
		s_Il2CppMethodIntialized = true;
	}
	Delegate_t724 * V_0 = {0};
	LinkedListNode_1_t5978 * V_1 = {0};
	LinkedList_1_t5977 * V_2 = {0};
	DelegateU5BU5D_t2150* V_3 = {0};
	int32_t V_4 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		LinkedList_1_t5977 * L_0 = (LinkedList_1_t5977 *)(__this->___delegates_0);
		LinkedList_1_t5977 * L_1 = (LinkedList_1_t5977 *)L_0;
		V_2 = (LinkedList_1_t5977 *)L_1;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			LinkedList_1_t5977 * L_2 = (LinkedList_1_t5977 *)(__this->___delegates_0);
			NullCheck((LinkedList_1_t5977 *)L_2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 System.Collections.Generic.LinkedList`1<System.Tuple`2<System.Delegate,System.Threading.Tasks.TaskFactory>>::get_Count() */, (LinkedList_1_t5977 *)L_2);
			if (L_3)
			{
				goto IL_001c;
			}
		}

IL_001a:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_0075);
		}

IL_001c:
		{
			Delegate_t724 * L_4 = ___del;
			NullCheck((Delegate_t724 *)L_4);
			DelegateU5BU5D_t2150* L_5 = (DelegateU5BU5D_t2150*)VirtFuncInvoker0< DelegateU5BU5D_t2150* >::Invoke(8 /* System.Delegate[] System.Delegate::GetInvocationList() */, (Delegate_t724 *)L_4);
			V_3 = (DelegateU5BU5D_t2150*)L_5;
			V_4 = (int32_t)0;
			goto IL_006c;
		}

IL_0028:
		{
			DelegateU5BU5D_t2150* L_6 = V_3;
			int32_t L_7 = V_4;
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
			int32_t L_8 = L_7;
			V_0 = (Delegate_t724 *)(*(Delegate_t724 **)(Delegate_t724 **)SZArrayLdElema(L_6, L_8));
			LinkedList_1_t5977 * L_9 = (LinkedList_1_t5977 *)(__this->___delegates_0);
			NullCheck((LinkedList_1_t5977 *)L_9);
			LinkedListNode_1_t5978 * L_10 = LinkedList_1_get_First_m30822((LinkedList_1_t5977 *)L_9, /*hidden argument*/LinkedList_1_get_First_m30822_MethodInfo_var);
			V_1 = (LinkedListNode_1_t5978 *)L_10;
			goto IL_0063;
		}

IL_003b:
		{
			LinkedListNode_1_t5978 * L_11 = V_1;
			NullCheck((LinkedListNode_1_t5978 *)L_11);
			Tuple_2_t2366 * L_12 = LinkedListNode_1_get_Value_m30843((LinkedListNode_1_t5978 *)L_11, /*hidden argument*/LinkedListNode_1_get_Value_m30843_MethodInfo_var);
			NullCheck((Tuple_2_t2366 *)L_12);
			Delegate_t724 * L_13 = Tuple_2_get_Item1_m30844((Tuple_2_t2366 *)L_12, /*hidden argument*/Tuple_2_get_Item1_m30844_MethodInfo_var);
			Delegate_t724 * L_14 = V_0;
			bool L_15 = Delegate_op_Equality_m16064(NULL /*static, unused*/, (Delegate_t724 *)L_13, (Delegate_t724 *)L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_005c;
			}
		}

IL_004e:
		{
			LinkedList_1_t5977 * L_16 = (LinkedList_1_t5977 *)(__this->___delegates_0);
			LinkedListNode_1_t5978 * L_17 = V_1;
			NullCheck((LinkedList_1_t5977 *)L_16);
			LinkedList_1_Remove_m30814((LinkedList_1_t5977 *)L_16, (LinkedListNode_1_t5978 *)L_17, /*hidden argument*/LinkedList_1_Remove_m30814_MethodInfo_var);
			goto IL_0066;
		}

IL_005c:
		{
			LinkedListNode_1_t5978 * L_18 = V_1;
			NullCheck((LinkedListNode_1_t5978 *)L_18);
			LinkedListNode_1_t5978 * L_19 = LinkedListNode_1_get_Next_m30842((LinkedListNode_1_t5978 *)L_18, /*hidden argument*/LinkedListNode_1_get_Next_m30842_MethodInfo_var);
			V_1 = (LinkedListNode_1_t5978 *)L_19;
		}

IL_0063:
		{
			LinkedListNode_1_t5978 * L_20 = V_1;
			if (L_20)
			{
				goto IL_003b;
			}
		}

IL_0066:
		{
			int32_t L_21 = V_4;
			V_4 = (int32_t)((int32_t)((int32_t)L_21+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_22 = V_4;
			DelegateU5BU5D_t2150* L_23 = V_3;
			NullCheck(L_23);
			if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
			{
				goto IL_0028;
			}
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		LinkedList_1_t5977 * L_24 = V_2;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_24, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_007c:
	{
		return;
	}
}
// System.Threading.Tasks.Task Parse.Internal.SynchronizedEventHandler`1<System.Object>::Invoke(System.Object,T)
extern TypeInfo* Task_1U5BU5D_t5990_il2cpp_TypeInfo_var;
extern TypeInfo* Task_t1210_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t5996_il2cpp_TypeInfo_var;
extern const MethodInfo* Task_FromResult_TisInt32_t82_m7332_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisTuple_2_t2366_m66266_MethodInfo_var;
extern const MethodInfo* Func_2__ctor_m31044_MethodInfo_var;
extern const MethodInfo* Enumerable_Select_TisTuple_2_t2366_TisTask_t1210_m66267_MethodInfo_var;
extern const MethodInfo* Enumerable_ToList_TisTask_t1210_m7567_MethodInfo_var;
extern "C" Task_t1210 * SynchronizedEventHandler_1_Invoke_m30774_gshared (SynchronizedEventHandler_1_t5975 * __this, Object_t * ___sender, Object_t * ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Task_1U5BU5D_t5990_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14971);
		Task_t1210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2446);
		Func_2_t5996_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11421);
		Task_FromResult_TisInt32_t82_m7332_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484524);
		Enumerable_ToList_TisTuple_2_t2366_m66266_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485295);
		Func_2__ctor_m31044_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485296);
		Enumerable_Select_TisTuple_2_t2366_TisTask_t1210_m66267_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485297);
		Enumerable_ToList_TisTask_t1210_m7567_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484843);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	List_1_t1493 * V_1 = {0};
	U3CU3Ec__DisplayClass2_t5991 * V_2 = {0};
	Task_1U5BU5D_t5990* V_3 = {0};
	LinkedList_1_t5977 * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CU3Ec__DisplayClass2_t5991 * L_0 = (U3CU3Ec__DisplayClass2_t5991 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CU3Ec__DisplayClass2_t5991 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_2 = (U3CU3Ec__DisplayClass2_t5991 *)L_0;
		U3CU3Ec__DisplayClass2_t5991 * L_1 = V_2;
		Object_t * L_2 = ___sender;
		NullCheck(L_1);
		L_1->___sender_1 = L_2;
		U3CU3Ec__DisplayClass2_t5991 * L_3 = V_2;
		Object_t * L_4 = ___args;
		NullCheck(L_3);
		L_3->___args_2 = L_4;
		U3CU3Ec__DisplayClass2_t5991 * L_5 = V_2;
		V_3 = (Task_1U5BU5D_t5990*)((Task_1U5BU5D_t5990*)SZArrayNew(Task_1U5BU5D_t5990_il2cpp_TypeInfo_var, 1));
		Task_1U5BU5D_t5990* L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
		Task_1_t1370 * L_7 = Task_FromResult_TisInt32_t82_m7332(NULL /*static, unused*/, (int32_t)0, /*hidden argument*/Task_FromResult_TisInt32_t82_m7332_MethodInfo_var);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_7);
		*((Task_1_t1370 **)(Task_1_t1370 **)SZArrayLdElema(L_6, 0)) = (Task_1_t1370 *)L_7;
		Task_1U5BU5D_t5990* L_8 = V_3;
		NullCheck(L_5);
		L_5->___toContinue_0 = L_8;
		LinkedList_1_t5977 * L_9 = (LinkedList_1_t5977 *)(__this->___delegates_0);
		LinkedList_1_t5977 * L_10 = (LinkedList_1_t5977 *)L_9;
		V_4 = (LinkedList_1_t5977 *)L_10;
		Monitor_Enter_m7364(NULL /*static, unused*/, (Object_t *)L_10, /*hidden argument*/NULL);
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		LinkedList_1_t5977 * L_11 = (LinkedList_1_t5977 *)(__this->___delegates_0);
		List_1_t5995 * L_12 = Enumerable_ToList_TisTuple_2_t2366_m66266(NULL /*static, unused*/, (Object_t*)L_11, /*hidden argument*/Enumerable_ToList_TisTuple_2_t2366_m66266_MethodInfo_var);
		V_0 = (Object_t*)L_12;
		IL2CPP_LEAVE(0x4F, FINALLY_0047);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		LinkedList_1_t5977 * L_13 = V_4;
		Monitor_Exit_m7365(NULL /*static, unused*/, (Object_t *)L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004f:
	{
		Object_t* L_14 = V_0;
		U3CU3Ec__DisplayClass2_t5991 * L_15 = V_2;
		IntPtr_t L_16 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2) };
		Func_2_t5996 * L_17 = (Func_2_t5996 *)il2cpp_codegen_object_new (Func_2_t5996_il2cpp_TypeInfo_var);
		Func_2__ctor_m31044(L_17, (Object_t *)L_15, (IntPtr_t)L_16, /*hidden argument*/Func_2__ctor_m31044_MethodInfo_var);
		Object_t* L_18 = Enumerable_Select_TisTuple_2_t2366_TisTask_t1210_m66267(NULL /*static, unused*/, (Object_t*)L_14, (Func_2_t5996 *)L_17, /*hidden argument*/Enumerable_Select_TisTuple_2_t2366_TisTask_t1210_m66267_MethodInfo_var);
		List_1_t1493 * L_19 = Enumerable_ToList_TisTask_t1210_m7567(NULL /*static, unused*/, (Object_t*)L_18, /*hidden argument*/Enumerable_ToList_TisTask_t1210_m7567_MethodInfo_var);
		V_1 = (List_1_t1493 *)L_19;
		List_1_t1493 * L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1210_il2cpp_TypeInfo_var);
		Task_t1210 * L_21 = Task_WhenAll_m7251(NULL /*static, unused*/, (Object_t*)L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void Parse.Internal.SynchronizedEventHandler`1<System.Object>::.ctor()
extern TypeInfo* LinkedList_1_t5977_il2cpp_TypeInfo_var;
extern const MethodInfo* LinkedList_1__ctor_m30776_MethodInfo_var;
extern "C" void SynchronizedEventHandler_1__ctor_m30775_gshared (SynchronizedEventHandler_1_t5975 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LinkedList_1_t5977_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11391);
		LinkedList_1__ctor_m30776_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485298);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkedList_1_t5977 * L_0 = (LinkedList_1_t5977 *)il2cpp_codegen_object_new (LinkedList_1_t5977_il2cpp_TypeInfo_var);
		LinkedList_1__ctor_m30776(L_0, /*hidden argument*/LinkedList_1__ctor_m30776_MethodInfo_var);
		__this->___delegates_0 = L_0;
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
#include "System_System_Collections_Generic_LinkedListNode_1_gen_0.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"
// System.Collections.Generic.LinkedListNode`1<System.Object>
#include "System_System_Collections_Generic_LinkedListNode_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"


// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1__ctor_m30777_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m354((Object_t *)__this, /*hidden argument*/NULL);
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_0, /*hidden argument*/NULL);
		__this->___syncRoot_2 = L_0;
		__this->___first_3 = (LinkedListNode_1_t5979 *)NULL;
		int32_t L_1 = (int32_t)0;
		V_0 = (uint32_t)L_1;
		__this->___version_1 = L_1;
		uint32_t L_2 = V_0;
		__this->___count_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1__ctor_m30779_gshared (LinkedList_1_t5980 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((LinkedList_1_t5980 *)__this);
		(( void (*) (LinkedList_1_t5980 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((LinkedList_1_t5980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		SerializationInfo_t2919 * L_0 = ___info;
		__this->___si_4 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_1, /*hidden argument*/NULL);
		__this->___syncRoot_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m30781_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		NullCheck((LinkedList_1_t5980 *)__this);
		(( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((LinkedList_1_t5980 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m30783_gshared (LinkedList_1_t5980 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t682* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (ObjectU5BU5D_t682*)((ObjectU5BU5D_t682*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		ObjectU5BU5D_t682* L_1 = V_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t711 * L_2 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_2, (String_t*)(String_t*) &_stringLiteral1952, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		ObjectU5BU5D_t682* L_3 = V_0;
		int32_t L_4 = ___index;
		NullCheck((LinkedList_1_t5980 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t682*, int32_t >::Invoke(16 /* System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32) */, (LinkedList_1_t5980 *)__this, (ObjectU5BU5D_t682*)L_3, (int32_t)L_4);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m30785_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		NullCheck((LinkedList_1_t5980 *)__this);
		Enumerator_t5981  L_0 = (( Enumerator_t5981  (*) (LinkedList_1_t5980 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((LinkedList_1_t5980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Enumerator_t5981  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m30787_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		NullCheck((LinkedList_1_t5980 *)__this);
		Enumerator_t5981  L_0 = (( Enumerator_t5981  (*) (LinkedList_1_t5980 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((LinkedList_1_t5980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Enumerator_t5981  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m30789_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m30791_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m30793_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_2);
		return L_0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_VerifyReferencedNode_m30795_gshared (LinkedList_1_t5980 * __this, LinkedListNode_1_t5979 * ___node, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkedListNode_1_t5979 * L_0 = ___node;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*)(String_t*) &_stringLiteral2882, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		LinkedListNode_1_t5979 * L_2 = ___node;
		NullCheck((LinkedListNode_1_t5979 *)L_2);
		LinkedList_1_t5980 * L_3 = (( LinkedList_1_t5980 * (*) (LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((LinkedListNode_1_t5979 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if ((((Object_t*)(LinkedList_1_t5980 *)L_3) == ((Object_t*)(LinkedList_1_t5980 *)__this)))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t1429 * L_4 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m11482(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		return;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t5979 * LinkedList_1_AddLast_m30797_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t5979 * V_0 = {0};
	{
		LinkedListNode_1_t5979 * L_0 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Object_t * L_1 = ___value;
		LinkedListNode_1_t5979 * L_2 = (LinkedListNode_1_t5979 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (LinkedListNode_1_t5979 *, LinkedList_1_t5980 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_2, (LinkedList_1_t5980 *)__this, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = (LinkedListNode_1_t5979 *)L_2;
		LinkedListNode_1_t5979 * L_3 = V_0;
		__this->___first_3 = L_3;
		goto IL_0038;
	}

IL_001f:
	{
		Object_t * L_4 = ___value;
		LinkedListNode_1_t5979 * L_5 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		NullCheck(L_5);
		LinkedListNode_1_t5979 * L_6 = (LinkedListNode_1_t5979 *)(L_5->___back_3);
		LinkedListNode_1_t5979 * L_7 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		LinkedListNode_1_t5979 * L_8 = (LinkedListNode_1_t5979 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (LinkedListNode_1_t5979 *, LinkedList_1_t5980 *, Object_t *, LinkedListNode_1_t5979 *, LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_8, (LinkedList_1_t5980 *)__this, (Object_t *)L_4, (LinkedListNode_1_t5979 *)L_6, (LinkedListNode_1_t5979 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		V_0 = (LinkedListNode_1_t5979 *)L_8;
	}

IL_0038:
	{
		uint32_t L_9 = (uint32_t)(__this->___count_0);
		__this->___count_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint32_t L_10 = (uint32_t)(__this->___version_1);
		__this->___version_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		LinkedListNode_1_t5979 * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern "C" void LinkedList_1_Clear_m30799_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		goto IL_000b;
	}

IL_0005:
	{
		NullCheck((LinkedList_1_t5980 *)__this);
		(( void (*) (LinkedList_1_t5980 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((LinkedList_1_t5980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
	}

IL_000b:
	{
		LinkedListNode_1_t5979 * L_0 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern "C" bool LinkedList_1_Contains_m30801_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t5979 * V_0 = {0};
	{
		LinkedListNode_1_t5979 * L_0 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		V_0 = (LinkedListNode_1_t5979 *)L_0;
		LinkedListNode_1_t5979 * L_1 = V_0;
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
		LinkedListNode_1_t5979 * L_2 = V_0;
		NullCheck((LinkedListNode_1_t5979 *)L_2);
		Object_t * L_3 = (( Object_t * (*) (LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((LinkedListNode_1_t5979 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_4 = L_3;
		NullCheck((Object_t *)(*(&___value)));
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)(*(&___value)), (Object_t *)((Object_t *)L_4));
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkedListNode_1_t5979 * L_6 = V_0;
		NullCheck(L_6);
		LinkedListNode_1_t5979 * L_7 = (LinkedListNode_1_t5979 *)(L_6->___forward_2);
		V_0 = (LinkedListNode_1_t5979 *)L_7;
		LinkedListNode_1_t5979 * L_8 = V_0;
		LinkedListNode_1_t5979 * L_9 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t5979 *)L_8) == ((Object_t*)(LinkedListNode_1_t5979 *)L_9))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_CopyTo_m30803_gshared (LinkedList_1_t5980 * __this, ObjectU5BU5D_t682* ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2583);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	LinkedListNode_1_t5979 * V_0 = {0};
	{
		ObjectU5BU5D_t682* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*)(String_t*) &_stringLiteral1952, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		ObjectU5BU5D_t682* L_3 = ___array;
		NullCheck((Array_t *)L_3);
		int32_t L_4 = Array_GetLowerBound_m16116((Array_t *)L_3, (int32_t)0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) < ((uint32_t)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_t1473 * L_5 = (ArgumentOutOfRangeException_t1473 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1473_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11454(L_5, (String_t*)(String_t*) &_stringLiteral2292, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		ObjectU5BU5D_t682* L_6 = ___array;
		NullCheck((Array_t *)L_6);
		int32_t L_7 = Array_get_Rank_m15069((Array_t *)L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t711 * L_8 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3714(L_8, (String_t*)(String_t*) &_stringLiteral1952, (String_t*)(String_t*) &_stringLiteral2883, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0045:
	{
		ObjectU5BU5D_t682* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		ObjectU5BU5D_t682* L_11 = ___array;
		NullCheck((Array_t *)L_11);
		int32_t L_12 = Array_GetLowerBound_m16116((Array_t *)L_11, (int32_t)0, /*hidden argument*/NULL);
		uint32_t L_13 = (uint32_t)(__this->___count_0);
		if ((((int64_t)(((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10))+(int32_t)L_12))))) >= ((int64_t)(((uint64_t)L_13)))))
		{
			goto IL_006a;
		}
	}
	{
		ArgumentException_t711 * L_14 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_14, (String_t*)(String_t*) &_stringLiteral2884, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_006a:
	{
		LinkedListNode_1_t5979 * L_15 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		V_0 = (LinkedListNode_1_t5979 *)L_15;
		LinkedListNode_1_t5979 * L_16 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if (L_16)
		{
			goto IL_007d;
		}
	}
	{
		return;
	}

IL_007d:
	{
		ObjectU5BU5D_t682* L_17 = ___array;
		int32_t L_18 = ___index;
		LinkedListNode_1_t5979 * L_19 = V_0;
		NullCheck((LinkedListNode_1_t5979 *)L_19);
		Object_t * L_20 = (( Object_t * (*) (LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((LinkedListNode_1_t5979 *)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18)) = (Object_t *)L_20;
		int32_t L_21 = ___index;
		___index = (int32_t)((int32_t)((int32_t)L_21+(int32_t)1));
		LinkedListNode_1_t5979 * L_22 = V_0;
		NullCheck(L_22);
		LinkedListNode_1_t5979 * L_23 = (LinkedListNode_1_t5979 *)(L_22->___forward_2);
		V_0 = (LinkedListNode_1_t5979 *)L_23;
		LinkedListNode_1_t5979 * L_24 = V_0;
		LinkedListNode_1_t5979 * L_25 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t5979 *)L_24) == ((Object_t*)(LinkedListNode_1_t5979 *)L_25))))
		{
			goto IL_007d;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t5979 * LinkedList_1_Find_m30805_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t5979 * V_0 = {0};
	{
		LinkedListNode_1_t5979 * L_0 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		V_0 = (LinkedListNode_1_t5979 *)L_0;
		LinkedListNode_1_t5979 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (LinkedListNode_1_t5979 *)NULL;
	}

IL_000f:
	{
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		if (((Object_t *)L_3))
		{
			goto IL_002a;
		}
	}
	{
		LinkedListNode_1_t5979 * L_4 = V_0;
		NullCheck((LinkedListNode_1_t5979 *)L_4);
		Object_t * L_5 = (( Object_t * (*) (LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((LinkedListNode_1_t5979 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_6 = L_5;
		if (!((Object_t *)L_6))
		{
			goto IL_0052;
		}
	}

IL_002a:
	{
		Object_t * L_7 = ___value;
		Object_t * L_8 = L_7;
		if (!((Object_t *)L_8))
		{
			goto IL_0054;
		}
	}
	{
		LinkedListNode_1_t5979 * L_9 = V_0;
		NullCheck((LinkedListNode_1_t5979 *)L_9);
		Object_t * L_10 = (( Object_t * (*) (LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)((LinkedListNode_1_t5979 *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_11 = L_10;
		NullCheck((Object_t *)(*(&___value)));
		bool L_12 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)(*(&___value)), (Object_t *)((Object_t *)L_11));
		if (!L_12)
		{
			goto IL_0054;
		}
	}

IL_0052:
	{
		LinkedListNode_1_t5979 * L_13 = V_0;
		return L_13;
	}

IL_0054:
	{
		LinkedListNode_1_t5979 * L_14 = V_0;
		NullCheck(L_14);
		LinkedListNode_1_t5979 * L_15 = (LinkedListNode_1_t5979 *)(L_14->___forward_2);
		V_0 = (LinkedListNode_1_t5979 *)L_15;
		LinkedListNode_1_t5979 * L_16 = V_0;
		LinkedListNode_1_t5979 * L_17 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t5979 *)L_16) == ((Object_t*)(LinkedListNode_1_t5979 *)L_17))))
		{
			goto IL_000f;
		}
	}
	{
		return (LinkedListNode_1_t5979 *)NULL;
	}
}
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t5981  LinkedList_1_GetEnumerator_m30807_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		Enumerator_t5981  L_0 = {0};
		(( void (*) (Enumerator_t5981 *, LinkedList_1_t5980 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(&L_0, (LinkedList_1_t5980 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_GetObjectData_m30809_gshared (LinkedList_1_t5980 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t682* V_0 = {0};
	{
		uint32_t L_0 = (uint32_t)(__this->___count_0);
		V_0 = (ObjectU5BU5D_t682*)((ObjectU5BU5D_t682*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), (((uintptr_t)L_0))));
		ObjectU5BU5D_t682* L_1 = V_0;
		NullCheck((LinkedList_1_t5980 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t682*, int32_t >::Invoke(16 /* System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32) */, (LinkedList_1_t5980 *)__this, (ObjectU5BU5D_t682*)L_1, (int32_t)0);
		SerializationInfo_t2919 * L_2 = ___info;
		ObjectU5BU5D_t682* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2919 *)L_2);
		SerializationInfo_AddValue_m15071((SerializationInfo_t2919 *)L_2, (String_t*)(String_t*) &_stringLiteral2885, (Object_t *)(Object_t *)L_3, (Type_t *)L_4, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_5 = ___info;
		uint32_t L_6 = (uint32_t)(__this->___version_1);
		NullCheck((SerializationInfo_t2919 *)L_5);
		SerializationInfo_AddValue_m18562((SerializationInfo_t2919 *)L_5, (String_t*)(String_t*) &_stringLiteral880, (uint32_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void LinkedList_1_OnDeserialization_m30811_gshared (LinkedList_1_t5980 * __this, Object_t * ___sender, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t682* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t682* V_2 = {0};
	int32_t V_3 = 0;
	{
		SerializationInfo_t2919 * L_0 = (SerializationInfo_t2919 *)(__this->___si_4);
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		SerializationInfo_t2919 * L_1 = (SerializationInfo_t2919 *)(__this->___si_4);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, (RuntimeTypeHandle_t4342 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)), /*hidden argument*/NULL);
		NullCheck((SerializationInfo_t2919 *)L_1);
		Object_t * L_3 = SerializationInfo_GetValue_m11462((SerializationInfo_t2919 *)L_1, (String_t*)(String_t*) &_stringLiteral2885, (Type_t *)L_2, /*hidden argument*/NULL);
		V_0 = (ObjectU5BU5D_t682*)((ObjectU5BU5D_t682*)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		ObjectU5BU5D_t682* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t682* L_5 = V_0;
		V_2 = (ObjectU5BU5D_t682*)L_5;
		V_3 = (int32_t)0;
		goto IL_004e;
	}

IL_003a:
	{
		ObjectU5BU5D_t682* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_1 = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8));
		Object_t * L_9 = V_1;
		NullCheck((LinkedList_1_t5980 *)__this);
		(( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((LinkedList_1_t5980 *)__this, (Object_t *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t682* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_0057:
	{
		SerializationInfo_t2919 * L_13 = (SerializationInfo_t2919 *)(__this->___si_4);
		NullCheck((SerializationInfo_t2919 *)L_13);
		uint32_t L_14 = SerializationInfo_GetUInt32_m18565((SerializationInfo_t2919 *)L_13, (String_t*)(String_t*) &_stringLiteral880, /*hidden argument*/NULL);
		__this->___version_1 = L_14;
		__this->___si_4 = (SerializationInfo_t2919 *)NULL;
	}

IL_0074:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern "C" bool LinkedList_1_Remove_m30813_gshared (LinkedList_1_t5980 * __this, Object_t * ___value, const MethodInfo* method)
{
	LinkedListNode_1_t5979 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		NullCheck((LinkedList_1_t5980 *)__this);
		LinkedListNode_1_t5979 * L_1 = (( LinkedListNode_1_t5979 * (*) (LinkedList_1_t5980 *, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)((LinkedList_1_t5980 *)__this, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		V_0 = (LinkedListNode_1_t5979 *)L_1;
		LinkedListNode_1_t5979 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		LinkedListNode_1_t5979 * L_3 = V_0;
		NullCheck((LinkedList_1_t5980 *)__this);
		(( void (*) (LinkedList_1_t5980 *, LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((LinkedList_1_t5980 *)__this, (LinkedListNode_1_t5979 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		return 1;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m30815_gshared (LinkedList_1_t5980 * __this, LinkedListNode_1_t5979 * ___node, const MethodInfo* method)
{
	{
		LinkedListNode_1_t5979 * L_0 = ___node;
		NullCheck((LinkedList_1_t5980 *)__this);
		(( void (*) (LinkedList_1_t5980 *, LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((LinkedList_1_t5980 *)__this, (LinkedListNode_1_t5979 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		uint32_t L_1 = (uint32_t)(__this->___count_0);
		__this->___count_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		uint32_t L_2 = (uint32_t)(__this->___count_0);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		__this->___first_3 = (LinkedListNode_1_t5979 *)NULL;
	}

IL_0027:
	{
		LinkedListNode_1_t5979 * L_3 = ___node;
		LinkedListNode_1_t5979 * L_4 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t5979 *)L_3) == ((Object_t*)(LinkedListNode_1_t5979 *)L_4))))
		{
			goto IL_0044;
		}
	}
	{
		LinkedListNode_1_t5979 * L_5 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		NullCheck(L_5);
		LinkedListNode_1_t5979 * L_6 = (LinkedListNode_1_t5979 *)(L_5->___forward_2);
		__this->___first_3 = L_6;
	}

IL_0044:
	{
		uint32_t L_7 = (uint32_t)(__this->___version_1);
		__this->___version_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		LinkedListNode_1_t5979 * L_8 = ___node;
		NullCheck((LinkedListNode_1_t5979 *)L_8);
		(( void (*) (LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)((LinkedListNode_1_t5979 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveFirst()
extern "C" void LinkedList_1_RemoveFirst_m30817_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		LinkedListNode_1_t5979 * L_0 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		LinkedListNode_1_t5979 * L_1 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		NullCheck((LinkedList_1_t5980 *)__this);
		(( void (*) (LinkedList_1_t5980 *, LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((LinkedList_1_t5980 *)__this, (LinkedListNode_1_t5979 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m30819_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		LinkedListNode_1_t5979 * L_0 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		LinkedListNode_1_t5979 * L_1 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		NullCheck(L_1);
		LinkedListNode_1_t5979 * L_2 = (LinkedListNode_1_t5979 *)(L_1->___back_3);
		NullCheck((LinkedList_1_t5980 *)__this);
		(( void (*) (LinkedList_1_t5980 *, LinkedListNode_1_t5979 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((LinkedList_1_t5980 *)__this, (LinkedListNode_1_t5979 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001c:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern "C" int32_t LinkedList_1_get_Count_m30821_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (uint32_t)(__this->___count_0);
		return L_0;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern "C" LinkedListNode_1_t5979 * LinkedList_1_get_First_m30823_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	{
		LinkedListNode_1_t5979 * L_0 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		return L_0;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_Last()
extern "C" LinkedListNode_1_t5979 * LinkedList_1_get_Last_m30825_gshared (LinkedList_1_t5980 * __this, const MethodInfo* method)
{
	LinkedListNode_1_t5979 * G_B3_0 = {0};
	{
		LinkedListNode_1_t5979 * L_0 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LinkedListNode_1_t5979 * L_1 = (LinkedListNode_1_t5979 *)(__this->___first_3);
		NullCheck(L_1);
		LinkedListNode_1_t5979 * L_2 = (LinkedListNode_1_t5979 *)(L_1->___back_3);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = ((LinkedListNode_1_t5979 *)(NULL));
	}

IL_001c:
	{
		return G_B3_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
