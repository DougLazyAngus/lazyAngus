﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Text.RegularExpressions.RxInterpreter/IntStack
#include "System_System_Text_RegularExpressions_RxInterpreter_IntStack.h"
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
// System.Text.RegularExpressions.RxInterpreter/IntStack
#include "System_System_Text_RegularExpressions_RxInterpreter_IntStackMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.SystemException
#include "mscorlib_System_SystemException.h"
#include "mscorlib_ArrayTypes.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m17695 (IntStack_t4508 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t484* L_0 = (__this->___values_0);
		int32_t L_1 = (__this->___count_1);
		int32_t L_2 = ((int32_t)((int32_t)L_1-(int32_t)1));
		V_0 = L_2;
		__this->___count_1 = L_2;
		int32_t L_3 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_3);
		int32_t L_4 = L_3;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_4));
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::Push(System.Int32)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void IntStack_Push_m17696 (IntStack_t4508 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t484* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t484* L_0 = (__this->___values_0);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		__this->___values_0 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, 8));
		goto IL_006e;
	}

IL_001c:
	{
		int32_t L_1 = (__this->___count_1);
		Int32U5BU5D_t484* L_2 = (__this->___values_0);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t484* L_3 = (__this->___values_0);
		NullCheck(L_3);
		V_0 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)((int32_t)((int32_t)L_5>>(int32_t)1))));
		int32_t L_6 = V_0;
		V_1 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_6));
		V_2 = 0;
		goto IL_005b;
	}

IL_004c:
	{
		Int32U5BU5D_t484* L_7 = V_1;
		int32_t L_8 = V_2;
		Int32U5BU5D_t484* L_9 = (__this->___values_0);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = (__this->___count_1);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_004c;
		}
	}
	{
		Int32U5BU5D_t484* L_15 = V_1;
		__this->___values_0 = L_15;
	}

IL_006e:
	{
		Int32U5BU5D_t484* L_16 = (__this->___values_0);
		int32_t L_17 = (__this->___count_1);
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->___count_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = ___value;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_16, L_19)) = (int32_t)L_20;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m17697 (IntStack_t4508 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter/IntStack::set_Count(System.Int32)
extern TypeInfo* SystemException_t3383_il2cpp_TypeInfo_var;
extern "C" void IntStack_set_Count_m17698 (IntStack_t4508 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SystemException_t3383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5836);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->___count_1);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		SystemException_t3383 * L_2 = (SystemException_t3383 *)il2cpp_codegen_object_new (SystemException_t3383_il2cpp_TypeInfo_var);
		SystemException__ctor_m12108(L_2, (String_t*) &_stringLiteral4482, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		int32_t L_3 = ___value;
		__this->___count_1 = L_3;
		return;
	}
}
// Conversion methods for marshalling of: System.Text.RegularExpressions.RxInterpreter/IntStack
void IntStack_t4508_marshal(const IntStack_t4508& unmarshaled, IntStack_t4508_marshaled& marshaled)
{
	marshaled.___values_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.___values_0);
	marshaled.___count_1 = unmarshaled.___count_1;
}
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
void IntStack_t4508_marshal_back(const IntStack_t4508_marshaled& marshaled, IntStack_t4508& unmarshaled)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	unmarshaled.___values_0 = (Int32U5BU5D_t484*)il2cpp_codegen_marshal_array_result(Int32_t82_il2cpp_TypeInfo_var, marshaled.___values_0, 1);
	unmarshaled.___count_1 = marshaled.___count_1;
}
// Conversion method for clean up from marshalling of: System.Text.RegularExpressions.RxInterpreter/IntStack
void IntStack_t4508_marshal_cleanup(IntStack_t4508_marshaled& marshaled)
{
}
// System.Text.RegularExpressions.RxInterpreter/RepeatContext
#include "System_System_Text_RegularExpressions_RxInterpreter_RepeatCo.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.RxInterpreter/RepeatContext
#include "System_System_Text_RegularExpressions_RxInterpreter_RepeatCoMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::.ctor(System.Text.RegularExpressions.RxInterpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" void RepeatContext__ctor_m17699 (RepeatContext_t4509 * __this, RepeatContext_t4509 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		RepeatContext_t4509 * L_0 = ___previous;
		__this->___previous_5 = L_0;
		int32_t L_1 = ___min;
		__this->___min_1 = L_1;
		int32_t L_2 = ___max;
		__this->___max_2 = L_2;
		bool L_3 = ___lazy;
		__this->___lazy_3 = L_3;
		int32_t L_4 = ___expr_pc;
		__this->___expr_pc_4 = L_4;
		__this->___start_0 = (-1);
		__this->___count_6 = 0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Count()
extern "C" int32_t RepeatContext_get_Count_m17700 (RepeatContext_t4509 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_6);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::set_Count(System.Int32)
extern "C" void RepeatContext_set_Count_m17701 (RepeatContext_t4509 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___count_6 = L_0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Start()
extern "C" int32_t RepeatContext_get_Start_m17702 (RepeatContext_t4509 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___start_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter/RepeatContext::set_Start(System.Int32)
extern "C" void RepeatContext_set_Start_m17703 (RepeatContext_t4509 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___start_0 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsMinimum()
extern "C" bool RepeatContext_get_IsMinimum_m17704 (RepeatContext_t4509 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___min_1);
		int32_t L_1 = (__this->___count_6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsMaximum()
extern "C" bool RepeatContext_get_IsMaximum_m17705 (RepeatContext_t4509 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___max_2);
		int32_t L_1 = (__this->___count_6);
		return ((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_IsLazy()
extern "C" bool RepeatContext_get_IsLazy_m17706 (RepeatContext_t4509 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___lazy_3);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Expression()
extern "C" int32_t RepeatContext_get_Expression_m17707 (RepeatContext_t4509 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___expr_pc_4);
		return L_0;
	}
}
// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter/RepeatContext::get_Previous()
extern "C" RepeatContext_t4509 * RepeatContext_get_Previous_m17708 (RepeatContext_t4509 * __this, const MethodInfo* method)
{
	{
		RepeatContext_t4509 * L_0 = (__this->___previous_5);
		return L_0;
	}
}
// System.Text.RegularExpressions.RxInterpreter
#include "System_System_Text_RegularExpressions_RxInterpreter.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.RxInterpreter
#include "System_System_Text_RegularExpressions_RxInterpreterMethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
// System.Text.RegularExpressions.EvalDelegate
#include "System_System_Text_RegularExpressions_EvalDelegate.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
#include "System_ArrayTypes.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.CaptureCollection
#include "System_System_Text_RegularExpressions_CaptureCollection.h"
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachine.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"
// System.Text.RegularExpressions.RxOp
#include "System_System_Text_RegularExpressions_RxOp.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachineMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Text.RegularExpressions.EvalDelegate
#include "System_System_Text_RegularExpressions_EvalDelegateMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.CaptureCollection
#include "System_System_Text_RegularExpressions_CaptureCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Console
#include "mscorlib_System_ConsoleMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.RxInterpreter::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern TypeInfo* IntStack_t4508_il2cpp_TypeInfo_var;
extern "C" void RxInterpreter__ctor_m17709 (RxInterpreter_t4511 * __this, ByteU5BU5D_t66* ___program, EvalDelegate_t4510 * ___eval_del, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		IntStack_t4508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7898);
		s_Il2CppMethodIntialized = true;
	}
	IntStack_t4508  V_0 = {0};
	{
		BaseMachine__ctor_m17414(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_0 = ___program;
		__this->___program_1 = L_0;
		EvalDelegate_t4510 * L_1 = ___eval_del;
		__this->___eval_del_7 = L_1;
		ByteU5BU5D_t66* L_2 = ___program;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		ByteU5BU5D_t66* L_4 = ___program;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		int32_t L_5 = 2;
		__this->___group_count_5 = ((int32_t)((int32_t)1+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5))<<(int32_t)8))))));
		int32_t L_6 = (__this->___group_count_5);
		__this->___groups_6 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_6));
		Initobj (IntStack_t4508_il2cpp_TypeInfo_var, (&V_0));
		IntStack_t4508  L_7 = V_0;
		__this->___stack_11 = L_7;
		RxInterpreter_ResetGroups_m17718(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter::.cctor()
extern TypeInfo* RxInterpreter_t4511_il2cpp_TypeInfo_var;
extern "C" void RxInterpreter__cctor_m17710 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RxInterpreter_t4511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7884);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Environment_GetEnvironmentVariable_m11534(NULL /*static, unused*/, (String_t*) &_stringLiteral4520, /*hidden argument*/NULL);
		((RxInterpreter_t4511_StaticFields*)RxInterpreter_t4511_il2cpp_TypeInfo_var->static_fields)->___trace_rx_14 = ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreter::ReadInt(System.Byte[],System.Int32)
extern "C" int32_t RxInterpreter_ReadInt_m17711 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___code, int32_t ___pc, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t66* L_0 = ___code;
		int32_t L_1 = ___pc;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		ByteU5BU5D_t66* L_4 = ___code;
		int32_t L_5 = ___pc;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)L_5+(int32_t)1)));
		int32_t L_6 = ((int32_t)((int32_t)L_5+(int32_t)1));
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_6))<<(int32_t)8))));
		int32_t L_7 = V_0;
		ByteU5BU5D_t66* L_8 = ___code;
		int32_t L_9 = ___pc;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)2)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)2));
		V_0 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_10))<<(int32_t)((int32_t)16)))));
		int32_t L_11 = V_0;
		ByteU5BU5D_t66* L_12 = ___code;
		int32_t L_13 = ___pc;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, ((int32_t)((int32_t)L_13+(int32_t)3)));
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)3));
		V_0 = ((int32_t)((int32_t)L_11|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_14))<<(int32_t)((int32_t)24)))));
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern TypeInfo* Match_t1391_il2cpp_TypeInfo_var;
extern "C" Match_t1391 * RxInterpreter_Scan_m17712 (RxInterpreter_t4511 * __this, Regex_t801 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Match_t1391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3708);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		String_t* L_0 = ___text;
		__this->___str_2 = L_0;
		int32_t L_1 = ___start;
		__this->___string_start_3 = L_1;
		int32_t L_2 = ___end;
		__this->___string_end_4 = L_2;
		V_0 = 0;
		EvalDelegate_t4510 * L_3 = (__this->___eval_del_7);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		EvalDelegate_t4510 * L_4 = (__this->___eval_del_7);
		int32_t L_5 = ___start;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker3< bool, RxInterpreter_t4511 *, int32_t, int32_t* >::Invoke(12 /* System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&) */, L_4, __this, L_5, (&V_0));
		V_1 = L_6;
		goto IL_0044;
	}

IL_0038:
	{
		int32_t L_7 = ___start;
		bool L_8 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)11), L_7, (&V_0), /*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_0044:
	{
		MarkU5BU5D_t4495* L_9 = (__this->___marks_8);
		Int32U5BU5D_t484* L_10 = (__this->___groups_6);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_11)));
		int32_t L_12 = V_0;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_11))))->___End_1 = L_12;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		Regex_t801 * L_14 = ___regex;
		Match_t1391 * L_15 = RxInterpreter_GenerateMatch_m17723(__this, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_006b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Match_t1391_il2cpp_TypeInfo_var);
		Match_t1391 * L_16 = Match_get_Empty_m17623(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter::Open(System.Int32,System.Int32)
extern "C" void RxInterpreter_Open_m17713 (RxInterpreter_t4511 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t484* L_0 = (__this->___groups_6);
		int32_t L_1 = ___gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		int32_t L_4 = (__this->___mark_start_9);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		MarkU5BU5D_t4495* L_5 = (__this->___marks_8);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		bool L_7 = Mark_get_IsDefined_m17525(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_5, L_6)), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = RxInterpreter_CreateMark_m17720(__this, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		Int32U5BU5D_t484* L_10 = (__this->___groups_6);
		int32_t L_11 = ___gid;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_11)) = (int32_t)L_12;
	}

IL_003c:
	{
		MarkU5BU5D_t4495* L_13 = (__this->___marks_8);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = ___ptr;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_13, L_14))->___Start_0 = L_15;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter::Close(System.Int32,System.Int32)
extern "C" void RxInterpreter_Close_m17714 (RxInterpreter_t4511 * __this, int32_t ___gid, int32_t ___ptr, const MethodInfo* method)
{
	{
		MarkU5BU5D_t4495* L_0 = (__this->___marks_8);
		Int32U5BU5D_t484* L_1 = (__this->___groups_6);
		int32_t L_2 = ___gid;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3)));
		int32_t L_4 = ___ptr;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_0, (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))))->___End_1 = L_4;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.RxInterpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C" bool RxInterpreter_Balance_m17715 (RxInterpreter_t4511 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t484* L_0 = (__this->___groups_6);
		int32_t L_1 = ___balance_gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		MarkU5BU5D_t4495* L_4 = (__this->___marks_8);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		return 0;
	}

IL_0029:
	{
		int32_t L_7 = ___gid;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		bool L_8 = ___capture;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_9 = ___gid;
		MarkU5BU5D_t4495* L_10 = (__this->___marks_8);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		MarkU5BU5D_t4495* L_13 = (__this->___marks_8);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = Mark_get_Length_m17527(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_13, L_14)), /*hidden argument*/NULL);
		RxInterpreter_Open_m17713(__this, L_9, ((int32_t)((int32_t)L_12+(int32_t)L_15)), /*hidden argument*/NULL);
		int32_t L_16 = ___gid;
		int32_t L_17 = ___ptr;
		RxInterpreter_Close_m17714(__this, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0069:
	{
		Int32U5BU5D_t484* L_18 = (__this->___groups_6);
		int32_t L_19 = ___balance_gid;
		MarkU5BU5D_t4495* L_20 = (__this->___marks_8);
		int32_t L_21 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_20, L_21))->___Previous_2);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)) = (int32_t)L_22;
		return 1;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreter::Checkpoint()
extern "C" int32_t RxInterpreter_Checkpoint_m17716 (RxInterpreter_t4511 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___mark_end_10);
		__this->___mark_start_9 = L_0;
		int32_t L_1 = (__this->___mark_start_9);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter::Backtrack(System.Int32)
extern "C" void RxInterpreter_Backtrack_m17717 (RxInterpreter_t4511 * __this, int32_t ___cp, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0007:
	{
		Int32U5BU5D_t484* L_0 = (__this->___groups_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		goto IL_0027;
	}

IL_0015:
	{
		MarkU5BU5D_t4495* L_3 = (__this->___marks_8);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = (((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_3, L_4))->___Previous_2);
		V_1 = L_5;
	}

IL_0027:
	{
		int32_t L_6 = ___cp;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0015;
		}
	}
	{
		Int32U5BU5D_t484* L_8 = (__this->___groups_6);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		Int32U5BU5D_t484* L_13 = (__this->___groups_6);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter::ResetGroups()
extern TypeInfo* MarkU5BU5D_t4495_il2cpp_TypeInfo_var;
extern "C" void RxInterpreter_ResetGroups_m17718 (RxInterpreter_t4511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarkU5BU5D_t4495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7910);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t484* L_0 = (__this->___groups_6);
		NullCheck(L_0);
		V_0 = (((int32_t)(((Array_t *)L_0)->max_length)));
		MarkU5BU5D_t4495* L_1 = (__this->___marks_8);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_0;
		__this->___marks_8 = ((MarkU5BU5D_t4495*)SZArrayNew(MarkU5BU5D_t4495_il2cpp_TypeInfo_var, L_2));
	}

IL_0020:
	{
		V_1 = 0;
		goto IL_006a;
	}

IL_0027:
	{
		Int32U5BU5D_t484* L_3 = (__this->___groups_6);
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4)) = (int32_t)L_5;
		MarkU5BU5D_t4495* L_6 = (__this->___marks_8);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_6, L_7))->___Start_0 = (-1);
		MarkU5BU5D_t4495* L_8 = (__this->___marks_8);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_8, L_9))->___End_1 = (-1);
		MarkU5BU5D_t4495* L_10 = (__this->___marks_8);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_10, L_11))->___Previous_2 = (-1);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_006a:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0027;
		}
	}
	{
		__this->___mark_start_9 = 0;
		int32_t L_15 = V_0;
		__this->___mark_end_10 = L_15;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreter::GetLastDefined(System.Int32)
extern "C" int32_t RxInterpreter_GetLastDefined_m17719 (RxInterpreter_t4511 * __this, int32_t ___gid, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t484* L_0 = (__this->___groups_6);
		int32_t L_1 = ___gid;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		goto IL_0020;
	}

IL_000e:
	{
		MarkU5BU5D_t4495* L_3 = (__this->___marks_8);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = (((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_3, L_4))->___Previous_2);
		V_0 = L_5;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		MarkU5BU5D_t4495* L_7 = (__this->___marks_8);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		bool L_9 = Mark_get_IsDefined_m17525(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_000e;
		}
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreter::CreateMark(System.Int32)
extern TypeInfo* MarkU5BU5D_t4495_il2cpp_TypeInfo_var;
extern "C" int32_t RxInterpreter_CreateMark_m17720 (RxInterpreter_t4511 * __this, int32_t ___previous, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarkU5BU5D_t4495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7910);
		s_Il2CppMethodIntialized = true;
	}
	MarkU5BU5D_t4495* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___mark_end_10);
		MarkU5BU5D_t4495* L_1 = (__this->___marks_8);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		MarkU5BU5D_t4495* L_2 = (__this->___marks_8);
		NullCheck(L_2);
		V_0 = ((MarkU5BU5D_t4495*)SZArrayNew(MarkU5BU5D_t4495_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))*(int32_t)2))));
		MarkU5BU5D_t4495* L_3 = (__this->___marks_8);
		MarkU5BU5D_t4495* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(9 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_3, (Array_t *)(Array_t *)L_4, 0);
		MarkU5BU5D_t4495* L_5 = V_0;
		__this->___marks_8 = L_5;
	}

IL_0037:
	{
		int32_t L_6 = (__this->___mark_end_10);
		int32_t L_7 = L_6;
		V_2 = L_7;
		__this->___mark_end_10 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_2;
		V_1 = L_8;
		MarkU5BU5D_t4495* L_9 = (__this->___marks_8);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		MarkU5BU5D_t4495* L_11 = (__this->___marks_8);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (-1);
		V_2 = L_13;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_11, L_12))->___End_1 = L_13;
		int32_t L_14 = V_2;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_9, L_10))->___Start_0 = L_14;
		MarkU5BU5D_t4495* L_15 = (__this->___marks_8);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = ___previous;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_15, L_16))->___Previous_2 = L_17;
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
extern "C" void RxInterpreter_GetGroupInfo_m17721 (RxInterpreter_t4511 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___first_mark_index;
		*((int32_t*)(L_0)) = (int32_t)(-1);
		int32_t* L_1 = ___n_caps;
		*((int32_t*)(L_1)) = (int32_t)0;
		Int32U5BU5D_t484* L_2 = (__this->___groups_6);
		int32_t L_3 = ___gid;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4));
		goto IL_0052;
	}

IL_0014:
	{
		MarkU5BU5D_t4495* L_5 = (__this->___marks_8);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		bool L_7 = Mark_get_IsDefined_m17525(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_5, L_6)), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		goto IL_0040;
	}

IL_002f:
	{
		int32_t* L_8 = ___first_mark_index;
		if ((((int32_t)(*((int32_t*)L_8))) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t* L_9 = ___first_mark_index;
		int32_t L_10 = V_0;
		*((int32_t*)(L_9)) = (int32_t)L_10;
	}

IL_003a:
	{
		int32_t* L_11 = ___n_caps;
		int32_t* L_12 = ___n_caps;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_12))+(int32_t)1));
	}

IL_0040:
	{
		MarkU5BU5D_t4495* L_13 = (__this->___marks_8);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_13, L_14))->___Previous_2);
		V_0 = L_15;
	}

IL_0052:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
extern TypeInfo* Capture_t1453_il2cpp_TypeInfo_var;
extern "C" void RxInterpreter_PopulateGroup_m17722 (RxInterpreter_t4511 * __this, Group_t1452 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Capture_t1453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2519);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Capture_t1453 * V_2 = {0};
	{
		V_0 = 1;
		MarkU5BU5D_t4495* L_0 = (__this->___marks_8);
		int32_t L_1 = ___first_mark_index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_0, L_1))->___Previous_2);
		V_1 = L_2;
		goto IL_0089;
	}

IL_0019:
	{
		MarkU5BU5D_t4495* L_3 = (__this->___marks_8);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		bool L_5 = Mark_get_IsDefined_m17525(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_3, L_4)), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0077;
	}

IL_0034:
	{
		String_t* L_6 = (__this->___str_2);
		MarkU5BU5D_t4495* L_7 = (__this->___marks_8);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		MarkU5BU5D_t4495* L_10 = (__this->___marks_8);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = Mark_get_Length_m17527(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_10, L_11)), /*hidden argument*/NULL);
		Capture_t1453 * L_13 = (Capture_t1453 *)il2cpp_codegen_object_new (Capture_t1453_il2cpp_TypeInfo_var);
		Capture__ctor_m17441(L_13, L_6, L_9, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Group_t1452 * L_14 = ___g;
		NullCheck(L_14);
		CaptureCollection_t1455 * L_15 = Group_get_Captures_m7501(L_14, /*hidden argument*/NULL);
		Capture_t1453 * L_16 = V_2;
		int32_t L_17 = ___n_caps;
		int32_t L_18 = V_0;
		NullCheck(L_15);
		CaptureCollection_SetValue_m17436(L_15, L_16, ((int32_t)((int32_t)((int32_t)((int32_t)L_17-(int32_t)1))-(int32_t)L_18)), /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0077:
	{
		MarkU5BU5D_t4495* L_20 = (__this->___marks_8);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_20, L_21))->___Previous_2);
		V_1 = L_22;
	}

IL_0089:
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RxInterpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
extern TypeInfo* Match_t1391_il2cpp_TypeInfo_var;
extern TypeInfo* Group_t1452_il2cpp_TypeInfo_var;
extern "C" Match_t1391 * RxInterpreter_GenerateMatch_m17723 (RxInterpreter_t4511 * __this, Regex_t801 * ___regex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Match_t1391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3708);
		Group_t1452_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7905);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Group_t1452 * V_2 = {0};
	Match_t1391 * V_3 = {0};
	int32_t V_4 = 0;
	{
		RxInterpreter_GetGroupInfo_m17721(__this, 0, (&V_1), (&V_0), /*hidden argument*/NULL);
		bool L_0 = (((BaseMachine_t4467 *)__this)->___needs_groups_or_captures_0);
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		Regex_t801 * L_1 = ___regex;
		String_t* L_2 = (__this->___str_2);
		int32_t L_3 = (__this->___string_end_4);
		MarkU5BU5D_t4495* L_4 = (__this->___marks_8);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_4, L_5)), /*hidden argument*/NULL);
		MarkU5BU5D_t4495* L_7 = (__this->___marks_8);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = Mark_get_Length_m17527(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_7, L_8)), /*hidden argument*/NULL);
		Match_t1391 * L_10 = (Match_t1391 *)il2cpp_codegen_object_new (Match_t1391_il2cpp_TypeInfo_var);
		Match__ctor_m17620(L_10, L_1, __this, L_2, L_3, 0, L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_004d:
	{
		Regex_t801 * L_11 = ___regex;
		String_t* L_12 = (__this->___str_2);
		int32_t L_13 = (__this->___string_end_4);
		Int32U5BU5D_t484* L_14 = (__this->___groups_6);
		NullCheck(L_14);
		MarkU5BU5D_t4495* L_15 = (__this->___marks_8);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_15, L_16)), /*hidden argument*/NULL);
		MarkU5BU5D_t4495* L_18 = (__this->___marks_8);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = Mark_get_Length_m17527(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_18, L_19)), /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		Match_t1391 * L_22 = (Match_t1391 *)il2cpp_codegen_object_new (Match_t1391_il2cpp_TypeInfo_var);
		Match__ctor_m17621(L_22, L_11, __this, L_12, L_13, (((int32_t)(((Array_t *)L_14)->max_length))), L_17, L_20, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		Match_t1391 * L_23 = V_3;
		int32_t L_24 = V_1;
		int32_t L_25 = V_0;
		RxInterpreter_PopulateGroup_m17722(__this, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_4 = 1;
		goto IL_0107;
	}

IL_009d:
	{
		int32_t L_26 = V_4;
		RxInterpreter_GetGroupInfo_m17721(__this, L_26, (&V_1), (&V_0), /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Group_t1452_il2cpp_TypeInfo_var);
		Group_t1452 * L_28 = ((Group_t1452_StaticFields*)Group_t1452_il2cpp_TypeInfo_var->static_fields)->___Fail_3;
		V_2 = L_28;
		goto IL_00f3;
	}

IL_00bb:
	{
		String_t* L_29 = (__this->___str_2);
		MarkU5BU5D_t4495* L_30 = (__this->___marks_8);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_30, L_31)), /*hidden argument*/NULL);
		MarkU5BU5D_t4495* L_33 = (__this->___marks_8);
		int32_t L_34 = V_1;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = Mark_get_Length_m17527(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_33, L_34)), /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		Group_t1452 * L_37 = (Group_t1452 *)il2cpp_codegen_object_new (Group_t1452_il2cpp_TypeInfo_var);
		Group__ctor_m17535(L_37, L_29, L_32, L_35, L_36, /*hidden argument*/NULL);
		V_2 = L_37;
		Group_t1452 * L_38 = V_2;
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		RxInterpreter_PopulateGroup_m17722(__this, L_38, L_39, L_40, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		Match_t1391 * L_41 = V_3;
		NullCheck(L_41);
		GroupCollection_t1454 * L_42 = (GroupCollection_t1454 *)VirtFuncInvoker0< GroupCollection_t1454 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_41);
		Group_t1452 * L_43 = V_2;
		int32_t L_44 = V_4;
		NullCheck(L_42);
		GroupCollection_SetValue_m17531(L_42, L_43, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_4;
		V_4 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0107:
	{
		int32_t L_46 = V_4;
		Int32U5BU5D_t484* L_47 = (__this->___groups_6);
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)(((Array_t *)L_47)->max_length))))))
		{
			goto IL_009d;
		}
	}
	{
		Match_t1391 * L_48 = V_3;
		return L_48;
	}
}
// System.Boolean System.Text.RegularExpressions.RxInterpreter::IsWordChar(System.Char)
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" bool RxInterpreter_IsWordChar_m17724 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsLetterOrDigit_m14810(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		uint16_t L_2 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_3 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)((int32_t)18)))? 1 : 0);
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
// System.Boolean System.Text.RegularExpressions.RxInterpreter::EvalByteCode(System.Int32,System.Int32,System.Int32&)
extern TypeInfo* RxInterpreter_t4511_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t696_il2cpp_TypeInfo_var;
extern TypeInfo* RxOp_t4514_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Console_t4577_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* RepeatContext_t4509_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool RxInterpreter_EvalByteCode_m17725 (RxInterpreter_t4511 * __this, int32_t ___pc, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RxInterpreter_t4511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7884);
		ObjectU5BU5D_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		RxOp_t4514_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7897);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Console_t4577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7830);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		RepeatContext_t4509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7940);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	uint16_t V_28 = 0x0;
	uint16_t V_29 = 0x0;
	uint16_t V_30 = 0x0;
	uint16_t V_31 = 0x0;
	uint16_t V_32 = 0x0;
	uint16_t V_33 = 0x0;
	uint16_t V_34 = 0x0;
	uint16_t V_35 = 0x0;
	uint16_t V_36 = 0x0;
	uint16_t V_37 = 0x0;
	uint16_t V_38 = 0x0;
	uint16_t V_39 = 0x0;
	uint16_t V_40 = 0x0;
	uint16_t V_41 = 0x0;
	uint16_t V_42 = 0x0;
	int32_t V_43 = 0;
	uint16_t V_44 = 0x0;
	int32_t V_45 = 0;
	uint16_t V_46 = 0x0;
	uint16_t V_47 = 0x0;
	uint16_t V_48 = 0x0;
	uint16_t V_49 = 0x0;
	uint16_t V_50 = 0x0;
	int32_t V_51 = 0;
	uint16_t V_52 = 0x0;
	int32_t V_53 = 0;
	uint16_t V_54 = 0x0;
	uint16_t V_55 = 0x0;
	uint16_t V_56 = 0x0;
	uint16_t V_57 = 0x0;
	uint16_t V_58 = 0x0;
	uint16_t V_59 = 0x0;
	uint16_t V_60 = 0x0;
	uint16_t V_61 = 0x0;
	uint16_t V_62 = 0x0;
	uint16_t V_63 = 0x0;
	uint16_t V_64 = 0x0;
	uint16_t V_65 = 0x0;
	uint16_t V_66 = 0x0;
	uint16_t V_67 = 0x0;
	uint16_t V_68 = 0x0;
	int32_t V_69 = 0;
	uint16_t V_70 = 0x0;
	int32_t V_71 = 0;
	uint16_t V_72 = 0x0;
	uint16_t V_73 = 0x0;
	uint16_t V_74 = 0x0;
	uint16_t V_75 = 0x0;
	uint16_t V_76 = 0x0;
	int32_t V_77 = 0;
	uint16_t V_78 = 0x0;
	int32_t V_79 = 0;
	uint16_t V_80 = 0x0;
	uint16_t V_81 = 0x0;
	uint16_t V_82 = 0x0;
	uint16_t V_83 = 0x0;
	uint16_t V_84 = 0x0;
	uint16_t V_85 = 0x0;
	uint16_t V_86 = 0x0;
	uint16_t V_87 = 0x0;
	uint16_t V_88 = 0x0;
	uint16_t V_89 = 0x0;
	uint16_t V_90 = 0x0;
	uint16_t V_91 = 0x0;
	uint16_t V_92 = 0x0;
	uint16_t V_93 = 0x0;
	uint16_t V_94 = 0x0;
	int32_t V_95 = 0;
	uint16_t V_96 = 0x0;
	int32_t V_97 = 0;
	uint16_t V_98 = 0x0;
	uint16_t V_99 = 0x0;
	uint16_t V_100 = 0x0;
	uint16_t V_101 = 0x0;
	uint16_t V_102 = 0x0;
	int32_t V_103 = 0;
	uint16_t V_104 = 0x0;
	int32_t V_105 = 0;
	uint16_t V_106 = 0x0;
	uint16_t V_107 = 0x0;
	uint16_t V_108 = 0x0;
	uint16_t V_109 = 0x0;
	uint16_t V_110 = 0x0;
	uint16_t V_111 = 0x0;
	uint16_t V_112 = 0x0;
	uint16_t V_113 = 0x0;
	uint16_t V_114 = 0x0;
	uint16_t V_115 = 0x0;
	uint16_t V_116 = 0x0;
	uint16_t V_117 = 0x0;
	uint16_t V_118 = 0x0;
	uint16_t V_119 = 0x0;
	uint16_t V_120 = 0x0;
	int32_t V_121 = 0;
	uint16_t V_122 = 0x0;
	int32_t V_123 = 0;
	uint16_t V_124 = 0x0;
	uint16_t V_125 = 0x0;
	uint16_t V_126 = 0x0;
	uint16_t V_127 = 0x0;
	uint16_t V_128 = 0x0;
	int32_t V_129 = 0;
	uint16_t V_130 = 0x0;
	int32_t V_131 = 0;
	int32_t V_132 = 0;
	int32_t V_133 = 0;
	int32_t V_134 = 0;
	RepeatContext_t4509 * V_135 = {0};
	int32_t V_136 = 0;
	int32_t V_137 = 0;
	int32_t V_138 = 0;
	int32_t V_139 = 0;
	int32_t V_140 = 0;
	int32_t V_141 = 0;
	int32_t V_142 = 0;
	bool V_143 = false;
	int32_t V_144 = 0;
	int32_t V_145 = 0;
	int32_t V_146 = 0;
	int32_t V_147 = 0;
	int32_t V_148 = 0;
	uint8_t V_149 = {0};
	{
		V_0 = 0;
	}

IL_0002:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_0 = ((RxInterpreter_t4511_StaticFields*)RxInterpreter_t4511_il2cpp_TypeInfo_var->static_fields)->___trace_rx_14;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		ObjectU5BU5D_t696* L_1 = ((ObjectU5BU5D_t696*)SZArrayNew(ObjectU5BU5D_t696_il2cpp_TypeInfo_var, 4));
		ByteU5BU5D_t66* L_2 = (__this->___program_1);
		int32_t L_3 = ___pc;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		uint8_t L_5 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		Object_t * L_6 = Box(RxOp_t4514_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_6;
		ObjectU5BU5D_t696* L_7 = L_1;
		int32_t L_8 = ___pc;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 1)) = (Object_t *)L_10;
		ObjectU5BU5D_t696* L_11 = L_7;
		int32_t L_12 = ___strpos;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 2)) = (Object_t *)L_14;
		ObjectU5BU5D_t696* L_15 = L_11;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 3);
		ArrayElementTypeCheck (L_15, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 3)) = (Object_t *)L_18;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t4577_il2cpp_TypeInfo_var);
		Console_WriteLine_m18158(NULL /*static, unused*/, (String_t*) &_stringLiteral4521, L_15, /*hidden argument*/NULL);
	}

IL_0047:
	{
		ByteU5BU5D_t66* L_19 = (__this->___program_1);
		int32_t L_20 = ___pc;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		V_149 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_19, L_21));
		uint8_t L_22 = V_149;
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 0)
		{
			goto IL_02e4;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 1)
		{
			goto IL_02cf;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 2)
		{
			goto IL_02e6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 3)
		{
			goto IL_02f0;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 4)
		{
			goto IL_0302;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 5)
		{
			goto IL_0329;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 6)
		{
			goto IL_037a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 7)
		{
			goto IL_0392;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 8)
		{
			goto IL_0341;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 9)
		{
			goto IL_03bd;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 10)
		{
			goto IL_045d;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 11)
		{
			goto IL_0bf6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 12)
		{
			goto IL_0c51;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 13)
		{
			goto IL_0cca;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 14)
		{
			goto IL_0d2a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 15)
		{
			goto IL_0da9;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 16)
		{
			goto IL_0e24;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 17)
		{
			goto IL_0eb7;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 18)
		{
			goto IL_0f37;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 19)
		{
			goto IL_0fd0;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 20)
		{
			goto IL_1a10;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 21)
		{
			goto IL_16c5;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 22)
		{
			goto IL_20d6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 23)
		{
			goto IL_240a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 24)
		{
			goto IL_2e08;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 25)
		{
			goto IL_2acf;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 26)
		{
			goto IL_349e;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 27)
		{
			goto IL_1027;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 28)
		{
			goto IL_1a69;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 29)
		{
			goto IL_1721;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 30)
		{
			goto IL_2134;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 31)
		{
			goto IL_245e;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 32)
		{
			goto IL_2e5e;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 33)
		{
			goto IL_2b28;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 34)
		{
			goto IL_34f9;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 35)
		{
			goto IL_153d;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 36)
		{
			goto IL_1f6d;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 37)
		{
			goto IL_187e;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 38)
		{
			goto IL_2297;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 39)
		{
			goto IL_294d;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 40)
		{
			goto IL_333b;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 41)
		{
			goto IL_2c7c;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 42)
		{
			goto IL_3653;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 43)
		{
			goto IL_1111;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 44)
		{
			goto IL_1b57;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 45)
		{
			goto IL_1815;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 46)
		{
			goto IL_222c;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 47)
		{
			goto IL_2542;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 48)
		{
			goto IL_2f46;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 49)
		{
			goto IL_2c16;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 50)
		{
			goto IL_35eb;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 51)
		{
			goto IL_108f;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 52)
		{
			goto IL_1ad3;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 53)
		{
			goto IL_178e;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 54)
		{
			goto IL_21a3;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 55)
		{
			goto IL_24c3;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 56)
		{
			goto IL_2ec5;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 57)
		{
			goto IL_2b92;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 58)
		{
			goto IL_3565;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 59)
		{
			goto IL_15e7;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 60)
		{
			goto IL_200e;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 61)
		{
			goto IL_192d;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 62)
		{
			goto IL_233d;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 63)
		{
			goto IL_29f4;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 64)
		{
			goto IL_33d9;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 65)
		{
			goto IL_2d28;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 66)
		{
			goto IL_36f6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 67)
		{
			goto IL_1175;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 68)
		{
			goto IL_1bbd;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 69)
		{
			goto IL_25a3;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 70)
		{
			goto IL_2fa9;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 71)
		{
			goto IL_11c4;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 72)
		{
			goto IL_1c0e;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 73)
		{
			goto IL_25ef;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 74)
		{
			goto IL_2ff7;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 75)
		{
			goto IL_126a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 76)
		{
			goto IL_1c8c;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 77)
		{
			goto IL_268f;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 78)
		{
			goto IL_306f;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 79)
		{
			goto IL_120a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 80)
		{
			goto IL_1c2a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 81)
		{
			goto IL_2632;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 82)
		{
			goto IL_3010;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 83)
		{
			goto IL_12bc;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 84)
		{
			goto IL_1ce0;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 85)
		{
			goto IL_26de;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 86)
		{
			goto IL_30c0;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 87)
		{
			goto IL_130e;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 88)
		{
			goto IL_1d34;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 89)
		{
			goto IL_272d;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 90)
		{
			goto IL_3111;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 91)
		{
			goto IL_1393;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 92)
		{
			goto IL_1dbb;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 93)
		{
			goto IL_27af;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 94)
		{
			goto IL_3195;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 95)
		{
			goto IL_1485;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 96)
		{
			goto IL_1eb1;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 97)
		{
			goto IL_289b;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 98)
		{
			goto IL_3285;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 99)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 100)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 101)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 102)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 103)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 104)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 105)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 106)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 107)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 108)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 109)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 110)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 111)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 112)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 113)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 114)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 115)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 116)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 117)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 118)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 119)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 120)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 121)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 122)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 123)
		{
			goto IL_140f;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 124)
		{
			goto IL_1e39;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 125)
		{
			goto IL_2828;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 126)
		{
			goto IL_3210;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 127)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 128)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 129)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 130)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 131)
		{
			goto IL_14e1;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 132)
		{
			goto IL_1f0f;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 133)
		{
			goto IL_28f4;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 134)
		{
			goto IL_32e0;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 135)
		{
			goto IL_07e8;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 136)
		{
			goto IL_0885;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 137)
		{
			goto IL_0949;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 138)
		{
			goto IL_3de6;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 139)
		{
			goto IL_0ac8;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 140)
		{
			goto IL_0af0;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 141)
		{
			goto IL_0b18;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 142)
		{
			goto IL_0bad;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 143)
		{
			goto IL_09ed;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 144)
		{
			goto IL_0bb2;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 145)
		{
			goto IL_0a3a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 146)
		{
			goto IL_0a74;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 147)
		{
			goto IL_37c0;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 148)
		{
			goto IL_0bd2;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 149)
		{
			goto IL_04fd;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 150)
		{
			goto IL_071a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 151)
		{
			goto IL_37fa;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 152)
		{
			goto IL_37fa;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 153)
		{
			goto IL_3884;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 154)
		{
			goto IL_3c23;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)1)) == 155)
		{
			goto IL_3c23;
		}
	}
	{
		goto IL_3de6;
	}

IL_02cf:
	{
		int32_t L_23 = V_0;
		if (!L_23)
		{
			goto IL_02df;
		}
	}
	{
		int32_t L_24 = V_0;
		___pc = L_24;
		V_0 = 0;
		goto IL_0002;
	}

IL_02df:
	{
		int32_t* L_25 = ___strpos_result;
		int32_t L_26 = ___strpos;
		*((int32_t*)(L_25)) = (int32_t)L_26;
		return 1;
	}

IL_02e4:
	{
		return 0;
	}

IL_02e6:
	{
		int32_t L_27 = ___pc;
		___pc = ((int32_t)((int32_t)L_27+(int32_t)1));
		goto IL_0002;
	}

IL_02f0:
	{
		int32_t L_28 = ___strpos;
		if (!L_28)
		{
			goto IL_02f8;
		}
	}
	{
		return 0;
	}

IL_02f8:
	{
		int32_t L_29 = ___pc;
		___pc = ((int32_t)((int32_t)L_29+(int32_t)1));
		goto IL_0002;
	}

IL_0302:
	{
		int32_t L_30 = ___strpos;
		if (!L_30)
		{
			goto IL_031d;
		}
	}
	{
		String_t* L_31 = (__this->___str_2);
		int32_t L_32 = ___strpos;
		NullCheck(L_31);
		uint16_t L_33 = String_get_Chars_m407(L_31, ((int32_t)((int32_t)L_32-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0327;
		}
	}

IL_031d:
	{
		int32_t L_34 = ___pc;
		___pc = ((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_0002;
	}

IL_0327:
	{
		return 0;
	}

IL_0329:
	{
		int32_t L_35 = ___strpos;
		int32_t L_36 = (__this->___string_start_3);
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_0337;
		}
	}
	{
		return 0;
	}

IL_0337:
	{
		int32_t L_37 = ___pc;
		___pc = ((int32_t)((int32_t)L_37+(int32_t)1));
		goto IL_0002;
	}

IL_0341:
	{
		int32_t L_38 = ___strpos;
		int32_t L_39 = (__this->___string_end_4);
		if ((((int32_t)L_38) == ((int32_t)L_39)))
		{
			goto IL_036e;
		}
	}
	{
		int32_t L_40 = ___strpos;
		int32_t L_41 = (__this->___string_end_4);
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)((int32_t)L_41-(int32_t)1))))))
		{
			goto IL_0378;
		}
	}
	{
		String_t* L_42 = (__this->___str_2);
		int32_t L_43 = ___strpos;
		NullCheck(L_42);
		uint16_t L_44 = String_get_Chars_m407(L_42, L_43, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0378;
		}
	}

IL_036e:
	{
		int32_t L_45 = ___pc;
		___pc = ((int32_t)((int32_t)L_45+(int32_t)1));
		goto IL_0002;
	}

IL_0378:
	{
		return 0;
	}

IL_037a:
	{
		int32_t L_46 = ___strpos;
		int32_t L_47 = (__this->___string_end_4);
		if ((((int32_t)L_46) == ((int32_t)L_47)))
		{
			goto IL_0388;
		}
	}
	{
		return 0;
	}

IL_0388:
	{
		int32_t L_48 = ___pc;
		___pc = ((int32_t)((int32_t)L_48+(int32_t)1));
		goto IL_0002;
	}

IL_0392:
	{
		int32_t L_49 = ___strpos;
		int32_t L_50 = (__this->___string_end_4);
		if ((((int32_t)L_49) == ((int32_t)L_50)))
		{
			goto IL_03b1;
		}
	}
	{
		String_t* L_51 = (__this->___str_2);
		int32_t L_52 = ___strpos;
		NullCheck(L_51);
		uint16_t L_53 = String_get_Chars_m407(L_51, L_52, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_03bb;
		}
	}

IL_03b1:
	{
		int32_t L_54 = ___pc;
		___pc = ((int32_t)((int32_t)L_54+(int32_t)1));
		goto IL_0002;
	}

IL_03bb:
	{
		return 0;
	}

IL_03bd:
	{
		int32_t L_55 = (__this->___string_end_4);
		if (L_55)
		{
			goto IL_03ca;
		}
	}
	{
		return 0;
	}

IL_03ca:
	{
		int32_t L_56 = ___strpos;
		if (L_56)
		{
			goto IL_03f5;
		}
	}
	{
		String_t* L_57 = (__this->___str_2);
		int32_t L_58 = ___strpos;
		NullCheck(L_57);
		uint16_t L_59 = String_get_Chars_m407(L_57, L_58, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_60 = RxInterpreter_IsWordChar_m17724(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_03f0;
		}
	}
	{
		int32_t L_61 = ___pc;
		___pc = ((int32_t)((int32_t)L_61+(int32_t)1));
		goto IL_0002;
	}

IL_03f0:
	{
		goto IL_045b;
	}

IL_03f5:
	{
		int32_t L_62 = ___strpos;
		int32_t L_63 = (__this->___string_end_4);
		if ((!(((uint32_t)L_62) == ((uint32_t)L_63))))
		{
			goto IL_0428;
		}
	}
	{
		String_t* L_64 = (__this->___str_2);
		int32_t L_65 = ___strpos;
		NullCheck(L_64);
		uint16_t L_66 = String_get_Chars_m407(L_64, ((int32_t)((int32_t)L_65-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_67 = RxInterpreter_IsWordChar_m17724(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0423;
		}
	}
	{
		int32_t L_68 = ___pc;
		___pc = ((int32_t)((int32_t)L_68+(int32_t)1));
		goto IL_0002;
	}

IL_0423:
	{
		goto IL_045b;
	}

IL_0428:
	{
		String_t* L_69 = (__this->___str_2);
		int32_t L_70 = ___strpos;
		NullCheck(L_69);
		uint16_t L_71 = String_get_Chars_m407(L_69, L_70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_72 = RxInterpreter_IsWordChar_m17724(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		String_t* L_73 = (__this->___str_2);
		int32_t L_74 = ___strpos;
		NullCheck(L_73);
		uint16_t L_75 = String_get_Chars_m407(L_73, ((int32_t)((int32_t)L_74-(int32_t)1)), /*hidden argument*/NULL);
		bool L_76 = RxInterpreter_IsWordChar_m17724(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		if ((((int32_t)L_72) == ((int32_t)L_76)))
		{
			goto IL_045b;
		}
	}
	{
		int32_t L_77 = ___pc;
		___pc = ((int32_t)((int32_t)L_77+(int32_t)1));
		goto IL_0002;
	}

IL_045b:
	{
		return 0;
	}

IL_045d:
	{
		int32_t L_78 = (__this->___string_end_4);
		if (L_78)
		{
			goto IL_046a;
		}
	}
	{
		return 0;
	}

IL_046a:
	{
		int32_t L_79 = ___strpos;
		if (L_79)
		{
			goto IL_0495;
		}
	}
	{
		String_t* L_80 = (__this->___str_2);
		int32_t L_81 = ___strpos;
		NullCheck(L_80);
		uint16_t L_82 = String_get_Chars_m407(L_80, L_81, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_83 = RxInterpreter_IsWordChar_m17724(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
		if (L_83)
		{
			goto IL_0490;
		}
	}
	{
		int32_t L_84 = ___pc;
		___pc = ((int32_t)((int32_t)L_84+(int32_t)1));
		goto IL_0002;
	}

IL_0490:
	{
		goto IL_04fb;
	}

IL_0495:
	{
		int32_t L_85 = ___strpos;
		int32_t L_86 = (__this->___string_end_4);
		if ((!(((uint32_t)L_85) == ((uint32_t)L_86))))
		{
			goto IL_04c8;
		}
	}
	{
		String_t* L_87 = (__this->___str_2);
		int32_t L_88 = ___strpos;
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m407(L_87, ((int32_t)((int32_t)L_88-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_90 = RxInterpreter_IsWordChar_m17724(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_04c3;
		}
	}
	{
		int32_t L_91 = ___pc;
		___pc = ((int32_t)((int32_t)L_91+(int32_t)1));
		goto IL_0002;
	}

IL_04c3:
	{
		goto IL_04fb;
	}

IL_04c8:
	{
		String_t* L_92 = (__this->___str_2);
		int32_t L_93 = ___strpos;
		NullCheck(L_92);
		uint16_t L_94 = String_get_Chars_m407(L_92, L_93, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_95 = RxInterpreter_IsWordChar_m17724(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		String_t* L_96 = (__this->___str_2);
		int32_t L_97 = ___strpos;
		NullCheck(L_96);
		uint16_t L_98 = String_get_Chars_m407(L_96, ((int32_t)((int32_t)L_97-(int32_t)1)), /*hidden argument*/NULL);
		bool L_99 = RxInterpreter_IsWordChar_m17724(NULL /*static, unused*/, L_98, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_95) == ((uint32_t)L_99))))
		{
			goto IL_04fb;
		}
	}
	{
		int32_t L_100 = ___pc;
		___pc = ((int32_t)((int32_t)L_100+(int32_t)1));
		goto IL_0002;
	}

IL_04fb:
	{
		return 0;
	}

IL_04fd:
	{
		ByteU5BU5D_t66* L_101 = (__this->___program_1);
		int32_t L_102 = ___pc;
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, ((int32_t)((int32_t)L_102+(int32_t)1)));
		int32_t L_103 = ((int32_t)((int32_t)L_102+(int32_t)1));
		ByteU5BU5D_t66* L_104 = (__this->___program_1);
		int32_t L_105 = ___pc;
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, ((int32_t)((int32_t)L_105+(int32_t)2)));
		int32_t L_106 = ((int32_t)((int32_t)L_105+(int32_t)2));
		V_4 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_101, L_103))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_104, L_106))<<(int32_t)8))));
		ByteU5BU5D_t66* L_107 = (__this->___program_1);
		int32_t L_108 = ___pc;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, ((int32_t)((int32_t)L_108+(int32_t)3)));
		int32_t L_109 = ((int32_t)((int32_t)L_108+(int32_t)3));
		ByteU5BU5D_t66* L_110 = (__this->___program_1);
		int32_t L_111 = ___pc;
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, ((int32_t)((int32_t)L_111+(int32_t)4)));
		int32_t L_112 = ((int32_t)((int32_t)L_111+(int32_t)4));
		V_5 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_107, L_109))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_110, L_112))<<(int32_t)8))));
		int32_t L_113 = ___pc;
		V_6 = ((int32_t)((int32_t)L_113+(int32_t)5));
		ByteU5BU5D_t66* L_114 = (__this->___program_1);
		int32_t L_115 = V_6;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, L_115);
		int32_t L_116 = L_115;
		V_7 = (((uint8_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_114, L_116))&(int32_t)((int32_t)255)))));
		V_8 = 0;
		uint8_t L_117 = V_7;
		if ((((int32_t)L_117) == ((int32_t)((int32_t)12))))
		{
			goto IL_055b;
		}
	}
	{
		uint8_t L_118 = V_7;
		if ((!(((uint32_t)L_118) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_059b;
		}
	}

IL_055b:
	{
		int32_t L_119 = ___pc;
		int32_t L_120 = V_4;
		int32_t L_121 = V_6;
		ByteU5BU5D_t66* L_122 = (__this->___program_1);
		int32_t L_123 = V_6;
		NullCheck(L_122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_122, ((int32_t)((int32_t)L_123+(int32_t)1)));
		int32_t L_124 = ((int32_t)((int32_t)L_123+(int32_t)1));
		if ((!(((uint32_t)((int32_t)((int32_t)L_119+(int32_t)L_120))) == ((uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_121+(int32_t)2))+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_122, L_124))))+(int32_t)1))))))
		{
			goto IL_059b;
		}
	}
	{
		V_8 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_125 = ((RxInterpreter_t4511_StaticFields*)RxInterpreter_t4511_il2cpp_TypeInfo_var->static_fields)->___trace_rx_14;
		if (!L_125)
		{
			goto IL_059b;
		}
	}
	{
		int32_t L_126 = V_6;
		int32_t L_127 = L_126;
		Object_t * L_128 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_127);
		int32_t L_129 = V_5;
		int32_t L_130 = L_129;
		Object_t * L_131 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_130);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t4577_il2cpp_TypeInfo_var);
		Console_WriteLine_m18164(NULL /*static, unused*/, (String_t*) &_stringLiteral4522, L_128, L_131, /*hidden argument*/NULL);
	}

IL_059b:
	{
		int32_t L_132 = ___pc;
		int32_t L_133 = V_4;
		___pc = ((int32_t)((int32_t)L_132+(int32_t)L_133));
		ByteU5BU5D_t66* L_134 = (__this->___program_1);
		int32_t L_135 = ___pc;
		NullCheck(L_134);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_134, L_135);
		int32_t L_136 = L_135;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_134, L_136))) == ((uint32_t)4))))
		{
			goto IL_063f;
		}
	}
	{
		int32_t L_137 = ___strpos;
		if (L_137)
		{
			goto IL_063d;
		}
	}
	{
		int32_t L_138 = ___strpos;
		V_9 = L_138;
		Int32U5BU5D_t484* L_139 = (__this->___groups_6);
		NullCheck(L_139);
		if ((((int32_t)(((int32_t)(((Array_t *)L_139)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_05e5;
		}
	}
	{
		RxInterpreter_ResetGroups_m17718(__this, /*hidden argument*/NULL);
		MarkU5BU5D_t4495* L_140 = (__this->___marks_8);
		Int32U5BU5D_t484* L_141 = (__this->___groups_6);
		NullCheck(L_141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_141, 0);
		int32_t L_142 = 0;
		NullCheck(L_140);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_140, (*(int32_t*)(int32_t*)SZArrayLdElema(L_141, L_142)));
		int32_t L_143 = ___strpos;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_140, (*(int32_t*)(int32_t*)SZArrayLdElema(L_141, L_142))))->___Start_0 = L_143;
	}

IL_05e5:
	{
		int32_t L_144 = ___pc;
		int32_t L_145 = ___strpos;
		bool L_146 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_144+(int32_t)1)), L_145, (&V_9), /*hidden argument*/NULL);
		if (!L_146)
		{
			goto IL_063d;
		}
	}
	{
		MarkU5BU5D_t4495* L_147 = (__this->___marks_8);
		Int32U5BU5D_t484* L_148 = (__this->___groups_6);
		NullCheck(L_148);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_148, 0);
		int32_t L_149 = 0;
		NullCheck(L_147);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_147, (*(int32_t*)(int32_t*)SZArrayLdElema(L_148, L_149)));
		int32_t L_150 = ___strpos;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_147, (*(int32_t*)(int32_t*)SZArrayLdElema(L_148, L_149))))->___Start_0 = L_150;
		Int32U5BU5D_t484* L_151 = (__this->___groups_6);
		NullCheck(L_151);
		if ((((int32_t)(((int32_t)(((Array_t *)L_151)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0637;
		}
	}
	{
		MarkU5BU5D_t4495* L_152 = (__this->___marks_8);
		Int32U5BU5D_t484* L_153 = (__this->___groups_6);
		NullCheck(L_153);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_153, 0);
		int32_t L_154 = 0;
		NullCheck(L_152);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_152, (*(int32_t*)(int32_t*)SZArrayLdElema(L_153, L_154)));
		int32_t L_155 = V_9;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_152, (*(int32_t*)(int32_t*)SZArrayLdElema(L_153, L_154))))->___End_1 = L_155;
	}

IL_0637:
	{
		int32_t* L_156 = ___strpos_result;
		int32_t L_157 = V_9;
		*((int32_t*)(L_156)) = (int32_t)L_157;
		return 1;
	}

IL_063d:
	{
		return 0;
	}

IL_063f:
	{
		int32_t L_158 = (__this->___string_end_4);
		V_3 = ((int32_t)((int32_t)L_158+(int32_t)1));
		goto IL_0711;
	}

IL_064d:
	{
		bool L_159 = V_8;
		if (!L_159)
		{
			goto IL_0686;
		}
	}
	{
		uint8_t L_160 = V_7;
		if ((((int32_t)L_160) == ((int32_t)((int32_t)12))))
		{
			goto IL_0666;
		}
	}
	{
		uint8_t L_161 = V_7;
		if ((!(((uint32_t)L_161) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0686;
		}
	}

IL_0666:
	{
		int32_t L_162 = ___strpos;
		V_10 = L_162;
		int32_t L_163 = V_6;
		int32_t L_164 = ___strpos;
		int32_t L_165 = V_5;
		bool L_166 = RxInterpreter_EvalByteCode_m17725(__this, L_163, ((int32_t)((int32_t)L_164+(int32_t)L_165)), (&V_10), /*hidden argument*/NULL);
		if (L_166)
		{
			goto IL_0686;
		}
	}
	{
		int32_t L_167 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_167+(int32_t)1));
		goto IL_0711;
	}

IL_0686:
	{
		int32_t L_168 = ___strpos;
		V_11 = L_168;
		Int32U5BU5D_t484* L_169 = (__this->___groups_6);
		NullCheck(L_169);
		if ((((int32_t)(((int32_t)(((Array_t *)L_169)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_06b6;
		}
	}
	{
		RxInterpreter_ResetGroups_m17718(__this, /*hidden argument*/NULL);
		MarkU5BU5D_t4495* L_170 = (__this->___marks_8);
		Int32U5BU5D_t484* L_171 = (__this->___groups_6);
		NullCheck(L_171);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_171, 0);
		int32_t L_172 = 0;
		NullCheck(L_170);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_170, (*(int32_t*)(int32_t*)SZArrayLdElema(L_171, L_172)));
		int32_t L_173 = ___strpos;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_170, (*(int32_t*)(int32_t*)SZArrayLdElema(L_171, L_172))))->___Start_0 = L_173;
	}

IL_06b6:
	{
		int32_t L_174 = ___pc;
		int32_t L_175 = ___strpos;
		bool L_176 = RxInterpreter_EvalByteCode_m17725(__this, L_174, L_175, (&V_11), /*hidden argument*/NULL);
		if (!L_176)
		{
			goto IL_070c;
		}
	}
	{
		MarkU5BU5D_t4495* L_177 = (__this->___marks_8);
		Int32U5BU5D_t484* L_178 = (__this->___groups_6);
		NullCheck(L_178);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_178, 0);
		int32_t L_179 = 0;
		NullCheck(L_177);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_177, (*(int32_t*)(int32_t*)SZArrayLdElema(L_178, L_179)));
		int32_t L_180 = ___strpos;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_177, (*(int32_t*)(int32_t*)SZArrayLdElema(L_178, L_179))))->___Start_0 = L_180;
		Int32U5BU5D_t484* L_181 = (__this->___groups_6);
		NullCheck(L_181);
		if ((((int32_t)(((int32_t)(((Array_t *)L_181)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0706;
		}
	}
	{
		MarkU5BU5D_t4495* L_182 = (__this->___marks_8);
		Int32U5BU5D_t484* L_183 = (__this->___groups_6);
		NullCheck(L_183);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_183, 0);
		int32_t L_184 = 0;
		NullCheck(L_182);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_182, (*(int32_t*)(int32_t*)SZArrayLdElema(L_183, L_184)));
		int32_t L_185 = V_11;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_182, (*(int32_t*)(int32_t*)SZArrayLdElema(L_183, L_184))))->___End_1 = L_185;
	}

IL_0706:
	{
		int32_t* L_186 = ___strpos_result;
		int32_t L_187 = V_11;
		*((int32_t*)(L_186)) = (int32_t)L_187;
		return 1;
	}

IL_070c:
	{
		int32_t L_188 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_188+(int32_t)1));
	}

IL_0711:
	{
		int32_t L_189 = ___strpos;
		int32_t L_190 = V_3;
		if ((((int32_t)L_189) < ((int32_t)L_190)))
		{
			goto IL_064d;
		}
	}
	{
		return 0;
	}

IL_071a:
	{
		ByteU5BU5D_t66* L_191 = (__this->___program_1);
		int32_t L_192 = ___pc;
		NullCheck(L_191);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_191, ((int32_t)((int32_t)L_192+(int32_t)3)));
		int32_t L_193 = ((int32_t)((int32_t)L_192+(int32_t)3));
		ByteU5BU5D_t66* L_194 = (__this->___program_1);
		int32_t L_195 = ___pc;
		NullCheck(L_194);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_194, ((int32_t)((int32_t)L_195+(int32_t)4)));
		int32_t L_196 = ((int32_t)((int32_t)L_195+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_191, L_193))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_194, L_196))<<(int32_t)8))));
		int32_t L_197 = ___pc;
		ByteU5BU5D_t66* L_198 = (__this->___program_1);
		int32_t L_199 = ___pc;
		NullCheck(L_198);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_198, ((int32_t)((int32_t)L_199+(int32_t)1)));
		int32_t L_200 = ((int32_t)((int32_t)L_199+(int32_t)1));
		ByteU5BU5D_t66* L_201 = (__this->___program_1);
		int32_t L_202 = ___pc;
		NullCheck(L_201);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_201, ((int32_t)((int32_t)L_202+(int32_t)2)));
		int32_t L_203 = ((int32_t)((int32_t)L_202+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_197+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_198, L_200))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_201, L_203))<<(int32_t)8))))));
		V_3 = 0;
		goto IL_07df;
	}

IL_0754:
	{
		int32_t L_204 = ___strpos;
		V_12 = L_204;
		Int32U5BU5D_t484* L_205 = (__this->___groups_6);
		NullCheck(L_205);
		if ((((int32_t)(((int32_t)(((Array_t *)L_205)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0784;
		}
	}
	{
		RxInterpreter_ResetGroups_m17718(__this, /*hidden argument*/NULL);
		MarkU5BU5D_t4495* L_206 = (__this->___marks_8);
		Int32U5BU5D_t484* L_207 = (__this->___groups_6);
		NullCheck(L_207);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_207, 0);
		int32_t L_208 = 0;
		NullCheck(L_206);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_206, (*(int32_t*)(int32_t*)SZArrayLdElema(L_207, L_208)));
		int32_t L_209 = ___strpos;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_206, (*(int32_t*)(int32_t*)SZArrayLdElema(L_207, L_208))))->___Start_0 = L_209;
	}

IL_0784:
	{
		int32_t L_210 = ___pc;
		int32_t L_211 = ___strpos;
		bool L_212 = RxInterpreter_EvalByteCode_m17725(__this, L_210, L_211, (&V_12), /*hidden argument*/NULL);
		if (!L_212)
		{
			goto IL_07da;
		}
	}
	{
		MarkU5BU5D_t4495* L_213 = (__this->___marks_8);
		Int32U5BU5D_t484* L_214 = (__this->___groups_6);
		NullCheck(L_214);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_214, 0);
		int32_t L_215 = 0;
		NullCheck(L_213);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_213, (*(int32_t*)(int32_t*)SZArrayLdElema(L_214, L_215)));
		int32_t L_216 = ___strpos;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_213, (*(int32_t*)(int32_t*)SZArrayLdElema(L_214, L_215))))->___Start_0 = L_216;
		Int32U5BU5D_t484* L_217 = (__this->___groups_6);
		NullCheck(L_217);
		if ((((int32_t)(((int32_t)(((Array_t *)L_217)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_07d4;
		}
	}
	{
		MarkU5BU5D_t4495* L_218 = (__this->___marks_8);
		Int32U5BU5D_t484* L_219 = (__this->___groups_6);
		NullCheck(L_219);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_219, 0);
		int32_t L_220 = 0;
		NullCheck(L_218);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_218, (*(int32_t*)(int32_t*)SZArrayLdElema(L_219, L_220)));
		int32_t L_221 = V_12;
		((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_218, (*(int32_t*)(int32_t*)SZArrayLdElema(L_219, L_220))))->___End_1 = L_221;
	}

IL_07d4:
	{
		int32_t* L_222 = ___strpos_result;
		int32_t L_223 = V_12;
		*((int32_t*)(L_222)) = (int32_t)L_223;
		return 1;
	}

IL_07da:
	{
		int32_t L_224 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_224-(int32_t)1));
	}

IL_07df:
	{
		int32_t L_225 = ___strpos;
		if ((((int32_t)L_225) >= ((int32_t)0)))
		{
			goto IL_0754;
		}
	}
	{
		return 0;
	}

IL_07e8:
	{
		ByteU5BU5D_t66* L_226 = (__this->___program_1);
		int32_t L_227 = ___pc;
		NullCheck(L_226);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_226, ((int32_t)((int32_t)L_227+(int32_t)1)));
		int32_t L_228 = ((int32_t)((int32_t)L_227+(int32_t)1));
		ByteU5BU5D_t66* L_229 = (__this->___program_1);
		int32_t L_230 = ___pc;
		NullCheck(L_229);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_229, ((int32_t)((int32_t)L_230+(int32_t)2)));
		int32_t L_231 = ((int32_t)((int32_t)L_230+(int32_t)2));
		int32_t L_232 = RxInterpreter_GetLastDefined_m17719(__this, ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_226, L_228))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_229, L_231))<<(int32_t)8)))), /*hidden argument*/NULL);
		V_1 = L_232;
		int32_t L_233 = V_1;
		if ((((int32_t)L_233) >= ((int32_t)0)))
		{
			goto IL_080f;
		}
	}
	{
		return 0;
	}

IL_080f:
	{
		MarkU5BU5D_t4495* L_234 = (__this->___marks_8);
		int32_t L_235 = V_1;
		NullCheck(L_234);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_234, L_235);
		int32_t L_236 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_234, L_235)), /*hidden argument*/NULL);
		V_2 = L_236;
		MarkU5BU5D_t4495* L_237 = (__this->___marks_8);
		int32_t L_238 = V_1;
		NullCheck(L_237);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_237, L_238);
		int32_t L_239 = Mark_get_Length_m17527(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_237, L_238)), /*hidden argument*/NULL);
		V_1 = L_239;
		int32_t L_240 = ___strpos;
		int32_t L_241 = V_1;
		int32_t L_242 = (__this->___string_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_240+(int32_t)L_241))) <= ((int32_t)L_242)))
		{
			goto IL_0843;
		}
	}
	{
		return 0;
	}

IL_0843:
	{
		int32_t L_243 = V_2;
		int32_t L_244 = V_1;
		V_3 = ((int32_t)((int32_t)L_243+(int32_t)L_244));
		goto IL_0874;
	}

IL_084c:
	{
		String_t* L_245 = (__this->___str_2);
		int32_t L_246 = ___strpos;
		NullCheck(L_245);
		uint16_t L_247 = String_get_Chars_m407(L_245, L_246, /*hidden argument*/NULL);
		String_t* L_248 = (__this->___str_2);
		int32_t L_249 = V_2;
		NullCheck(L_248);
		uint16_t L_250 = String_get_Chars_m407(L_248, L_249, /*hidden argument*/NULL);
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			goto IL_086b;
		}
	}
	{
		return 0;
	}

IL_086b:
	{
		int32_t L_251 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_251+(int32_t)1));
		int32_t L_252 = V_2;
		V_2 = ((int32_t)((int32_t)L_252+(int32_t)1));
	}

IL_0874:
	{
		int32_t L_253 = V_2;
		int32_t L_254 = V_3;
		if ((((int32_t)L_253) < ((int32_t)L_254)))
		{
			goto IL_084c;
		}
	}
	{
		int32_t L_255 = ___pc;
		___pc = ((int32_t)((int32_t)L_255+(int32_t)3));
		goto IL_0002;
	}

IL_0885:
	{
		ByteU5BU5D_t66* L_256 = (__this->___program_1);
		int32_t L_257 = ___pc;
		NullCheck(L_256);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_256, ((int32_t)((int32_t)L_257+(int32_t)1)));
		int32_t L_258 = ((int32_t)((int32_t)L_257+(int32_t)1));
		ByteU5BU5D_t66* L_259 = (__this->___program_1);
		int32_t L_260 = ___pc;
		NullCheck(L_259);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_259, ((int32_t)((int32_t)L_260+(int32_t)2)));
		int32_t L_261 = ((int32_t)((int32_t)L_260+(int32_t)2));
		int32_t L_262 = RxInterpreter_GetLastDefined_m17719(__this, ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_256, L_258))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_259, L_261))<<(int32_t)8)))), /*hidden argument*/NULL);
		V_1 = L_262;
		int32_t L_263 = V_1;
		if ((((int32_t)L_263) >= ((int32_t)0)))
		{
			goto IL_08ac;
		}
	}
	{
		return 0;
	}

IL_08ac:
	{
		MarkU5BU5D_t4495* L_264 = (__this->___marks_8);
		int32_t L_265 = V_1;
		NullCheck(L_264);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_264, L_265);
		int32_t L_266 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_264, L_265)), /*hidden argument*/NULL);
		V_2 = L_266;
		MarkU5BU5D_t4495* L_267 = (__this->___marks_8);
		int32_t L_268 = V_1;
		NullCheck(L_267);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_267, L_268);
		int32_t L_269 = Mark_get_Length_m17527(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_267, L_268)), /*hidden argument*/NULL);
		V_1 = L_269;
		int32_t L_270 = ___strpos;
		int32_t L_271 = V_1;
		int32_t L_272 = (__this->___string_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_270+(int32_t)L_271))) <= ((int32_t)L_272)))
		{
			goto IL_08e0;
		}
	}
	{
		return 0;
	}

IL_08e0:
	{
		int32_t L_273 = V_2;
		int32_t L_274 = V_1;
		V_3 = ((int32_t)((int32_t)L_273+(int32_t)L_274));
		goto IL_0938;
	}

IL_08e9:
	{
		String_t* L_275 = (__this->___str_2);
		int32_t L_276 = ___strpos;
		NullCheck(L_275);
		uint16_t L_277 = String_get_Chars_m407(L_275, L_276, /*hidden argument*/NULL);
		String_t* L_278 = (__this->___str_2);
		int32_t L_279 = V_2;
		NullCheck(L_278);
		uint16_t L_280 = String_get_Chars_m407(L_278, L_279, /*hidden argument*/NULL);
		if ((((int32_t)L_277) == ((int32_t)L_280)))
		{
			goto IL_092f;
		}
	}
	{
		String_t* L_281 = (__this->___str_2);
		int32_t L_282 = ___strpos;
		NullCheck(L_281);
		uint16_t L_283 = String_get_Chars_m407(L_281, L_282, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_284 = Char_ToLower_m6225(NULL /*static, unused*/, L_283, /*hidden argument*/NULL);
		String_t* L_285 = (__this->___str_2);
		int32_t L_286 = V_2;
		NullCheck(L_285);
		uint16_t L_287 = String_get_Chars_m407(L_285, L_286, /*hidden argument*/NULL);
		uint16_t L_288 = Char_ToLower_m6225(NULL /*static, unused*/, L_287, /*hidden argument*/NULL);
		if ((((int32_t)L_284) == ((int32_t)L_288)))
		{
			goto IL_092f;
		}
	}
	{
		return 0;
	}

IL_092f:
	{
		int32_t L_289 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_289+(int32_t)1));
		int32_t L_290 = V_2;
		V_2 = ((int32_t)((int32_t)L_290+(int32_t)1));
	}

IL_0938:
	{
		int32_t L_291 = V_2;
		int32_t L_292 = V_3;
		if ((((int32_t)L_291) < ((int32_t)L_292)))
		{
			goto IL_08e9;
		}
	}
	{
		int32_t L_293 = ___pc;
		___pc = ((int32_t)((int32_t)L_293+(int32_t)3));
		goto IL_0002;
	}

IL_0949:
	{
		ByteU5BU5D_t66* L_294 = (__this->___program_1);
		int32_t L_295 = ___pc;
		NullCheck(L_294);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_294, ((int32_t)((int32_t)L_295+(int32_t)1)));
		int32_t L_296 = ((int32_t)((int32_t)L_295+(int32_t)1));
		ByteU5BU5D_t66* L_297 = (__this->___program_1);
		int32_t L_298 = ___pc;
		NullCheck(L_297);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_297, ((int32_t)((int32_t)L_298+(int32_t)2)));
		int32_t L_299 = ((int32_t)((int32_t)L_298+(int32_t)2));
		int32_t L_300 = RxInterpreter_GetLastDefined_m17719(__this, ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_294, L_296))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_297, L_299))<<(int32_t)8)))), /*hidden argument*/NULL);
		V_1 = L_300;
		int32_t L_301 = V_1;
		if ((((int32_t)L_301) >= ((int32_t)0)))
		{
			goto IL_0970;
		}
	}
	{
		return 0;
	}

IL_0970:
	{
		MarkU5BU5D_t4495* L_302 = (__this->___marks_8);
		int32_t L_303 = V_1;
		NullCheck(L_302);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_302, L_303);
		int32_t L_304 = Mark_get_Index_m17526(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_302, L_303)), /*hidden argument*/NULL);
		V_2 = L_304;
		MarkU5BU5D_t4495* L_305 = (__this->___marks_8);
		int32_t L_306 = V_1;
		NullCheck(L_305);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_305, L_306);
		int32_t L_307 = Mark_get_Length_m17527(((Mark_t4489 *)(Mark_t4489 *)SZArrayLdElema(L_305, L_306)), /*hidden argument*/NULL);
		V_1 = L_307;
		int32_t L_308 = ___strpos;
		int32_t L_309 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_308-(int32_t)L_309))) >= ((int32_t)0)))
		{
			goto IL_099f;
		}
	}
	{
		return 0;
	}

IL_099f:
	{
		int32_t L_310 = ___strpos;
		int32_t L_311 = V_1;
		V_13 = ((int32_t)((int32_t)L_310-(int32_t)L_311));
		int32_t L_312 = V_2;
		int32_t L_313 = V_1;
		V_3 = ((int32_t)((int32_t)L_312+(int32_t)L_313));
		goto IL_09d7;
	}

IL_09ad:
	{
		String_t* L_314 = (__this->___str_2);
		int32_t L_315 = V_13;
		NullCheck(L_314);
		uint16_t L_316 = String_get_Chars_m407(L_314, L_315, /*hidden argument*/NULL);
		String_t* L_317 = (__this->___str_2);
		int32_t L_318 = V_2;
		NullCheck(L_317);
		uint16_t L_319 = String_get_Chars_m407(L_317, L_318, /*hidden argument*/NULL);
		if ((((int32_t)L_316) == ((int32_t)L_319)))
		{
			goto IL_09cd;
		}
	}
	{
		return 0;
	}

IL_09cd:
	{
		int32_t L_320 = V_2;
		V_2 = ((int32_t)((int32_t)L_320+(int32_t)1));
		int32_t L_321 = V_13;
		V_13 = ((int32_t)((int32_t)L_321+(int32_t)1));
	}

IL_09d7:
	{
		int32_t L_322 = V_2;
		int32_t L_323 = V_3;
		if ((((int32_t)L_322) < ((int32_t)L_323)))
		{
			goto IL_09ad;
		}
	}
	{
		int32_t L_324 = ___strpos;
		int32_t L_325 = V_1;
		___strpos = ((int32_t)((int32_t)L_324-(int32_t)L_325));
		int32_t L_326 = ___pc;
		___pc = ((int32_t)((int32_t)L_326+(int32_t)3));
		goto IL_0002;
	}

IL_09ed:
	{
		ByteU5BU5D_t66* L_327 = (__this->___program_1);
		int32_t L_328 = ___pc;
		NullCheck(L_327);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_327, ((int32_t)((int32_t)L_328+(int32_t)3)));
		int32_t L_329 = ((int32_t)((int32_t)L_328+(int32_t)3));
		ByteU5BU5D_t66* L_330 = (__this->___program_1);
		int32_t L_331 = ___pc;
		NullCheck(L_330);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_330, ((int32_t)((int32_t)L_331+(int32_t)4)));
		int32_t L_332 = ((int32_t)((int32_t)L_331+(int32_t)4));
		int32_t L_333 = RxInterpreter_GetLastDefined_m17719(__this, ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_327, L_329))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_330, L_332))<<(int32_t)8)))), /*hidden argument*/NULL);
		if ((((int32_t)L_333) < ((int32_t)0)))
		{
			goto IL_0a1a;
		}
	}
	{
		int32_t L_334 = ___pc;
		___pc = ((int32_t)((int32_t)L_334+(int32_t)5));
		goto IL_0a35;
	}

IL_0a1a:
	{
		int32_t L_335 = ___pc;
		ByteU5BU5D_t66* L_336 = (__this->___program_1);
		int32_t L_337 = ___pc;
		NullCheck(L_336);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_336, ((int32_t)((int32_t)L_337+(int32_t)1)));
		int32_t L_338 = ((int32_t)((int32_t)L_337+(int32_t)1));
		ByteU5BU5D_t66* L_339 = (__this->___program_1);
		int32_t L_340 = ___pc;
		NullCheck(L_339);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_339, ((int32_t)((int32_t)L_340+(int32_t)2)));
		int32_t L_341 = ((int32_t)((int32_t)L_340+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_335+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_336, L_338))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_339, L_341))<<(int32_t)8))))));
	}

IL_0a35:
	{
		goto IL_0002;
	}

IL_0a3a:
	{
		V_14 = 0;
		int32_t L_342 = ___pc;
		int32_t L_343 = ___strpos;
		bool L_344 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_342+(int32_t)3)), L_343, (&V_14), /*hidden argument*/NULL);
		if (!L_344)
		{
			goto IL_0a72;
		}
	}
	{
		int32_t L_345 = ___pc;
		ByteU5BU5D_t66* L_346 = (__this->___program_1);
		int32_t L_347 = ___pc;
		NullCheck(L_346);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_346, ((int32_t)((int32_t)L_347+(int32_t)1)));
		int32_t L_348 = ((int32_t)((int32_t)L_347+(int32_t)1));
		ByteU5BU5D_t66* L_349 = (__this->___program_1);
		int32_t L_350 = ___pc;
		NullCheck(L_349);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_349, ((int32_t)((int32_t)L_350+(int32_t)2)));
		int32_t L_351 = ((int32_t)((int32_t)L_350+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_345+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_346, L_348))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_349, L_351))<<(int32_t)8))))));
		int32_t L_352 = V_14;
		___strpos = L_352;
		goto IL_0002;
	}

IL_0a72:
	{
		return 0;
	}

IL_0a74:
	{
		V_15 = 0;
		int32_t L_353 = ___pc;
		int32_t L_354 = ___strpos;
		bool L_355 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_353+(int32_t)5)), L_354, (&V_15), /*hidden argument*/NULL);
		if (!L_355)
		{
			goto IL_0aa8;
		}
	}
	{
		int32_t L_356 = ___pc;
		ByteU5BU5D_t66* L_357 = (__this->___program_1);
		int32_t L_358 = ___pc;
		NullCheck(L_357);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_357, ((int32_t)((int32_t)L_358+(int32_t)1)));
		int32_t L_359 = ((int32_t)((int32_t)L_358+(int32_t)1));
		ByteU5BU5D_t66* L_360 = (__this->___program_1);
		int32_t L_361 = ___pc;
		NullCheck(L_360);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_360, ((int32_t)((int32_t)L_361+(int32_t)2)));
		int32_t L_362 = ((int32_t)((int32_t)L_361+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_356+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_357, L_359))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_360, L_362))<<(int32_t)8))))));
		goto IL_0ac3;
	}

IL_0aa8:
	{
		int32_t L_363 = ___pc;
		ByteU5BU5D_t66* L_364 = (__this->___program_1);
		int32_t L_365 = ___pc;
		NullCheck(L_364);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_364, ((int32_t)((int32_t)L_365+(int32_t)3)));
		int32_t L_366 = ((int32_t)((int32_t)L_365+(int32_t)3));
		ByteU5BU5D_t66* L_367 = (__this->___program_1);
		int32_t L_368 = ___pc;
		NullCheck(L_367);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_367, ((int32_t)((int32_t)L_368+(int32_t)4)));
		int32_t L_369 = ((int32_t)((int32_t)L_368+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_363+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_364, L_366))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_367, L_369))<<(int32_t)8))))));
	}

IL_0ac3:
	{
		goto IL_0002;
	}

IL_0ac8:
	{
		ByteU5BU5D_t66* L_370 = (__this->___program_1);
		int32_t L_371 = ___pc;
		NullCheck(L_370);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_370, ((int32_t)((int32_t)L_371+(int32_t)1)));
		int32_t L_372 = ((int32_t)((int32_t)L_371+(int32_t)1));
		ByteU5BU5D_t66* L_373 = (__this->___program_1);
		int32_t L_374 = ___pc;
		NullCheck(L_373);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_373, ((int32_t)((int32_t)L_374+(int32_t)2)));
		int32_t L_375 = ((int32_t)((int32_t)L_374+(int32_t)2));
		int32_t L_376 = ___strpos;
		RxInterpreter_Open_m17713(__this, ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_370, L_372))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_373, L_375))<<(int32_t)8)))), L_376, /*hidden argument*/NULL);
		int32_t L_377 = ___pc;
		___pc = ((int32_t)((int32_t)L_377+(int32_t)3));
		goto IL_0002;
	}

IL_0af0:
	{
		ByteU5BU5D_t66* L_378 = (__this->___program_1);
		int32_t L_379 = ___pc;
		NullCheck(L_378);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_378, ((int32_t)((int32_t)L_379+(int32_t)1)));
		int32_t L_380 = ((int32_t)((int32_t)L_379+(int32_t)1));
		ByteU5BU5D_t66* L_381 = (__this->___program_1);
		int32_t L_382 = ___pc;
		NullCheck(L_381);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_381, ((int32_t)((int32_t)L_382+(int32_t)2)));
		int32_t L_383 = ((int32_t)((int32_t)L_382+(int32_t)2));
		int32_t L_384 = ___strpos;
		RxInterpreter_Close_m17714(__this, ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_378, L_380))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_381, L_383))<<(int32_t)8)))), L_384, /*hidden argument*/NULL);
		int32_t L_385 = ___pc;
		___pc = ((int32_t)((int32_t)L_385+(int32_t)3));
		goto IL_0002;
	}

IL_0b18:
	{
		V_16 = 0;
		int32_t L_386 = ___pc;
		int32_t L_387 = ___strpos;
		bool L_388 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_386+(int32_t)8)), L_387, (&V_16), /*hidden argument*/NULL);
		if (L_388)
		{
			goto IL_0b31;
		}
	}
	{
		goto IL_3e19;
	}

IL_0b31:
	{
		ByteU5BU5D_t66* L_389 = (__this->___program_1);
		int32_t L_390 = ___pc;
		NullCheck(L_389);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_389, ((int32_t)((int32_t)L_390+(int32_t)1)));
		int32_t L_391 = ((int32_t)((int32_t)L_390+(int32_t)1));
		ByteU5BU5D_t66* L_392 = (__this->___program_1);
		int32_t L_393 = ___pc;
		NullCheck(L_392);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_392, ((int32_t)((int32_t)L_393+(int32_t)2)));
		int32_t L_394 = ((int32_t)((int32_t)L_393+(int32_t)2));
		V_17 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_389, L_391))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_392, L_394))<<(int32_t)8))));
		ByteU5BU5D_t66* L_395 = (__this->___program_1);
		int32_t L_396 = ___pc;
		NullCheck(L_395);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_395, ((int32_t)((int32_t)L_396+(int32_t)3)));
		int32_t L_397 = ((int32_t)((int32_t)L_396+(int32_t)3));
		ByteU5BU5D_t66* L_398 = (__this->___program_1);
		int32_t L_399 = ___pc;
		NullCheck(L_398);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_398, ((int32_t)((int32_t)L_399+(int32_t)4)));
		int32_t L_400 = ((int32_t)((int32_t)L_399+(int32_t)4));
		V_18 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_395, L_397))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_398, L_400))<<(int32_t)8))));
		ByteU5BU5D_t66* L_401 = (__this->___program_1);
		int32_t L_402 = ___pc;
		NullCheck(L_401);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_401, ((int32_t)((int32_t)L_402+(int32_t)5)));
		int32_t L_403 = ((int32_t)((int32_t)L_402+(int32_t)5));
		V_19 = ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_401, L_403))) > ((int32_t)0))? 1 : 0);
		int32_t L_404 = V_17;
		int32_t L_405 = V_18;
		bool L_406 = V_19;
		int32_t L_407 = ___strpos;
		bool L_408 = RxInterpreter_Balance_m17715(__this, L_404, L_405, L_406, L_407, /*hidden argument*/NULL);
		if (L_408)
		{
			goto IL_0b89;
		}
	}
	{
		goto IL_3e19;
	}

IL_0b89:
	{
		int32_t L_409 = V_16;
		___strpos = L_409;
		int32_t L_410 = ___pc;
		ByteU5BU5D_t66* L_411 = (__this->___program_1);
		int32_t L_412 = ___pc;
		NullCheck(L_411);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_411, ((int32_t)((int32_t)L_412+(int32_t)6)));
		int32_t L_413 = ((int32_t)((int32_t)L_412+(int32_t)6));
		ByteU5BU5D_t66* L_414 = (__this->___program_1);
		int32_t L_415 = ___pc;
		NullCheck(L_414);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_414, ((int32_t)((int32_t)L_415+(int32_t)7)));
		int32_t L_416 = ((int32_t)((int32_t)L_415+(int32_t)7));
		___pc = ((int32_t)((int32_t)L_410+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_411, L_413))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_414, L_416))<<(int32_t)8))))));
		goto IL_3e0f;
	}

IL_0bad:
	{
		goto IL_3e14;
	}

IL_0bb2:
	{
		int32_t L_417 = ___pc;
		ByteU5BU5D_t66* L_418 = (__this->___program_1);
		int32_t L_419 = ___pc;
		NullCheck(L_418);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_418, ((int32_t)((int32_t)L_419+(int32_t)1)));
		int32_t L_420 = ((int32_t)((int32_t)L_419+(int32_t)1));
		ByteU5BU5D_t66* L_421 = (__this->___program_1);
		int32_t L_422 = ___pc;
		NullCheck(L_421);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_421, ((int32_t)((int32_t)L_422+(int32_t)2)));
		int32_t L_423 = ((int32_t)((int32_t)L_422+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_417+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_418, L_420))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_421, L_423))<<(int32_t)8))))));
		goto IL_0002;
	}

IL_0bd2:
	{
		int32_t L_424 = ___pc;
		ByteU5BU5D_t66* L_425 = (__this->___program_1);
		int32_t L_426 = ___pc;
		NullCheck(L_425);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_425, ((int32_t)((int32_t)L_426+(int32_t)1)));
		int32_t L_427 = ((int32_t)((int32_t)L_426+(int32_t)1));
		ByteU5BU5D_t66* L_428 = (__this->___program_1);
		int32_t L_429 = ___pc;
		NullCheck(L_428);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_428, ((int32_t)((int32_t)L_429+(int32_t)2)));
		int32_t L_430 = ((int32_t)((int32_t)L_429+(int32_t)2));
		V_0 = ((int32_t)((int32_t)L_424+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_425, L_427))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_428, L_430))<<(int32_t)8))))));
		int32_t L_431 = ___pc;
		___pc = ((int32_t)((int32_t)L_431+(int32_t)3));
		goto IL_0002;
	}

IL_0bf6:
	{
		int32_t L_432 = ___pc;
		V_2 = ((int32_t)((int32_t)L_432+(int32_t)2));
		ByteU5BU5D_t66* L_433 = (__this->___program_1);
		int32_t L_434 = ___pc;
		NullCheck(L_433);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_433, ((int32_t)((int32_t)L_434+(int32_t)1)));
		int32_t L_435 = ((int32_t)((int32_t)L_434+(int32_t)1));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_433, L_435));
		int32_t L_436 = ___strpos;
		int32_t L_437 = V_1;
		int32_t L_438 = (__this->___string_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_436+(int32_t)L_437))) <= ((int32_t)L_438)))
		{
			goto IL_0c15;
		}
	}
	{
		return 0;
	}

IL_0c15:
	{
		int32_t L_439 = V_2;
		int32_t L_440 = V_1;
		V_3 = ((int32_t)((int32_t)L_439+(int32_t)L_440));
		goto IL_0c42;
	}

IL_0c1e:
	{
		String_t* L_441 = (__this->___str_2);
		int32_t L_442 = ___strpos;
		NullCheck(L_441);
		uint16_t L_443 = String_get_Chars_m407(L_441, L_442, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_444 = (__this->___program_1);
		int32_t L_445 = V_2;
		NullCheck(L_444);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_444, L_445);
		int32_t L_446 = L_445;
		if ((((int32_t)L_443) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_444, L_446)))))
		{
			goto IL_0c39;
		}
	}
	{
		return 0;
	}

IL_0c39:
	{
		int32_t L_447 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_447+(int32_t)1));
		int32_t L_448 = V_2;
		V_2 = ((int32_t)((int32_t)L_448+(int32_t)1));
	}

IL_0c42:
	{
		int32_t L_449 = V_2;
		int32_t L_450 = V_3;
		if ((((int32_t)L_449) < ((int32_t)L_450)))
		{
			goto IL_0c1e;
		}
	}
	{
		int32_t L_451 = V_3;
		___pc = L_451;
		goto IL_0002;
	}

IL_0c51:
	{
		int32_t L_452 = ___pc;
		V_2 = ((int32_t)((int32_t)L_452+(int32_t)2));
		ByteU5BU5D_t66* L_453 = (__this->___program_1);
		int32_t L_454 = ___pc;
		NullCheck(L_453);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_453, ((int32_t)((int32_t)L_454+(int32_t)1)));
		int32_t L_455 = ((int32_t)((int32_t)L_454+(int32_t)1));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_453, L_455));
		int32_t L_456 = ___strpos;
		int32_t L_457 = V_1;
		int32_t L_458 = (__this->___string_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_456+(int32_t)L_457))) <= ((int32_t)L_458)))
		{
			goto IL_0c70;
		}
	}
	{
		return 0;
	}

IL_0c70:
	{
		int32_t L_459 = V_2;
		int32_t L_460 = V_1;
		V_3 = ((int32_t)((int32_t)L_459+(int32_t)L_460));
		goto IL_0cbb;
	}

IL_0c79:
	{
		String_t* L_461 = (__this->___str_2);
		int32_t L_462 = ___strpos;
		NullCheck(L_461);
		uint16_t L_463 = String_get_Chars_m407(L_461, L_462, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_464 = (__this->___program_1);
		int32_t L_465 = V_2;
		NullCheck(L_464);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_464, L_465);
		int32_t L_466 = L_465;
		if ((((int32_t)L_463) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_464, L_466)))))
		{
			goto IL_0cb2;
		}
	}
	{
		String_t* L_467 = (__this->___str_2);
		int32_t L_468 = ___strpos;
		NullCheck(L_467);
		uint16_t L_469 = String_get_Chars_m407(L_467, L_468, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_470 = Char_ToLower_m6225(NULL /*static, unused*/, L_469, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_471 = (__this->___program_1);
		int32_t L_472 = V_2;
		NullCheck(L_471);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_471, L_472);
		int32_t L_473 = L_472;
		if ((((int32_t)L_470) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_471, L_473)))))
		{
			goto IL_0cb2;
		}
	}
	{
		return 0;
	}

IL_0cb2:
	{
		int32_t L_474 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_474+(int32_t)1));
		int32_t L_475 = V_2;
		V_2 = ((int32_t)((int32_t)L_475+(int32_t)1));
	}

IL_0cbb:
	{
		int32_t L_476 = V_2;
		int32_t L_477 = V_3;
		if ((((int32_t)L_476) < ((int32_t)L_477)))
		{
			goto IL_0c79;
		}
	}
	{
		int32_t L_478 = V_3;
		___pc = L_478;
		goto IL_0002;
	}

IL_0cca:
	{
		int32_t L_479 = ___pc;
		V_2 = ((int32_t)((int32_t)L_479+(int32_t)2));
		ByteU5BU5D_t66* L_480 = (__this->___program_1);
		int32_t L_481 = ___pc;
		NullCheck(L_480);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_480, ((int32_t)((int32_t)L_481+(int32_t)1)));
		int32_t L_482 = ((int32_t)((int32_t)L_481+(int32_t)1));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_480, L_482));
		int32_t L_483 = ___strpos;
		int32_t L_484 = V_1;
		if ((((int32_t)L_483) >= ((int32_t)L_484)))
		{
			goto IL_0ce2;
		}
	}
	{
		return 0;
	}

IL_0ce2:
	{
		int32_t L_485 = ___strpos;
		int32_t L_486 = V_1;
		V_20 = ((int32_t)((int32_t)L_485-(int32_t)L_486));
		int32_t L_487 = V_2;
		int32_t L_488 = V_1;
		V_3 = ((int32_t)((int32_t)L_487+(int32_t)L_488));
		goto IL_0d16;
	}

IL_0cf0:
	{
		String_t* L_489 = (__this->___str_2);
		int32_t L_490 = V_20;
		NullCheck(L_489);
		uint16_t L_491 = String_get_Chars_m407(L_489, L_490, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_492 = (__this->___program_1);
		int32_t L_493 = V_2;
		NullCheck(L_492);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_492, L_493);
		int32_t L_494 = L_493;
		if ((((int32_t)L_491) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_492, L_494)))))
		{
			goto IL_0d0c;
		}
	}
	{
		return 0;
	}

IL_0d0c:
	{
		int32_t L_495 = V_2;
		V_2 = ((int32_t)((int32_t)L_495+(int32_t)1));
		int32_t L_496 = V_20;
		V_20 = ((int32_t)((int32_t)L_496+(int32_t)1));
	}

IL_0d16:
	{
		int32_t L_497 = V_2;
		int32_t L_498 = V_3;
		if ((((int32_t)L_497) < ((int32_t)L_498)))
		{
			goto IL_0cf0;
		}
	}
	{
		int32_t L_499 = ___strpos;
		int32_t L_500 = V_1;
		___strpos = ((int32_t)((int32_t)L_499-(int32_t)L_500));
		int32_t L_501 = V_3;
		___pc = L_501;
		goto IL_0002;
	}

IL_0d2a:
	{
		int32_t L_502 = ___pc;
		V_2 = ((int32_t)((int32_t)L_502+(int32_t)2));
		ByteU5BU5D_t66* L_503 = (__this->___program_1);
		int32_t L_504 = ___pc;
		NullCheck(L_503);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_503, ((int32_t)((int32_t)L_504+(int32_t)1)));
		int32_t L_505 = ((int32_t)((int32_t)L_504+(int32_t)1));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_503, L_505));
		int32_t L_506 = ___strpos;
		int32_t L_507 = V_1;
		if ((((int32_t)L_506) >= ((int32_t)L_507)))
		{
			goto IL_0d42;
		}
	}
	{
		return 0;
	}

IL_0d42:
	{
		int32_t L_508 = ___strpos;
		int32_t L_509 = V_1;
		V_21 = ((int32_t)((int32_t)L_508-(int32_t)L_509));
		int32_t L_510 = V_2;
		int32_t L_511 = V_1;
		V_3 = ((int32_t)((int32_t)L_510+(int32_t)L_511));
		goto IL_0d95;
	}

IL_0d50:
	{
		String_t* L_512 = (__this->___str_2);
		int32_t L_513 = V_21;
		NullCheck(L_512);
		uint16_t L_514 = String_get_Chars_m407(L_512, L_513, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_515 = (__this->___program_1);
		int32_t L_516 = V_2;
		NullCheck(L_515);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_515, L_516);
		int32_t L_517 = L_516;
		if ((((int32_t)L_514) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_515, L_517)))))
		{
			goto IL_0d8b;
		}
	}
	{
		String_t* L_518 = (__this->___str_2);
		int32_t L_519 = V_21;
		NullCheck(L_518);
		uint16_t L_520 = String_get_Chars_m407(L_518, L_519, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_521 = Char_ToLower_m6225(NULL /*static, unused*/, L_520, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_522 = (__this->___program_1);
		int32_t L_523 = V_2;
		NullCheck(L_522);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_522, L_523);
		int32_t L_524 = L_523;
		if ((((int32_t)L_521) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_522, L_524)))))
		{
			goto IL_0d8b;
		}
	}
	{
		return 0;
	}

IL_0d8b:
	{
		int32_t L_525 = V_2;
		V_2 = ((int32_t)((int32_t)L_525+(int32_t)1));
		int32_t L_526 = V_21;
		V_21 = ((int32_t)((int32_t)L_526+(int32_t)1));
	}

IL_0d95:
	{
		int32_t L_527 = V_2;
		int32_t L_528 = V_3;
		if ((((int32_t)L_527) < ((int32_t)L_528)))
		{
			goto IL_0d50;
		}
	}
	{
		int32_t L_529 = ___strpos;
		int32_t L_530 = V_1;
		___strpos = ((int32_t)((int32_t)L_529-(int32_t)L_530));
		int32_t L_531 = V_3;
		___pc = L_531;
		goto IL_0002;
	}

IL_0da9:
	{
		int32_t L_532 = ___pc;
		V_2 = ((int32_t)((int32_t)L_532+(int32_t)3));
		ByteU5BU5D_t66* L_533 = (__this->___program_1);
		int32_t L_534 = ___pc;
		NullCheck(L_533);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_533, ((int32_t)((int32_t)L_534+(int32_t)1)));
		int32_t L_535 = ((int32_t)((int32_t)L_534+(int32_t)1));
		ByteU5BU5D_t66* L_536 = (__this->___program_1);
		int32_t L_537 = ___pc;
		NullCheck(L_536);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_536, ((int32_t)((int32_t)L_537+(int32_t)2)));
		int32_t L_538 = ((int32_t)((int32_t)L_537+(int32_t)2));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_533, L_535))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_536, L_538))<<(int32_t)8))));
		int32_t L_539 = ___strpos;
		int32_t L_540 = V_1;
		int32_t L_541 = (__this->___string_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_539+(int32_t)L_540))) <= ((int32_t)L_541)))
		{
			goto IL_0dd5;
		}
	}
	{
		return 0;
	}

IL_0dd5:
	{
		int32_t L_542 = V_2;
		int32_t L_543 = V_1;
		V_3 = ((int32_t)((int32_t)L_542+(int32_t)((int32_t)((int32_t)L_543*(int32_t)2))));
		goto IL_0e15;
	}

IL_0de0:
	{
		ByteU5BU5D_t66* L_544 = (__this->___program_1);
		int32_t L_545 = V_2;
		NullCheck(L_544);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_544, L_545);
		int32_t L_546 = L_545;
		ByteU5BU5D_t66* L_547 = (__this->___program_1);
		int32_t L_548 = V_2;
		NullCheck(L_547);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_547, ((int32_t)((int32_t)L_548+(int32_t)1)));
		int32_t L_549 = ((int32_t)((int32_t)L_548+(int32_t)1));
		V_22 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_544, L_546))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_547, L_549))<<(int32_t)8))));
		String_t* L_550 = (__this->___str_2);
		int32_t L_551 = ___strpos;
		NullCheck(L_550);
		uint16_t L_552 = String_get_Chars_m407(L_550, L_551, /*hidden argument*/NULL);
		int32_t L_553 = V_22;
		if ((((int32_t)L_552) == ((int32_t)L_553)))
		{
			goto IL_0e0c;
		}
	}
	{
		return 0;
	}

IL_0e0c:
	{
		int32_t L_554 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_554+(int32_t)1));
		int32_t L_555 = V_2;
		V_2 = ((int32_t)((int32_t)L_555+(int32_t)2));
	}

IL_0e15:
	{
		int32_t L_556 = V_2;
		int32_t L_557 = V_3;
		if ((((int32_t)L_556) < ((int32_t)L_557)))
		{
			goto IL_0de0;
		}
	}
	{
		int32_t L_558 = V_3;
		___pc = L_558;
		goto IL_0002;
	}

IL_0e24:
	{
		int32_t L_559 = ___pc;
		V_2 = ((int32_t)((int32_t)L_559+(int32_t)3));
		ByteU5BU5D_t66* L_560 = (__this->___program_1);
		int32_t L_561 = ___pc;
		NullCheck(L_560);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_560, ((int32_t)((int32_t)L_561+(int32_t)1)));
		int32_t L_562 = ((int32_t)((int32_t)L_561+(int32_t)1));
		ByteU5BU5D_t66* L_563 = (__this->___program_1);
		int32_t L_564 = ___pc;
		NullCheck(L_563);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_563, ((int32_t)((int32_t)L_564+(int32_t)2)));
		int32_t L_565 = ((int32_t)((int32_t)L_564+(int32_t)2));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_560, L_562))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_563, L_565))<<(int32_t)8))));
		int32_t L_566 = ___strpos;
		int32_t L_567 = V_1;
		int32_t L_568 = (__this->___string_end_4);
		if ((((int32_t)((int32_t)((int32_t)L_566+(int32_t)L_567))) <= ((int32_t)L_568)))
		{
			goto IL_0e50;
		}
	}
	{
		return 0;
	}

IL_0e50:
	{
		int32_t L_569 = V_2;
		int32_t L_570 = V_1;
		V_3 = ((int32_t)((int32_t)L_569+(int32_t)((int32_t)((int32_t)L_570*(int32_t)2))));
		goto IL_0ea8;
	}

IL_0e5b:
	{
		ByteU5BU5D_t66* L_571 = (__this->___program_1);
		int32_t L_572 = V_2;
		NullCheck(L_571);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_571, L_572);
		int32_t L_573 = L_572;
		ByteU5BU5D_t66* L_574 = (__this->___program_1);
		int32_t L_575 = V_2;
		NullCheck(L_574);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_574, ((int32_t)((int32_t)L_575+(int32_t)1)));
		int32_t L_576 = ((int32_t)((int32_t)L_575+(int32_t)1));
		V_23 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_571, L_573))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_574, L_576))<<(int32_t)8))));
		String_t* L_577 = (__this->___str_2);
		int32_t L_578 = ___strpos;
		NullCheck(L_577);
		uint16_t L_579 = String_get_Chars_m407(L_577, L_578, /*hidden argument*/NULL);
		int32_t L_580 = V_23;
		if ((((int32_t)L_579) == ((int32_t)L_580)))
		{
			goto IL_0e9f;
		}
	}
	{
		String_t* L_581 = (__this->___str_2);
		int32_t L_582 = ___strpos;
		NullCheck(L_581);
		uint16_t L_583 = String_get_Chars_m407(L_581, L_582, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_584 = Char_ToLower_m6225(NULL /*static, unused*/, L_583, /*hidden argument*/NULL);
		int32_t L_585 = V_23;
		if ((((int32_t)L_584) == ((int32_t)L_585)))
		{
			goto IL_0e9f;
		}
	}
	{
		return 0;
	}

IL_0e9f:
	{
		int32_t L_586 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_586+(int32_t)1));
		int32_t L_587 = V_2;
		V_2 = ((int32_t)((int32_t)L_587+(int32_t)2));
	}

IL_0ea8:
	{
		int32_t L_588 = V_2;
		int32_t L_589 = V_3;
		if ((((int32_t)L_588) < ((int32_t)L_589)))
		{
			goto IL_0e5b;
		}
	}
	{
		int32_t L_590 = V_3;
		___pc = L_590;
		goto IL_0002;
	}

IL_0eb7:
	{
		int32_t L_591 = ___pc;
		V_2 = ((int32_t)((int32_t)L_591+(int32_t)3));
		ByteU5BU5D_t66* L_592 = (__this->___program_1);
		int32_t L_593 = ___pc;
		NullCheck(L_592);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_592, ((int32_t)((int32_t)L_593+(int32_t)1)));
		int32_t L_594 = ((int32_t)((int32_t)L_593+(int32_t)1));
		ByteU5BU5D_t66* L_595 = (__this->___program_1);
		int32_t L_596 = ___pc;
		NullCheck(L_595);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_595, ((int32_t)((int32_t)L_596+(int32_t)2)));
		int32_t L_597 = ((int32_t)((int32_t)L_596+(int32_t)2));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_592, L_594))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_595, L_597))<<(int32_t)8))));
		int32_t L_598 = ___strpos;
		int32_t L_599 = V_1;
		if ((((int32_t)L_598) >= ((int32_t)L_599)))
		{
			goto IL_0edc;
		}
	}
	{
		return 0;
	}

IL_0edc:
	{
		int32_t L_600 = ___strpos;
		int32_t L_601 = V_1;
		V_24 = ((int32_t)((int32_t)L_600-(int32_t)L_601));
		int32_t L_602 = V_2;
		int32_t L_603 = V_1;
		V_3 = ((int32_t)((int32_t)L_602+(int32_t)((int32_t)((int32_t)L_603*(int32_t)2))));
		goto IL_0f23;
	}

IL_0eec:
	{
		ByteU5BU5D_t66* L_604 = (__this->___program_1);
		int32_t L_605 = V_2;
		NullCheck(L_604);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_604, L_605);
		int32_t L_606 = L_605;
		ByteU5BU5D_t66* L_607 = (__this->___program_1);
		int32_t L_608 = V_2;
		NullCheck(L_607);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_607, ((int32_t)((int32_t)L_608+(int32_t)1)));
		int32_t L_609 = ((int32_t)((int32_t)L_608+(int32_t)1));
		V_25 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_604, L_606))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_607, L_609))<<(int32_t)8))));
		String_t* L_610 = (__this->___str_2);
		int32_t L_611 = V_24;
		NullCheck(L_610);
		uint16_t L_612 = String_get_Chars_m407(L_610, L_611, /*hidden argument*/NULL);
		int32_t L_613 = V_25;
		if ((((int32_t)L_612) == ((int32_t)L_613)))
		{
			goto IL_0f19;
		}
	}
	{
		return 0;
	}

IL_0f19:
	{
		int32_t L_614 = V_2;
		V_2 = ((int32_t)((int32_t)L_614+(int32_t)2));
		int32_t L_615 = V_24;
		V_24 = ((int32_t)((int32_t)L_615+(int32_t)2));
	}

IL_0f23:
	{
		int32_t L_616 = V_2;
		int32_t L_617 = V_3;
		if ((((int32_t)L_616) < ((int32_t)L_617)))
		{
			goto IL_0eec;
		}
	}
	{
		int32_t L_618 = ___strpos;
		int32_t L_619 = V_1;
		___strpos = ((int32_t)((int32_t)L_618-(int32_t)L_619));
		int32_t L_620 = V_3;
		___pc = L_620;
		goto IL_0002;
	}

IL_0f37:
	{
		int32_t L_621 = ___pc;
		V_2 = ((int32_t)((int32_t)L_621+(int32_t)3));
		ByteU5BU5D_t66* L_622 = (__this->___program_1);
		int32_t L_623 = ___pc;
		NullCheck(L_622);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_622, ((int32_t)((int32_t)L_623+(int32_t)1)));
		int32_t L_624 = ((int32_t)((int32_t)L_623+(int32_t)1));
		ByteU5BU5D_t66* L_625 = (__this->___program_1);
		int32_t L_626 = ___pc;
		NullCheck(L_625);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_625, ((int32_t)((int32_t)L_626+(int32_t)2)));
		int32_t L_627 = ((int32_t)((int32_t)L_626+(int32_t)2));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_622, L_624))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_625, L_627))<<(int32_t)8))));
		int32_t L_628 = ___strpos;
		int32_t L_629 = V_1;
		if ((((int32_t)L_628) >= ((int32_t)L_629)))
		{
			goto IL_0f5c;
		}
	}
	{
		return 0;
	}

IL_0f5c:
	{
		int32_t L_630 = ___strpos;
		int32_t L_631 = V_1;
		V_26 = ((int32_t)((int32_t)L_630-(int32_t)L_631));
		int32_t L_632 = V_2;
		int32_t L_633 = V_1;
		V_3 = ((int32_t)((int32_t)L_632+(int32_t)((int32_t)((int32_t)L_633*(int32_t)2))));
		goto IL_0fbc;
	}

IL_0f6c:
	{
		ByteU5BU5D_t66* L_634 = (__this->___program_1);
		int32_t L_635 = V_2;
		NullCheck(L_634);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_634, L_635);
		int32_t L_636 = L_635;
		ByteU5BU5D_t66* L_637 = (__this->___program_1);
		int32_t L_638 = V_2;
		NullCheck(L_637);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_637, ((int32_t)((int32_t)L_638+(int32_t)1)));
		int32_t L_639 = ((int32_t)((int32_t)L_638+(int32_t)1));
		V_27 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_634, L_636))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_637, L_639))<<(int32_t)8))));
		String_t* L_640 = (__this->___str_2);
		int32_t L_641 = V_26;
		NullCheck(L_640);
		uint16_t L_642 = String_get_Chars_m407(L_640, L_641, /*hidden argument*/NULL);
		int32_t L_643 = V_27;
		if ((((int32_t)L_642) == ((int32_t)L_643)))
		{
			goto IL_0fb2;
		}
	}
	{
		String_t* L_644 = (__this->___str_2);
		int32_t L_645 = V_26;
		NullCheck(L_644);
		uint16_t L_646 = String_get_Chars_m407(L_644, L_645, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_647 = Char_ToLower_m6225(NULL /*static, unused*/, L_646, /*hidden argument*/NULL);
		int32_t L_648 = V_27;
		if ((((int32_t)L_647) == ((int32_t)L_648)))
		{
			goto IL_0fb2;
		}
	}
	{
		return 0;
	}

IL_0fb2:
	{
		int32_t L_649 = V_2;
		V_2 = ((int32_t)((int32_t)L_649+(int32_t)2));
		int32_t L_650 = V_26;
		V_26 = ((int32_t)((int32_t)L_650+(int32_t)2));
	}

IL_0fbc:
	{
		int32_t L_651 = V_2;
		int32_t L_652 = V_3;
		if ((((int32_t)L_651) < ((int32_t)L_652)))
		{
			goto IL_0f6c;
		}
	}
	{
		int32_t L_653 = ___strpos;
		int32_t L_654 = V_1;
		___strpos = ((int32_t)((int32_t)L_653-(int32_t)L_654));
		int32_t L_655 = V_3;
		___pc = L_655;
		goto IL_0002;
	}

IL_0fd0:
	{
		int32_t L_656 = ___strpos;
		int32_t L_657 = (__this->___string_end_4);
		if ((((int32_t)L_656) >= ((int32_t)L_657)))
		{
			goto IL_1015;
		}
	}
	{
		String_t* L_658 = (__this->___str_2);
		int32_t L_659 = ___strpos;
		NullCheck(L_658);
		uint16_t L_660 = String_get_Chars_m407(L_658, L_659, /*hidden argument*/NULL);
		V_28 = L_660;
		uint16_t L_661 = V_28;
		ByteU5BU5D_t66* L_662 = (__this->___program_1);
		int32_t L_663 = ___pc;
		NullCheck(L_662);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_662, ((int32_t)((int32_t)L_663+(int32_t)1)));
		int32_t L_664 = ((int32_t)((int32_t)L_663+(int32_t)1));
		if ((!(((uint32_t)L_661) == ((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_662, L_664))))))
		{
			goto IL_1015;
		}
	}
	{
		int32_t L_665 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_665+(int32_t)1));
		int32_t L_666 = V_0;
		if (!L_666)
		{
			goto IL_100b;
		}
	}
	{
		goto IL_3e1b;
	}

IL_100b:
	{
		int32_t L_667 = ___pc;
		___pc = ((int32_t)((int32_t)L_667+(int32_t)2));
		goto IL_0002;
	}

IL_1015:
	{
		int32_t L_668 = V_0;
		if (L_668)
		{
			goto IL_101d;
		}
	}
	{
		return 0;
	}

IL_101d:
	{
		int32_t L_669 = ___pc;
		___pc = ((int32_t)((int32_t)L_669+(int32_t)2));
		goto IL_0002;
	}

IL_1027:
	{
		int32_t L_670 = ___strpos;
		int32_t L_671 = (__this->___string_end_4);
		if ((((int32_t)L_670) >= ((int32_t)L_671)))
		{
			goto IL_107d;
		}
	}
	{
		String_t* L_672 = (__this->___str_2);
		int32_t L_673 = ___strpos;
		NullCheck(L_672);
		uint16_t L_674 = String_get_Chars_m407(L_672, L_673, /*hidden argument*/NULL);
		V_29 = L_674;
		uint16_t L_675 = V_29;
		ByteU5BU5D_t66* L_676 = (__this->___program_1);
		int32_t L_677 = ___pc;
		NullCheck(L_676);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_676, ((int32_t)((int32_t)L_677+(int32_t)1)));
		int32_t L_678 = ((int32_t)((int32_t)L_677+(int32_t)1));
		if ((((int32_t)L_675) < ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_676, L_678)))))
		{
			goto IL_107d;
		}
	}
	{
		uint16_t L_679 = V_29;
		ByteU5BU5D_t66* L_680 = (__this->___program_1);
		int32_t L_681 = ___pc;
		NullCheck(L_680);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_680, ((int32_t)((int32_t)L_681+(int32_t)2)));
		int32_t L_682 = ((int32_t)((int32_t)L_681+(int32_t)2));
		if ((((int32_t)L_679) > ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_680, L_682)))))
		{
			goto IL_107d;
		}
	}
	{
		int32_t L_683 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_683+(int32_t)1));
		int32_t L_684 = V_0;
		if (!L_684)
		{
			goto IL_1073;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1073:
	{
		int32_t L_685 = ___pc;
		___pc = ((int32_t)((int32_t)L_685+(int32_t)3));
		goto IL_0002;
	}

IL_107d:
	{
		int32_t L_686 = V_0;
		if (L_686)
		{
			goto IL_1085;
		}
	}
	{
		return 0;
	}

IL_1085:
	{
		int32_t L_687 = ___pc;
		___pc = ((int32_t)((int32_t)L_687+(int32_t)3));
		goto IL_0002;
	}

IL_108f:
	{
		int32_t L_688 = ___strpos;
		int32_t L_689 = (__this->___string_end_4);
		if ((((int32_t)L_688) >= ((int32_t)L_689)))
		{
			goto IL_10ff;
		}
	}
	{
		String_t* L_690 = (__this->___str_2);
		int32_t L_691 = ___strpos;
		NullCheck(L_690);
		uint16_t L_692 = String_get_Chars_m407(L_690, L_691, /*hidden argument*/NULL);
		V_30 = L_692;
		uint16_t L_693 = V_30;
		ByteU5BU5D_t66* L_694 = (__this->___program_1);
		int32_t L_695 = ___pc;
		NullCheck(L_694);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_694, ((int32_t)((int32_t)L_695+(int32_t)1)));
		int32_t L_696 = ((int32_t)((int32_t)L_695+(int32_t)1));
		ByteU5BU5D_t66* L_697 = (__this->___program_1);
		int32_t L_698 = ___pc;
		NullCheck(L_697);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_697, ((int32_t)((int32_t)L_698+(int32_t)2)));
		int32_t L_699 = ((int32_t)((int32_t)L_698+(int32_t)2));
		if ((((int32_t)L_693) < ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_694, L_696))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_697, L_699))<<(int32_t)8)))))))
		{
			goto IL_10ff;
		}
	}
	{
		uint16_t L_700 = V_30;
		ByteU5BU5D_t66* L_701 = (__this->___program_1);
		int32_t L_702 = ___pc;
		NullCheck(L_701);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_701, ((int32_t)((int32_t)L_702+(int32_t)3)));
		int32_t L_703 = ((int32_t)((int32_t)L_702+(int32_t)3));
		ByteU5BU5D_t66* L_704 = (__this->___program_1);
		int32_t L_705 = ___pc;
		NullCheck(L_704);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_704, ((int32_t)((int32_t)L_705+(int32_t)4)));
		int32_t L_706 = ((int32_t)((int32_t)L_705+(int32_t)4));
		if ((((int32_t)L_700) > ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_701, L_703))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_704, L_706))<<(int32_t)8)))))))
		{
			goto IL_10ff;
		}
	}
	{
		int32_t L_707 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_707+(int32_t)1));
		int32_t L_708 = V_0;
		if (!L_708)
		{
			goto IL_10f5;
		}
	}
	{
		goto IL_3e1b;
	}

IL_10f5:
	{
		int32_t L_709 = ___pc;
		___pc = ((int32_t)((int32_t)L_709+(int32_t)5));
		goto IL_0002;
	}

IL_10ff:
	{
		int32_t L_710 = V_0;
		if (L_710)
		{
			goto IL_1107;
		}
	}
	{
		return 0;
	}

IL_1107:
	{
		int32_t L_711 = ___pc;
		___pc = ((int32_t)((int32_t)L_711+(int32_t)5));
		goto IL_0002;
	}

IL_1111:
	{
		int32_t L_712 = ___strpos;
		int32_t L_713 = (__this->___string_end_4);
		if ((((int32_t)L_712) >= ((int32_t)L_713)))
		{
			goto IL_1163;
		}
	}
	{
		String_t* L_714 = (__this->___str_2);
		int32_t L_715 = ___strpos;
		NullCheck(L_714);
		uint16_t L_716 = String_get_Chars_m407(L_714, L_715, /*hidden argument*/NULL);
		V_31 = L_716;
		uint16_t L_717 = V_31;
		ByteU5BU5D_t66* L_718 = (__this->___program_1);
		int32_t L_719 = ___pc;
		NullCheck(L_718);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_718, ((int32_t)((int32_t)L_719+(int32_t)1)));
		int32_t L_720 = ((int32_t)((int32_t)L_719+(int32_t)1));
		ByteU5BU5D_t66* L_721 = (__this->___program_1);
		int32_t L_722 = ___pc;
		NullCheck(L_721);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_721, ((int32_t)((int32_t)L_722+(int32_t)2)));
		int32_t L_723 = ((int32_t)((int32_t)L_722+(int32_t)2));
		if ((!(((uint32_t)L_717) == ((uint32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_718, L_720))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_721, L_723))<<(int32_t)8))))))))
		{
			goto IL_1163;
		}
	}
	{
		int32_t L_724 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_724+(int32_t)1));
		int32_t L_725 = V_0;
		if (!L_725)
		{
			goto IL_1159;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1159:
	{
		int32_t L_726 = ___pc;
		___pc = ((int32_t)((int32_t)L_726+(int32_t)3));
		goto IL_0002;
	}

IL_1163:
	{
		int32_t L_727 = V_0;
		if (L_727)
		{
			goto IL_116b;
		}
	}
	{
		return 0;
	}

IL_116b:
	{
		int32_t L_728 = ___pc;
		___pc = ((int32_t)((int32_t)L_728+(int32_t)3));
		goto IL_0002;
	}

IL_1175:
	{
		int32_t L_729 = ___strpos;
		int32_t L_730 = (__this->___string_end_4);
		if ((((int32_t)L_729) >= ((int32_t)L_730)))
		{
			goto IL_11b2;
		}
	}
	{
		String_t* L_731 = (__this->___str_2);
		int32_t L_732 = ___strpos;
		NullCheck(L_731);
		uint16_t L_733 = String_get_Chars_m407(L_731, L_732, /*hidden argument*/NULL);
		V_32 = L_733;
		uint16_t L_734 = V_32;
		if ((((int32_t)L_734) == ((int32_t)((int32_t)10))))
		{
			goto IL_11b2;
		}
	}
	{
		int32_t L_735 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_735+(int32_t)1));
		int32_t L_736 = V_0;
		if (!L_736)
		{
			goto IL_11a8;
		}
	}
	{
		goto IL_3e1b;
	}

IL_11a8:
	{
		int32_t L_737 = ___pc;
		___pc = ((int32_t)((int32_t)L_737+(int32_t)1));
		goto IL_0002;
	}

IL_11b2:
	{
		int32_t L_738 = V_0;
		if (L_738)
		{
			goto IL_11ba;
		}
	}
	{
		return 0;
	}

IL_11ba:
	{
		int32_t L_739 = ___pc;
		___pc = ((int32_t)((int32_t)L_739+(int32_t)1));
		goto IL_0002;
	}

IL_11c4:
	{
		int32_t L_740 = ___strpos;
		int32_t L_741 = (__this->___string_end_4);
		if ((((int32_t)L_740) >= ((int32_t)L_741)))
		{
			goto IL_11f8;
		}
	}
	{
		String_t* L_742 = (__this->___str_2);
		int32_t L_743 = ___strpos;
		NullCheck(L_742);
		uint16_t L_744 = String_get_Chars_m407(L_742, L_743, /*hidden argument*/NULL);
		V_33 = L_744;
		int32_t L_745 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_745+(int32_t)1));
		int32_t L_746 = V_0;
		if (!L_746)
		{
			goto IL_11ee;
		}
	}
	{
		goto IL_3e1b;
	}

IL_11ee:
	{
		int32_t L_747 = ___pc;
		___pc = ((int32_t)((int32_t)L_747+(int32_t)1));
		goto IL_0002;
	}

IL_11f8:
	{
		int32_t L_748 = V_0;
		if (L_748)
		{
			goto IL_1200;
		}
	}
	{
		return 0;
	}

IL_1200:
	{
		int32_t L_749 = ___pc;
		___pc = ((int32_t)((int32_t)L_749+(int32_t)1));
		goto IL_0002;
	}

IL_120a:
	{
		int32_t L_750 = ___strpos;
		int32_t L_751 = (__this->___string_end_4);
		if ((((int32_t)L_750) >= ((int32_t)L_751)))
		{
			goto IL_1258;
		}
	}
	{
		String_t* L_752 = (__this->___str_2);
		int32_t L_753 = ___strpos;
		NullCheck(L_752);
		uint16_t L_754 = String_get_Chars_m407(L_752, L_753, /*hidden argument*/NULL);
		V_34 = L_754;
		uint16_t L_755 = V_34;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_756 = Char_IsLetterOrDigit_m14810(NULL /*static, unused*/, L_755, /*hidden argument*/NULL);
		if (L_756)
		{
			goto IL_123e;
		}
	}
	{
		uint16_t L_757 = V_34;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_758 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_757, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_758) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_1258;
		}
	}

IL_123e:
	{
		int32_t L_759 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_759+(int32_t)1));
		int32_t L_760 = V_0;
		if (!L_760)
		{
			goto IL_124e;
		}
	}
	{
		goto IL_3e1b;
	}

IL_124e:
	{
		int32_t L_761 = ___pc;
		___pc = ((int32_t)((int32_t)L_761+(int32_t)1));
		goto IL_0002;
	}

IL_1258:
	{
		int32_t L_762 = V_0;
		if (L_762)
		{
			goto IL_1260;
		}
	}
	{
		return 0;
	}

IL_1260:
	{
		int32_t L_763 = ___pc;
		___pc = ((int32_t)((int32_t)L_763+(int32_t)1));
		goto IL_0002;
	}

IL_126a:
	{
		int32_t L_764 = ___strpos;
		int32_t L_765 = (__this->___string_end_4);
		if ((((int32_t)L_764) >= ((int32_t)L_765)))
		{
			goto IL_12aa;
		}
	}
	{
		String_t* L_766 = (__this->___str_2);
		int32_t L_767 = ___strpos;
		NullCheck(L_766);
		uint16_t L_768 = String_get_Chars_m407(L_766, L_767, /*hidden argument*/NULL);
		V_35 = L_768;
		uint16_t L_769 = V_35;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_770 = Char_IsDigit_m18100(NULL /*static, unused*/, L_769, /*hidden argument*/NULL);
		if (!L_770)
		{
			goto IL_12aa;
		}
	}
	{
		int32_t L_771 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_771+(int32_t)1));
		int32_t L_772 = V_0;
		if (!L_772)
		{
			goto IL_12a0;
		}
	}
	{
		goto IL_3e1b;
	}

IL_12a0:
	{
		int32_t L_773 = ___pc;
		___pc = ((int32_t)((int32_t)L_773+(int32_t)1));
		goto IL_0002;
	}

IL_12aa:
	{
		int32_t L_774 = V_0;
		if (L_774)
		{
			goto IL_12b2;
		}
	}
	{
		return 0;
	}

IL_12b2:
	{
		int32_t L_775 = ___pc;
		___pc = ((int32_t)((int32_t)L_775+(int32_t)1));
		goto IL_0002;
	}

IL_12bc:
	{
		int32_t L_776 = ___strpos;
		int32_t L_777 = (__this->___string_end_4);
		if ((((int32_t)L_776) >= ((int32_t)L_777)))
		{
			goto IL_12fc;
		}
	}
	{
		String_t* L_778 = (__this->___str_2);
		int32_t L_779 = ___strpos;
		NullCheck(L_778);
		uint16_t L_780 = String_get_Chars_m407(L_778, L_779, /*hidden argument*/NULL);
		V_36 = L_780;
		uint16_t L_781 = V_36;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_782 = Char_IsWhiteSpace_m4129(NULL /*static, unused*/, L_781, /*hidden argument*/NULL);
		if (!L_782)
		{
			goto IL_12fc;
		}
	}
	{
		int32_t L_783 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_783+(int32_t)1));
		int32_t L_784 = V_0;
		if (!L_784)
		{
			goto IL_12f2;
		}
	}
	{
		goto IL_3e1b;
	}

IL_12f2:
	{
		int32_t L_785 = ___pc;
		___pc = ((int32_t)((int32_t)L_785+(int32_t)1));
		goto IL_0002;
	}

IL_12fc:
	{
		int32_t L_786 = V_0;
		if (L_786)
		{
			goto IL_1304;
		}
	}
	{
		return 0;
	}

IL_1304:
	{
		int32_t L_787 = ___pc;
		___pc = ((int32_t)((int32_t)L_787+(int32_t)1));
		goto IL_0002;
	}

IL_130e:
	{
		int32_t L_788 = ___strpos;
		int32_t L_789 = (__this->___string_end_4);
		if ((((int32_t)L_788) >= ((int32_t)L_789)))
		{
			goto IL_1381;
		}
	}
	{
		String_t* L_790 = (__this->___str_2);
		int32_t L_791 = ___strpos;
		NullCheck(L_790);
		uint16_t L_792 = String_get_Chars_m407(L_790, L_791, /*hidden argument*/NULL);
		V_37 = L_792;
		uint16_t L_793 = V_37;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_793)))
		{
			goto IL_133a;
		}
	}
	{
		uint16_t L_794 = V_37;
		if ((((int32_t)L_794) <= ((int32_t)((int32_t)122))))
		{
			goto IL_1367;
		}
	}

IL_133a:
	{
		uint16_t L_795 = V_37;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_795)))
		{
			goto IL_134c;
		}
	}
	{
		uint16_t L_796 = V_37;
		if ((((int32_t)L_796) <= ((int32_t)((int32_t)90))))
		{
			goto IL_1367;
		}
	}

IL_134c:
	{
		uint16_t L_797 = V_37;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_797)))
		{
			goto IL_135e;
		}
	}
	{
		uint16_t L_798 = V_37;
		if ((((int32_t)L_798) <= ((int32_t)((int32_t)57))))
		{
			goto IL_1367;
		}
	}

IL_135e:
	{
		uint16_t L_799 = V_37;
		if ((!(((uint32_t)L_799) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_1381;
		}
	}

IL_1367:
	{
		int32_t L_800 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_800+(int32_t)1));
		int32_t L_801 = V_0;
		if (!L_801)
		{
			goto IL_1377;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1377:
	{
		int32_t L_802 = ___pc;
		___pc = ((int32_t)((int32_t)L_802+(int32_t)1));
		goto IL_0002;
	}

IL_1381:
	{
		int32_t L_803 = V_0;
		if (L_803)
		{
			goto IL_1389;
		}
	}
	{
		return 0;
	}

IL_1389:
	{
		int32_t L_804 = ___pc;
		___pc = ((int32_t)((int32_t)L_804+(int32_t)1));
		goto IL_0002;
	}

IL_1393:
	{
		int32_t L_805 = ___strpos;
		int32_t L_806 = (__this->___string_end_4);
		if ((((int32_t)L_805) >= ((int32_t)L_806)))
		{
			goto IL_13fd;
		}
	}
	{
		String_t* L_807 = (__this->___str_2);
		int32_t L_808 = ___strpos;
		NullCheck(L_807);
		uint16_t L_809 = String_get_Chars_m407(L_807, L_808, /*hidden argument*/NULL);
		V_38 = L_809;
		uint16_t L_810 = V_38;
		if ((((int32_t)L_810) == ((int32_t)((int32_t)32))))
		{
			goto IL_13e3;
		}
	}
	{
		uint16_t L_811 = V_38;
		if ((((int32_t)L_811) == ((int32_t)((int32_t)9))))
		{
			goto IL_13e3;
		}
	}
	{
		uint16_t L_812 = V_38;
		if ((((int32_t)L_812) == ((int32_t)((int32_t)10))))
		{
			goto IL_13e3;
		}
	}
	{
		uint16_t L_813 = V_38;
		if ((((int32_t)L_813) == ((int32_t)((int32_t)13))))
		{
			goto IL_13e3;
		}
	}
	{
		uint16_t L_814 = V_38;
		if ((((int32_t)L_814) == ((int32_t)((int32_t)12))))
		{
			goto IL_13e3;
		}
	}
	{
		uint16_t L_815 = V_38;
		if ((!(((uint32_t)L_815) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_13fd;
		}
	}

IL_13e3:
	{
		int32_t L_816 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_816+(int32_t)1));
		int32_t L_817 = V_0;
		if (!L_817)
		{
			goto IL_13f3;
		}
	}
	{
		goto IL_3e1b;
	}

IL_13f3:
	{
		int32_t L_818 = ___pc;
		___pc = ((int32_t)((int32_t)L_818+(int32_t)1));
		goto IL_0002;
	}

IL_13fd:
	{
		int32_t L_819 = V_0;
		if (L_819)
		{
			goto IL_1405;
		}
	}
	{
		return 0;
	}

IL_1405:
	{
		int32_t L_820 = ___pc;
		___pc = ((int32_t)((int32_t)L_820+(int32_t)1));
		goto IL_0002;
	}

IL_140f:
	{
		int32_t L_821 = ___strpos;
		int32_t L_822 = (__this->___string_end_4);
		if ((((int32_t)L_821) >= ((int32_t)L_822)))
		{
			goto IL_1473;
		}
	}
	{
		String_t* L_823 = (__this->___str_2);
		int32_t L_824 = ___strpos;
		NullCheck(L_823);
		uint16_t L_825 = String_get_Chars_m407(L_823, L_824, /*hidden argument*/NULL);
		V_39 = L_825;
		uint16_t L_826 = V_39;
		if ((((int32_t)((int32_t)65279)) > ((int32_t)L_826)))
		{
			goto IL_1441;
		}
	}
	{
		uint16_t L_827 = V_39;
		if ((((int32_t)L_827) <= ((int32_t)((int32_t)65279))))
		{
			goto IL_1459;
		}
	}

IL_1441:
	{
		uint16_t L_828 = V_39;
		if ((((int32_t)((int32_t)65520)) > ((int32_t)L_828)))
		{
			goto IL_1473;
		}
	}
	{
		uint16_t L_829 = V_39;
		if ((((int32_t)L_829) > ((int32_t)((int32_t)65533))))
		{
			goto IL_1473;
		}
	}

IL_1459:
	{
		int32_t L_830 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_830+(int32_t)1));
		int32_t L_831 = V_0;
		if (!L_831)
		{
			goto IL_1469;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1469:
	{
		int32_t L_832 = ___pc;
		___pc = ((int32_t)((int32_t)L_832+(int32_t)1));
		goto IL_0002;
	}

IL_1473:
	{
		int32_t L_833 = V_0;
		if (L_833)
		{
			goto IL_147b;
		}
	}
	{
		return 0;
	}

IL_147b:
	{
		int32_t L_834 = ___pc;
		___pc = ((int32_t)((int32_t)L_834+(int32_t)1));
		goto IL_0002;
	}

IL_1485:
	{
		int32_t L_835 = ___strpos;
		int32_t L_836 = (__this->___string_end_4);
		if ((((int32_t)L_835) >= ((int32_t)L_836)))
		{
			goto IL_14cf;
		}
	}
	{
		String_t* L_837 = (__this->___str_2);
		int32_t L_838 = ___strpos;
		NullCheck(L_837);
		uint16_t L_839 = String_get_Chars_m407(L_837, L_838, /*hidden argument*/NULL);
		V_40 = L_839;
		uint16_t L_840 = V_40;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_841 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_840, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_842 = (__this->___program_1);
		int32_t L_843 = ___pc;
		NullCheck(L_842);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_842, ((int32_t)((int32_t)L_843+(int32_t)1)));
		int32_t L_844 = ((int32_t)((int32_t)L_843+(int32_t)1));
		if ((!(((uint32_t)L_841) == ((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_842, L_844))))))
		{
			goto IL_14cf;
		}
	}
	{
		int32_t L_845 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_845+(int32_t)1));
		int32_t L_846 = V_0;
		if (!L_846)
		{
			goto IL_14c5;
		}
	}
	{
		goto IL_3e1b;
	}

IL_14c5:
	{
		int32_t L_847 = ___pc;
		___pc = ((int32_t)((int32_t)L_847+(int32_t)2));
		goto IL_0002;
	}

IL_14cf:
	{
		int32_t L_848 = V_0;
		if (L_848)
		{
			goto IL_14d7;
		}
	}
	{
		return 0;
	}

IL_14d7:
	{
		int32_t L_849 = ___pc;
		___pc = ((int32_t)((int32_t)L_849+(int32_t)2));
		goto IL_0002;
	}

IL_14e1:
	{
		int32_t L_850 = ___strpos;
		int32_t L_851 = (__this->___string_end_4);
		if ((((int32_t)L_850) >= ((int32_t)L_851)))
		{
			goto IL_152b;
		}
	}
	{
		String_t* L_852 = (__this->___str_2);
		int32_t L_853 = ___strpos;
		NullCheck(L_852);
		uint16_t L_854 = String_get_Chars_m407(L_852, L_853, /*hidden argument*/NULL);
		V_41 = L_854;
		ByteU5BU5D_t66* L_855 = (__this->___program_1);
		int32_t L_856 = ___pc;
		NullCheck(L_855);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_855, ((int32_t)((int32_t)L_856+(int32_t)1)));
		int32_t L_857 = ((int32_t)((int32_t)L_856+(int32_t)1));
		uint16_t L_858 = V_41;
		bool L_859 = CategoryUtils_IsCategory_m17463(NULL /*static, unused*/, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_855, L_857)), L_858, /*hidden argument*/NULL);
		if (!L_859)
		{
			goto IL_152b;
		}
	}
	{
		int32_t L_860 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_860+(int32_t)1));
		int32_t L_861 = V_0;
		if (!L_861)
		{
			goto IL_1521;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1521:
	{
		int32_t L_862 = ___pc;
		___pc = ((int32_t)((int32_t)L_862+(int32_t)2));
		goto IL_0002;
	}

IL_152b:
	{
		int32_t L_863 = V_0;
		if (L_863)
		{
			goto IL_1533;
		}
	}
	{
		return 0;
	}

IL_1533:
	{
		int32_t L_864 = ___pc;
		___pc = ((int32_t)((int32_t)L_864+(int32_t)2));
		goto IL_0002;
	}

IL_153d:
	{
		int32_t L_865 = ___strpos;
		int32_t L_866 = (__this->___string_end_4);
		if ((((int32_t)L_865) >= ((int32_t)L_866)))
		{
			goto IL_15ca;
		}
	}
	{
		String_t* L_867 = (__this->___str_2);
		int32_t L_868 = ___strpos;
		NullCheck(L_867);
		uint16_t L_869 = String_get_Chars_m407(L_867, L_868, /*hidden argument*/NULL);
		V_42 = L_869;
		uint16_t L_870 = V_42;
		V_43 = L_870;
		int32_t L_871 = V_43;
		ByteU5BU5D_t66* L_872 = (__this->___program_1);
		int32_t L_873 = ___pc;
		NullCheck(L_872);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_872, ((int32_t)((int32_t)L_873+(int32_t)1)));
		int32_t L_874 = ((int32_t)((int32_t)L_873+(int32_t)1));
		V_43 = ((int32_t)((int32_t)L_871-(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_872, L_874))));
		ByteU5BU5D_t66* L_875 = (__this->___program_1);
		int32_t L_876 = ___pc;
		NullCheck(L_875);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_875, ((int32_t)((int32_t)L_876+(int32_t)2)));
		int32_t L_877 = ((int32_t)((int32_t)L_876+(int32_t)2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_875, L_877));
		int32_t L_878 = V_43;
		if ((((int32_t)L_878) < ((int32_t)0)))
		{
			goto IL_15ca;
		}
	}
	{
		int32_t L_879 = V_43;
		int32_t L_880 = V_1;
		if ((((int32_t)L_879) >= ((int32_t)((int32_t)((int32_t)L_880<<(int32_t)3)))))
		{
			goto IL_15ca;
		}
	}
	{
		ByteU5BU5D_t66* L_881 = (__this->___program_1);
		int32_t L_882 = ___pc;
		int32_t L_883 = V_43;
		NullCheck(L_881);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_881, ((int32_t)((int32_t)((int32_t)((int32_t)L_882+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_883>>(int32_t)3)))));
		int32_t L_884 = ((int32_t)((int32_t)((int32_t)((int32_t)L_882+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_883>>(int32_t)3))));
		int32_t L_885 = V_43;
		if (!((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_881, L_884))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_885&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_15ca;
		}
	}
	{
		int32_t L_886 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_886+(int32_t)1));
		int32_t L_887 = V_0;
		if (!L_887)
		{
			goto IL_15b5;
		}
	}
	{
		goto IL_3e1b;
	}

IL_15b5:
	{
		int32_t L_888 = ___pc;
		ByteU5BU5D_t66* L_889 = (__this->___program_1);
		int32_t L_890 = ___pc;
		NullCheck(L_889);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_889, ((int32_t)((int32_t)L_890+(int32_t)2)));
		int32_t L_891 = ((int32_t)((int32_t)L_890+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_888+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_889, L_891))))));
		goto IL_0002;
	}

IL_15ca:
	{
		int32_t L_892 = V_0;
		if (L_892)
		{
			goto IL_15d2;
		}
	}
	{
		return 0;
	}

IL_15d2:
	{
		int32_t L_893 = ___pc;
		ByteU5BU5D_t66* L_894 = (__this->___program_1);
		int32_t L_895 = ___pc;
		NullCheck(L_894);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_894, ((int32_t)((int32_t)L_895+(int32_t)2)));
		int32_t L_896 = ((int32_t)((int32_t)L_895+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_893+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_894, L_896))))));
		goto IL_0002;
	}

IL_15e7:
	{
		int32_t L_897 = ___strpos;
		int32_t L_898 = (__this->___string_end_4);
		if ((((int32_t)L_897) >= ((int32_t)L_898)))
		{
			goto IL_169b;
		}
	}
	{
		String_t* L_899 = (__this->___str_2);
		int32_t L_900 = ___strpos;
		NullCheck(L_899);
		uint16_t L_901 = String_get_Chars_m407(L_899, L_900, /*hidden argument*/NULL);
		V_44 = L_901;
		uint16_t L_902 = V_44;
		V_45 = L_902;
		int32_t L_903 = V_45;
		ByteU5BU5D_t66* L_904 = (__this->___program_1);
		int32_t L_905 = ___pc;
		NullCheck(L_904);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_904, ((int32_t)((int32_t)L_905+(int32_t)1)));
		int32_t L_906 = ((int32_t)((int32_t)L_905+(int32_t)1));
		ByteU5BU5D_t66* L_907 = (__this->___program_1);
		int32_t L_908 = ___pc;
		NullCheck(L_907);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_907, ((int32_t)((int32_t)L_908+(int32_t)2)));
		int32_t L_909 = ((int32_t)((int32_t)L_908+(int32_t)2));
		V_45 = ((int32_t)((int32_t)L_903-(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_904, L_906))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_907, L_909))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_910 = (__this->___program_1);
		int32_t L_911 = ___pc;
		NullCheck(L_910);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_910, ((int32_t)((int32_t)L_911+(int32_t)3)));
		int32_t L_912 = ((int32_t)((int32_t)L_911+(int32_t)3));
		ByteU5BU5D_t66* L_913 = (__this->___program_1);
		int32_t L_914 = ___pc;
		NullCheck(L_913);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_913, ((int32_t)((int32_t)L_914+(int32_t)4)));
		int32_t L_915 = ((int32_t)((int32_t)L_914+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_910, L_912))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_913, L_915))<<(int32_t)8))));
		int32_t L_916 = V_45;
		if ((((int32_t)L_916) < ((int32_t)0)))
		{
			goto IL_169b;
		}
	}
	{
		int32_t L_917 = V_45;
		int32_t L_918 = V_1;
		if ((((int32_t)L_917) >= ((int32_t)((int32_t)((int32_t)L_918<<(int32_t)3)))))
		{
			goto IL_169b;
		}
	}
	{
		ByteU5BU5D_t66* L_919 = (__this->___program_1);
		int32_t L_920 = ___pc;
		int32_t L_921 = V_45;
		NullCheck(L_919);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_919, ((int32_t)((int32_t)((int32_t)((int32_t)L_920+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_921>>(int32_t)3)))));
		int32_t L_922 = ((int32_t)((int32_t)((int32_t)((int32_t)L_920+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_921>>(int32_t)3))));
		int32_t L_923 = V_45;
		if (!((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_919, L_922))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_923&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_169b;
		}
	}
	{
		int32_t L_924 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_924+(int32_t)1));
		int32_t L_925 = V_0;
		if (!L_925)
		{
			goto IL_1679;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1679:
	{
		int32_t L_926 = ___pc;
		ByteU5BU5D_t66* L_927 = (__this->___program_1);
		int32_t L_928 = ___pc;
		NullCheck(L_927);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_927, ((int32_t)((int32_t)L_928+(int32_t)3)));
		int32_t L_929 = ((int32_t)((int32_t)L_928+(int32_t)3));
		ByteU5BU5D_t66* L_930 = (__this->___program_1);
		int32_t L_931 = ___pc;
		NullCheck(L_930);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_930, ((int32_t)((int32_t)L_931+(int32_t)4)));
		int32_t L_932 = ((int32_t)((int32_t)L_931+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_926+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_927, L_929))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_930, L_932))<<(int32_t)8))))))));
		goto IL_0002;
	}

IL_169b:
	{
		int32_t L_933 = V_0;
		if (L_933)
		{
			goto IL_16a3;
		}
	}
	{
		return 0;
	}

IL_16a3:
	{
		int32_t L_934 = ___pc;
		ByteU5BU5D_t66* L_935 = (__this->___program_1);
		int32_t L_936 = ___pc;
		NullCheck(L_935);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_935, ((int32_t)((int32_t)L_936+(int32_t)3)));
		int32_t L_937 = ((int32_t)((int32_t)L_936+(int32_t)3));
		ByteU5BU5D_t66* L_938 = (__this->___program_1);
		int32_t L_939 = ___pc;
		NullCheck(L_938);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_938, ((int32_t)((int32_t)L_939+(int32_t)4)));
		int32_t L_940 = ((int32_t)((int32_t)L_939+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_934+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_935, L_937))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_938, L_940))<<(int32_t)8))))))));
		goto IL_0002;
	}

IL_16c5:
	{
		int32_t L_941 = ___strpos;
		int32_t L_942 = (__this->___string_end_4);
		if ((((int32_t)L_941) >= ((int32_t)L_942)))
		{
			goto IL_170f;
		}
	}
	{
		String_t* L_943 = (__this->___str_2);
		int32_t L_944 = ___strpos;
		NullCheck(L_943);
		uint16_t L_945 = String_get_Chars_m407(L_943, L_944, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_946 = Char_ToLower_m6225(NULL /*static, unused*/, L_945, /*hidden argument*/NULL);
		V_46 = L_946;
		uint16_t L_947 = V_46;
		ByteU5BU5D_t66* L_948 = (__this->___program_1);
		int32_t L_949 = ___pc;
		NullCheck(L_948);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_948, ((int32_t)((int32_t)L_949+(int32_t)1)));
		int32_t L_950 = ((int32_t)((int32_t)L_949+(int32_t)1));
		if ((!(((uint32_t)L_947) == ((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_948, L_950))))))
		{
			goto IL_170f;
		}
	}
	{
		int32_t L_951 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_951+(int32_t)1));
		int32_t L_952 = V_0;
		if (!L_952)
		{
			goto IL_1705;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1705:
	{
		int32_t L_953 = ___pc;
		___pc = ((int32_t)((int32_t)L_953+(int32_t)2));
		goto IL_0002;
	}

IL_170f:
	{
		int32_t L_954 = V_0;
		if (L_954)
		{
			goto IL_1717;
		}
	}
	{
		return 0;
	}

IL_1717:
	{
		int32_t L_955 = ___pc;
		___pc = ((int32_t)((int32_t)L_955+(int32_t)2));
		goto IL_0002;
	}

IL_1721:
	{
		int32_t L_956 = ___strpos;
		int32_t L_957 = (__this->___string_end_4);
		if ((((int32_t)L_956) >= ((int32_t)L_957)))
		{
			goto IL_177c;
		}
	}
	{
		String_t* L_958 = (__this->___str_2);
		int32_t L_959 = ___strpos;
		NullCheck(L_958);
		uint16_t L_960 = String_get_Chars_m407(L_958, L_959, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_961 = Char_ToLower_m6225(NULL /*static, unused*/, L_960, /*hidden argument*/NULL);
		V_47 = L_961;
		uint16_t L_962 = V_47;
		ByteU5BU5D_t66* L_963 = (__this->___program_1);
		int32_t L_964 = ___pc;
		NullCheck(L_963);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_963, ((int32_t)((int32_t)L_964+(int32_t)1)));
		int32_t L_965 = ((int32_t)((int32_t)L_964+(int32_t)1));
		if ((((int32_t)L_962) < ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_963, L_965)))))
		{
			goto IL_177c;
		}
	}
	{
		uint16_t L_966 = V_47;
		ByteU5BU5D_t66* L_967 = (__this->___program_1);
		int32_t L_968 = ___pc;
		NullCheck(L_967);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_967, ((int32_t)((int32_t)L_968+(int32_t)2)));
		int32_t L_969 = ((int32_t)((int32_t)L_968+(int32_t)2));
		if ((((int32_t)L_966) > ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_967, L_969)))))
		{
			goto IL_177c;
		}
	}
	{
		int32_t L_970 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_970+(int32_t)1));
		int32_t L_971 = V_0;
		if (!L_971)
		{
			goto IL_1772;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1772:
	{
		int32_t L_972 = ___pc;
		___pc = ((int32_t)((int32_t)L_972+(int32_t)3));
		goto IL_0002;
	}

IL_177c:
	{
		int32_t L_973 = V_0;
		if (L_973)
		{
			goto IL_1784;
		}
	}
	{
		return 0;
	}

IL_1784:
	{
		int32_t L_974 = ___pc;
		___pc = ((int32_t)((int32_t)L_974+(int32_t)3));
		goto IL_0002;
	}

IL_178e:
	{
		int32_t L_975 = ___strpos;
		int32_t L_976 = (__this->___string_end_4);
		if ((((int32_t)L_975) >= ((int32_t)L_976)))
		{
			goto IL_1803;
		}
	}
	{
		String_t* L_977 = (__this->___str_2);
		int32_t L_978 = ___strpos;
		NullCheck(L_977);
		uint16_t L_979 = String_get_Chars_m407(L_977, L_978, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_980 = Char_ToLower_m6225(NULL /*static, unused*/, L_979, /*hidden argument*/NULL);
		V_48 = L_980;
		uint16_t L_981 = V_48;
		ByteU5BU5D_t66* L_982 = (__this->___program_1);
		int32_t L_983 = ___pc;
		NullCheck(L_982);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_982, ((int32_t)((int32_t)L_983+(int32_t)1)));
		int32_t L_984 = ((int32_t)((int32_t)L_983+(int32_t)1));
		ByteU5BU5D_t66* L_985 = (__this->___program_1);
		int32_t L_986 = ___pc;
		NullCheck(L_985);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_985, ((int32_t)((int32_t)L_986+(int32_t)2)));
		int32_t L_987 = ((int32_t)((int32_t)L_986+(int32_t)2));
		if ((((int32_t)L_981) < ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_982, L_984))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_985, L_987))<<(int32_t)8)))))))
		{
			goto IL_1803;
		}
	}
	{
		uint16_t L_988 = V_48;
		ByteU5BU5D_t66* L_989 = (__this->___program_1);
		int32_t L_990 = ___pc;
		NullCheck(L_989);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_989, ((int32_t)((int32_t)L_990+(int32_t)3)));
		int32_t L_991 = ((int32_t)((int32_t)L_990+(int32_t)3));
		ByteU5BU5D_t66* L_992 = (__this->___program_1);
		int32_t L_993 = ___pc;
		NullCheck(L_992);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_992, ((int32_t)((int32_t)L_993+(int32_t)4)));
		int32_t L_994 = ((int32_t)((int32_t)L_993+(int32_t)4));
		if ((((int32_t)L_988) > ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_989, L_991))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_992, L_994))<<(int32_t)8)))))))
		{
			goto IL_1803;
		}
	}
	{
		int32_t L_995 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_995+(int32_t)1));
		int32_t L_996 = V_0;
		if (!L_996)
		{
			goto IL_17f9;
		}
	}
	{
		goto IL_3e1b;
	}

IL_17f9:
	{
		int32_t L_997 = ___pc;
		___pc = ((int32_t)((int32_t)L_997+(int32_t)5));
		goto IL_0002;
	}

IL_1803:
	{
		int32_t L_998 = V_0;
		if (L_998)
		{
			goto IL_180b;
		}
	}
	{
		return 0;
	}

IL_180b:
	{
		int32_t L_999 = ___pc;
		___pc = ((int32_t)((int32_t)L_999+(int32_t)5));
		goto IL_0002;
	}

IL_1815:
	{
		int32_t L_1000 = ___strpos;
		int32_t L_1001 = (__this->___string_end_4);
		if ((((int32_t)L_1000) >= ((int32_t)L_1001)))
		{
			goto IL_186c;
		}
	}
	{
		String_t* L_1002 = (__this->___str_2);
		int32_t L_1003 = ___strpos;
		NullCheck(L_1002);
		uint16_t L_1004 = String_get_Chars_m407(L_1002, L_1003, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1005 = Char_ToLower_m6225(NULL /*static, unused*/, L_1004, /*hidden argument*/NULL);
		V_49 = L_1005;
		uint16_t L_1006 = V_49;
		ByteU5BU5D_t66* L_1007 = (__this->___program_1);
		int32_t L_1008 = ___pc;
		NullCheck(L_1007);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1007, ((int32_t)((int32_t)L_1008+(int32_t)1)));
		int32_t L_1009 = ((int32_t)((int32_t)L_1008+(int32_t)1));
		ByteU5BU5D_t66* L_1010 = (__this->___program_1);
		int32_t L_1011 = ___pc;
		NullCheck(L_1010);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1010, ((int32_t)((int32_t)L_1011+(int32_t)2)));
		int32_t L_1012 = ((int32_t)((int32_t)L_1011+(int32_t)2));
		if ((!(((uint32_t)L_1006) == ((uint32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1007, L_1009))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1010, L_1012))<<(int32_t)8))))))))
		{
			goto IL_186c;
		}
	}
	{
		int32_t L_1013 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1013+(int32_t)1));
		int32_t L_1014 = V_0;
		if (!L_1014)
		{
			goto IL_1862;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1862:
	{
		int32_t L_1015 = ___pc;
		___pc = ((int32_t)((int32_t)L_1015+(int32_t)3));
		goto IL_0002;
	}

IL_186c:
	{
		int32_t L_1016 = V_0;
		if (L_1016)
		{
			goto IL_1874;
		}
	}
	{
		return 0;
	}

IL_1874:
	{
		int32_t L_1017 = ___pc;
		___pc = ((int32_t)((int32_t)L_1017+(int32_t)3));
		goto IL_0002;
	}

IL_187e:
	{
		int32_t L_1018 = ___strpos;
		int32_t L_1019 = (__this->___string_end_4);
		if ((((int32_t)L_1018) >= ((int32_t)L_1019)))
		{
			goto IL_1910;
		}
	}
	{
		String_t* L_1020 = (__this->___str_2);
		int32_t L_1021 = ___strpos;
		NullCheck(L_1020);
		uint16_t L_1022 = String_get_Chars_m407(L_1020, L_1021, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1023 = Char_ToLower_m6225(NULL /*static, unused*/, L_1022, /*hidden argument*/NULL);
		V_50 = L_1023;
		uint16_t L_1024 = V_50;
		V_51 = L_1024;
		int32_t L_1025 = V_51;
		ByteU5BU5D_t66* L_1026 = (__this->___program_1);
		int32_t L_1027 = ___pc;
		NullCheck(L_1026);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1026, ((int32_t)((int32_t)L_1027+(int32_t)1)));
		int32_t L_1028 = ((int32_t)((int32_t)L_1027+(int32_t)1));
		V_51 = ((int32_t)((int32_t)L_1025-(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1026, L_1028))));
		ByteU5BU5D_t66* L_1029 = (__this->___program_1);
		int32_t L_1030 = ___pc;
		NullCheck(L_1029);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1029, ((int32_t)((int32_t)L_1030+(int32_t)2)));
		int32_t L_1031 = ((int32_t)((int32_t)L_1030+(int32_t)2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1029, L_1031));
		int32_t L_1032 = V_51;
		if ((((int32_t)L_1032) < ((int32_t)0)))
		{
			goto IL_1910;
		}
	}
	{
		int32_t L_1033 = V_51;
		int32_t L_1034 = V_1;
		if ((((int32_t)L_1033) >= ((int32_t)((int32_t)((int32_t)L_1034<<(int32_t)3)))))
		{
			goto IL_1910;
		}
	}
	{
		ByteU5BU5D_t66* L_1035 = (__this->___program_1);
		int32_t L_1036 = ___pc;
		int32_t L_1037 = V_51;
		NullCheck(L_1035);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1035, ((int32_t)((int32_t)((int32_t)((int32_t)L_1036+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1037>>(int32_t)3)))));
		int32_t L_1038 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1036+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1037>>(int32_t)3))));
		int32_t L_1039 = V_51;
		if (!((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1035, L_1038))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1039&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_1910;
		}
	}
	{
		int32_t L_1040 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1040+(int32_t)1));
		int32_t L_1041 = V_0;
		if (!L_1041)
		{
			goto IL_18fb;
		}
	}
	{
		goto IL_3e1b;
	}

IL_18fb:
	{
		int32_t L_1042 = ___pc;
		ByteU5BU5D_t66* L_1043 = (__this->___program_1);
		int32_t L_1044 = ___pc;
		NullCheck(L_1043);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1043, ((int32_t)((int32_t)L_1044+(int32_t)2)));
		int32_t L_1045 = ((int32_t)((int32_t)L_1044+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_1042+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1043, L_1045))))));
		goto IL_0002;
	}

IL_1910:
	{
		int32_t L_1046 = V_0;
		if (L_1046)
		{
			goto IL_1918;
		}
	}
	{
		return 0;
	}

IL_1918:
	{
		int32_t L_1047 = ___pc;
		ByteU5BU5D_t66* L_1048 = (__this->___program_1);
		int32_t L_1049 = ___pc;
		NullCheck(L_1048);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1048, ((int32_t)((int32_t)L_1049+(int32_t)2)));
		int32_t L_1050 = ((int32_t)((int32_t)L_1049+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_1047+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1048, L_1050))))));
		goto IL_0002;
	}

IL_192d:
	{
		int32_t L_1051 = ___strpos;
		int32_t L_1052 = (__this->___string_end_4);
		if ((((int32_t)L_1051) >= ((int32_t)L_1052)))
		{
			goto IL_19e6;
		}
	}
	{
		String_t* L_1053 = (__this->___str_2);
		int32_t L_1054 = ___strpos;
		NullCheck(L_1053);
		uint16_t L_1055 = String_get_Chars_m407(L_1053, L_1054, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1056 = Char_ToLower_m6225(NULL /*static, unused*/, L_1055, /*hidden argument*/NULL);
		V_52 = L_1056;
		uint16_t L_1057 = V_52;
		V_53 = L_1057;
		int32_t L_1058 = V_53;
		ByteU5BU5D_t66* L_1059 = (__this->___program_1);
		int32_t L_1060 = ___pc;
		NullCheck(L_1059);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1059, ((int32_t)((int32_t)L_1060+(int32_t)1)));
		int32_t L_1061 = ((int32_t)((int32_t)L_1060+(int32_t)1));
		ByteU5BU5D_t66* L_1062 = (__this->___program_1);
		int32_t L_1063 = ___pc;
		NullCheck(L_1062);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1062, ((int32_t)((int32_t)L_1063+(int32_t)2)));
		int32_t L_1064 = ((int32_t)((int32_t)L_1063+(int32_t)2));
		V_53 = ((int32_t)((int32_t)L_1058-(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1059, L_1061))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1062, L_1064))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_1065 = (__this->___program_1);
		int32_t L_1066 = ___pc;
		NullCheck(L_1065);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1065, ((int32_t)((int32_t)L_1066+(int32_t)3)));
		int32_t L_1067 = ((int32_t)((int32_t)L_1066+(int32_t)3));
		ByteU5BU5D_t66* L_1068 = (__this->___program_1);
		int32_t L_1069 = ___pc;
		NullCheck(L_1068);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1068, ((int32_t)((int32_t)L_1069+(int32_t)4)));
		int32_t L_1070 = ((int32_t)((int32_t)L_1069+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1065, L_1067))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1068, L_1070))<<(int32_t)8))));
		int32_t L_1071 = V_53;
		if ((((int32_t)L_1071) < ((int32_t)0)))
		{
			goto IL_19e6;
		}
	}
	{
		int32_t L_1072 = V_53;
		int32_t L_1073 = V_1;
		if ((((int32_t)L_1072) >= ((int32_t)((int32_t)((int32_t)L_1073<<(int32_t)3)))))
		{
			goto IL_19e6;
		}
	}
	{
		ByteU5BU5D_t66* L_1074 = (__this->___program_1);
		int32_t L_1075 = ___pc;
		int32_t L_1076 = V_53;
		NullCheck(L_1074);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1074, ((int32_t)((int32_t)((int32_t)((int32_t)L_1075+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1076>>(int32_t)3)))));
		int32_t L_1077 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1075+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1076>>(int32_t)3))));
		int32_t L_1078 = V_53;
		if (!((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1074, L_1077))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1078&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_19e6;
		}
	}
	{
		int32_t L_1079 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1079+(int32_t)1));
		int32_t L_1080 = V_0;
		if (!L_1080)
		{
			goto IL_19c4;
		}
	}
	{
		goto IL_3e1b;
	}

IL_19c4:
	{
		int32_t L_1081 = ___pc;
		ByteU5BU5D_t66* L_1082 = (__this->___program_1);
		int32_t L_1083 = ___pc;
		NullCheck(L_1082);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1082, ((int32_t)((int32_t)L_1083+(int32_t)3)));
		int32_t L_1084 = ((int32_t)((int32_t)L_1083+(int32_t)3));
		ByteU5BU5D_t66* L_1085 = (__this->___program_1);
		int32_t L_1086 = ___pc;
		NullCheck(L_1085);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1085, ((int32_t)((int32_t)L_1086+(int32_t)4)));
		int32_t L_1087 = ((int32_t)((int32_t)L_1086+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_1081+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1082, L_1084))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1085, L_1087))<<(int32_t)8))))))));
		goto IL_0002;
	}

IL_19e6:
	{
		int32_t L_1088 = V_0;
		if (L_1088)
		{
			goto IL_19ee;
		}
	}
	{
		return 0;
	}

IL_19ee:
	{
		int32_t L_1089 = ___pc;
		ByteU5BU5D_t66* L_1090 = (__this->___program_1);
		int32_t L_1091 = ___pc;
		NullCheck(L_1090);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1090, ((int32_t)((int32_t)L_1091+(int32_t)3)));
		int32_t L_1092 = ((int32_t)((int32_t)L_1091+(int32_t)3));
		ByteU5BU5D_t66* L_1093 = (__this->___program_1);
		int32_t L_1094 = ___pc;
		NullCheck(L_1093);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1093, ((int32_t)((int32_t)L_1094+(int32_t)4)));
		int32_t L_1095 = ((int32_t)((int32_t)L_1094+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_1089+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1090, L_1092))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1093, L_1095))<<(int32_t)8))))))));
		goto IL_0002;
	}

IL_1a10:
	{
		int32_t L_1096 = ___strpos;
		int32_t L_1097 = (__this->___string_end_4);
		if ((((int32_t)L_1096) >= ((int32_t)L_1097)))
		{
			goto IL_1a67;
		}
	}
	{
		String_t* L_1098 = (__this->___str_2);
		int32_t L_1099 = ___strpos;
		NullCheck(L_1098);
		uint16_t L_1100 = String_get_Chars_m407(L_1098, L_1099, /*hidden argument*/NULL);
		V_54 = L_1100;
		uint16_t L_1101 = V_54;
		ByteU5BU5D_t66* L_1102 = (__this->___program_1);
		int32_t L_1103 = ___pc;
		NullCheck(L_1102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1102, ((int32_t)((int32_t)L_1103+(int32_t)1)));
		int32_t L_1104 = ((int32_t)((int32_t)L_1103+(int32_t)1));
		if ((((int32_t)L_1101) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1102, L_1104)))))
		{
			goto IL_1a67;
		}
	}
	{
		int32_t L_1105 = ___pc;
		___pc = ((int32_t)((int32_t)L_1105+(int32_t)2));
		int32_t L_1106 = V_0;
		if (!L_1106)
		{
			goto IL_1a4f;
		}
	}
	{
		int32_t L_1107 = ___pc;
		int32_t L_1108 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1107+(int32_t)1))) == ((uint32_t)L_1108))))
		{
			goto IL_1a62;
		}
	}

IL_1a4f:
	{
		int32_t L_1109 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1109+(int32_t)1));
		int32_t L_1110 = ___pc;
		int32_t L_1111 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1110+(int32_t)1))) == ((uint32_t)L_1111))))
		{
			goto IL_1a62;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1a62:
	{
		goto IL_0002;
	}

IL_1a67:
	{
		return 0;
	}

IL_1a69:
	{
		int32_t L_1112 = ___strpos;
		int32_t L_1113 = (__this->___string_end_4);
		if ((((int32_t)L_1112) >= ((int32_t)L_1113)))
		{
			goto IL_1ad1;
		}
	}
	{
		String_t* L_1114 = (__this->___str_2);
		int32_t L_1115 = ___strpos;
		NullCheck(L_1114);
		uint16_t L_1116 = String_get_Chars_m407(L_1114, L_1115, /*hidden argument*/NULL);
		V_55 = L_1116;
		uint16_t L_1117 = V_55;
		ByteU5BU5D_t66* L_1118 = (__this->___program_1);
		int32_t L_1119 = ___pc;
		NullCheck(L_1118);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1118, ((int32_t)((int32_t)L_1119+(int32_t)1)));
		int32_t L_1120 = ((int32_t)((int32_t)L_1119+(int32_t)1));
		if ((((int32_t)L_1117) < ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1118, L_1120)))))
		{
			goto IL_1aa5;
		}
	}
	{
		uint16_t L_1121 = V_55;
		ByteU5BU5D_t66* L_1122 = (__this->___program_1);
		int32_t L_1123 = ___pc;
		NullCheck(L_1122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1122, ((int32_t)((int32_t)L_1123+(int32_t)2)));
		int32_t L_1124 = ((int32_t)((int32_t)L_1123+(int32_t)2));
		if ((((int32_t)L_1121) <= ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1122, L_1124)))))
		{
			goto IL_1ad1;
		}
	}

IL_1aa5:
	{
		int32_t L_1125 = ___pc;
		___pc = ((int32_t)((int32_t)L_1125+(int32_t)3));
		int32_t L_1126 = V_0;
		if (!L_1126)
		{
			goto IL_1ab9;
		}
	}
	{
		int32_t L_1127 = ___pc;
		int32_t L_1128 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1127+(int32_t)1))) == ((uint32_t)L_1128))))
		{
			goto IL_1acc;
		}
	}

IL_1ab9:
	{
		int32_t L_1129 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1129+(int32_t)1));
		int32_t L_1130 = ___pc;
		int32_t L_1131 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1130+(int32_t)1))) == ((uint32_t)L_1131))))
		{
			goto IL_1acc;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1acc:
	{
		goto IL_0002;
	}

IL_1ad1:
	{
		return 0;
	}

IL_1ad3:
	{
		int32_t L_1132 = ___strpos;
		int32_t L_1133 = (__this->___string_end_4);
		if ((((int32_t)L_1132) >= ((int32_t)L_1133)))
		{
			goto IL_1b55;
		}
	}
	{
		String_t* L_1134 = (__this->___str_2);
		int32_t L_1135 = ___strpos;
		NullCheck(L_1134);
		uint16_t L_1136 = String_get_Chars_m407(L_1134, L_1135, /*hidden argument*/NULL);
		V_56 = L_1136;
		uint16_t L_1137 = V_56;
		ByteU5BU5D_t66* L_1138 = (__this->___program_1);
		int32_t L_1139 = ___pc;
		NullCheck(L_1138);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1138, ((int32_t)((int32_t)L_1139+(int32_t)1)));
		int32_t L_1140 = ((int32_t)((int32_t)L_1139+(int32_t)1));
		ByteU5BU5D_t66* L_1141 = (__this->___program_1);
		int32_t L_1142 = ___pc;
		NullCheck(L_1141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1141, ((int32_t)((int32_t)L_1142+(int32_t)2)));
		int32_t L_1143 = ((int32_t)((int32_t)L_1142+(int32_t)2));
		if ((((int32_t)L_1137) < ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1138, L_1140))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1141, L_1143))<<(int32_t)8)))))))
		{
			goto IL_1b29;
		}
	}
	{
		uint16_t L_1144 = V_56;
		ByteU5BU5D_t66* L_1145 = (__this->___program_1);
		int32_t L_1146 = ___pc;
		NullCheck(L_1145);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1145, ((int32_t)((int32_t)L_1146+(int32_t)3)));
		int32_t L_1147 = ((int32_t)((int32_t)L_1146+(int32_t)3));
		ByteU5BU5D_t66* L_1148 = (__this->___program_1);
		int32_t L_1149 = ___pc;
		NullCheck(L_1148);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1148, ((int32_t)((int32_t)L_1149+(int32_t)4)));
		int32_t L_1150 = ((int32_t)((int32_t)L_1149+(int32_t)4));
		if ((((int32_t)L_1144) <= ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1145, L_1147))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1148, L_1150))<<(int32_t)8)))))))
		{
			goto IL_1b55;
		}
	}

IL_1b29:
	{
		int32_t L_1151 = ___pc;
		___pc = ((int32_t)((int32_t)L_1151+(int32_t)5));
		int32_t L_1152 = V_0;
		if (!L_1152)
		{
			goto IL_1b3d;
		}
	}
	{
		int32_t L_1153 = ___pc;
		int32_t L_1154 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1153+(int32_t)1))) == ((uint32_t)L_1154))))
		{
			goto IL_1b50;
		}
	}

IL_1b3d:
	{
		int32_t L_1155 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1155+(int32_t)1));
		int32_t L_1156 = ___pc;
		int32_t L_1157 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1156+(int32_t)1))) == ((uint32_t)L_1157))))
		{
			goto IL_1b50;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1b50:
	{
		goto IL_0002;
	}

IL_1b55:
	{
		return 0;
	}

IL_1b57:
	{
		int32_t L_1158 = ___strpos;
		int32_t L_1159 = (__this->___string_end_4);
		if ((((int32_t)L_1158) >= ((int32_t)L_1159)))
		{
			goto IL_1bbb;
		}
	}
	{
		String_t* L_1160 = (__this->___str_2);
		int32_t L_1161 = ___strpos;
		NullCheck(L_1160);
		uint16_t L_1162 = String_get_Chars_m407(L_1160, L_1161, /*hidden argument*/NULL);
		V_57 = L_1162;
		uint16_t L_1163 = V_57;
		ByteU5BU5D_t66* L_1164 = (__this->___program_1);
		int32_t L_1165 = ___pc;
		NullCheck(L_1164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1164, ((int32_t)((int32_t)L_1165+(int32_t)1)));
		int32_t L_1166 = ((int32_t)((int32_t)L_1165+(int32_t)1));
		ByteU5BU5D_t66* L_1167 = (__this->___program_1);
		int32_t L_1168 = ___pc;
		NullCheck(L_1167);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1167, ((int32_t)((int32_t)L_1168+(int32_t)2)));
		int32_t L_1169 = ((int32_t)((int32_t)L_1168+(int32_t)2));
		if ((((int32_t)L_1163) == ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1164, L_1166))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1167, L_1169))<<(int32_t)8)))))))
		{
			goto IL_1bbb;
		}
	}
	{
		int32_t L_1170 = ___pc;
		___pc = ((int32_t)((int32_t)L_1170+(int32_t)3));
		int32_t L_1171 = V_0;
		if (!L_1171)
		{
			goto IL_1ba3;
		}
	}
	{
		int32_t L_1172 = ___pc;
		int32_t L_1173 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1172+(int32_t)1))) == ((uint32_t)L_1173))))
		{
			goto IL_1bb6;
		}
	}

IL_1ba3:
	{
		int32_t L_1174 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1174+(int32_t)1));
		int32_t L_1175 = ___pc;
		int32_t L_1176 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1175+(int32_t)1))) == ((uint32_t)L_1176))))
		{
			goto IL_1bb6;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1bb6:
	{
		goto IL_0002;
	}

IL_1bbb:
	{
		return 0;
	}

IL_1bbd:
	{
		int32_t L_1177 = ___strpos;
		int32_t L_1178 = (__this->___string_end_4);
		if ((((int32_t)L_1177) >= ((int32_t)L_1178)))
		{
			goto IL_1c0c;
		}
	}
	{
		String_t* L_1179 = (__this->___str_2);
		int32_t L_1180 = ___strpos;
		NullCheck(L_1179);
		uint16_t L_1181 = String_get_Chars_m407(L_1179, L_1180, /*hidden argument*/NULL);
		V_58 = L_1181;
		uint16_t L_1182 = V_58;
		if ((!(((uint32_t)L_1182) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_1c0c;
		}
	}
	{
		int32_t L_1183 = ___pc;
		___pc = ((int32_t)((int32_t)L_1183+(int32_t)1));
		int32_t L_1184 = V_0;
		if (!L_1184)
		{
			goto IL_1bf4;
		}
	}
	{
		int32_t L_1185 = ___pc;
		int32_t L_1186 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1185+(int32_t)1))) == ((uint32_t)L_1186))))
		{
			goto IL_1c07;
		}
	}

IL_1bf4:
	{
		int32_t L_1187 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1187+(int32_t)1));
		int32_t L_1188 = ___pc;
		int32_t L_1189 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1188+(int32_t)1))) == ((uint32_t)L_1189))))
		{
			goto IL_1c07;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1c07:
	{
		goto IL_0002;
	}

IL_1c0c:
	{
		return 0;
	}

IL_1c0e:
	{
		int32_t L_1190 = ___strpos;
		int32_t L_1191 = (__this->___string_end_4);
		if ((((int32_t)L_1190) >= ((int32_t)L_1191)))
		{
			goto IL_1c28;
		}
	}
	{
		String_t* L_1192 = (__this->___str_2);
		int32_t L_1193 = ___strpos;
		NullCheck(L_1192);
		uint16_t L_1194 = String_get_Chars_m407(L_1192, L_1193, /*hidden argument*/NULL);
		V_59 = L_1194;
	}

IL_1c28:
	{
		return 0;
	}

IL_1c2a:
	{
		int32_t L_1195 = ___strpos;
		int32_t L_1196 = (__this->___string_end_4);
		if ((((int32_t)L_1195) >= ((int32_t)L_1196)))
		{
			goto IL_1c8a;
		}
	}
	{
		String_t* L_1197 = (__this->___str_2);
		int32_t L_1198 = ___strpos;
		NullCheck(L_1197);
		uint16_t L_1199 = String_get_Chars_m407(L_1197, L_1198, /*hidden argument*/NULL);
		V_60 = L_1199;
		uint16_t L_1200 = V_60;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_1201 = Char_IsLetterOrDigit_m14810(NULL /*static, unused*/, L_1200, /*hidden argument*/NULL);
		if (L_1201)
		{
			goto IL_1c8a;
		}
	}
	{
		uint16_t L_1202 = V_60;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_1203 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_1202, /*hidden argument*/NULL);
		if ((((int32_t)L_1203) == ((int32_t)((int32_t)18))))
		{
			goto IL_1c8a;
		}
	}
	{
		int32_t L_1204 = ___pc;
		___pc = ((int32_t)((int32_t)L_1204+(int32_t)1));
		int32_t L_1205 = V_0;
		if (!L_1205)
		{
			goto IL_1c72;
		}
	}
	{
		int32_t L_1206 = ___pc;
		int32_t L_1207 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1206+(int32_t)1))) == ((uint32_t)L_1207))))
		{
			goto IL_1c85;
		}
	}

IL_1c72:
	{
		int32_t L_1208 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1208+(int32_t)1));
		int32_t L_1209 = ___pc;
		int32_t L_1210 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1209+(int32_t)1))) == ((uint32_t)L_1210))))
		{
			goto IL_1c85;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1c85:
	{
		goto IL_0002;
	}

IL_1c8a:
	{
		return 0;
	}

IL_1c8c:
	{
		int32_t L_1211 = ___strpos;
		int32_t L_1212 = (__this->___string_end_4);
		if ((((int32_t)L_1211) >= ((int32_t)L_1212)))
		{
			goto IL_1cde;
		}
	}
	{
		String_t* L_1213 = (__this->___str_2);
		int32_t L_1214 = ___strpos;
		NullCheck(L_1213);
		uint16_t L_1215 = String_get_Chars_m407(L_1213, L_1214, /*hidden argument*/NULL);
		V_61 = L_1215;
		uint16_t L_1216 = V_61;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_1217 = Char_IsDigit_m18100(NULL /*static, unused*/, L_1216, /*hidden argument*/NULL);
		if (L_1217)
		{
			goto IL_1cde;
		}
	}
	{
		int32_t L_1218 = ___pc;
		___pc = ((int32_t)((int32_t)L_1218+(int32_t)1));
		int32_t L_1219 = V_0;
		if (!L_1219)
		{
			goto IL_1cc6;
		}
	}
	{
		int32_t L_1220 = ___pc;
		int32_t L_1221 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1220+(int32_t)1))) == ((uint32_t)L_1221))))
		{
			goto IL_1cd9;
		}
	}

IL_1cc6:
	{
		int32_t L_1222 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1222+(int32_t)1));
		int32_t L_1223 = ___pc;
		int32_t L_1224 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1223+(int32_t)1))) == ((uint32_t)L_1224))))
		{
			goto IL_1cd9;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1cd9:
	{
		goto IL_0002;
	}

IL_1cde:
	{
		return 0;
	}

IL_1ce0:
	{
		int32_t L_1225 = ___strpos;
		int32_t L_1226 = (__this->___string_end_4);
		if ((((int32_t)L_1225) >= ((int32_t)L_1226)))
		{
			goto IL_1d32;
		}
	}
	{
		String_t* L_1227 = (__this->___str_2);
		int32_t L_1228 = ___strpos;
		NullCheck(L_1227);
		uint16_t L_1229 = String_get_Chars_m407(L_1227, L_1228, /*hidden argument*/NULL);
		V_62 = L_1229;
		uint16_t L_1230 = V_62;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_1231 = Char_IsWhiteSpace_m4129(NULL /*static, unused*/, L_1230, /*hidden argument*/NULL);
		if (L_1231)
		{
			goto IL_1d32;
		}
	}
	{
		int32_t L_1232 = ___pc;
		___pc = ((int32_t)((int32_t)L_1232+(int32_t)1));
		int32_t L_1233 = V_0;
		if (!L_1233)
		{
			goto IL_1d1a;
		}
	}
	{
		int32_t L_1234 = ___pc;
		int32_t L_1235 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1234+(int32_t)1))) == ((uint32_t)L_1235))))
		{
			goto IL_1d2d;
		}
	}

IL_1d1a:
	{
		int32_t L_1236 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1236+(int32_t)1));
		int32_t L_1237 = ___pc;
		int32_t L_1238 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1237+(int32_t)1))) == ((uint32_t)L_1238))))
		{
			goto IL_1d2d;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1d2d:
	{
		goto IL_0002;
	}

IL_1d32:
	{
		return 0;
	}

IL_1d34:
	{
		int32_t L_1239 = ___strpos;
		int32_t L_1240 = (__this->___string_end_4);
		if ((((int32_t)L_1239) >= ((int32_t)L_1240)))
		{
			goto IL_1db9;
		}
	}
	{
		String_t* L_1241 = (__this->___str_2);
		int32_t L_1242 = ___strpos;
		NullCheck(L_1241);
		uint16_t L_1243 = String_get_Chars_m407(L_1241, L_1242, /*hidden argument*/NULL);
		V_63 = L_1243;
		uint16_t L_1244 = V_63;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_1244)))
		{
			goto IL_1d60;
		}
	}
	{
		uint16_t L_1245 = V_63;
		if ((((int32_t)L_1245) <= ((int32_t)((int32_t)122))))
		{
			goto IL_1db9;
		}
	}

IL_1d60:
	{
		uint16_t L_1246 = V_63;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_1246)))
		{
			goto IL_1d72;
		}
	}
	{
		uint16_t L_1247 = V_63;
		if ((((int32_t)L_1247) <= ((int32_t)((int32_t)90))))
		{
			goto IL_1db9;
		}
	}

IL_1d72:
	{
		uint16_t L_1248 = V_63;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_1248)))
		{
			goto IL_1d84;
		}
	}
	{
		uint16_t L_1249 = V_63;
		if ((((int32_t)L_1249) <= ((int32_t)((int32_t)57))))
		{
			goto IL_1db9;
		}
	}

IL_1d84:
	{
		uint16_t L_1250 = V_63;
		if ((((int32_t)L_1250) == ((int32_t)((int32_t)95))))
		{
			goto IL_1db9;
		}
	}
	{
		int32_t L_1251 = ___pc;
		___pc = ((int32_t)((int32_t)L_1251+(int32_t)1));
		int32_t L_1252 = V_0;
		if (!L_1252)
		{
			goto IL_1da1;
		}
	}
	{
		int32_t L_1253 = ___pc;
		int32_t L_1254 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1253+(int32_t)1))) == ((uint32_t)L_1254))))
		{
			goto IL_1db4;
		}
	}

IL_1da1:
	{
		int32_t L_1255 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1255+(int32_t)1));
		int32_t L_1256 = ___pc;
		int32_t L_1257 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1256+(int32_t)1))) == ((uint32_t)L_1257))))
		{
			goto IL_1db4;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1db4:
	{
		goto IL_0002;
	}

IL_1db9:
	{
		return 0;
	}

IL_1dbb:
	{
		int32_t L_1258 = ___strpos;
		int32_t L_1259 = (__this->___string_end_4);
		if ((((int32_t)L_1258) >= ((int32_t)L_1259)))
		{
			goto IL_1e37;
		}
	}
	{
		String_t* L_1260 = (__this->___str_2);
		int32_t L_1261 = ___strpos;
		NullCheck(L_1260);
		uint16_t L_1262 = String_get_Chars_m407(L_1260, L_1261, /*hidden argument*/NULL);
		V_64 = L_1262;
		uint16_t L_1263 = V_64;
		if ((((int32_t)L_1263) == ((int32_t)((int32_t)32))))
		{
			goto IL_1e37;
		}
	}
	{
		uint16_t L_1264 = V_64;
		if ((((int32_t)L_1264) == ((int32_t)((int32_t)9))))
		{
			goto IL_1e37;
		}
	}
	{
		uint16_t L_1265 = V_64;
		if ((((int32_t)L_1265) == ((int32_t)((int32_t)10))))
		{
			goto IL_1e37;
		}
	}
	{
		uint16_t L_1266 = V_64;
		if ((((int32_t)L_1266) == ((int32_t)((int32_t)13))))
		{
			goto IL_1e37;
		}
	}
	{
		uint16_t L_1267 = V_64;
		if ((((int32_t)L_1267) == ((int32_t)((int32_t)12))))
		{
			goto IL_1e37;
		}
	}
	{
		uint16_t L_1268 = V_64;
		if ((((int32_t)L_1268) == ((int32_t)((int32_t)11))))
		{
			goto IL_1e37;
		}
	}
	{
		int32_t L_1269 = ___pc;
		___pc = ((int32_t)((int32_t)L_1269+(int32_t)1));
		int32_t L_1270 = V_0;
		if (!L_1270)
		{
			goto IL_1e1f;
		}
	}
	{
		int32_t L_1271 = ___pc;
		int32_t L_1272 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1271+(int32_t)1))) == ((uint32_t)L_1272))))
		{
			goto IL_1e32;
		}
	}

IL_1e1f:
	{
		int32_t L_1273 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1273+(int32_t)1));
		int32_t L_1274 = ___pc;
		int32_t L_1275 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1274+(int32_t)1))) == ((uint32_t)L_1275))))
		{
			goto IL_1e32;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1e32:
	{
		goto IL_0002;
	}

IL_1e37:
	{
		return 0;
	}

IL_1e39:
	{
		int32_t L_1276 = ___strpos;
		int32_t L_1277 = (__this->___string_end_4);
		if ((((int32_t)L_1276) >= ((int32_t)L_1277)))
		{
			goto IL_1eaf;
		}
	}
	{
		String_t* L_1278 = (__this->___str_2);
		int32_t L_1279 = ___strpos;
		NullCheck(L_1278);
		uint16_t L_1280 = String_get_Chars_m407(L_1278, L_1279, /*hidden argument*/NULL);
		V_65 = L_1280;
		uint16_t L_1281 = V_65;
		if ((((int32_t)((int32_t)65279)) > ((int32_t)L_1281)))
		{
			goto IL_1e6b;
		}
	}
	{
		uint16_t L_1282 = V_65;
		if ((((int32_t)L_1282) <= ((int32_t)((int32_t)65279))))
		{
			goto IL_1eaf;
		}
	}

IL_1e6b:
	{
		uint16_t L_1283 = V_65;
		if ((((int32_t)((int32_t)65520)) > ((int32_t)L_1283)))
		{
			goto IL_1e83;
		}
	}
	{
		uint16_t L_1284 = V_65;
		if ((((int32_t)L_1284) <= ((int32_t)((int32_t)65533))))
		{
			goto IL_1eaf;
		}
	}

IL_1e83:
	{
		int32_t L_1285 = ___pc;
		___pc = ((int32_t)((int32_t)L_1285+(int32_t)1));
		int32_t L_1286 = V_0;
		if (!L_1286)
		{
			goto IL_1e97;
		}
	}
	{
		int32_t L_1287 = ___pc;
		int32_t L_1288 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1287+(int32_t)1))) == ((uint32_t)L_1288))))
		{
			goto IL_1eaa;
		}
	}

IL_1e97:
	{
		int32_t L_1289 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1289+(int32_t)1));
		int32_t L_1290 = ___pc;
		int32_t L_1291 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1290+(int32_t)1))) == ((uint32_t)L_1291))))
		{
			goto IL_1eaa;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1eaa:
	{
		goto IL_0002;
	}

IL_1eaf:
	{
		return 0;
	}

IL_1eb1:
	{
		int32_t L_1292 = ___strpos;
		int32_t L_1293 = (__this->___string_end_4);
		if ((((int32_t)L_1292) >= ((int32_t)L_1293)))
		{
			goto IL_1f0d;
		}
	}
	{
		String_t* L_1294 = (__this->___str_2);
		int32_t L_1295 = ___strpos;
		NullCheck(L_1294);
		uint16_t L_1296 = String_get_Chars_m407(L_1294, L_1295, /*hidden argument*/NULL);
		V_66 = L_1296;
		uint16_t L_1297 = V_66;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_1298 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_1297, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_1299 = (__this->___program_1);
		int32_t L_1300 = ___pc;
		NullCheck(L_1299);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1299, ((int32_t)((int32_t)L_1300+(int32_t)1)));
		int32_t L_1301 = ((int32_t)((int32_t)L_1300+(int32_t)1));
		if ((((int32_t)L_1298) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1299, L_1301)))))
		{
			goto IL_1f0d;
		}
	}
	{
		int32_t L_1302 = ___pc;
		___pc = ((int32_t)((int32_t)L_1302+(int32_t)2));
		int32_t L_1303 = V_0;
		if (!L_1303)
		{
			goto IL_1ef5;
		}
	}
	{
		int32_t L_1304 = ___pc;
		int32_t L_1305 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1304+(int32_t)1))) == ((uint32_t)L_1305))))
		{
			goto IL_1f08;
		}
	}

IL_1ef5:
	{
		int32_t L_1306 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1306+(int32_t)1));
		int32_t L_1307 = ___pc;
		int32_t L_1308 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1307+(int32_t)1))) == ((uint32_t)L_1308))))
		{
			goto IL_1f08;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1f08:
	{
		goto IL_0002;
	}

IL_1f0d:
	{
		return 0;
	}

IL_1f0f:
	{
		int32_t L_1309 = ___strpos;
		int32_t L_1310 = (__this->___string_end_4);
		if ((((int32_t)L_1309) >= ((int32_t)L_1310)))
		{
			goto IL_1f6b;
		}
	}
	{
		String_t* L_1311 = (__this->___str_2);
		int32_t L_1312 = ___strpos;
		NullCheck(L_1311);
		uint16_t L_1313 = String_get_Chars_m407(L_1311, L_1312, /*hidden argument*/NULL);
		V_67 = L_1313;
		ByteU5BU5D_t66* L_1314 = (__this->___program_1);
		int32_t L_1315 = ___pc;
		NullCheck(L_1314);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1314, ((int32_t)((int32_t)L_1315+(int32_t)1)));
		int32_t L_1316 = ((int32_t)((int32_t)L_1315+(int32_t)1));
		uint16_t L_1317 = V_67;
		bool L_1318 = CategoryUtils_IsCategory_m17463(NULL /*static, unused*/, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1314, L_1316)), L_1317, /*hidden argument*/NULL);
		if (L_1318)
		{
			goto IL_1f6b;
		}
	}
	{
		int32_t L_1319 = ___pc;
		___pc = ((int32_t)((int32_t)L_1319+(int32_t)2));
		int32_t L_1320 = V_0;
		if (!L_1320)
		{
			goto IL_1f53;
		}
	}
	{
		int32_t L_1321 = ___pc;
		int32_t L_1322 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1321+(int32_t)1))) == ((uint32_t)L_1322))))
		{
			goto IL_1f66;
		}
	}

IL_1f53:
	{
		int32_t L_1323 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1323+(int32_t)1));
		int32_t L_1324 = ___pc;
		int32_t L_1325 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1324+(int32_t)1))) == ((uint32_t)L_1325))))
		{
			goto IL_1f66;
		}
	}
	{
		goto IL_3e1b;
	}

IL_1f66:
	{
		goto IL_0002;
	}

IL_1f6b:
	{
		return 0;
	}

IL_1f6d:
	{
		int32_t L_1326 = ___strpos;
		int32_t L_1327 = (__this->___string_end_4);
		if ((((int32_t)L_1326) >= ((int32_t)L_1327)))
		{
			goto IL_200c;
		}
	}
	{
		String_t* L_1328 = (__this->___str_2);
		int32_t L_1329 = ___strpos;
		NullCheck(L_1328);
		uint16_t L_1330 = String_get_Chars_m407(L_1328, L_1329, /*hidden argument*/NULL);
		V_68 = L_1330;
		uint16_t L_1331 = V_68;
		V_69 = L_1331;
		int32_t L_1332 = V_69;
		ByteU5BU5D_t66* L_1333 = (__this->___program_1);
		int32_t L_1334 = ___pc;
		NullCheck(L_1333);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1333, ((int32_t)((int32_t)L_1334+(int32_t)1)));
		int32_t L_1335 = ((int32_t)((int32_t)L_1334+(int32_t)1));
		V_69 = ((int32_t)((int32_t)L_1332-(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1333, L_1335))));
		ByteU5BU5D_t66* L_1336 = (__this->___program_1);
		int32_t L_1337 = ___pc;
		NullCheck(L_1336);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1336, ((int32_t)((int32_t)L_1337+(int32_t)2)));
		int32_t L_1338 = ((int32_t)((int32_t)L_1337+(int32_t)2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1336, L_1338));
		int32_t L_1339 = V_69;
		if ((((int32_t)L_1339) < ((int32_t)0)))
		{
			goto IL_1fd5;
		}
	}
	{
		int32_t L_1340 = V_69;
		int32_t L_1341 = V_1;
		if ((((int32_t)L_1340) >= ((int32_t)((int32_t)((int32_t)L_1341<<(int32_t)3)))))
		{
			goto IL_1fd5;
		}
	}
	{
		ByteU5BU5D_t66* L_1342 = (__this->___program_1);
		int32_t L_1343 = ___pc;
		int32_t L_1344 = V_69;
		NullCheck(L_1342);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1342, ((int32_t)((int32_t)((int32_t)((int32_t)L_1343+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1344>>(int32_t)3)))));
		int32_t L_1345 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1343+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1344>>(int32_t)3))));
		int32_t L_1346 = V_69;
		if (((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1342, L_1345))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1346&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_200c;
		}
	}

IL_1fd5:
	{
		int32_t L_1347 = ___pc;
		ByteU5BU5D_t66* L_1348 = (__this->___program_1);
		int32_t L_1349 = ___pc;
		NullCheck(L_1348);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1348, ((int32_t)((int32_t)L_1349+(int32_t)2)));
		int32_t L_1350 = ((int32_t)((int32_t)L_1349+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_1347+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1348, L_1350))))));
		int32_t L_1351 = V_0;
		if (!L_1351)
		{
			goto IL_1ff4;
		}
	}
	{
		int32_t L_1352 = ___pc;
		int32_t L_1353 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1352+(int32_t)1))) == ((uint32_t)L_1353))))
		{
			goto IL_2007;
		}
	}

IL_1ff4:
	{
		int32_t L_1354 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1354+(int32_t)1));
		int32_t L_1355 = ___pc;
		int32_t L_1356 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1355+(int32_t)1))) == ((uint32_t)L_1356))))
		{
			goto IL_2007;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2007:
	{
		goto IL_0002;
	}

IL_200c:
	{
		return 0;
	}

IL_200e:
	{
		int32_t L_1357 = ___strpos;
		int32_t L_1358 = (__this->___string_end_4);
		if ((((int32_t)L_1357) >= ((int32_t)L_1358)))
		{
			goto IL_20d4;
		}
	}
	{
		String_t* L_1359 = (__this->___str_2);
		int32_t L_1360 = ___strpos;
		NullCheck(L_1359);
		uint16_t L_1361 = String_get_Chars_m407(L_1359, L_1360, /*hidden argument*/NULL);
		V_70 = L_1361;
		uint16_t L_1362 = V_70;
		V_71 = L_1362;
		int32_t L_1363 = V_71;
		ByteU5BU5D_t66* L_1364 = (__this->___program_1);
		int32_t L_1365 = ___pc;
		NullCheck(L_1364);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1364, ((int32_t)((int32_t)L_1365+(int32_t)1)));
		int32_t L_1366 = ((int32_t)((int32_t)L_1365+(int32_t)1));
		ByteU5BU5D_t66* L_1367 = (__this->___program_1);
		int32_t L_1368 = ___pc;
		NullCheck(L_1367);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1367, ((int32_t)((int32_t)L_1368+(int32_t)2)));
		int32_t L_1369 = ((int32_t)((int32_t)L_1368+(int32_t)2));
		V_71 = ((int32_t)((int32_t)L_1363-(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1364, L_1366))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1367, L_1369))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_1370 = (__this->___program_1);
		int32_t L_1371 = ___pc;
		NullCheck(L_1370);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1370, ((int32_t)((int32_t)L_1371+(int32_t)3)));
		int32_t L_1372 = ((int32_t)((int32_t)L_1371+(int32_t)3));
		ByteU5BU5D_t66* L_1373 = (__this->___program_1);
		int32_t L_1374 = ___pc;
		NullCheck(L_1373);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1373, ((int32_t)((int32_t)L_1374+(int32_t)4)));
		int32_t L_1375 = ((int32_t)((int32_t)L_1374+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1370, L_1372))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1373, L_1375))<<(int32_t)8))));
		int32_t L_1376 = V_71;
		if ((((int32_t)L_1376) < ((int32_t)0)))
		{
			goto IL_2090;
		}
	}
	{
		int32_t L_1377 = V_71;
		int32_t L_1378 = V_1;
		if ((((int32_t)L_1377) >= ((int32_t)((int32_t)((int32_t)L_1378<<(int32_t)3)))))
		{
			goto IL_2090;
		}
	}
	{
		ByteU5BU5D_t66* L_1379 = (__this->___program_1);
		int32_t L_1380 = ___pc;
		int32_t L_1381 = V_71;
		NullCheck(L_1379);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1379, ((int32_t)((int32_t)((int32_t)((int32_t)L_1380+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1381>>(int32_t)3)))));
		int32_t L_1382 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1380+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1381>>(int32_t)3))));
		int32_t L_1383 = V_71;
		if (((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1379, L_1382))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1383&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_20d4;
		}
	}

IL_2090:
	{
		int32_t L_1384 = ___pc;
		ByteU5BU5D_t66* L_1385 = (__this->___program_1);
		int32_t L_1386 = ___pc;
		NullCheck(L_1385);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1385, ((int32_t)((int32_t)L_1386+(int32_t)3)));
		int32_t L_1387 = ((int32_t)((int32_t)L_1386+(int32_t)3));
		ByteU5BU5D_t66* L_1388 = (__this->___program_1);
		int32_t L_1389 = ___pc;
		NullCheck(L_1388);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1388, ((int32_t)((int32_t)L_1389+(int32_t)4)));
		int32_t L_1390 = ((int32_t)((int32_t)L_1389+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_1384+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1385, L_1387))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1388, L_1390))<<(int32_t)8))))))));
		int32_t L_1391 = V_0;
		if (!L_1391)
		{
			goto IL_20bc;
		}
	}
	{
		int32_t L_1392 = ___pc;
		int32_t L_1393 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1392+(int32_t)1))) == ((uint32_t)L_1393))))
		{
			goto IL_20cf;
		}
	}

IL_20bc:
	{
		int32_t L_1394 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1394+(int32_t)1));
		int32_t L_1395 = ___pc;
		int32_t L_1396 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1395+(int32_t)1))) == ((uint32_t)L_1396))))
		{
			goto IL_20cf;
		}
	}
	{
		goto IL_3e1b;
	}

IL_20cf:
	{
		goto IL_0002;
	}

IL_20d4:
	{
		return 0;
	}

IL_20d6:
	{
		int32_t L_1397 = ___strpos;
		int32_t L_1398 = (__this->___string_end_4);
		if ((((int32_t)L_1397) >= ((int32_t)L_1398)))
		{
			goto IL_2132;
		}
	}
	{
		String_t* L_1399 = (__this->___str_2);
		int32_t L_1400 = ___strpos;
		NullCheck(L_1399);
		uint16_t L_1401 = String_get_Chars_m407(L_1399, L_1400, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1402 = Char_ToLower_m6225(NULL /*static, unused*/, L_1401, /*hidden argument*/NULL);
		V_72 = L_1402;
		uint16_t L_1403 = V_72;
		ByteU5BU5D_t66* L_1404 = (__this->___program_1);
		int32_t L_1405 = ___pc;
		NullCheck(L_1404);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1404, ((int32_t)((int32_t)L_1405+(int32_t)1)));
		int32_t L_1406 = ((int32_t)((int32_t)L_1405+(int32_t)1));
		if ((((int32_t)L_1403) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1404, L_1406)))))
		{
			goto IL_2132;
		}
	}
	{
		int32_t L_1407 = ___pc;
		___pc = ((int32_t)((int32_t)L_1407+(int32_t)2));
		int32_t L_1408 = V_0;
		if (!L_1408)
		{
			goto IL_211a;
		}
	}
	{
		int32_t L_1409 = ___pc;
		int32_t L_1410 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1409+(int32_t)1))) == ((uint32_t)L_1410))))
		{
			goto IL_212d;
		}
	}

IL_211a:
	{
		int32_t L_1411 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1411+(int32_t)1));
		int32_t L_1412 = ___pc;
		int32_t L_1413 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1412+(int32_t)1))) == ((uint32_t)L_1413))))
		{
			goto IL_212d;
		}
	}
	{
		goto IL_3e1b;
	}

IL_212d:
	{
		goto IL_0002;
	}

IL_2132:
	{
		return 0;
	}

IL_2134:
	{
		int32_t L_1414 = ___strpos;
		int32_t L_1415 = (__this->___string_end_4);
		if ((((int32_t)L_1414) >= ((int32_t)L_1415)))
		{
			goto IL_21a1;
		}
	}
	{
		String_t* L_1416 = (__this->___str_2);
		int32_t L_1417 = ___strpos;
		NullCheck(L_1416);
		uint16_t L_1418 = String_get_Chars_m407(L_1416, L_1417, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1419 = Char_ToLower_m6225(NULL /*static, unused*/, L_1418, /*hidden argument*/NULL);
		V_73 = L_1419;
		uint16_t L_1420 = V_73;
		ByteU5BU5D_t66* L_1421 = (__this->___program_1);
		int32_t L_1422 = ___pc;
		NullCheck(L_1421);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1421, ((int32_t)((int32_t)L_1422+(int32_t)1)));
		int32_t L_1423 = ((int32_t)((int32_t)L_1422+(int32_t)1));
		if ((((int32_t)L_1420) < ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1421, L_1423)))))
		{
			goto IL_2175;
		}
	}
	{
		uint16_t L_1424 = V_73;
		ByteU5BU5D_t66* L_1425 = (__this->___program_1);
		int32_t L_1426 = ___pc;
		NullCheck(L_1425);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1425, ((int32_t)((int32_t)L_1426+(int32_t)2)));
		int32_t L_1427 = ((int32_t)((int32_t)L_1426+(int32_t)2));
		if ((((int32_t)L_1424) <= ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1425, L_1427)))))
		{
			goto IL_21a1;
		}
	}

IL_2175:
	{
		int32_t L_1428 = ___pc;
		___pc = ((int32_t)((int32_t)L_1428+(int32_t)3));
		int32_t L_1429 = V_0;
		if (!L_1429)
		{
			goto IL_2189;
		}
	}
	{
		int32_t L_1430 = ___pc;
		int32_t L_1431 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1430+(int32_t)1))) == ((uint32_t)L_1431))))
		{
			goto IL_219c;
		}
	}

IL_2189:
	{
		int32_t L_1432 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1432+(int32_t)1));
		int32_t L_1433 = ___pc;
		int32_t L_1434 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1433+(int32_t)1))) == ((uint32_t)L_1434))))
		{
			goto IL_219c;
		}
	}
	{
		goto IL_3e1b;
	}

IL_219c:
	{
		goto IL_0002;
	}

IL_21a1:
	{
		return 0;
	}

IL_21a3:
	{
		int32_t L_1435 = ___strpos;
		int32_t L_1436 = (__this->___string_end_4);
		if ((((int32_t)L_1435) >= ((int32_t)L_1436)))
		{
			goto IL_222a;
		}
	}
	{
		String_t* L_1437 = (__this->___str_2);
		int32_t L_1438 = ___strpos;
		NullCheck(L_1437);
		uint16_t L_1439 = String_get_Chars_m407(L_1437, L_1438, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1440 = Char_ToLower_m6225(NULL /*static, unused*/, L_1439, /*hidden argument*/NULL);
		V_74 = L_1440;
		uint16_t L_1441 = V_74;
		ByteU5BU5D_t66* L_1442 = (__this->___program_1);
		int32_t L_1443 = ___pc;
		NullCheck(L_1442);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1442, ((int32_t)((int32_t)L_1443+(int32_t)1)));
		int32_t L_1444 = ((int32_t)((int32_t)L_1443+(int32_t)1));
		ByteU5BU5D_t66* L_1445 = (__this->___program_1);
		int32_t L_1446 = ___pc;
		NullCheck(L_1445);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1445, ((int32_t)((int32_t)L_1446+(int32_t)2)));
		int32_t L_1447 = ((int32_t)((int32_t)L_1446+(int32_t)2));
		if ((((int32_t)L_1441) < ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1442, L_1444))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1445, L_1447))<<(int32_t)8)))))))
		{
			goto IL_21fe;
		}
	}
	{
		uint16_t L_1448 = V_74;
		ByteU5BU5D_t66* L_1449 = (__this->___program_1);
		int32_t L_1450 = ___pc;
		NullCheck(L_1449);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1449, ((int32_t)((int32_t)L_1450+(int32_t)3)));
		int32_t L_1451 = ((int32_t)((int32_t)L_1450+(int32_t)3));
		ByteU5BU5D_t66* L_1452 = (__this->___program_1);
		int32_t L_1453 = ___pc;
		NullCheck(L_1452);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1452, ((int32_t)((int32_t)L_1453+(int32_t)4)));
		int32_t L_1454 = ((int32_t)((int32_t)L_1453+(int32_t)4));
		if ((((int32_t)L_1448) <= ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1449, L_1451))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1452, L_1454))<<(int32_t)8)))))))
		{
			goto IL_222a;
		}
	}

IL_21fe:
	{
		int32_t L_1455 = ___pc;
		___pc = ((int32_t)((int32_t)L_1455+(int32_t)5));
		int32_t L_1456 = V_0;
		if (!L_1456)
		{
			goto IL_2212;
		}
	}
	{
		int32_t L_1457 = ___pc;
		int32_t L_1458 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1457+(int32_t)1))) == ((uint32_t)L_1458))))
		{
			goto IL_2225;
		}
	}

IL_2212:
	{
		int32_t L_1459 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1459+(int32_t)1));
		int32_t L_1460 = ___pc;
		int32_t L_1461 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1460+(int32_t)1))) == ((uint32_t)L_1461))))
		{
			goto IL_2225;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2225:
	{
		goto IL_0002;
	}

IL_222a:
	{
		return 0;
	}

IL_222c:
	{
		int32_t L_1462 = ___strpos;
		int32_t L_1463 = (__this->___string_end_4);
		if ((((int32_t)L_1462) >= ((int32_t)L_1463)))
		{
			goto IL_2295;
		}
	}
	{
		String_t* L_1464 = (__this->___str_2);
		int32_t L_1465 = ___strpos;
		NullCheck(L_1464);
		uint16_t L_1466 = String_get_Chars_m407(L_1464, L_1465, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1467 = Char_ToLower_m6225(NULL /*static, unused*/, L_1466, /*hidden argument*/NULL);
		V_75 = L_1467;
		uint16_t L_1468 = V_75;
		ByteU5BU5D_t66* L_1469 = (__this->___program_1);
		int32_t L_1470 = ___pc;
		NullCheck(L_1469);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1469, ((int32_t)((int32_t)L_1470+(int32_t)1)));
		int32_t L_1471 = ((int32_t)((int32_t)L_1470+(int32_t)1));
		ByteU5BU5D_t66* L_1472 = (__this->___program_1);
		int32_t L_1473 = ___pc;
		NullCheck(L_1472);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1472, ((int32_t)((int32_t)L_1473+(int32_t)2)));
		int32_t L_1474 = ((int32_t)((int32_t)L_1473+(int32_t)2));
		if ((((int32_t)L_1468) == ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1469, L_1471))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1472, L_1474))<<(int32_t)8)))))))
		{
			goto IL_2295;
		}
	}
	{
		int32_t L_1475 = ___pc;
		___pc = ((int32_t)((int32_t)L_1475+(int32_t)3));
		int32_t L_1476 = V_0;
		if (!L_1476)
		{
			goto IL_227d;
		}
	}
	{
		int32_t L_1477 = ___pc;
		int32_t L_1478 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1477+(int32_t)1))) == ((uint32_t)L_1478))))
		{
			goto IL_2290;
		}
	}

IL_227d:
	{
		int32_t L_1479 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1479+(int32_t)1));
		int32_t L_1480 = ___pc;
		int32_t L_1481 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1480+(int32_t)1))) == ((uint32_t)L_1481))))
		{
			goto IL_2290;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2290:
	{
		goto IL_0002;
	}

IL_2295:
	{
		return 0;
	}

IL_2297:
	{
		int32_t L_1482 = ___strpos;
		int32_t L_1483 = (__this->___string_end_4);
		if ((((int32_t)L_1482) >= ((int32_t)L_1483)))
		{
			goto IL_233b;
		}
	}
	{
		String_t* L_1484 = (__this->___str_2);
		int32_t L_1485 = ___strpos;
		NullCheck(L_1484);
		uint16_t L_1486 = String_get_Chars_m407(L_1484, L_1485, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1487 = Char_ToLower_m6225(NULL /*static, unused*/, L_1486, /*hidden argument*/NULL);
		V_76 = L_1487;
		uint16_t L_1488 = V_76;
		V_77 = L_1488;
		int32_t L_1489 = V_77;
		ByteU5BU5D_t66* L_1490 = (__this->___program_1);
		int32_t L_1491 = ___pc;
		NullCheck(L_1490);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1490, ((int32_t)((int32_t)L_1491+(int32_t)1)));
		int32_t L_1492 = ((int32_t)((int32_t)L_1491+(int32_t)1));
		V_77 = ((int32_t)((int32_t)L_1489-(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1490, L_1492))));
		ByteU5BU5D_t66* L_1493 = (__this->___program_1);
		int32_t L_1494 = ___pc;
		NullCheck(L_1493);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1493, ((int32_t)((int32_t)L_1494+(int32_t)2)));
		int32_t L_1495 = ((int32_t)((int32_t)L_1494+(int32_t)2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1493, L_1495));
		int32_t L_1496 = V_77;
		if ((((int32_t)L_1496) < ((int32_t)0)))
		{
			goto IL_2304;
		}
	}
	{
		int32_t L_1497 = V_77;
		int32_t L_1498 = V_1;
		if ((((int32_t)L_1497) >= ((int32_t)((int32_t)((int32_t)L_1498<<(int32_t)3)))))
		{
			goto IL_2304;
		}
	}
	{
		ByteU5BU5D_t66* L_1499 = (__this->___program_1);
		int32_t L_1500 = ___pc;
		int32_t L_1501 = V_77;
		NullCheck(L_1499);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1499, ((int32_t)((int32_t)((int32_t)((int32_t)L_1500+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1501>>(int32_t)3)))));
		int32_t L_1502 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1500+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1501>>(int32_t)3))));
		int32_t L_1503 = V_77;
		if (((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1499, L_1502))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1503&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_233b;
		}
	}

IL_2304:
	{
		int32_t L_1504 = ___pc;
		ByteU5BU5D_t66* L_1505 = (__this->___program_1);
		int32_t L_1506 = ___pc;
		NullCheck(L_1505);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1505, ((int32_t)((int32_t)L_1506+(int32_t)2)));
		int32_t L_1507 = ((int32_t)((int32_t)L_1506+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_1504+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1505, L_1507))))));
		int32_t L_1508 = V_0;
		if (!L_1508)
		{
			goto IL_2323;
		}
	}
	{
		int32_t L_1509 = ___pc;
		int32_t L_1510 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1509+(int32_t)1))) == ((uint32_t)L_1510))))
		{
			goto IL_2336;
		}
	}

IL_2323:
	{
		int32_t L_1511 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1511+(int32_t)1));
		int32_t L_1512 = ___pc;
		int32_t L_1513 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1512+(int32_t)1))) == ((uint32_t)L_1513))))
		{
			goto IL_2336;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2336:
	{
		goto IL_0002;
	}

IL_233b:
	{
		return 0;
	}

IL_233d:
	{
		int32_t L_1514 = ___strpos;
		int32_t L_1515 = (__this->___string_end_4);
		if ((((int32_t)L_1514) >= ((int32_t)L_1515)))
		{
			goto IL_2408;
		}
	}
	{
		String_t* L_1516 = (__this->___str_2);
		int32_t L_1517 = ___strpos;
		NullCheck(L_1516);
		uint16_t L_1518 = String_get_Chars_m407(L_1516, L_1517, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1519 = Char_ToLower_m6225(NULL /*static, unused*/, L_1518, /*hidden argument*/NULL);
		V_78 = L_1519;
		uint16_t L_1520 = V_78;
		V_79 = L_1520;
		int32_t L_1521 = V_79;
		ByteU5BU5D_t66* L_1522 = (__this->___program_1);
		int32_t L_1523 = ___pc;
		NullCheck(L_1522);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1522, ((int32_t)((int32_t)L_1523+(int32_t)1)));
		int32_t L_1524 = ((int32_t)((int32_t)L_1523+(int32_t)1));
		ByteU5BU5D_t66* L_1525 = (__this->___program_1);
		int32_t L_1526 = ___pc;
		NullCheck(L_1525);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1525, ((int32_t)((int32_t)L_1526+(int32_t)2)));
		int32_t L_1527 = ((int32_t)((int32_t)L_1526+(int32_t)2));
		V_79 = ((int32_t)((int32_t)L_1521-(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1522, L_1524))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1525, L_1527))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_1528 = (__this->___program_1);
		int32_t L_1529 = ___pc;
		NullCheck(L_1528);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1528, ((int32_t)((int32_t)L_1529+(int32_t)3)));
		int32_t L_1530 = ((int32_t)((int32_t)L_1529+(int32_t)3));
		ByteU5BU5D_t66* L_1531 = (__this->___program_1);
		int32_t L_1532 = ___pc;
		NullCheck(L_1531);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1531, ((int32_t)((int32_t)L_1532+(int32_t)4)));
		int32_t L_1533 = ((int32_t)((int32_t)L_1532+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1528, L_1530))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1531, L_1533))<<(int32_t)8))));
		int32_t L_1534 = V_79;
		if ((((int32_t)L_1534) < ((int32_t)0)))
		{
			goto IL_23c4;
		}
	}
	{
		int32_t L_1535 = V_79;
		int32_t L_1536 = V_1;
		if ((((int32_t)L_1535) >= ((int32_t)((int32_t)((int32_t)L_1536<<(int32_t)3)))))
		{
			goto IL_23c4;
		}
	}
	{
		ByteU5BU5D_t66* L_1537 = (__this->___program_1);
		int32_t L_1538 = ___pc;
		int32_t L_1539 = V_79;
		NullCheck(L_1537);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1537, ((int32_t)((int32_t)((int32_t)((int32_t)L_1538+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1539>>(int32_t)3)))));
		int32_t L_1540 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1538+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1539>>(int32_t)3))));
		int32_t L_1541 = V_79;
		if (((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1537, L_1540))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1541&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_2408;
		}
	}

IL_23c4:
	{
		int32_t L_1542 = ___pc;
		ByteU5BU5D_t66* L_1543 = (__this->___program_1);
		int32_t L_1544 = ___pc;
		NullCheck(L_1543);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1543, ((int32_t)((int32_t)L_1544+(int32_t)3)));
		int32_t L_1545 = ((int32_t)((int32_t)L_1544+(int32_t)3));
		ByteU5BU5D_t66* L_1546 = (__this->___program_1);
		int32_t L_1547 = ___pc;
		NullCheck(L_1546);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1546, ((int32_t)((int32_t)L_1547+(int32_t)4)));
		int32_t L_1548 = ((int32_t)((int32_t)L_1547+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_1542+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1543, L_1545))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1546, L_1548))<<(int32_t)8))))))));
		int32_t L_1549 = V_0;
		if (!L_1549)
		{
			goto IL_23f0;
		}
	}
	{
		int32_t L_1550 = ___pc;
		int32_t L_1551 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1550+(int32_t)1))) == ((uint32_t)L_1551))))
		{
			goto IL_2403;
		}
	}

IL_23f0:
	{
		int32_t L_1552 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1552+(int32_t)1));
		int32_t L_1553 = ___pc;
		int32_t L_1554 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1553+(int32_t)1))) == ((uint32_t)L_1554))))
		{
			goto IL_2403;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2403:
	{
		goto IL_0002;
	}

IL_2408:
	{
		return 0;
	}

IL_240a:
	{
		int32_t L_1555 = ___strpos;
		if ((((int32_t)L_1555) <= ((int32_t)0)))
		{
			goto IL_244c;
		}
	}
	{
		String_t* L_1556 = (__this->___str_2);
		int32_t L_1557 = ___strpos;
		NullCheck(L_1556);
		uint16_t L_1558 = String_get_Chars_m407(L_1556, ((int32_t)((int32_t)L_1557-(int32_t)1)), /*hidden argument*/NULL);
		V_80 = L_1558;
		uint16_t L_1559 = V_80;
		ByteU5BU5D_t66* L_1560 = (__this->___program_1);
		int32_t L_1561 = ___pc;
		NullCheck(L_1560);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1560, ((int32_t)((int32_t)L_1561+(int32_t)1)));
		int32_t L_1562 = ((int32_t)((int32_t)L_1561+(int32_t)1));
		if ((!(((uint32_t)L_1559) == ((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1560, L_1562))))))
		{
			goto IL_244c;
		}
	}
	{
		int32_t L_1563 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1563-(int32_t)1));
		int32_t L_1564 = V_0;
		if (!L_1564)
		{
			goto IL_2442;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2442:
	{
		int32_t L_1565 = ___pc;
		___pc = ((int32_t)((int32_t)L_1565+(int32_t)2));
		goto IL_0002;
	}

IL_244c:
	{
		int32_t L_1566 = V_0;
		if (L_1566)
		{
			goto IL_2454;
		}
	}
	{
		return 0;
	}

IL_2454:
	{
		int32_t L_1567 = ___pc;
		___pc = ((int32_t)((int32_t)L_1567+(int32_t)2));
		goto IL_0002;
	}

IL_245e:
	{
		int32_t L_1568 = ___strpos;
		if ((((int32_t)L_1568) <= ((int32_t)0)))
		{
			goto IL_24b1;
		}
	}
	{
		String_t* L_1569 = (__this->___str_2);
		int32_t L_1570 = ___strpos;
		NullCheck(L_1569);
		uint16_t L_1571 = String_get_Chars_m407(L_1569, ((int32_t)((int32_t)L_1570-(int32_t)1)), /*hidden argument*/NULL);
		V_81 = L_1571;
		uint16_t L_1572 = V_81;
		ByteU5BU5D_t66* L_1573 = (__this->___program_1);
		int32_t L_1574 = ___pc;
		NullCheck(L_1573);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1573, ((int32_t)((int32_t)L_1574+(int32_t)1)));
		int32_t L_1575 = ((int32_t)((int32_t)L_1574+(int32_t)1));
		if ((((int32_t)L_1572) < ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1573, L_1575)))))
		{
			goto IL_24b1;
		}
	}
	{
		uint16_t L_1576 = V_81;
		ByteU5BU5D_t66* L_1577 = (__this->___program_1);
		int32_t L_1578 = ___pc;
		NullCheck(L_1577);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1577, ((int32_t)((int32_t)L_1578+(int32_t)2)));
		int32_t L_1579 = ((int32_t)((int32_t)L_1578+(int32_t)2));
		if ((((int32_t)L_1576) > ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1577, L_1579)))))
		{
			goto IL_24b1;
		}
	}
	{
		int32_t L_1580 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1580-(int32_t)1));
		int32_t L_1581 = V_0;
		if (!L_1581)
		{
			goto IL_24a7;
		}
	}
	{
		goto IL_3e1b;
	}

IL_24a7:
	{
		int32_t L_1582 = ___pc;
		___pc = ((int32_t)((int32_t)L_1582+(int32_t)3));
		goto IL_0002;
	}

IL_24b1:
	{
		int32_t L_1583 = V_0;
		if (L_1583)
		{
			goto IL_24b9;
		}
	}
	{
		return 0;
	}

IL_24b9:
	{
		int32_t L_1584 = ___pc;
		___pc = ((int32_t)((int32_t)L_1584+(int32_t)3));
		goto IL_0002;
	}

IL_24c3:
	{
		int32_t L_1585 = ___strpos;
		if ((((int32_t)L_1585) <= ((int32_t)0)))
		{
			goto IL_2530;
		}
	}
	{
		String_t* L_1586 = (__this->___str_2);
		int32_t L_1587 = ___strpos;
		NullCheck(L_1586);
		uint16_t L_1588 = String_get_Chars_m407(L_1586, ((int32_t)((int32_t)L_1587-(int32_t)1)), /*hidden argument*/NULL);
		V_82 = L_1588;
		uint16_t L_1589 = V_82;
		ByteU5BU5D_t66* L_1590 = (__this->___program_1);
		int32_t L_1591 = ___pc;
		NullCheck(L_1590);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1590, ((int32_t)((int32_t)L_1591+(int32_t)1)));
		int32_t L_1592 = ((int32_t)((int32_t)L_1591+(int32_t)1));
		ByteU5BU5D_t66* L_1593 = (__this->___program_1);
		int32_t L_1594 = ___pc;
		NullCheck(L_1593);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1593, ((int32_t)((int32_t)L_1594+(int32_t)2)));
		int32_t L_1595 = ((int32_t)((int32_t)L_1594+(int32_t)2));
		if ((((int32_t)L_1589) < ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1590, L_1592))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1593, L_1595))<<(int32_t)8)))))))
		{
			goto IL_2530;
		}
	}
	{
		uint16_t L_1596 = V_82;
		ByteU5BU5D_t66* L_1597 = (__this->___program_1);
		int32_t L_1598 = ___pc;
		NullCheck(L_1597);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1597, ((int32_t)((int32_t)L_1598+(int32_t)3)));
		int32_t L_1599 = ((int32_t)((int32_t)L_1598+(int32_t)3));
		ByteU5BU5D_t66* L_1600 = (__this->___program_1);
		int32_t L_1601 = ___pc;
		NullCheck(L_1600);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1600, ((int32_t)((int32_t)L_1601+(int32_t)4)));
		int32_t L_1602 = ((int32_t)((int32_t)L_1601+(int32_t)4));
		if ((((int32_t)L_1596) > ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1597, L_1599))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1600, L_1602))<<(int32_t)8)))))))
		{
			goto IL_2530;
		}
	}
	{
		int32_t L_1603 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1603-(int32_t)1));
		int32_t L_1604 = V_0;
		if (!L_1604)
		{
			goto IL_2526;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2526:
	{
		int32_t L_1605 = ___pc;
		___pc = ((int32_t)((int32_t)L_1605+(int32_t)5));
		goto IL_0002;
	}

IL_2530:
	{
		int32_t L_1606 = V_0;
		if (L_1606)
		{
			goto IL_2538;
		}
	}
	{
		return 0;
	}

IL_2538:
	{
		int32_t L_1607 = ___pc;
		___pc = ((int32_t)((int32_t)L_1607+(int32_t)5));
		goto IL_0002;
	}

IL_2542:
	{
		int32_t L_1608 = ___strpos;
		if ((((int32_t)L_1608) <= ((int32_t)0)))
		{
			goto IL_2591;
		}
	}
	{
		String_t* L_1609 = (__this->___str_2);
		int32_t L_1610 = ___strpos;
		NullCheck(L_1609);
		uint16_t L_1611 = String_get_Chars_m407(L_1609, ((int32_t)((int32_t)L_1610-(int32_t)1)), /*hidden argument*/NULL);
		V_83 = L_1611;
		uint16_t L_1612 = V_83;
		ByteU5BU5D_t66* L_1613 = (__this->___program_1);
		int32_t L_1614 = ___pc;
		NullCheck(L_1613);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1613, ((int32_t)((int32_t)L_1614+(int32_t)1)));
		int32_t L_1615 = ((int32_t)((int32_t)L_1614+(int32_t)1));
		ByteU5BU5D_t66* L_1616 = (__this->___program_1);
		int32_t L_1617 = ___pc;
		NullCheck(L_1616);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1616, ((int32_t)((int32_t)L_1617+(int32_t)2)));
		int32_t L_1618 = ((int32_t)((int32_t)L_1617+(int32_t)2));
		if ((!(((uint32_t)L_1612) == ((uint32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1613, L_1615))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1616, L_1618))<<(int32_t)8))))))))
		{
			goto IL_2591;
		}
	}
	{
		int32_t L_1619 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1619-(int32_t)1));
		int32_t L_1620 = V_0;
		if (!L_1620)
		{
			goto IL_2587;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2587:
	{
		int32_t L_1621 = ___pc;
		___pc = ((int32_t)((int32_t)L_1621+(int32_t)3));
		goto IL_0002;
	}

IL_2591:
	{
		int32_t L_1622 = V_0;
		if (L_1622)
		{
			goto IL_2599;
		}
	}
	{
		return 0;
	}

IL_2599:
	{
		int32_t L_1623 = ___pc;
		___pc = ((int32_t)((int32_t)L_1623+(int32_t)3));
		goto IL_0002;
	}

IL_25a3:
	{
		int32_t L_1624 = ___strpos;
		if ((((int32_t)L_1624) <= ((int32_t)0)))
		{
			goto IL_25dd;
		}
	}
	{
		String_t* L_1625 = (__this->___str_2);
		int32_t L_1626 = ___strpos;
		NullCheck(L_1625);
		uint16_t L_1627 = String_get_Chars_m407(L_1625, ((int32_t)((int32_t)L_1626-(int32_t)1)), /*hidden argument*/NULL);
		V_84 = L_1627;
		uint16_t L_1628 = V_84;
		if ((((int32_t)L_1628) == ((int32_t)((int32_t)10))))
		{
			goto IL_25dd;
		}
	}
	{
		int32_t L_1629 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1629-(int32_t)1));
		int32_t L_1630 = V_0;
		if (!L_1630)
		{
			goto IL_25d3;
		}
	}
	{
		goto IL_3e1b;
	}

IL_25d3:
	{
		int32_t L_1631 = ___pc;
		___pc = ((int32_t)((int32_t)L_1631+(int32_t)1));
		goto IL_0002;
	}

IL_25dd:
	{
		int32_t L_1632 = V_0;
		if (L_1632)
		{
			goto IL_25e5;
		}
	}
	{
		return 0;
	}

IL_25e5:
	{
		int32_t L_1633 = ___pc;
		___pc = ((int32_t)((int32_t)L_1633+(int32_t)1));
		goto IL_0002;
	}

IL_25ef:
	{
		int32_t L_1634 = ___strpos;
		if ((((int32_t)L_1634) <= ((int32_t)0)))
		{
			goto IL_2620;
		}
	}
	{
		String_t* L_1635 = (__this->___str_2);
		int32_t L_1636 = ___strpos;
		NullCheck(L_1635);
		uint16_t L_1637 = String_get_Chars_m407(L_1635, ((int32_t)((int32_t)L_1636-(int32_t)1)), /*hidden argument*/NULL);
		V_85 = L_1637;
		int32_t L_1638 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1638-(int32_t)1));
		int32_t L_1639 = V_0;
		if (!L_1639)
		{
			goto IL_2616;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2616:
	{
		int32_t L_1640 = ___pc;
		___pc = ((int32_t)((int32_t)L_1640+(int32_t)1));
		goto IL_0002;
	}

IL_2620:
	{
		int32_t L_1641 = V_0;
		if (L_1641)
		{
			goto IL_2628;
		}
	}
	{
		return 0;
	}

IL_2628:
	{
		int32_t L_1642 = ___pc;
		___pc = ((int32_t)((int32_t)L_1642+(int32_t)1));
		goto IL_0002;
	}

IL_2632:
	{
		int32_t L_1643 = ___strpos;
		if ((((int32_t)L_1643) <= ((int32_t)0)))
		{
			goto IL_267d;
		}
	}
	{
		String_t* L_1644 = (__this->___str_2);
		int32_t L_1645 = ___strpos;
		NullCheck(L_1644);
		uint16_t L_1646 = String_get_Chars_m407(L_1644, ((int32_t)((int32_t)L_1645-(int32_t)1)), /*hidden argument*/NULL);
		V_86 = L_1646;
		uint16_t L_1647 = V_86;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_1648 = Char_IsLetterOrDigit_m14810(NULL /*static, unused*/, L_1647, /*hidden argument*/NULL);
		if (L_1648)
		{
			goto IL_2663;
		}
	}
	{
		uint16_t L_1649 = V_86;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_1650 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_1649, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1650) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_267d;
		}
	}

IL_2663:
	{
		int32_t L_1651 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1651-(int32_t)1));
		int32_t L_1652 = V_0;
		if (!L_1652)
		{
			goto IL_2673;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2673:
	{
		int32_t L_1653 = ___pc;
		___pc = ((int32_t)((int32_t)L_1653+(int32_t)1));
		goto IL_0002;
	}

IL_267d:
	{
		int32_t L_1654 = V_0;
		if (L_1654)
		{
			goto IL_2685;
		}
	}
	{
		return 0;
	}

IL_2685:
	{
		int32_t L_1655 = ___pc;
		___pc = ((int32_t)((int32_t)L_1655+(int32_t)1));
		goto IL_0002;
	}

IL_268f:
	{
		int32_t L_1656 = ___strpos;
		if ((((int32_t)L_1656) <= ((int32_t)0)))
		{
			goto IL_26cc;
		}
	}
	{
		String_t* L_1657 = (__this->___str_2);
		int32_t L_1658 = ___strpos;
		NullCheck(L_1657);
		uint16_t L_1659 = String_get_Chars_m407(L_1657, ((int32_t)((int32_t)L_1658-(int32_t)1)), /*hidden argument*/NULL);
		V_87 = L_1659;
		uint16_t L_1660 = V_87;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_1661 = Char_IsDigit_m18100(NULL /*static, unused*/, L_1660, /*hidden argument*/NULL);
		if (!L_1661)
		{
			goto IL_26cc;
		}
	}
	{
		int32_t L_1662 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1662-(int32_t)1));
		int32_t L_1663 = V_0;
		if (!L_1663)
		{
			goto IL_26c2;
		}
	}
	{
		goto IL_3e1b;
	}

IL_26c2:
	{
		int32_t L_1664 = ___pc;
		___pc = ((int32_t)((int32_t)L_1664+(int32_t)1));
		goto IL_0002;
	}

IL_26cc:
	{
		int32_t L_1665 = V_0;
		if (L_1665)
		{
			goto IL_26d4;
		}
	}
	{
		return 0;
	}

IL_26d4:
	{
		int32_t L_1666 = ___pc;
		___pc = ((int32_t)((int32_t)L_1666+(int32_t)1));
		goto IL_0002;
	}

IL_26de:
	{
		int32_t L_1667 = ___strpos;
		if ((((int32_t)L_1667) <= ((int32_t)0)))
		{
			goto IL_271b;
		}
	}
	{
		String_t* L_1668 = (__this->___str_2);
		int32_t L_1669 = ___strpos;
		NullCheck(L_1668);
		uint16_t L_1670 = String_get_Chars_m407(L_1668, ((int32_t)((int32_t)L_1669-(int32_t)1)), /*hidden argument*/NULL);
		V_88 = L_1670;
		uint16_t L_1671 = V_88;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_1672 = Char_IsWhiteSpace_m4129(NULL /*static, unused*/, L_1671, /*hidden argument*/NULL);
		if (!L_1672)
		{
			goto IL_271b;
		}
	}
	{
		int32_t L_1673 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1673-(int32_t)1));
		int32_t L_1674 = V_0;
		if (!L_1674)
		{
			goto IL_2711;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2711:
	{
		int32_t L_1675 = ___pc;
		___pc = ((int32_t)((int32_t)L_1675+(int32_t)1));
		goto IL_0002;
	}

IL_271b:
	{
		int32_t L_1676 = V_0;
		if (L_1676)
		{
			goto IL_2723;
		}
	}
	{
		return 0;
	}

IL_2723:
	{
		int32_t L_1677 = ___pc;
		___pc = ((int32_t)((int32_t)L_1677+(int32_t)1));
		goto IL_0002;
	}

IL_272d:
	{
		int32_t L_1678 = ___strpos;
		if ((((int32_t)L_1678) <= ((int32_t)0)))
		{
			goto IL_279d;
		}
	}
	{
		String_t* L_1679 = (__this->___str_2);
		int32_t L_1680 = ___strpos;
		NullCheck(L_1679);
		uint16_t L_1681 = String_get_Chars_m407(L_1679, ((int32_t)((int32_t)L_1680-(int32_t)1)), /*hidden argument*/NULL);
		V_89 = L_1681;
		uint16_t L_1682 = V_89;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_1682)))
		{
			goto IL_2756;
		}
	}
	{
		uint16_t L_1683 = V_89;
		if ((((int32_t)L_1683) <= ((int32_t)((int32_t)122))))
		{
			goto IL_2783;
		}
	}

IL_2756:
	{
		uint16_t L_1684 = V_89;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_1684)))
		{
			goto IL_2768;
		}
	}
	{
		uint16_t L_1685 = V_89;
		if ((((int32_t)L_1685) <= ((int32_t)((int32_t)90))))
		{
			goto IL_2783;
		}
	}

IL_2768:
	{
		uint16_t L_1686 = V_89;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_1686)))
		{
			goto IL_277a;
		}
	}
	{
		uint16_t L_1687 = V_89;
		if ((((int32_t)L_1687) <= ((int32_t)((int32_t)57))))
		{
			goto IL_2783;
		}
	}

IL_277a:
	{
		uint16_t L_1688 = V_89;
		if ((!(((uint32_t)L_1688) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_279d;
		}
	}

IL_2783:
	{
		int32_t L_1689 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1689-(int32_t)1));
		int32_t L_1690 = V_0;
		if (!L_1690)
		{
			goto IL_2793;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2793:
	{
		int32_t L_1691 = ___pc;
		___pc = ((int32_t)((int32_t)L_1691+(int32_t)1));
		goto IL_0002;
	}

IL_279d:
	{
		int32_t L_1692 = V_0;
		if (L_1692)
		{
			goto IL_27a5;
		}
	}
	{
		return 0;
	}

IL_27a5:
	{
		int32_t L_1693 = ___pc;
		___pc = ((int32_t)((int32_t)L_1693+(int32_t)1));
		goto IL_0002;
	}

IL_27af:
	{
		int32_t L_1694 = ___strpos;
		if ((((int32_t)L_1694) <= ((int32_t)0)))
		{
			goto IL_2816;
		}
	}
	{
		String_t* L_1695 = (__this->___str_2);
		int32_t L_1696 = ___strpos;
		NullCheck(L_1695);
		uint16_t L_1697 = String_get_Chars_m407(L_1695, ((int32_t)((int32_t)L_1696-(int32_t)1)), /*hidden argument*/NULL);
		V_90 = L_1697;
		uint16_t L_1698 = V_90;
		if ((((int32_t)L_1698) == ((int32_t)((int32_t)32))))
		{
			goto IL_27fc;
		}
	}
	{
		uint16_t L_1699 = V_90;
		if ((((int32_t)L_1699) == ((int32_t)((int32_t)9))))
		{
			goto IL_27fc;
		}
	}
	{
		uint16_t L_1700 = V_90;
		if ((((int32_t)L_1700) == ((int32_t)((int32_t)10))))
		{
			goto IL_27fc;
		}
	}
	{
		uint16_t L_1701 = V_90;
		if ((((int32_t)L_1701) == ((int32_t)((int32_t)13))))
		{
			goto IL_27fc;
		}
	}
	{
		uint16_t L_1702 = V_90;
		if ((((int32_t)L_1702) == ((int32_t)((int32_t)12))))
		{
			goto IL_27fc;
		}
	}
	{
		uint16_t L_1703 = V_90;
		if ((!(((uint32_t)L_1703) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_2816;
		}
	}

IL_27fc:
	{
		int32_t L_1704 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1704-(int32_t)1));
		int32_t L_1705 = V_0;
		if (!L_1705)
		{
			goto IL_280c;
		}
	}
	{
		goto IL_3e1b;
	}

IL_280c:
	{
		int32_t L_1706 = ___pc;
		___pc = ((int32_t)((int32_t)L_1706+(int32_t)1));
		goto IL_0002;
	}

IL_2816:
	{
		int32_t L_1707 = V_0;
		if (L_1707)
		{
			goto IL_281e;
		}
	}
	{
		return 0;
	}

IL_281e:
	{
		int32_t L_1708 = ___pc;
		___pc = ((int32_t)((int32_t)L_1708+(int32_t)1));
		goto IL_0002;
	}

IL_2828:
	{
		int32_t L_1709 = ___strpos;
		if ((((int32_t)L_1709) <= ((int32_t)0)))
		{
			goto IL_2889;
		}
	}
	{
		String_t* L_1710 = (__this->___str_2);
		int32_t L_1711 = ___strpos;
		NullCheck(L_1710);
		uint16_t L_1712 = String_get_Chars_m407(L_1710, ((int32_t)((int32_t)L_1711-(int32_t)1)), /*hidden argument*/NULL);
		V_91 = L_1712;
		uint16_t L_1713 = V_91;
		if ((((int32_t)((int32_t)65279)) > ((int32_t)L_1713)))
		{
			goto IL_2857;
		}
	}
	{
		uint16_t L_1714 = V_91;
		if ((((int32_t)L_1714) <= ((int32_t)((int32_t)65279))))
		{
			goto IL_286f;
		}
	}

IL_2857:
	{
		uint16_t L_1715 = V_91;
		if ((((int32_t)((int32_t)65520)) > ((int32_t)L_1715)))
		{
			goto IL_2889;
		}
	}
	{
		uint16_t L_1716 = V_91;
		if ((((int32_t)L_1716) > ((int32_t)((int32_t)65533))))
		{
			goto IL_2889;
		}
	}

IL_286f:
	{
		int32_t L_1717 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1717-(int32_t)1));
		int32_t L_1718 = V_0;
		if (!L_1718)
		{
			goto IL_287f;
		}
	}
	{
		goto IL_3e1b;
	}

IL_287f:
	{
		int32_t L_1719 = ___pc;
		___pc = ((int32_t)((int32_t)L_1719+(int32_t)1));
		goto IL_0002;
	}

IL_2889:
	{
		int32_t L_1720 = V_0;
		if (L_1720)
		{
			goto IL_2891;
		}
	}
	{
		return 0;
	}

IL_2891:
	{
		int32_t L_1721 = ___pc;
		___pc = ((int32_t)((int32_t)L_1721+(int32_t)1));
		goto IL_0002;
	}

IL_289b:
	{
		int32_t L_1722 = ___strpos;
		if ((((int32_t)L_1722) <= ((int32_t)0)))
		{
			goto IL_28e2;
		}
	}
	{
		String_t* L_1723 = (__this->___str_2);
		int32_t L_1724 = ___strpos;
		NullCheck(L_1723);
		uint16_t L_1725 = String_get_Chars_m407(L_1723, ((int32_t)((int32_t)L_1724-(int32_t)1)), /*hidden argument*/NULL);
		V_92 = L_1725;
		uint16_t L_1726 = V_92;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_1727 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_1726, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_1728 = (__this->___program_1);
		int32_t L_1729 = ___pc;
		NullCheck(L_1728);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1728, ((int32_t)((int32_t)L_1729+(int32_t)1)));
		int32_t L_1730 = ((int32_t)((int32_t)L_1729+(int32_t)1));
		if ((!(((uint32_t)L_1727) == ((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1728, L_1730))))))
		{
			goto IL_28e2;
		}
	}
	{
		int32_t L_1731 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1731-(int32_t)1));
		int32_t L_1732 = V_0;
		if (!L_1732)
		{
			goto IL_28d8;
		}
	}
	{
		goto IL_3e1b;
	}

IL_28d8:
	{
		int32_t L_1733 = ___pc;
		___pc = ((int32_t)((int32_t)L_1733+(int32_t)2));
		goto IL_0002;
	}

IL_28e2:
	{
		int32_t L_1734 = V_0;
		if (L_1734)
		{
			goto IL_28ea;
		}
	}
	{
		return 0;
	}

IL_28ea:
	{
		int32_t L_1735 = ___pc;
		___pc = ((int32_t)((int32_t)L_1735+(int32_t)2));
		goto IL_0002;
	}

IL_28f4:
	{
		int32_t L_1736 = ___strpos;
		if ((((int32_t)L_1736) <= ((int32_t)0)))
		{
			goto IL_293b;
		}
	}
	{
		String_t* L_1737 = (__this->___str_2);
		int32_t L_1738 = ___strpos;
		NullCheck(L_1737);
		uint16_t L_1739 = String_get_Chars_m407(L_1737, ((int32_t)((int32_t)L_1738-(int32_t)1)), /*hidden argument*/NULL);
		V_93 = L_1739;
		ByteU5BU5D_t66* L_1740 = (__this->___program_1);
		int32_t L_1741 = ___pc;
		NullCheck(L_1740);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1740, ((int32_t)((int32_t)L_1741+(int32_t)1)));
		int32_t L_1742 = ((int32_t)((int32_t)L_1741+(int32_t)1));
		uint16_t L_1743 = V_93;
		bool L_1744 = CategoryUtils_IsCategory_m17463(NULL /*static, unused*/, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1740, L_1742)), L_1743, /*hidden argument*/NULL);
		if (!L_1744)
		{
			goto IL_293b;
		}
	}
	{
		int32_t L_1745 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1745-(int32_t)1));
		int32_t L_1746 = V_0;
		if (!L_1746)
		{
			goto IL_2931;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2931:
	{
		int32_t L_1747 = ___pc;
		___pc = ((int32_t)((int32_t)L_1747+(int32_t)2));
		goto IL_0002;
	}

IL_293b:
	{
		int32_t L_1748 = V_0;
		if (L_1748)
		{
			goto IL_2943;
		}
	}
	{
		return 0;
	}

IL_2943:
	{
		int32_t L_1749 = ___pc;
		___pc = ((int32_t)((int32_t)L_1749+(int32_t)2));
		goto IL_0002;
	}

IL_294d:
	{
		int32_t L_1750 = ___strpos;
		if ((((int32_t)L_1750) <= ((int32_t)0)))
		{
			goto IL_29d7;
		}
	}
	{
		String_t* L_1751 = (__this->___str_2);
		int32_t L_1752 = ___strpos;
		NullCheck(L_1751);
		uint16_t L_1753 = String_get_Chars_m407(L_1751, ((int32_t)((int32_t)L_1752-(int32_t)1)), /*hidden argument*/NULL);
		V_94 = L_1753;
		uint16_t L_1754 = V_94;
		V_95 = L_1754;
		int32_t L_1755 = V_95;
		ByteU5BU5D_t66* L_1756 = (__this->___program_1);
		int32_t L_1757 = ___pc;
		NullCheck(L_1756);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1756, ((int32_t)((int32_t)L_1757+(int32_t)1)));
		int32_t L_1758 = ((int32_t)((int32_t)L_1757+(int32_t)1));
		V_95 = ((int32_t)((int32_t)L_1755-(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1756, L_1758))));
		ByteU5BU5D_t66* L_1759 = (__this->___program_1);
		int32_t L_1760 = ___pc;
		NullCheck(L_1759);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1759, ((int32_t)((int32_t)L_1760+(int32_t)2)));
		int32_t L_1761 = ((int32_t)((int32_t)L_1760+(int32_t)2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1759, L_1761));
		int32_t L_1762 = V_95;
		if ((((int32_t)L_1762) < ((int32_t)0)))
		{
			goto IL_29d7;
		}
	}
	{
		int32_t L_1763 = V_95;
		int32_t L_1764 = V_1;
		if ((((int32_t)L_1763) >= ((int32_t)((int32_t)((int32_t)L_1764<<(int32_t)3)))))
		{
			goto IL_29d7;
		}
	}
	{
		ByteU5BU5D_t66* L_1765 = (__this->___program_1);
		int32_t L_1766 = ___pc;
		int32_t L_1767 = V_95;
		NullCheck(L_1765);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1765, ((int32_t)((int32_t)((int32_t)((int32_t)L_1766+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1767>>(int32_t)3)))));
		int32_t L_1768 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1766+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1767>>(int32_t)3))));
		int32_t L_1769 = V_95;
		if (!((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1765, L_1768))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1769&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_29d7;
		}
	}
	{
		int32_t L_1770 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1770-(int32_t)1));
		int32_t L_1771 = V_0;
		if (!L_1771)
		{
			goto IL_29c2;
		}
	}
	{
		goto IL_3e1b;
	}

IL_29c2:
	{
		int32_t L_1772 = ___pc;
		ByteU5BU5D_t66* L_1773 = (__this->___program_1);
		int32_t L_1774 = ___pc;
		NullCheck(L_1773);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1773, ((int32_t)((int32_t)L_1774+(int32_t)2)));
		int32_t L_1775 = ((int32_t)((int32_t)L_1774+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_1772+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1773, L_1775))))));
		goto IL_0002;
	}

IL_29d7:
	{
		int32_t L_1776 = V_0;
		if (L_1776)
		{
			goto IL_29df;
		}
	}
	{
		return 0;
	}

IL_29df:
	{
		int32_t L_1777 = ___pc;
		ByteU5BU5D_t66* L_1778 = (__this->___program_1);
		int32_t L_1779 = ___pc;
		NullCheck(L_1778);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1778, ((int32_t)((int32_t)L_1779+(int32_t)2)));
		int32_t L_1780 = ((int32_t)((int32_t)L_1779+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_1777+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1778, L_1780))))));
		goto IL_0002;
	}

IL_29f4:
	{
		int32_t L_1781 = ___strpos;
		if ((((int32_t)L_1781) <= ((int32_t)0)))
		{
			goto IL_2aa5;
		}
	}
	{
		String_t* L_1782 = (__this->___str_2);
		int32_t L_1783 = ___strpos;
		NullCheck(L_1782);
		uint16_t L_1784 = String_get_Chars_m407(L_1782, ((int32_t)((int32_t)L_1783-(int32_t)1)), /*hidden argument*/NULL);
		V_96 = L_1784;
		uint16_t L_1785 = V_96;
		V_97 = L_1785;
		int32_t L_1786 = V_97;
		ByteU5BU5D_t66* L_1787 = (__this->___program_1);
		int32_t L_1788 = ___pc;
		NullCheck(L_1787);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1787, ((int32_t)((int32_t)L_1788+(int32_t)1)));
		int32_t L_1789 = ((int32_t)((int32_t)L_1788+(int32_t)1));
		ByteU5BU5D_t66* L_1790 = (__this->___program_1);
		int32_t L_1791 = ___pc;
		NullCheck(L_1790);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1790, ((int32_t)((int32_t)L_1791+(int32_t)2)));
		int32_t L_1792 = ((int32_t)((int32_t)L_1791+(int32_t)2));
		V_97 = ((int32_t)((int32_t)L_1786-(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1787, L_1789))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1790, L_1792))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_1793 = (__this->___program_1);
		int32_t L_1794 = ___pc;
		NullCheck(L_1793);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1793, ((int32_t)((int32_t)L_1794+(int32_t)3)));
		int32_t L_1795 = ((int32_t)((int32_t)L_1794+(int32_t)3));
		ByteU5BU5D_t66* L_1796 = (__this->___program_1);
		int32_t L_1797 = ___pc;
		NullCheck(L_1796);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1796, ((int32_t)((int32_t)L_1797+(int32_t)4)));
		int32_t L_1798 = ((int32_t)((int32_t)L_1797+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1793, L_1795))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1796, L_1798))<<(int32_t)8))));
		int32_t L_1799 = V_97;
		if ((((int32_t)L_1799) < ((int32_t)0)))
		{
			goto IL_2aa5;
		}
	}
	{
		int32_t L_1800 = V_97;
		int32_t L_1801 = V_1;
		if ((((int32_t)L_1800) >= ((int32_t)((int32_t)((int32_t)L_1801<<(int32_t)3)))))
		{
			goto IL_2aa5;
		}
	}
	{
		ByteU5BU5D_t66* L_1802 = (__this->___program_1);
		int32_t L_1803 = ___pc;
		int32_t L_1804 = V_97;
		NullCheck(L_1802);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1802, ((int32_t)((int32_t)((int32_t)((int32_t)L_1803+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1804>>(int32_t)3)))));
		int32_t L_1805 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1803+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1804>>(int32_t)3))));
		int32_t L_1806 = V_97;
		if (!((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1802, L_1805))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1806&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_2aa5;
		}
	}
	{
		int32_t L_1807 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1807-(int32_t)1));
		int32_t L_1808 = V_0;
		if (!L_1808)
		{
			goto IL_2a83;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2a83:
	{
		int32_t L_1809 = ___pc;
		ByteU5BU5D_t66* L_1810 = (__this->___program_1);
		int32_t L_1811 = ___pc;
		NullCheck(L_1810);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1810, ((int32_t)((int32_t)L_1811+(int32_t)3)));
		int32_t L_1812 = ((int32_t)((int32_t)L_1811+(int32_t)3));
		ByteU5BU5D_t66* L_1813 = (__this->___program_1);
		int32_t L_1814 = ___pc;
		NullCheck(L_1813);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1813, ((int32_t)((int32_t)L_1814+(int32_t)4)));
		int32_t L_1815 = ((int32_t)((int32_t)L_1814+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_1809+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1810, L_1812))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1813, L_1815))<<(int32_t)8))))))));
		goto IL_0002;
	}

IL_2aa5:
	{
		int32_t L_1816 = V_0;
		if (L_1816)
		{
			goto IL_2aad;
		}
	}
	{
		return 0;
	}

IL_2aad:
	{
		int32_t L_1817 = ___pc;
		ByteU5BU5D_t66* L_1818 = (__this->___program_1);
		int32_t L_1819 = ___pc;
		NullCheck(L_1818);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1818, ((int32_t)((int32_t)L_1819+(int32_t)3)));
		int32_t L_1820 = ((int32_t)((int32_t)L_1819+(int32_t)3));
		ByteU5BU5D_t66* L_1821 = (__this->___program_1);
		int32_t L_1822 = ___pc;
		NullCheck(L_1821);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1821, ((int32_t)((int32_t)L_1822+(int32_t)4)));
		int32_t L_1823 = ((int32_t)((int32_t)L_1822+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_1817+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1818, L_1820))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1821, L_1823))<<(int32_t)8))))))));
		goto IL_0002;
	}

IL_2acf:
	{
		int32_t L_1824 = ___strpos;
		if ((((int32_t)L_1824) <= ((int32_t)0)))
		{
			goto IL_2b16;
		}
	}
	{
		String_t* L_1825 = (__this->___str_2);
		int32_t L_1826 = ___strpos;
		NullCheck(L_1825);
		uint16_t L_1827 = String_get_Chars_m407(L_1825, ((int32_t)((int32_t)L_1826-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1828 = Char_ToLower_m6225(NULL /*static, unused*/, L_1827, /*hidden argument*/NULL);
		V_98 = L_1828;
		uint16_t L_1829 = V_98;
		ByteU5BU5D_t66* L_1830 = (__this->___program_1);
		int32_t L_1831 = ___pc;
		NullCheck(L_1830);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1830, ((int32_t)((int32_t)L_1831+(int32_t)1)));
		int32_t L_1832 = ((int32_t)((int32_t)L_1831+(int32_t)1));
		if ((!(((uint32_t)L_1829) == ((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1830, L_1832))))))
		{
			goto IL_2b16;
		}
	}
	{
		int32_t L_1833 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1833-(int32_t)1));
		int32_t L_1834 = V_0;
		if (!L_1834)
		{
			goto IL_2b0c;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2b0c:
	{
		int32_t L_1835 = ___pc;
		___pc = ((int32_t)((int32_t)L_1835+(int32_t)2));
		goto IL_0002;
	}

IL_2b16:
	{
		int32_t L_1836 = V_0;
		if (L_1836)
		{
			goto IL_2b1e;
		}
	}
	{
		return 0;
	}

IL_2b1e:
	{
		int32_t L_1837 = ___pc;
		___pc = ((int32_t)((int32_t)L_1837+(int32_t)2));
		goto IL_0002;
	}

IL_2b28:
	{
		int32_t L_1838 = ___strpos;
		if ((((int32_t)L_1838) <= ((int32_t)0)))
		{
			goto IL_2b80;
		}
	}
	{
		String_t* L_1839 = (__this->___str_2);
		int32_t L_1840 = ___strpos;
		NullCheck(L_1839);
		uint16_t L_1841 = String_get_Chars_m407(L_1839, ((int32_t)((int32_t)L_1840-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1842 = Char_ToLower_m6225(NULL /*static, unused*/, L_1841, /*hidden argument*/NULL);
		V_99 = L_1842;
		uint16_t L_1843 = V_99;
		ByteU5BU5D_t66* L_1844 = (__this->___program_1);
		int32_t L_1845 = ___pc;
		NullCheck(L_1844);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1844, ((int32_t)((int32_t)L_1845+(int32_t)1)));
		int32_t L_1846 = ((int32_t)((int32_t)L_1845+(int32_t)1));
		if ((((int32_t)L_1843) < ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1844, L_1846)))))
		{
			goto IL_2b80;
		}
	}
	{
		uint16_t L_1847 = V_99;
		ByteU5BU5D_t66* L_1848 = (__this->___program_1);
		int32_t L_1849 = ___pc;
		NullCheck(L_1848);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1848, ((int32_t)((int32_t)L_1849+(int32_t)2)));
		int32_t L_1850 = ((int32_t)((int32_t)L_1849+(int32_t)2));
		if ((((int32_t)L_1847) > ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1848, L_1850)))))
		{
			goto IL_2b80;
		}
	}
	{
		int32_t L_1851 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1851-(int32_t)1));
		int32_t L_1852 = V_0;
		if (!L_1852)
		{
			goto IL_2b76;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2b76:
	{
		int32_t L_1853 = ___pc;
		___pc = ((int32_t)((int32_t)L_1853+(int32_t)3));
		goto IL_0002;
	}

IL_2b80:
	{
		int32_t L_1854 = V_0;
		if (L_1854)
		{
			goto IL_2b88;
		}
	}
	{
		return 0;
	}

IL_2b88:
	{
		int32_t L_1855 = ___pc;
		___pc = ((int32_t)((int32_t)L_1855+(int32_t)3));
		goto IL_0002;
	}

IL_2b92:
	{
		int32_t L_1856 = ___strpos;
		if ((((int32_t)L_1856) <= ((int32_t)0)))
		{
			goto IL_2c04;
		}
	}
	{
		String_t* L_1857 = (__this->___str_2);
		int32_t L_1858 = ___strpos;
		NullCheck(L_1857);
		uint16_t L_1859 = String_get_Chars_m407(L_1857, ((int32_t)((int32_t)L_1858-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1860 = Char_ToLower_m6225(NULL /*static, unused*/, L_1859, /*hidden argument*/NULL);
		V_100 = L_1860;
		uint16_t L_1861 = V_100;
		ByteU5BU5D_t66* L_1862 = (__this->___program_1);
		int32_t L_1863 = ___pc;
		NullCheck(L_1862);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1862, ((int32_t)((int32_t)L_1863+(int32_t)1)));
		int32_t L_1864 = ((int32_t)((int32_t)L_1863+(int32_t)1));
		ByteU5BU5D_t66* L_1865 = (__this->___program_1);
		int32_t L_1866 = ___pc;
		NullCheck(L_1865);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1865, ((int32_t)((int32_t)L_1866+(int32_t)2)));
		int32_t L_1867 = ((int32_t)((int32_t)L_1866+(int32_t)2));
		if ((((int32_t)L_1861) < ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1862, L_1864))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1865, L_1867))<<(int32_t)8)))))))
		{
			goto IL_2c04;
		}
	}
	{
		uint16_t L_1868 = V_100;
		ByteU5BU5D_t66* L_1869 = (__this->___program_1);
		int32_t L_1870 = ___pc;
		NullCheck(L_1869);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1869, ((int32_t)((int32_t)L_1870+(int32_t)3)));
		int32_t L_1871 = ((int32_t)((int32_t)L_1870+(int32_t)3));
		ByteU5BU5D_t66* L_1872 = (__this->___program_1);
		int32_t L_1873 = ___pc;
		NullCheck(L_1872);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1872, ((int32_t)((int32_t)L_1873+(int32_t)4)));
		int32_t L_1874 = ((int32_t)((int32_t)L_1873+(int32_t)4));
		if ((((int32_t)L_1868) > ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1869, L_1871))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1872, L_1874))<<(int32_t)8)))))))
		{
			goto IL_2c04;
		}
	}
	{
		int32_t L_1875 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1875-(int32_t)1));
		int32_t L_1876 = V_0;
		if (!L_1876)
		{
			goto IL_2bfa;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2bfa:
	{
		int32_t L_1877 = ___pc;
		___pc = ((int32_t)((int32_t)L_1877+(int32_t)5));
		goto IL_0002;
	}

IL_2c04:
	{
		int32_t L_1878 = V_0;
		if (L_1878)
		{
			goto IL_2c0c;
		}
	}
	{
		return 0;
	}

IL_2c0c:
	{
		int32_t L_1879 = ___pc;
		___pc = ((int32_t)((int32_t)L_1879+(int32_t)5));
		goto IL_0002;
	}

IL_2c16:
	{
		int32_t L_1880 = ___strpos;
		if ((((int32_t)L_1880) <= ((int32_t)0)))
		{
			goto IL_2c6a;
		}
	}
	{
		String_t* L_1881 = (__this->___str_2);
		int32_t L_1882 = ___strpos;
		NullCheck(L_1881);
		uint16_t L_1883 = String_get_Chars_m407(L_1881, ((int32_t)((int32_t)L_1882-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1884 = Char_ToLower_m6225(NULL /*static, unused*/, L_1883, /*hidden argument*/NULL);
		V_101 = L_1884;
		uint16_t L_1885 = V_101;
		ByteU5BU5D_t66* L_1886 = (__this->___program_1);
		int32_t L_1887 = ___pc;
		NullCheck(L_1886);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1886, ((int32_t)((int32_t)L_1887+(int32_t)1)));
		int32_t L_1888 = ((int32_t)((int32_t)L_1887+(int32_t)1));
		ByteU5BU5D_t66* L_1889 = (__this->___program_1);
		int32_t L_1890 = ___pc;
		NullCheck(L_1889);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1889, ((int32_t)((int32_t)L_1890+(int32_t)2)));
		int32_t L_1891 = ((int32_t)((int32_t)L_1890+(int32_t)2));
		if ((!(((uint32_t)L_1885) == ((uint32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1886, L_1888))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1889, L_1891))<<(int32_t)8))))))))
		{
			goto IL_2c6a;
		}
	}
	{
		int32_t L_1892 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1892-(int32_t)1));
		int32_t L_1893 = V_0;
		if (!L_1893)
		{
			goto IL_2c60;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2c60:
	{
		int32_t L_1894 = ___pc;
		___pc = ((int32_t)((int32_t)L_1894+(int32_t)3));
		goto IL_0002;
	}

IL_2c6a:
	{
		int32_t L_1895 = V_0;
		if (L_1895)
		{
			goto IL_2c72;
		}
	}
	{
		return 0;
	}

IL_2c72:
	{
		int32_t L_1896 = ___pc;
		___pc = ((int32_t)((int32_t)L_1896+(int32_t)3));
		goto IL_0002;
	}

IL_2c7c:
	{
		int32_t L_1897 = ___strpos;
		if ((((int32_t)L_1897) <= ((int32_t)0)))
		{
			goto IL_2d0b;
		}
	}
	{
		String_t* L_1898 = (__this->___str_2);
		int32_t L_1899 = ___strpos;
		NullCheck(L_1898);
		uint16_t L_1900 = String_get_Chars_m407(L_1898, ((int32_t)((int32_t)L_1899-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1901 = Char_ToLower_m6225(NULL /*static, unused*/, L_1900, /*hidden argument*/NULL);
		V_102 = L_1901;
		uint16_t L_1902 = V_102;
		V_103 = L_1902;
		int32_t L_1903 = V_103;
		ByteU5BU5D_t66* L_1904 = (__this->___program_1);
		int32_t L_1905 = ___pc;
		NullCheck(L_1904);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1904, ((int32_t)((int32_t)L_1905+(int32_t)1)));
		int32_t L_1906 = ((int32_t)((int32_t)L_1905+(int32_t)1));
		V_103 = ((int32_t)((int32_t)L_1903-(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1904, L_1906))));
		ByteU5BU5D_t66* L_1907 = (__this->___program_1);
		int32_t L_1908 = ___pc;
		NullCheck(L_1907);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1907, ((int32_t)((int32_t)L_1908+(int32_t)2)));
		int32_t L_1909 = ((int32_t)((int32_t)L_1908+(int32_t)2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1907, L_1909));
		int32_t L_1910 = V_103;
		if ((((int32_t)L_1910) < ((int32_t)0)))
		{
			goto IL_2d0b;
		}
	}
	{
		int32_t L_1911 = V_103;
		int32_t L_1912 = V_1;
		if ((((int32_t)L_1911) >= ((int32_t)((int32_t)((int32_t)L_1912<<(int32_t)3)))))
		{
			goto IL_2d0b;
		}
	}
	{
		ByteU5BU5D_t66* L_1913 = (__this->___program_1);
		int32_t L_1914 = ___pc;
		int32_t L_1915 = V_103;
		NullCheck(L_1913);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1913, ((int32_t)((int32_t)((int32_t)((int32_t)L_1914+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1915>>(int32_t)3)))));
		int32_t L_1916 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1914+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_1915>>(int32_t)3))));
		int32_t L_1917 = V_103;
		if (!((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1913, L_1916))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1917&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_2d0b;
		}
	}
	{
		int32_t L_1918 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1918-(int32_t)1));
		int32_t L_1919 = V_0;
		if (!L_1919)
		{
			goto IL_2cf6;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2cf6:
	{
		int32_t L_1920 = ___pc;
		ByteU5BU5D_t66* L_1921 = (__this->___program_1);
		int32_t L_1922 = ___pc;
		NullCheck(L_1921);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1921, ((int32_t)((int32_t)L_1922+(int32_t)2)));
		int32_t L_1923 = ((int32_t)((int32_t)L_1922+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_1920+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1921, L_1923))))));
		goto IL_0002;
	}

IL_2d0b:
	{
		int32_t L_1924 = V_0;
		if (L_1924)
		{
			goto IL_2d13;
		}
	}
	{
		return 0;
	}

IL_2d13:
	{
		int32_t L_1925 = ___pc;
		ByteU5BU5D_t66* L_1926 = (__this->___program_1);
		int32_t L_1927 = ___pc;
		NullCheck(L_1926);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1926, ((int32_t)((int32_t)L_1927+(int32_t)2)));
		int32_t L_1928 = ((int32_t)((int32_t)L_1927+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_1925+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1926, L_1928))))));
		goto IL_0002;
	}

IL_2d28:
	{
		int32_t L_1929 = ___strpos;
		if ((((int32_t)L_1929) <= ((int32_t)0)))
		{
			goto IL_2dde;
		}
	}
	{
		String_t* L_1930 = (__this->___str_2);
		int32_t L_1931 = ___strpos;
		NullCheck(L_1930);
		uint16_t L_1932 = String_get_Chars_m407(L_1930, ((int32_t)((int32_t)L_1931-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_1933 = Char_ToLower_m6225(NULL /*static, unused*/, L_1932, /*hidden argument*/NULL);
		V_104 = L_1933;
		uint16_t L_1934 = V_104;
		V_105 = L_1934;
		int32_t L_1935 = V_105;
		ByteU5BU5D_t66* L_1936 = (__this->___program_1);
		int32_t L_1937 = ___pc;
		NullCheck(L_1936);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1936, ((int32_t)((int32_t)L_1937+(int32_t)1)));
		int32_t L_1938 = ((int32_t)((int32_t)L_1937+(int32_t)1));
		ByteU5BU5D_t66* L_1939 = (__this->___program_1);
		int32_t L_1940 = ___pc;
		NullCheck(L_1939);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1939, ((int32_t)((int32_t)L_1940+(int32_t)2)));
		int32_t L_1941 = ((int32_t)((int32_t)L_1940+(int32_t)2));
		V_105 = ((int32_t)((int32_t)L_1935-(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1936, L_1938))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1939, L_1941))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_1942 = (__this->___program_1);
		int32_t L_1943 = ___pc;
		NullCheck(L_1942);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1942, ((int32_t)((int32_t)L_1943+(int32_t)3)));
		int32_t L_1944 = ((int32_t)((int32_t)L_1943+(int32_t)3));
		ByteU5BU5D_t66* L_1945 = (__this->___program_1);
		int32_t L_1946 = ___pc;
		NullCheck(L_1945);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1945, ((int32_t)((int32_t)L_1946+(int32_t)4)));
		int32_t L_1947 = ((int32_t)((int32_t)L_1946+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1942, L_1944))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1945, L_1947))<<(int32_t)8))));
		int32_t L_1948 = V_105;
		if ((((int32_t)L_1948) < ((int32_t)0)))
		{
			goto IL_2dde;
		}
	}
	{
		int32_t L_1949 = V_105;
		int32_t L_1950 = V_1;
		if ((((int32_t)L_1949) >= ((int32_t)((int32_t)((int32_t)L_1950<<(int32_t)3)))))
		{
			goto IL_2dde;
		}
	}
	{
		ByteU5BU5D_t66* L_1951 = (__this->___program_1);
		int32_t L_1952 = ___pc;
		int32_t L_1953 = V_105;
		NullCheck(L_1951);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1951, ((int32_t)((int32_t)((int32_t)((int32_t)L_1952+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1953>>(int32_t)3)))));
		int32_t L_1954 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1952+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_1953>>(int32_t)3))));
		int32_t L_1955 = V_105;
		if (!((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1951, L_1954))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1955&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_2dde;
		}
	}
	{
		int32_t L_1956 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1956-(int32_t)1));
		int32_t L_1957 = V_0;
		if (!L_1957)
		{
			goto IL_2dbc;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2dbc:
	{
		int32_t L_1958 = ___pc;
		ByteU5BU5D_t66* L_1959 = (__this->___program_1);
		int32_t L_1960 = ___pc;
		NullCheck(L_1959);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1959, ((int32_t)((int32_t)L_1960+(int32_t)3)));
		int32_t L_1961 = ((int32_t)((int32_t)L_1960+(int32_t)3));
		ByteU5BU5D_t66* L_1962 = (__this->___program_1);
		int32_t L_1963 = ___pc;
		NullCheck(L_1962);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1962, ((int32_t)((int32_t)L_1963+(int32_t)4)));
		int32_t L_1964 = ((int32_t)((int32_t)L_1963+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_1958+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1959, L_1961))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1962, L_1964))<<(int32_t)8))))))));
		goto IL_0002;
	}

IL_2dde:
	{
		int32_t L_1965 = V_0;
		if (L_1965)
		{
			goto IL_2de6;
		}
	}
	{
		return 0;
	}

IL_2de6:
	{
		int32_t L_1966 = ___pc;
		ByteU5BU5D_t66* L_1967 = (__this->___program_1);
		int32_t L_1968 = ___pc;
		NullCheck(L_1967);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1967, ((int32_t)((int32_t)L_1968+(int32_t)3)));
		int32_t L_1969 = ((int32_t)((int32_t)L_1968+(int32_t)3));
		ByteU5BU5D_t66* L_1970 = (__this->___program_1);
		int32_t L_1971 = ___pc;
		NullCheck(L_1970);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1970, ((int32_t)((int32_t)L_1971+(int32_t)4)));
		int32_t L_1972 = ((int32_t)((int32_t)L_1971+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_1966+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1967, L_1969))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1970, L_1972))<<(int32_t)8))))))));
		goto IL_0002;
	}

IL_2e08:
	{
		int32_t L_1973 = ___strpos;
		if ((((int32_t)L_1973) <= ((int32_t)0)))
		{
			goto IL_2e5c;
		}
	}
	{
		String_t* L_1974 = (__this->___str_2);
		int32_t L_1975 = ___strpos;
		NullCheck(L_1974);
		uint16_t L_1976 = String_get_Chars_m407(L_1974, ((int32_t)((int32_t)L_1975-(int32_t)1)), /*hidden argument*/NULL);
		V_106 = L_1976;
		uint16_t L_1977 = V_106;
		ByteU5BU5D_t66* L_1978 = (__this->___program_1);
		int32_t L_1979 = ___pc;
		NullCheck(L_1978);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1978, ((int32_t)((int32_t)L_1979+(int32_t)1)));
		int32_t L_1980 = ((int32_t)((int32_t)L_1979+(int32_t)1));
		if ((((int32_t)L_1977) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1978, L_1980)))))
		{
			goto IL_2e5c;
		}
	}
	{
		int32_t L_1981 = ___pc;
		___pc = ((int32_t)((int32_t)L_1981+(int32_t)2));
		int32_t L_1982 = V_0;
		if (!L_1982)
		{
			goto IL_2e44;
		}
	}
	{
		int32_t L_1983 = ___pc;
		int32_t L_1984 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1983+(int32_t)1))) == ((uint32_t)L_1984))))
		{
			goto IL_2e57;
		}
	}

IL_2e44:
	{
		int32_t L_1985 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_1985-(int32_t)1));
		int32_t L_1986 = ___pc;
		int32_t L_1987 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_1986+(int32_t)1))) == ((uint32_t)L_1987))))
		{
			goto IL_2e57;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2e57:
	{
		goto IL_0002;
	}

IL_2e5c:
	{
		return 0;
	}

IL_2e5e:
	{
		int32_t L_1988 = ___strpos;
		if ((((int32_t)L_1988) <= ((int32_t)0)))
		{
			goto IL_2ec3;
		}
	}
	{
		String_t* L_1989 = (__this->___str_2);
		int32_t L_1990 = ___strpos;
		NullCheck(L_1989);
		uint16_t L_1991 = String_get_Chars_m407(L_1989, ((int32_t)((int32_t)L_1990-(int32_t)1)), /*hidden argument*/NULL);
		V_107 = L_1991;
		uint16_t L_1992 = V_107;
		ByteU5BU5D_t66* L_1993 = (__this->___program_1);
		int32_t L_1994 = ___pc;
		NullCheck(L_1993);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1993, ((int32_t)((int32_t)L_1994+(int32_t)1)));
		int32_t L_1995 = ((int32_t)((int32_t)L_1994+(int32_t)1));
		if ((((int32_t)L_1992) < ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1993, L_1995)))))
		{
			goto IL_2e97;
		}
	}
	{
		uint16_t L_1996 = V_107;
		ByteU5BU5D_t66* L_1997 = (__this->___program_1);
		int32_t L_1998 = ___pc;
		NullCheck(L_1997);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1997, ((int32_t)((int32_t)L_1998+(int32_t)2)));
		int32_t L_1999 = ((int32_t)((int32_t)L_1998+(int32_t)2));
		if ((((int32_t)L_1996) <= ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1997, L_1999)))))
		{
			goto IL_2ec3;
		}
	}

IL_2e97:
	{
		int32_t L_2000 = ___pc;
		___pc = ((int32_t)((int32_t)L_2000+(int32_t)3));
		int32_t L_2001 = V_0;
		if (!L_2001)
		{
			goto IL_2eab;
		}
	}
	{
		int32_t L_2002 = ___pc;
		int32_t L_2003 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2002+(int32_t)1))) == ((uint32_t)L_2003))))
		{
			goto IL_2ebe;
		}
	}

IL_2eab:
	{
		int32_t L_2004 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2004-(int32_t)1));
		int32_t L_2005 = ___pc;
		int32_t L_2006 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2005+(int32_t)1))) == ((uint32_t)L_2006))))
		{
			goto IL_2ebe;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2ebe:
	{
		goto IL_0002;
	}

IL_2ec3:
	{
		return 0;
	}

IL_2ec5:
	{
		int32_t L_2007 = ___strpos;
		if ((((int32_t)L_2007) <= ((int32_t)0)))
		{
			goto IL_2f44;
		}
	}
	{
		String_t* L_2008 = (__this->___str_2);
		int32_t L_2009 = ___strpos;
		NullCheck(L_2008);
		uint16_t L_2010 = String_get_Chars_m407(L_2008, ((int32_t)((int32_t)L_2009-(int32_t)1)), /*hidden argument*/NULL);
		V_108 = L_2010;
		uint16_t L_2011 = V_108;
		ByteU5BU5D_t66* L_2012 = (__this->___program_1);
		int32_t L_2013 = ___pc;
		NullCheck(L_2012);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2012, ((int32_t)((int32_t)L_2013+(int32_t)1)));
		int32_t L_2014 = ((int32_t)((int32_t)L_2013+(int32_t)1));
		ByteU5BU5D_t66* L_2015 = (__this->___program_1);
		int32_t L_2016 = ___pc;
		NullCheck(L_2015);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2015, ((int32_t)((int32_t)L_2016+(int32_t)2)));
		int32_t L_2017 = ((int32_t)((int32_t)L_2016+(int32_t)2));
		if ((((int32_t)L_2011) < ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2012, L_2014))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2015, L_2017))<<(int32_t)8)))))))
		{
			goto IL_2f18;
		}
	}
	{
		uint16_t L_2018 = V_108;
		ByteU5BU5D_t66* L_2019 = (__this->___program_1);
		int32_t L_2020 = ___pc;
		NullCheck(L_2019);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2019, ((int32_t)((int32_t)L_2020+(int32_t)3)));
		int32_t L_2021 = ((int32_t)((int32_t)L_2020+(int32_t)3));
		ByteU5BU5D_t66* L_2022 = (__this->___program_1);
		int32_t L_2023 = ___pc;
		NullCheck(L_2022);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2022, ((int32_t)((int32_t)L_2023+(int32_t)4)));
		int32_t L_2024 = ((int32_t)((int32_t)L_2023+(int32_t)4));
		if ((((int32_t)L_2018) <= ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2019, L_2021))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2022, L_2024))<<(int32_t)8)))))))
		{
			goto IL_2f44;
		}
	}

IL_2f18:
	{
		int32_t L_2025 = ___pc;
		___pc = ((int32_t)((int32_t)L_2025+(int32_t)5));
		int32_t L_2026 = V_0;
		if (!L_2026)
		{
			goto IL_2f2c;
		}
	}
	{
		int32_t L_2027 = ___pc;
		int32_t L_2028 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2027+(int32_t)1))) == ((uint32_t)L_2028))))
		{
			goto IL_2f3f;
		}
	}

IL_2f2c:
	{
		int32_t L_2029 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2029-(int32_t)1));
		int32_t L_2030 = ___pc;
		int32_t L_2031 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2030+(int32_t)1))) == ((uint32_t)L_2031))))
		{
			goto IL_2f3f;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2f3f:
	{
		goto IL_0002;
	}

IL_2f44:
	{
		return 0;
	}

IL_2f46:
	{
		int32_t L_2032 = ___strpos;
		if ((((int32_t)L_2032) <= ((int32_t)0)))
		{
			goto IL_2fa7;
		}
	}
	{
		String_t* L_2033 = (__this->___str_2);
		int32_t L_2034 = ___strpos;
		NullCheck(L_2033);
		uint16_t L_2035 = String_get_Chars_m407(L_2033, ((int32_t)((int32_t)L_2034-(int32_t)1)), /*hidden argument*/NULL);
		V_109 = L_2035;
		uint16_t L_2036 = V_109;
		ByteU5BU5D_t66* L_2037 = (__this->___program_1);
		int32_t L_2038 = ___pc;
		NullCheck(L_2037);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2037, ((int32_t)((int32_t)L_2038+(int32_t)1)));
		int32_t L_2039 = ((int32_t)((int32_t)L_2038+(int32_t)1));
		ByteU5BU5D_t66* L_2040 = (__this->___program_1);
		int32_t L_2041 = ___pc;
		NullCheck(L_2040);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2040, ((int32_t)((int32_t)L_2041+(int32_t)2)));
		int32_t L_2042 = ((int32_t)((int32_t)L_2041+(int32_t)2));
		if ((((int32_t)L_2036) == ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2037, L_2039))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2040, L_2042))<<(int32_t)8)))))))
		{
			goto IL_2fa7;
		}
	}
	{
		int32_t L_2043 = ___pc;
		___pc = ((int32_t)((int32_t)L_2043+(int32_t)3));
		int32_t L_2044 = V_0;
		if (!L_2044)
		{
			goto IL_2f8f;
		}
	}
	{
		int32_t L_2045 = ___pc;
		int32_t L_2046 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2045+(int32_t)1))) == ((uint32_t)L_2046))))
		{
			goto IL_2fa2;
		}
	}

IL_2f8f:
	{
		int32_t L_2047 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2047-(int32_t)1));
		int32_t L_2048 = ___pc;
		int32_t L_2049 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2048+(int32_t)1))) == ((uint32_t)L_2049))))
		{
			goto IL_2fa2;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2fa2:
	{
		goto IL_0002;
	}

IL_2fa7:
	{
		return 0;
	}

IL_2fa9:
	{
		int32_t L_2050 = ___strpos;
		if ((((int32_t)L_2050) <= ((int32_t)0)))
		{
			goto IL_2ff5;
		}
	}
	{
		String_t* L_2051 = (__this->___str_2);
		int32_t L_2052 = ___strpos;
		NullCheck(L_2051);
		uint16_t L_2053 = String_get_Chars_m407(L_2051, ((int32_t)((int32_t)L_2052-(int32_t)1)), /*hidden argument*/NULL);
		V_110 = L_2053;
		uint16_t L_2054 = V_110;
		if ((!(((uint32_t)L_2054) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_2ff5;
		}
	}
	{
		int32_t L_2055 = ___pc;
		___pc = ((int32_t)((int32_t)L_2055+(int32_t)1));
		int32_t L_2056 = V_0;
		if (!L_2056)
		{
			goto IL_2fdd;
		}
	}
	{
		int32_t L_2057 = ___pc;
		int32_t L_2058 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2057+(int32_t)1))) == ((uint32_t)L_2058))))
		{
			goto IL_2ff0;
		}
	}

IL_2fdd:
	{
		int32_t L_2059 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2059-(int32_t)1));
		int32_t L_2060 = ___pc;
		int32_t L_2061 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2060+(int32_t)1))) == ((uint32_t)L_2061))))
		{
			goto IL_2ff0;
		}
	}
	{
		goto IL_3e1b;
	}

IL_2ff0:
	{
		goto IL_0002;
	}

IL_2ff5:
	{
		return 0;
	}

IL_2ff7:
	{
		int32_t L_2062 = ___strpos;
		if ((((int32_t)L_2062) <= ((int32_t)0)))
		{
			goto IL_300e;
		}
	}
	{
		String_t* L_2063 = (__this->___str_2);
		int32_t L_2064 = ___strpos;
		NullCheck(L_2063);
		uint16_t L_2065 = String_get_Chars_m407(L_2063, ((int32_t)((int32_t)L_2064-(int32_t)1)), /*hidden argument*/NULL);
		V_111 = L_2065;
	}

IL_300e:
	{
		return 0;
	}

IL_3010:
	{
		int32_t L_2066 = ___strpos;
		if ((((int32_t)L_2066) <= ((int32_t)0)))
		{
			goto IL_306d;
		}
	}
	{
		String_t* L_2067 = (__this->___str_2);
		int32_t L_2068 = ___strpos;
		NullCheck(L_2067);
		uint16_t L_2069 = String_get_Chars_m407(L_2067, ((int32_t)((int32_t)L_2068-(int32_t)1)), /*hidden argument*/NULL);
		V_112 = L_2069;
		uint16_t L_2070 = V_112;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_2071 = Char_IsLetterOrDigit_m14810(NULL /*static, unused*/, L_2070, /*hidden argument*/NULL);
		if (L_2071)
		{
			goto IL_306d;
		}
	}
	{
		uint16_t L_2072 = V_112;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_2073 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_2072, /*hidden argument*/NULL);
		if ((((int32_t)L_2073) == ((int32_t)((int32_t)18))))
		{
			goto IL_306d;
		}
	}
	{
		int32_t L_2074 = ___pc;
		___pc = ((int32_t)((int32_t)L_2074+(int32_t)1));
		int32_t L_2075 = V_0;
		if (!L_2075)
		{
			goto IL_3055;
		}
	}
	{
		int32_t L_2076 = ___pc;
		int32_t L_2077 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2076+(int32_t)1))) == ((uint32_t)L_2077))))
		{
			goto IL_3068;
		}
	}

IL_3055:
	{
		int32_t L_2078 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2078-(int32_t)1));
		int32_t L_2079 = ___pc;
		int32_t L_2080 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2079+(int32_t)1))) == ((uint32_t)L_2080))))
		{
			goto IL_3068;
		}
	}
	{
		goto IL_3e1b;
	}

IL_3068:
	{
		goto IL_0002;
	}

IL_306d:
	{
		return 0;
	}

IL_306f:
	{
		int32_t L_2081 = ___strpos;
		if ((((int32_t)L_2081) <= ((int32_t)0)))
		{
			goto IL_30be;
		}
	}
	{
		String_t* L_2082 = (__this->___str_2);
		int32_t L_2083 = ___strpos;
		NullCheck(L_2082);
		uint16_t L_2084 = String_get_Chars_m407(L_2082, ((int32_t)((int32_t)L_2083-(int32_t)1)), /*hidden argument*/NULL);
		V_113 = L_2084;
		uint16_t L_2085 = V_113;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_2086 = Char_IsDigit_m18100(NULL /*static, unused*/, L_2085, /*hidden argument*/NULL);
		if (L_2086)
		{
			goto IL_30be;
		}
	}
	{
		int32_t L_2087 = ___pc;
		___pc = ((int32_t)((int32_t)L_2087+(int32_t)1));
		int32_t L_2088 = V_0;
		if (!L_2088)
		{
			goto IL_30a6;
		}
	}
	{
		int32_t L_2089 = ___pc;
		int32_t L_2090 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2089+(int32_t)1))) == ((uint32_t)L_2090))))
		{
			goto IL_30b9;
		}
	}

IL_30a6:
	{
		int32_t L_2091 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2091-(int32_t)1));
		int32_t L_2092 = ___pc;
		int32_t L_2093 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2092+(int32_t)1))) == ((uint32_t)L_2093))))
		{
			goto IL_30b9;
		}
	}
	{
		goto IL_3e1b;
	}

IL_30b9:
	{
		goto IL_0002;
	}

IL_30be:
	{
		return 0;
	}

IL_30c0:
	{
		int32_t L_2094 = ___strpos;
		if ((((int32_t)L_2094) <= ((int32_t)0)))
		{
			goto IL_310f;
		}
	}
	{
		String_t* L_2095 = (__this->___str_2);
		int32_t L_2096 = ___strpos;
		NullCheck(L_2095);
		uint16_t L_2097 = String_get_Chars_m407(L_2095, ((int32_t)((int32_t)L_2096-(int32_t)1)), /*hidden argument*/NULL);
		V_114 = L_2097;
		uint16_t L_2098 = V_114;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_2099 = Char_IsWhiteSpace_m4129(NULL /*static, unused*/, L_2098, /*hidden argument*/NULL);
		if (L_2099)
		{
			goto IL_310f;
		}
	}
	{
		int32_t L_2100 = ___pc;
		___pc = ((int32_t)((int32_t)L_2100+(int32_t)1));
		int32_t L_2101 = V_0;
		if (!L_2101)
		{
			goto IL_30f7;
		}
	}
	{
		int32_t L_2102 = ___pc;
		int32_t L_2103 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2102+(int32_t)1))) == ((uint32_t)L_2103))))
		{
			goto IL_310a;
		}
	}

IL_30f7:
	{
		int32_t L_2104 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2104-(int32_t)1));
		int32_t L_2105 = ___pc;
		int32_t L_2106 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2105+(int32_t)1))) == ((uint32_t)L_2106))))
		{
			goto IL_310a;
		}
	}
	{
		goto IL_3e1b;
	}

IL_310a:
	{
		goto IL_0002;
	}

IL_310f:
	{
		return 0;
	}

IL_3111:
	{
		int32_t L_2107 = ___strpos;
		if ((((int32_t)L_2107) <= ((int32_t)0)))
		{
			goto IL_3193;
		}
	}
	{
		String_t* L_2108 = (__this->___str_2);
		int32_t L_2109 = ___strpos;
		NullCheck(L_2108);
		uint16_t L_2110 = String_get_Chars_m407(L_2108, ((int32_t)((int32_t)L_2109-(int32_t)1)), /*hidden argument*/NULL);
		V_115 = L_2110;
		uint16_t L_2111 = V_115;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2111)))
		{
			goto IL_313a;
		}
	}
	{
		uint16_t L_2112 = V_115;
		if ((((int32_t)L_2112) <= ((int32_t)((int32_t)122))))
		{
			goto IL_3193;
		}
	}

IL_313a:
	{
		uint16_t L_2113 = V_115;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_2113)))
		{
			goto IL_314c;
		}
	}
	{
		uint16_t L_2114 = V_115;
		if ((((int32_t)L_2114) <= ((int32_t)((int32_t)90))))
		{
			goto IL_3193;
		}
	}

IL_314c:
	{
		uint16_t L_2115 = V_115;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_2115)))
		{
			goto IL_315e;
		}
	}
	{
		uint16_t L_2116 = V_115;
		if ((((int32_t)L_2116) <= ((int32_t)((int32_t)57))))
		{
			goto IL_3193;
		}
	}

IL_315e:
	{
		uint16_t L_2117 = V_115;
		if ((((int32_t)L_2117) == ((int32_t)((int32_t)95))))
		{
			goto IL_3193;
		}
	}
	{
		int32_t L_2118 = ___pc;
		___pc = ((int32_t)((int32_t)L_2118+(int32_t)1));
		int32_t L_2119 = V_0;
		if (!L_2119)
		{
			goto IL_317b;
		}
	}
	{
		int32_t L_2120 = ___pc;
		int32_t L_2121 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2120+(int32_t)1))) == ((uint32_t)L_2121))))
		{
			goto IL_318e;
		}
	}

IL_317b:
	{
		int32_t L_2122 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2122-(int32_t)1));
		int32_t L_2123 = ___pc;
		int32_t L_2124 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2123+(int32_t)1))) == ((uint32_t)L_2124))))
		{
			goto IL_318e;
		}
	}
	{
		goto IL_3e1b;
	}

IL_318e:
	{
		goto IL_0002;
	}

IL_3193:
	{
		return 0;
	}

IL_3195:
	{
		int32_t L_2125 = ___strpos;
		if ((((int32_t)L_2125) <= ((int32_t)0)))
		{
			goto IL_320e;
		}
	}
	{
		String_t* L_2126 = (__this->___str_2);
		int32_t L_2127 = ___strpos;
		NullCheck(L_2126);
		uint16_t L_2128 = String_get_Chars_m407(L_2126, ((int32_t)((int32_t)L_2127-(int32_t)1)), /*hidden argument*/NULL);
		V_116 = L_2128;
		uint16_t L_2129 = V_116;
		if ((((int32_t)L_2129) == ((int32_t)((int32_t)32))))
		{
			goto IL_320e;
		}
	}
	{
		uint16_t L_2130 = V_116;
		if ((((int32_t)L_2130) == ((int32_t)((int32_t)9))))
		{
			goto IL_320e;
		}
	}
	{
		uint16_t L_2131 = V_116;
		if ((((int32_t)L_2131) == ((int32_t)((int32_t)10))))
		{
			goto IL_320e;
		}
	}
	{
		uint16_t L_2132 = V_116;
		if ((((int32_t)L_2132) == ((int32_t)((int32_t)13))))
		{
			goto IL_320e;
		}
	}
	{
		uint16_t L_2133 = V_116;
		if ((((int32_t)L_2133) == ((int32_t)((int32_t)12))))
		{
			goto IL_320e;
		}
	}
	{
		uint16_t L_2134 = V_116;
		if ((((int32_t)L_2134) == ((int32_t)((int32_t)11))))
		{
			goto IL_320e;
		}
	}
	{
		int32_t L_2135 = ___pc;
		___pc = ((int32_t)((int32_t)L_2135+(int32_t)1));
		int32_t L_2136 = V_0;
		if (!L_2136)
		{
			goto IL_31f6;
		}
	}
	{
		int32_t L_2137 = ___pc;
		int32_t L_2138 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2137+(int32_t)1))) == ((uint32_t)L_2138))))
		{
			goto IL_3209;
		}
	}

IL_31f6:
	{
		int32_t L_2139 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2139-(int32_t)1));
		int32_t L_2140 = ___pc;
		int32_t L_2141 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2140+(int32_t)1))) == ((uint32_t)L_2141))))
		{
			goto IL_3209;
		}
	}
	{
		goto IL_3e1b;
	}

IL_3209:
	{
		goto IL_0002;
	}

IL_320e:
	{
		return 0;
	}

IL_3210:
	{
		int32_t L_2142 = ___strpos;
		if ((((int32_t)L_2142) <= ((int32_t)0)))
		{
			goto IL_3283;
		}
	}
	{
		String_t* L_2143 = (__this->___str_2);
		int32_t L_2144 = ___strpos;
		NullCheck(L_2143);
		uint16_t L_2145 = String_get_Chars_m407(L_2143, ((int32_t)((int32_t)L_2144-(int32_t)1)), /*hidden argument*/NULL);
		V_117 = L_2145;
		uint16_t L_2146 = V_117;
		if ((((int32_t)((int32_t)65279)) > ((int32_t)L_2146)))
		{
			goto IL_323f;
		}
	}
	{
		uint16_t L_2147 = V_117;
		if ((((int32_t)L_2147) <= ((int32_t)((int32_t)65279))))
		{
			goto IL_3283;
		}
	}

IL_323f:
	{
		uint16_t L_2148 = V_117;
		if ((((int32_t)((int32_t)65520)) > ((int32_t)L_2148)))
		{
			goto IL_3257;
		}
	}
	{
		uint16_t L_2149 = V_117;
		if ((((int32_t)L_2149) <= ((int32_t)((int32_t)65533))))
		{
			goto IL_3283;
		}
	}

IL_3257:
	{
		int32_t L_2150 = ___pc;
		___pc = ((int32_t)((int32_t)L_2150+(int32_t)1));
		int32_t L_2151 = V_0;
		if (!L_2151)
		{
			goto IL_326b;
		}
	}
	{
		int32_t L_2152 = ___pc;
		int32_t L_2153 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2152+(int32_t)1))) == ((uint32_t)L_2153))))
		{
			goto IL_327e;
		}
	}

IL_326b:
	{
		int32_t L_2154 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2154-(int32_t)1));
		int32_t L_2155 = ___pc;
		int32_t L_2156 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2155+(int32_t)1))) == ((uint32_t)L_2156))))
		{
			goto IL_327e;
		}
	}
	{
		goto IL_3e1b;
	}

IL_327e:
	{
		goto IL_0002;
	}

IL_3283:
	{
		return 0;
	}

IL_3285:
	{
		int32_t L_2157 = ___strpos;
		if ((((int32_t)L_2157) <= ((int32_t)0)))
		{
			goto IL_32de;
		}
	}
	{
		String_t* L_2158 = (__this->___str_2);
		int32_t L_2159 = ___strpos;
		NullCheck(L_2158);
		uint16_t L_2160 = String_get_Chars_m407(L_2158, ((int32_t)((int32_t)L_2159-(int32_t)1)), /*hidden argument*/NULL);
		V_118 = L_2160;
		uint16_t L_2161 = V_118;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		int32_t L_2162 = Char_GetUnicodeCategory_m18160(NULL /*static, unused*/, L_2161, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_2163 = (__this->___program_1);
		int32_t L_2164 = ___pc;
		NullCheck(L_2163);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2163, ((int32_t)((int32_t)L_2164+(int32_t)1)));
		int32_t L_2165 = ((int32_t)((int32_t)L_2164+(int32_t)1));
		if ((((int32_t)L_2162) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2163, L_2165)))))
		{
			goto IL_32de;
		}
	}
	{
		int32_t L_2166 = ___pc;
		___pc = ((int32_t)((int32_t)L_2166+(int32_t)2));
		int32_t L_2167 = V_0;
		if (!L_2167)
		{
			goto IL_32c6;
		}
	}
	{
		int32_t L_2168 = ___pc;
		int32_t L_2169 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2168+(int32_t)1))) == ((uint32_t)L_2169))))
		{
			goto IL_32d9;
		}
	}

IL_32c6:
	{
		int32_t L_2170 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2170-(int32_t)1));
		int32_t L_2171 = ___pc;
		int32_t L_2172 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2171+(int32_t)1))) == ((uint32_t)L_2172))))
		{
			goto IL_32d9;
		}
	}
	{
		goto IL_3e1b;
	}

IL_32d9:
	{
		goto IL_0002;
	}

IL_32de:
	{
		return 0;
	}

IL_32e0:
	{
		int32_t L_2173 = ___strpos;
		if ((((int32_t)L_2173) <= ((int32_t)0)))
		{
			goto IL_3339;
		}
	}
	{
		String_t* L_2174 = (__this->___str_2);
		int32_t L_2175 = ___strpos;
		NullCheck(L_2174);
		uint16_t L_2176 = String_get_Chars_m407(L_2174, ((int32_t)((int32_t)L_2175-(int32_t)1)), /*hidden argument*/NULL);
		V_119 = L_2176;
		ByteU5BU5D_t66* L_2177 = (__this->___program_1);
		int32_t L_2178 = ___pc;
		NullCheck(L_2177);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2177, ((int32_t)((int32_t)L_2178+(int32_t)1)));
		int32_t L_2179 = ((int32_t)((int32_t)L_2178+(int32_t)1));
		uint16_t L_2180 = V_119;
		bool L_2181 = CategoryUtils_IsCategory_m17463(NULL /*static, unused*/, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2177, L_2179)), L_2180, /*hidden argument*/NULL);
		if (L_2181)
		{
			goto IL_3339;
		}
	}
	{
		int32_t L_2182 = ___pc;
		___pc = ((int32_t)((int32_t)L_2182+(int32_t)2));
		int32_t L_2183 = V_0;
		if (!L_2183)
		{
			goto IL_3321;
		}
	}
	{
		int32_t L_2184 = ___pc;
		int32_t L_2185 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2184+(int32_t)1))) == ((uint32_t)L_2185))))
		{
			goto IL_3334;
		}
	}

IL_3321:
	{
		int32_t L_2186 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2186-(int32_t)1));
		int32_t L_2187 = ___pc;
		int32_t L_2188 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2187+(int32_t)1))) == ((uint32_t)L_2188))))
		{
			goto IL_3334;
		}
	}
	{
		goto IL_3e1b;
	}

IL_3334:
	{
		goto IL_0002;
	}

IL_3339:
	{
		return 0;
	}

IL_333b:
	{
		int32_t L_2189 = ___strpos;
		if ((((int32_t)L_2189) <= ((int32_t)0)))
		{
			goto IL_33d7;
		}
	}
	{
		String_t* L_2190 = (__this->___str_2);
		int32_t L_2191 = ___strpos;
		NullCheck(L_2190);
		uint16_t L_2192 = String_get_Chars_m407(L_2190, ((int32_t)((int32_t)L_2191-(int32_t)1)), /*hidden argument*/NULL);
		V_120 = L_2192;
		uint16_t L_2193 = V_120;
		V_121 = L_2193;
		int32_t L_2194 = V_121;
		ByteU5BU5D_t66* L_2195 = (__this->___program_1);
		int32_t L_2196 = ___pc;
		NullCheck(L_2195);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2195, ((int32_t)((int32_t)L_2196+(int32_t)1)));
		int32_t L_2197 = ((int32_t)((int32_t)L_2196+(int32_t)1));
		V_121 = ((int32_t)((int32_t)L_2194-(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2195, L_2197))));
		ByteU5BU5D_t66* L_2198 = (__this->___program_1);
		int32_t L_2199 = ___pc;
		NullCheck(L_2198);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2198, ((int32_t)((int32_t)L_2199+(int32_t)2)));
		int32_t L_2200 = ((int32_t)((int32_t)L_2199+(int32_t)2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2198, L_2200));
		int32_t L_2201 = V_121;
		if ((((int32_t)L_2201) < ((int32_t)0)))
		{
			goto IL_33a0;
		}
	}
	{
		int32_t L_2202 = V_121;
		int32_t L_2203 = V_1;
		if ((((int32_t)L_2202) >= ((int32_t)((int32_t)((int32_t)L_2203<<(int32_t)3)))))
		{
			goto IL_33a0;
		}
	}
	{
		ByteU5BU5D_t66* L_2204 = (__this->___program_1);
		int32_t L_2205 = ___pc;
		int32_t L_2206 = V_121;
		NullCheck(L_2204);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2204, ((int32_t)((int32_t)((int32_t)((int32_t)L_2205+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_2206>>(int32_t)3)))));
		int32_t L_2207 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2205+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_2206>>(int32_t)3))));
		int32_t L_2208 = V_121;
		if (((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2204, L_2207))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2208&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_33d7;
		}
	}

IL_33a0:
	{
		int32_t L_2209 = ___pc;
		ByteU5BU5D_t66* L_2210 = (__this->___program_1);
		int32_t L_2211 = ___pc;
		NullCheck(L_2210);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2210, ((int32_t)((int32_t)L_2211+(int32_t)2)));
		int32_t L_2212 = ((int32_t)((int32_t)L_2211+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_2209+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2210, L_2212))))));
		int32_t L_2213 = V_0;
		if (!L_2213)
		{
			goto IL_33bf;
		}
	}
	{
		int32_t L_2214 = ___pc;
		int32_t L_2215 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2214+(int32_t)1))) == ((uint32_t)L_2215))))
		{
			goto IL_33d2;
		}
	}

IL_33bf:
	{
		int32_t L_2216 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2216-(int32_t)1));
		int32_t L_2217 = ___pc;
		int32_t L_2218 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2217+(int32_t)1))) == ((uint32_t)L_2218))))
		{
			goto IL_33d2;
		}
	}
	{
		goto IL_3e1b;
	}

IL_33d2:
	{
		goto IL_0002;
	}

IL_33d7:
	{
		return 0;
	}

IL_33d9:
	{
		int32_t L_2219 = ___strpos;
		if ((((int32_t)L_2219) <= ((int32_t)0)))
		{
			goto IL_349c;
		}
	}
	{
		String_t* L_2220 = (__this->___str_2);
		int32_t L_2221 = ___strpos;
		NullCheck(L_2220);
		uint16_t L_2222 = String_get_Chars_m407(L_2220, ((int32_t)((int32_t)L_2221-(int32_t)1)), /*hidden argument*/NULL);
		V_122 = L_2222;
		uint16_t L_2223 = V_122;
		V_123 = L_2223;
		int32_t L_2224 = V_123;
		ByteU5BU5D_t66* L_2225 = (__this->___program_1);
		int32_t L_2226 = ___pc;
		NullCheck(L_2225);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2225, ((int32_t)((int32_t)L_2226+(int32_t)1)));
		int32_t L_2227 = ((int32_t)((int32_t)L_2226+(int32_t)1));
		ByteU5BU5D_t66* L_2228 = (__this->___program_1);
		int32_t L_2229 = ___pc;
		NullCheck(L_2228);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2228, ((int32_t)((int32_t)L_2229+(int32_t)2)));
		int32_t L_2230 = ((int32_t)((int32_t)L_2229+(int32_t)2));
		V_123 = ((int32_t)((int32_t)L_2224-(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2225, L_2227))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2228, L_2230))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_2231 = (__this->___program_1);
		int32_t L_2232 = ___pc;
		NullCheck(L_2231);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2231, ((int32_t)((int32_t)L_2232+(int32_t)3)));
		int32_t L_2233 = ((int32_t)((int32_t)L_2232+(int32_t)3));
		ByteU5BU5D_t66* L_2234 = (__this->___program_1);
		int32_t L_2235 = ___pc;
		NullCheck(L_2234);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2234, ((int32_t)((int32_t)L_2235+(int32_t)4)));
		int32_t L_2236 = ((int32_t)((int32_t)L_2235+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2231, L_2233))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2234, L_2236))<<(int32_t)8))));
		int32_t L_2237 = V_123;
		if ((((int32_t)L_2237) < ((int32_t)0)))
		{
			goto IL_3458;
		}
	}
	{
		int32_t L_2238 = V_123;
		int32_t L_2239 = V_1;
		if ((((int32_t)L_2238) >= ((int32_t)((int32_t)((int32_t)L_2239<<(int32_t)3)))))
		{
			goto IL_3458;
		}
	}
	{
		ByteU5BU5D_t66* L_2240 = (__this->___program_1);
		int32_t L_2241 = ___pc;
		int32_t L_2242 = V_123;
		NullCheck(L_2240);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2240, ((int32_t)((int32_t)((int32_t)((int32_t)L_2241+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_2242>>(int32_t)3)))));
		int32_t L_2243 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2241+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_2242>>(int32_t)3))));
		int32_t L_2244 = V_123;
		if (((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2240, L_2243))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2244&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_349c;
		}
	}

IL_3458:
	{
		int32_t L_2245 = ___pc;
		ByteU5BU5D_t66* L_2246 = (__this->___program_1);
		int32_t L_2247 = ___pc;
		NullCheck(L_2246);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2246, ((int32_t)((int32_t)L_2247+(int32_t)3)));
		int32_t L_2248 = ((int32_t)((int32_t)L_2247+(int32_t)3));
		ByteU5BU5D_t66* L_2249 = (__this->___program_1);
		int32_t L_2250 = ___pc;
		NullCheck(L_2249);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2249, ((int32_t)((int32_t)L_2250+(int32_t)4)));
		int32_t L_2251 = ((int32_t)((int32_t)L_2250+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_2245+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2246, L_2248))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2249, L_2251))<<(int32_t)8))))))));
		int32_t L_2252 = V_0;
		if (!L_2252)
		{
			goto IL_3484;
		}
	}
	{
		int32_t L_2253 = ___pc;
		int32_t L_2254 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2253+(int32_t)1))) == ((uint32_t)L_2254))))
		{
			goto IL_3497;
		}
	}

IL_3484:
	{
		int32_t L_2255 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2255-(int32_t)1));
		int32_t L_2256 = ___pc;
		int32_t L_2257 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2256+(int32_t)1))) == ((uint32_t)L_2257))))
		{
			goto IL_3497;
		}
	}
	{
		goto IL_3e1b;
	}

IL_3497:
	{
		goto IL_0002;
	}

IL_349c:
	{
		return 0;
	}

IL_349e:
	{
		int32_t L_2258 = ___strpos;
		if ((((int32_t)L_2258) <= ((int32_t)0)))
		{
			goto IL_34f7;
		}
	}
	{
		String_t* L_2259 = (__this->___str_2);
		int32_t L_2260 = ___strpos;
		NullCheck(L_2259);
		uint16_t L_2261 = String_get_Chars_m407(L_2259, ((int32_t)((int32_t)L_2260-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_2262 = Char_ToLower_m6225(NULL /*static, unused*/, L_2261, /*hidden argument*/NULL);
		V_124 = L_2262;
		uint16_t L_2263 = V_124;
		ByteU5BU5D_t66* L_2264 = (__this->___program_1);
		int32_t L_2265 = ___pc;
		NullCheck(L_2264);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2264, ((int32_t)((int32_t)L_2265+(int32_t)1)));
		int32_t L_2266 = ((int32_t)((int32_t)L_2265+(int32_t)1));
		if ((((int32_t)L_2263) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2264, L_2266)))))
		{
			goto IL_34f7;
		}
	}
	{
		int32_t L_2267 = ___pc;
		___pc = ((int32_t)((int32_t)L_2267+(int32_t)2));
		int32_t L_2268 = V_0;
		if (!L_2268)
		{
			goto IL_34df;
		}
	}
	{
		int32_t L_2269 = ___pc;
		int32_t L_2270 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2269+(int32_t)1))) == ((uint32_t)L_2270))))
		{
			goto IL_34f2;
		}
	}

IL_34df:
	{
		int32_t L_2271 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2271-(int32_t)1));
		int32_t L_2272 = ___pc;
		int32_t L_2273 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2272+(int32_t)1))) == ((uint32_t)L_2273))))
		{
			goto IL_34f2;
		}
	}
	{
		goto IL_3e1b;
	}

IL_34f2:
	{
		goto IL_0002;
	}

IL_34f7:
	{
		return 0;
	}

IL_34f9:
	{
		int32_t L_2274 = ___strpos;
		if ((((int32_t)L_2274) <= ((int32_t)0)))
		{
			goto IL_3563;
		}
	}
	{
		String_t* L_2275 = (__this->___str_2);
		int32_t L_2276 = ___strpos;
		NullCheck(L_2275);
		uint16_t L_2277 = String_get_Chars_m407(L_2275, ((int32_t)((int32_t)L_2276-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_2278 = Char_ToLower_m6225(NULL /*static, unused*/, L_2277, /*hidden argument*/NULL);
		V_125 = L_2278;
		uint16_t L_2279 = V_125;
		ByteU5BU5D_t66* L_2280 = (__this->___program_1);
		int32_t L_2281 = ___pc;
		NullCheck(L_2280);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2280, ((int32_t)((int32_t)L_2281+(int32_t)1)));
		int32_t L_2282 = ((int32_t)((int32_t)L_2281+(int32_t)1));
		if ((((int32_t)L_2279) < ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2280, L_2282)))))
		{
			goto IL_3537;
		}
	}
	{
		uint16_t L_2283 = V_125;
		ByteU5BU5D_t66* L_2284 = (__this->___program_1);
		int32_t L_2285 = ___pc;
		NullCheck(L_2284);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2284, ((int32_t)((int32_t)L_2285+(int32_t)2)));
		int32_t L_2286 = ((int32_t)((int32_t)L_2285+(int32_t)2));
		if ((((int32_t)L_2283) <= ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2284, L_2286)))))
		{
			goto IL_3563;
		}
	}

IL_3537:
	{
		int32_t L_2287 = ___pc;
		___pc = ((int32_t)((int32_t)L_2287+(int32_t)3));
		int32_t L_2288 = V_0;
		if (!L_2288)
		{
			goto IL_354b;
		}
	}
	{
		int32_t L_2289 = ___pc;
		int32_t L_2290 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2289+(int32_t)1))) == ((uint32_t)L_2290))))
		{
			goto IL_355e;
		}
	}

IL_354b:
	{
		int32_t L_2291 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2291-(int32_t)1));
		int32_t L_2292 = ___pc;
		int32_t L_2293 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2292+(int32_t)1))) == ((uint32_t)L_2293))))
		{
			goto IL_355e;
		}
	}
	{
		goto IL_3e1b;
	}

IL_355e:
	{
		goto IL_0002;
	}

IL_3563:
	{
		return 0;
	}

IL_3565:
	{
		int32_t L_2294 = ___strpos;
		if ((((int32_t)L_2294) <= ((int32_t)0)))
		{
			goto IL_35e9;
		}
	}
	{
		String_t* L_2295 = (__this->___str_2);
		int32_t L_2296 = ___strpos;
		NullCheck(L_2295);
		uint16_t L_2297 = String_get_Chars_m407(L_2295, ((int32_t)((int32_t)L_2296-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_2298 = Char_ToLower_m6225(NULL /*static, unused*/, L_2297, /*hidden argument*/NULL);
		V_126 = L_2298;
		uint16_t L_2299 = V_126;
		ByteU5BU5D_t66* L_2300 = (__this->___program_1);
		int32_t L_2301 = ___pc;
		NullCheck(L_2300);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2300, ((int32_t)((int32_t)L_2301+(int32_t)1)));
		int32_t L_2302 = ((int32_t)((int32_t)L_2301+(int32_t)1));
		ByteU5BU5D_t66* L_2303 = (__this->___program_1);
		int32_t L_2304 = ___pc;
		NullCheck(L_2303);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2303, ((int32_t)((int32_t)L_2304+(int32_t)2)));
		int32_t L_2305 = ((int32_t)((int32_t)L_2304+(int32_t)2));
		if ((((int32_t)L_2299) < ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2300, L_2302))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2303, L_2305))<<(int32_t)8)))))))
		{
			goto IL_35bd;
		}
	}
	{
		uint16_t L_2306 = V_126;
		ByteU5BU5D_t66* L_2307 = (__this->___program_1);
		int32_t L_2308 = ___pc;
		NullCheck(L_2307);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2307, ((int32_t)((int32_t)L_2308+(int32_t)3)));
		int32_t L_2309 = ((int32_t)((int32_t)L_2308+(int32_t)3));
		ByteU5BU5D_t66* L_2310 = (__this->___program_1);
		int32_t L_2311 = ___pc;
		NullCheck(L_2310);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2310, ((int32_t)((int32_t)L_2311+(int32_t)4)));
		int32_t L_2312 = ((int32_t)((int32_t)L_2311+(int32_t)4));
		if ((((int32_t)L_2306) <= ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2307, L_2309))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2310, L_2312))<<(int32_t)8)))))))
		{
			goto IL_35e9;
		}
	}

IL_35bd:
	{
		int32_t L_2313 = ___pc;
		___pc = ((int32_t)((int32_t)L_2313+(int32_t)5));
		int32_t L_2314 = V_0;
		if (!L_2314)
		{
			goto IL_35d1;
		}
	}
	{
		int32_t L_2315 = ___pc;
		int32_t L_2316 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2315+(int32_t)1))) == ((uint32_t)L_2316))))
		{
			goto IL_35e4;
		}
	}

IL_35d1:
	{
		int32_t L_2317 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2317-(int32_t)1));
		int32_t L_2318 = ___pc;
		int32_t L_2319 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2318+(int32_t)1))) == ((uint32_t)L_2319))))
		{
			goto IL_35e4;
		}
	}
	{
		goto IL_3e1b;
	}

IL_35e4:
	{
		goto IL_0002;
	}

IL_35e9:
	{
		return 0;
	}

IL_35eb:
	{
		int32_t L_2320 = ___strpos;
		if ((((int32_t)L_2320) <= ((int32_t)0)))
		{
			goto IL_3651;
		}
	}
	{
		String_t* L_2321 = (__this->___str_2);
		int32_t L_2322 = ___strpos;
		NullCheck(L_2321);
		uint16_t L_2323 = String_get_Chars_m407(L_2321, ((int32_t)((int32_t)L_2322-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_2324 = Char_ToLower_m6225(NULL /*static, unused*/, L_2323, /*hidden argument*/NULL);
		V_127 = L_2324;
		uint16_t L_2325 = V_127;
		ByteU5BU5D_t66* L_2326 = (__this->___program_1);
		int32_t L_2327 = ___pc;
		NullCheck(L_2326);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2326, ((int32_t)((int32_t)L_2327+(int32_t)1)));
		int32_t L_2328 = ((int32_t)((int32_t)L_2327+(int32_t)1));
		ByteU5BU5D_t66* L_2329 = (__this->___program_1);
		int32_t L_2330 = ___pc;
		NullCheck(L_2329);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2329, ((int32_t)((int32_t)L_2330+(int32_t)2)));
		int32_t L_2331 = ((int32_t)((int32_t)L_2330+(int32_t)2));
		if ((((int32_t)L_2325) == ((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2326, L_2328))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2329, L_2331))<<(int32_t)8)))))))
		{
			goto IL_3651;
		}
	}
	{
		int32_t L_2332 = ___pc;
		___pc = ((int32_t)((int32_t)L_2332+(int32_t)3));
		int32_t L_2333 = V_0;
		if (!L_2333)
		{
			goto IL_3639;
		}
	}
	{
		int32_t L_2334 = ___pc;
		int32_t L_2335 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2334+(int32_t)1))) == ((uint32_t)L_2335))))
		{
			goto IL_364c;
		}
	}

IL_3639:
	{
		int32_t L_2336 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2336-(int32_t)1));
		int32_t L_2337 = ___pc;
		int32_t L_2338 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2337+(int32_t)1))) == ((uint32_t)L_2338))))
		{
			goto IL_364c;
		}
	}
	{
		goto IL_3e1b;
	}

IL_364c:
	{
		goto IL_0002;
	}

IL_3651:
	{
		return 0;
	}

IL_3653:
	{
		int32_t L_2339 = ___strpos;
		if ((((int32_t)L_2339) <= ((int32_t)0)))
		{
			goto IL_36f4;
		}
	}
	{
		String_t* L_2340 = (__this->___str_2);
		int32_t L_2341 = ___strpos;
		NullCheck(L_2340);
		uint16_t L_2342 = String_get_Chars_m407(L_2340, ((int32_t)((int32_t)L_2341-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_2343 = Char_ToLower_m6225(NULL /*static, unused*/, L_2342, /*hidden argument*/NULL);
		V_128 = L_2343;
		uint16_t L_2344 = V_128;
		V_129 = L_2344;
		int32_t L_2345 = V_129;
		ByteU5BU5D_t66* L_2346 = (__this->___program_1);
		int32_t L_2347 = ___pc;
		NullCheck(L_2346);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2346, ((int32_t)((int32_t)L_2347+(int32_t)1)));
		int32_t L_2348 = ((int32_t)((int32_t)L_2347+(int32_t)1));
		V_129 = ((int32_t)((int32_t)L_2345-(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2346, L_2348))));
		ByteU5BU5D_t66* L_2349 = (__this->___program_1);
		int32_t L_2350 = ___pc;
		NullCheck(L_2349);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2349, ((int32_t)((int32_t)L_2350+(int32_t)2)));
		int32_t L_2351 = ((int32_t)((int32_t)L_2350+(int32_t)2));
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2349, L_2351));
		int32_t L_2352 = V_129;
		if ((((int32_t)L_2352) < ((int32_t)0)))
		{
			goto IL_36bd;
		}
	}
	{
		int32_t L_2353 = V_129;
		int32_t L_2354 = V_1;
		if ((((int32_t)L_2353) >= ((int32_t)((int32_t)((int32_t)L_2354<<(int32_t)3)))))
		{
			goto IL_36bd;
		}
	}
	{
		ByteU5BU5D_t66* L_2355 = (__this->___program_1);
		int32_t L_2356 = ___pc;
		int32_t L_2357 = V_129;
		NullCheck(L_2355);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2355, ((int32_t)((int32_t)((int32_t)((int32_t)L_2356+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_2357>>(int32_t)3)))));
		int32_t L_2358 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2356+(int32_t)3))+(int32_t)((int32_t)((int32_t)L_2357>>(int32_t)3))));
		int32_t L_2359 = V_129;
		if (((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2355, L_2358))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2359&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_36f4;
		}
	}

IL_36bd:
	{
		int32_t L_2360 = ___pc;
		ByteU5BU5D_t66* L_2361 = (__this->___program_1);
		int32_t L_2362 = ___pc;
		NullCheck(L_2361);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2361, ((int32_t)((int32_t)L_2362+(int32_t)2)));
		int32_t L_2363 = ((int32_t)((int32_t)L_2362+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_2360+(int32_t)((int32_t)((int32_t)3+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2361, L_2363))))));
		int32_t L_2364 = V_0;
		if (!L_2364)
		{
			goto IL_36dc;
		}
	}
	{
		int32_t L_2365 = ___pc;
		int32_t L_2366 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2365+(int32_t)1))) == ((uint32_t)L_2366))))
		{
			goto IL_36ef;
		}
	}

IL_36dc:
	{
		int32_t L_2367 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2367-(int32_t)1));
		int32_t L_2368 = ___pc;
		int32_t L_2369 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2368+(int32_t)1))) == ((uint32_t)L_2369))))
		{
			goto IL_36ef;
		}
	}
	{
		goto IL_3e1b;
	}

IL_36ef:
	{
		goto IL_0002;
	}

IL_36f4:
	{
		return 0;
	}

IL_36f6:
	{
		int32_t L_2370 = ___strpos;
		if ((((int32_t)L_2370) <= ((int32_t)0)))
		{
			goto IL_37be;
		}
	}
	{
		String_t* L_2371 = (__this->___str_2);
		int32_t L_2372 = ___strpos;
		NullCheck(L_2371);
		uint16_t L_2373 = String_get_Chars_m407(L_2371, ((int32_t)((int32_t)L_2372-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_2374 = Char_ToLower_m6225(NULL /*static, unused*/, L_2373, /*hidden argument*/NULL);
		V_130 = L_2374;
		uint16_t L_2375 = V_130;
		V_131 = L_2375;
		int32_t L_2376 = V_131;
		ByteU5BU5D_t66* L_2377 = (__this->___program_1);
		int32_t L_2378 = ___pc;
		NullCheck(L_2377);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2377, ((int32_t)((int32_t)L_2378+(int32_t)1)));
		int32_t L_2379 = ((int32_t)((int32_t)L_2378+(int32_t)1));
		ByteU5BU5D_t66* L_2380 = (__this->___program_1);
		int32_t L_2381 = ___pc;
		NullCheck(L_2380);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2380, ((int32_t)((int32_t)L_2381+(int32_t)2)));
		int32_t L_2382 = ((int32_t)((int32_t)L_2381+(int32_t)2));
		V_131 = ((int32_t)((int32_t)L_2376-(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2377, L_2379))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2380, L_2382))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_2383 = (__this->___program_1);
		int32_t L_2384 = ___pc;
		NullCheck(L_2383);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2383, ((int32_t)((int32_t)L_2384+(int32_t)3)));
		int32_t L_2385 = ((int32_t)((int32_t)L_2384+(int32_t)3));
		ByteU5BU5D_t66* L_2386 = (__this->___program_1);
		int32_t L_2387 = ___pc;
		NullCheck(L_2386);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2386, ((int32_t)((int32_t)L_2387+(int32_t)4)));
		int32_t L_2388 = ((int32_t)((int32_t)L_2387+(int32_t)4));
		V_1 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2383, L_2385))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2386, L_2388))<<(int32_t)8))));
		int32_t L_2389 = V_131;
		if ((((int32_t)L_2389) < ((int32_t)0)))
		{
			goto IL_377a;
		}
	}
	{
		int32_t L_2390 = V_131;
		int32_t L_2391 = V_1;
		if ((((int32_t)L_2390) >= ((int32_t)((int32_t)((int32_t)L_2391<<(int32_t)3)))))
		{
			goto IL_377a;
		}
	}
	{
		ByteU5BU5D_t66* L_2392 = (__this->___program_1);
		int32_t L_2393 = ___pc;
		int32_t L_2394 = V_131;
		NullCheck(L_2392);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2392, ((int32_t)((int32_t)((int32_t)((int32_t)L_2393+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_2394>>(int32_t)3)))));
		int32_t L_2395 = ((int32_t)((int32_t)((int32_t)((int32_t)L_2393+(int32_t)5))+(int32_t)((int32_t)((int32_t)L_2394>>(int32_t)3))));
		int32_t L_2396 = V_131;
		if (((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2392, L_2395))&(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2396&(int32_t)7))&(int32_t)((int32_t)31))))))))
		{
			goto IL_37be;
		}
	}

IL_377a:
	{
		int32_t L_2397 = ___pc;
		ByteU5BU5D_t66* L_2398 = (__this->___program_1);
		int32_t L_2399 = ___pc;
		NullCheck(L_2398);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2398, ((int32_t)((int32_t)L_2399+(int32_t)3)));
		int32_t L_2400 = ((int32_t)((int32_t)L_2399+(int32_t)3));
		ByteU5BU5D_t66* L_2401 = (__this->___program_1);
		int32_t L_2402 = ___pc;
		NullCheck(L_2401);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2401, ((int32_t)((int32_t)L_2402+(int32_t)4)));
		int32_t L_2403 = ((int32_t)((int32_t)L_2402+(int32_t)4));
		___pc = ((int32_t)((int32_t)L_2397+(int32_t)((int32_t)((int32_t)5+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2398, L_2400))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2401, L_2403))<<(int32_t)8))))))));
		int32_t L_2404 = V_0;
		if (!L_2404)
		{
			goto IL_37a6;
		}
	}
	{
		int32_t L_2405 = ___pc;
		int32_t L_2406 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2405+(int32_t)1))) == ((uint32_t)L_2406))))
		{
			goto IL_37b9;
		}
	}

IL_37a6:
	{
		int32_t L_2407 = ___strpos;
		___strpos = ((int32_t)((int32_t)L_2407-(int32_t)1));
		int32_t L_2408 = ___pc;
		int32_t L_2409 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2408+(int32_t)1))) == ((uint32_t)L_2409))))
		{
			goto IL_37b9;
		}
	}
	{
		goto IL_3e1b;
	}

IL_37b9:
	{
		goto IL_0002;
	}

IL_37be:
	{
		return 0;
	}

IL_37c0:
	{
		V_132 = 0;
		int32_t L_2410 = ___pc;
		int32_t L_2411 = ___strpos;
		bool L_2412 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_2410+(int32_t)3)), L_2411, (&V_132), /*hidden argument*/NULL);
		if (!L_2412)
		{
			goto IL_37da;
		}
	}
	{
		int32_t* L_2413 = ___strpos_result;
		int32_t L_2414 = V_132;
		*((int32_t*)(L_2413)) = (int32_t)L_2414;
		return 1;
	}

IL_37da:
	{
		int32_t L_2415 = ___pc;
		ByteU5BU5D_t66* L_2416 = (__this->___program_1);
		int32_t L_2417 = ___pc;
		NullCheck(L_2416);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2416, ((int32_t)((int32_t)L_2417+(int32_t)1)));
		int32_t L_2418 = ((int32_t)((int32_t)L_2417+(int32_t)1));
		ByteU5BU5D_t66* L_2419 = (__this->___program_1);
		int32_t L_2420 = ___pc;
		NullCheck(L_2419);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2419, ((int32_t)((int32_t)L_2420+(int32_t)2)));
		int32_t L_2421 = ((int32_t)((int32_t)L_2420+(int32_t)2));
		___pc = ((int32_t)((int32_t)L_2415+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2416, L_2418))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2419, L_2421))<<(int32_t)8))))));
		goto IL_0002;
	}

IL_37fa:
	{
		V_133 = 0;
		RepeatContext_t4509 * L_2422 = (__this->___repeat_12);
		ByteU5BU5D_t66* L_2423 = (__this->___program_1);
		int32_t L_2424 = ___pc;
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		int32_t L_2425 = RxInterpreter_ReadInt_m17711(NULL /*static, unused*/, L_2423, ((int32_t)((int32_t)L_2424+(int32_t)3)), /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_2426 = (__this->___program_1);
		int32_t L_2427 = ___pc;
		int32_t L_2428 = RxInterpreter_ReadInt_m17711(NULL /*static, unused*/, L_2426, ((int32_t)((int32_t)L_2427+(int32_t)7)), /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_2429 = (__this->___program_1);
		int32_t L_2430 = ___pc;
		NullCheck(L_2429);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2429, L_2430);
		int32_t L_2431 = L_2430;
		int32_t L_2432 = ___pc;
		RepeatContext_t4509 * L_2433 = (RepeatContext_t4509 *)il2cpp_codegen_object_new (RepeatContext_t4509_il2cpp_TypeInfo_var);
		RepeatContext__ctor_m17699(L_2433, L_2422, L_2425, L_2428, ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2429, L_2431))) == ((int32_t)((int32_t)153)))? 1 : 0), ((int32_t)((int32_t)L_2432+(int32_t)((int32_t)11))), /*hidden argument*/NULL);
		__this->___repeat_12 = L_2433;
		int32_t L_2434 = ___pc;
		ByteU5BU5D_t66* L_2435 = (__this->___program_1);
		int32_t L_2436 = ___pc;
		NullCheck(L_2435);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2435, ((int32_t)((int32_t)L_2436+(int32_t)1)));
		int32_t L_2437 = ((int32_t)((int32_t)L_2436+(int32_t)1));
		ByteU5BU5D_t66* L_2438 = (__this->___program_1);
		int32_t L_2439 = ___pc;
		NullCheck(L_2438);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2438, ((int32_t)((int32_t)L_2439+(int32_t)2)));
		int32_t L_2440 = ((int32_t)((int32_t)L_2439+(int32_t)2));
		V_134 = ((int32_t)((int32_t)L_2434+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2435, L_2437))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2438, L_2440))<<(int32_t)8))))));
		int32_t L_2441 = V_134;
		int32_t L_2442 = ___strpos;
		bool L_2443 = RxInterpreter_EvalByteCode_m17725(__this, L_2441, L_2442, (&V_133), /*hidden argument*/NULL);
		if (L_2443)
		{
			goto IL_387b;
		}
	}
	{
		RepeatContext_t4509 * L_2444 = (__this->___repeat_12);
		NullCheck(L_2444);
		RepeatContext_t4509 * L_2445 = RepeatContext_get_Previous_m17708(L_2444, /*hidden argument*/NULL);
		__this->___repeat_12 = L_2445;
		return 0;
	}

IL_387b:
	{
		int32_t L_2446 = V_133;
		___strpos = L_2446;
		int32_t* L_2447 = ___strpos_result;
		int32_t L_2448 = ___strpos;
		*((int32_t*)(L_2447)) = (int32_t)L_2448;
		return 1;
	}

IL_3884:
	{
		RepeatContext_t4509 * L_2449 = (__this->___repeat_12);
		V_135 = L_2449;
		V_136 = 0;
		RepeatContext_t4509 * L_2450 = (__this->___deep_13);
		RepeatContext_t4509 * L_2451 = V_135;
		if ((!(((Object_t*)(RepeatContext_t4509 *)L_2450) == ((Object_t*)(RepeatContext_t4509 *)L_2451))))
		{
			goto IL_38a1;
		}
	}
	{
		goto IL_3e14;
	}

IL_38a1:
	{
		RepeatContext_t4509 * L_2452 = V_135;
		NullCheck(L_2452);
		int32_t L_2453 = RepeatContext_get_Start_m17702(L_2452, /*hidden argument*/NULL);
		V_2 = L_2453;
		RepeatContext_t4509 * L_2454 = V_135;
		NullCheck(L_2454);
		int32_t L_2455 = RepeatContext_get_Count_m17700(L_2454, /*hidden argument*/NULL);
		V_137 = L_2455;
		goto IL_3917;
	}

IL_38b7:
	{
		RepeatContext_t4509 * L_2456 = V_135;
		RepeatContext_t4509 * L_2457 = L_2456;
		NullCheck(L_2457);
		int32_t L_2458 = RepeatContext_get_Count_m17700(L_2457, /*hidden argument*/NULL);
		NullCheck(L_2457);
		RepeatContext_set_Count_m17701(L_2457, ((int32_t)((int32_t)L_2458+(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2459 = V_135;
		int32_t L_2460 = ___strpos;
		NullCheck(L_2459);
		RepeatContext_set_Start_m17703(L_2459, L_2460, /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2461 = V_135;
		__this->___deep_13 = L_2461;
		RepeatContext_t4509 * L_2462 = V_135;
		NullCheck(L_2462);
		int32_t L_2463 = RepeatContext_get_Expression_m17707(L_2462, /*hidden argument*/NULL);
		int32_t L_2464 = ___strpos;
		bool L_2465 = RxInterpreter_EvalByteCode_m17725(__this, L_2463, L_2464, (&V_136), /*hidden argument*/NULL);
		if (L_2465)
		{
			goto IL_3901;
		}
	}
	{
		RepeatContext_t4509 * L_2466 = V_135;
		int32_t L_2467 = V_2;
		NullCheck(L_2466);
		RepeatContext_set_Start_m17703(L_2466, L_2467, /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2468 = V_135;
		int32_t L_2469 = V_137;
		NullCheck(L_2468);
		RepeatContext_set_Count_m17701(L_2468, L_2469, /*hidden argument*/NULL);
		goto IL_3e19;
	}

IL_3901:
	{
		int32_t L_2470 = V_136;
		___strpos = L_2470;
		RepeatContext_t4509 * L_2471 = (__this->___deep_13);
		RepeatContext_t4509 * L_2472 = V_135;
		if ((((Object_t*)(RepeatContext_t4509 *)L_2471) == ((Object_t*)(RepeatContext_t4509 *)L_2472)))
		{
			goto IL_3917;
		}
	}
	{
		goto IL_3e14;
	}

IL_3917:
	{
		RepeatContext_t4509 * L_2473 = V_135;
		NullCheck(L_2473);
		bool L_2474 = RepeatContext_get_IsMinimum_m17704(L_2473, /*hidden argument*/NULL);
		if (!L_2474)
		{
			goto IL_38b7;
		}
	}
	{
		int32_t L_2475 = ___strpos;
		RepeatContext_t4509 * L_2476 = V_135;
		NullCheck(L_2476);
		int32_t L_2477 = RepeatContext_get_Start_m17702(L_2476, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2475) == ((uint32_t)L_2477))))
		{
			goto IL_396b;
		}
	}
	{
		RepeatContext_t4509 * L_2478 = V_135;
		NullCheck(L_2478);
		RepeatContext_t4509 * L_2479 = RepeatContext_get_Previous_m17708(L_2478, /*hidden argument*/NULL);
		__this->___repeat_12 = L_2479;
		__this->___deep_13 = (RepeatContext_t4509 *)NULL;
		int32_t L_2480 = ___pc;
		int32_t L_2481 = ___strpos;
		bool L_2482 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_2480+(int32_t)1)), L_2481, (&V_136), /*hidden argument*/NULL);
		if (!L_2482)
		{
			goto IL_395e;
		}
	}
	{
		int32_t L_2483 = V_136;
		___strpos = L_2483;
		goto IL_3e14;
	}

IL_395e:
	{
		RepeatContext_t4509 * L_2484 = V_135;
		__this->___repeat_12 = L_2484;
		goto IL_3e19;
	}

IL_396b:
	{
		RepeatContext_t4509 * L_2485 = V_135;
		NullCheck(L_2485);
		bool L_2486 = RepeatContext_get_IsLazy_m17706(L_2485, /*hidden argument*/NULL);
		if (!L_2486)
		{
			goto IL_3a4a;
		}
	}
	{
		goto IL_3a45;
	}

IL_397c:
	{
		RepeatContext_t4509 * L_2487 = V_135;
		NullCheck(L_2487);
		RepeatContext_t4509 * L_2488 = RepeatContext_get_Previous_m17708(L_2487, /*hidden argument*/NULL);
		__this->___repeat_12 = L_2488;
		__this->___deep_13 = (RepeatContext_t4509 *)NULL;
		int32_t L_2489 = RxInterpreter_Checkpoint_m17716(__this, /*hidden argument*/NULL);
		V_138 = L_2489;
		int32_t L_2490 = ___pc;
		int32_t L_2491 = ___strpos;
		bool L_2492 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_2490+(int32_t)1)), L_2491, (&V_136), /*hidden argument*/NULL);
		if (!L_2492)
		{
			goto IL_39b2;
		}
	}
	{
		int32_t L_2493 = V_136;
		___strpos = L_2493;
		goto IL_3e14;
	}

IL_39b2:
	{
		int32_t L_2494 = V_138;
		RxInterpreter_Backtrack_m17717(__this, L_2494, /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2495 = V_135;
		__this->___repeat_12 = L_2495;
		RepeatContext_t4509 * L_2496 = V_135;
		NullCheck(L_2496);
		bool L_2497 = RepeatContext_get_IsMaximum_m17705(L_2496, /*hidden argument*/NULL);
		if (!L_2497)
		{
			goto IL_39d3;
		}
	}
	{
		goto IL_3e19;
	}

IL_39d3:
	{
		RepeatContext_t4509 * L_2498 = V_135;
		RepeatContext_t4509 * L_2499 = L_2498;
		NullCheck(L_2499);
		int32_t L_2500 = RepeatContext_get_Count_m17700(L_2499, /*hidden argument*/NULL);
		NullCheck(L_2499);
		RepeatContext_set_Count_m17701(L_2499, ((int32_t)((int32_t)L_2500+(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2501 = V_135;
		int32_t L_2502 = ___strpos;
		NullCheck(L_2501);
		RepeatContext_set_Start_m17703(L_2501, L_2502, /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2503 = V_135;
		__this->___deep_13 = L_2503;
		RepeatContext_t4509 * L_2504 = V_135;
		NullCheck(L_2504);
		int32_t L_2505 = RepeatContext_get_Expression_m17707(L_2504, /*hidden argument*/NULL);
		int32_t L_2506 = ___strpos;
		bool L_2507 = RxInterpreter_EvalByteCode_m17725(__this, L_2505, L_2506, (&V_136), /*hidden argument*/NULL);
		if (L_2507)
		{
			goto IL_3a1d;
		}
	}
	{
		RepeatContext_t4509 * L_2508 = V_135;
		int32_t L_2509 = V_2;
		NullCheck(L_2508);
		RepeatContext_set_Start_m17703(L_2508, L_2509, /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2510 = V_135;
		int32_t L_2511 = V_137;
		NullCheck(L_2510);
		RepeatContext_set_Count_m17701(L_2510, L_2511, /*hidden argument*/NULL);
		goto IL_3e19;
	}

IL_3a1d:
	{
		int32_t L_2512 = V_136;
		___strpos = L_2512;
		RepeatContext_t4509 * L_2513 = (__this->___deep_13);
		RepeatContext_t4509 * L_2514 = V_135;
		if ((((Object_t*)(RepeatContext_t4509 *)L_2513) == ((Object_t*)(RepeatContext_t4509 *)L_2514)))
		{
			goto IL_3a33;
		}
	}
	{
		goto IL_3e14;
	}

IL_3a33:
	{
		int32_t L_2515 = ___strpos;
		RepeatContext_t4509 * L_2516 = V_135;
		NullCheck(L_2516);
		int32_t L_2517 = RepeatContext_get_Start_m17702(L_2516, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2515) == ((uint32_t)L_2517))))
		{
			goto IL_3a45;
		}
	}
	{
		goto IL_3e19;
	}

IL_3a45:
	{
		goto IL_397c;
	}

IL_3a4a:
	{
		IntStack_t4508 * L_2518 = &(__this->___stack_11);
		int32_t L_2519 = IntStack_get_Count_m17697(L_2518, /*hidden argument*/NULL);
		V_139 = L_2519;
		goto IL_3b38;
	}

IL_3a5c:
	{
		int32_t L_2520 = RxInterpreter_Checkpoint_m17716(__this, /*hidden argument*/NULL);
		V_140 = L_2520;
		int32_t L_2521 = ___strpos;
		V_141 = L_2521;
		RepeatContext_t4509 * L_2522 = V_135;
		NullCheck(L_2522);
		int32_t L_2523 = RepeatContext_get_Start_m17702(L_2522, /*hidden argument*/NULL);
		V_142 = L_2523;
		RepeatContext_t4509 * L_2524 = V_135;
		RepeatContext_t4509 * L_2525 = L_2524;
		NullCheck(L_2525);
		int32_t L_2526 = RepeatContext_get_Count_m17700(L_2525, /*hidden argument*/NULL);
		NullCheck(L_2525);
		RepeatContext_set_Count_m17701(L_2525, ((int32_t)((int32_t)L_2526+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_2527 = ((RxInterpreter_t4511_StaticFields*)RxInterpreter_t4511_il2cpp_TypeInfo_var->static_fields)->___trace_rx_14;
		if (!L_2527)
		{
			goto IL_3a9f;
		}
	}
	{
		RepeatContext_t4509 * L_2528 = V_135;
		NullCheck(L_2528);
		int32_t L_2529 = RepeatContext_get_Count_m17700(L_2528, /*hidden argument*/NULL);
		int32_t L_2530 = L_2529;
		Object_t * L_2531 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2530);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t4577_il2cpp_TypeInfo_var);
		Console_WriteLine_m18159(NULL /*static, unused*/, (String_t*) &_stringLiteral4523, L_2531, /*hidden argument*/NULL);
	}

IL_3a9f:
	{
		RepeatContext_t4509 * L_2532 = V_135;
		int32_t L_2533 = ___strpos;
		NullCheck(L_2532);
		RepeatContext_set_Start_m17703(L_2532, L_2533, /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2534 = V_135;
		__this->___deep_13 = L_2534;
		RepeatContext_t4509 * L_2535 = V_135;
		NullCheck(L_2535);
		int32_t L_2536 = RepeatContext_get_Expression_m17707(L_2535, /*hidden argument*/NULL);
		int32_t L_2537 = ___strpos;
		bool L_2538 = RxInterpreter_EvalByteCode_m17725(__this, L_2536, L_2537, (&V_136), /*hidden argument*/NULL);
		if (L_2538)
		{
			goto IL_3ae9;
		}
	}
	{
		RepeatContext_t4509 * L_2539 = V_135;
		RepeatContext_t4509 * L_2540 = L_2539;
		NullCheck(L_2540);
		int32_t L_2541 = RepeatContext_get_Count_m17700(L_2540, /*hidden argument*/NULL);
		NullCheck(L_2540);
		RepeatContext_set_Count_m17701(L_2540, ((int32_t)((int32_t)L_2541-(int32_t)1)), /*hidden argument*/NULL);
		RepeatContext_t4509 * L_2542 = V_135;
		int32_t L_2543 = V_142;
		NullCheck(L_2542);
		RepeatContext_set_Start_m17703(L_2542, L_2543, /*hidden argument*/NULL);
		int32_t L_2544 = V_140;
		RxInterpreter_Backtrack_m17717(__this, L_2544, /*hidden argument*/NULL);
		goto IL_3b44;
	}

IL_3ae9:
	{
		int32_t L_2545 = V_136;
		___strpos = L_2545;
		RepeatContext_t4509 * L_2546 = (__this->___deep_13);
		RepeatContext_t4509 * L_2547 = V_135;
		if ((((Object_t*)(RepeatContext_t4509 *)L_2546) == ((Object_t*)(RepeatContext_t4509 *)L_2547)))
		{
			goto IL_3b0c;
		}
	}
	{
		IntStack_t4508 * L_2548 = &(__this->___stack_11);
		int32_t L_2549 = V_139;
		IntStack_set_Count_m17698(L_2548, L_2549, /*hidden argument*/NULL);
		goto IL_3e14;
	}

IL_3b0c:
	{
		IntStack_t4508 * L_2550 = &(__this->___stack_11);
		int32_t L_2551 = V_140;
		IntStack_Push_m17696(L_2550, L_2551, /*hidden argument*/NULL);
		IntStack_t4508 * L_2552 = &(__this->___stack_11);
		int32_t L_2553 = V_141;
		IntStack_Push_m17696(L_2552, L_2553, /*hidden argument*/NULL);
		int32_t L_2554 = ___strpos;
		RepeatContext_t4509 * L_2555 = V_135;
		NullCheck(L_2555);
		int32_t L_2556 = RepeatContext_get_Start_m17702(L_2555, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2554) == ((uint32_t)L_2556))))
		{
			goto IL_3b38;
		}
	}
	{
		goto IL_3b44;
	}

IL_3b38:
	{
		RepeatContext_t4509 * L_2557 = V_135;
		NullCheck(L_2557);
		bool L_2558 = RepeatContext_get_IsMaximum_m17705(L_2557, /*hidden argument*/NULL);
		if (!L_2558)
		{
			goto IL_3a5c;
		}
	}

IL_3b44:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_2559 = ((RxInterpreter_t4511_StaticFields*)RxInterpreter_t4511_il2cpp_TypeInfo_var->static_fields)->___trace_rx_14;
		if (!L_2559)
		{
			goto IL_3b66;
		}
	}
	{
		int32_t L_2560 = ___strpos;
		int32_t L_2561 = L_2560;
		Object_t * L_2562 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2561);
		int32_t L_2563 = ___pc;
		int32_t L_2564 = ((int32_t)((int32_t)L_2563+(int32_t)1));
		Object_t * L_2565 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2564);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t4577_il2cpp_TypeInfo_var);
		Console_WriteLine_m18164(NULL /*static, unused*/, (String_t*) &_stringLiteral4524, L_2562, L_2565, /*hidden argument*/NULL);
	}

IL_3b66:
	{
		RepeatContext_t4509 * L_2566 = V_135;
		NullCheck(L_2566);
		RepeatContext_t4509 * L_2567 = RepeatContext_get_Previous_m17708(L_2566, /*hidden argument*/NULL);
		__this->___repeat_12 = L_2567;
		goto IL_3c1e;
	}

IL_3b78:
	{
		__this->___deep_13 = (RepeatContext_t4509 *)NULL;
		int32_t L_2568 = ___pc;
		int32_t L_2569 = ___strpos;
		bool L_2570 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_2568+(int32_t)1)), L_2569, (&V_136), /*hidden argument*/NULL);
		if (!L_2570)
		{
			goto IL_3ba6;
		}
	}
	{
		int32_t L_2571 = V_136;
		___strpos = L_2571;
		IntStack_t4508 * L_2572 = &(__this->___stack_11);
		int32_t L_2573 = V_139;
		IntStack_set_Count_m17698(L_2572, L_2573, /*hidden argument*/NULL);
		goto IL_3e14;
	}

IL_3ba6:
	{
		IntStack_t4508 * L_2574 = &(__this->___stack_11);
		int32_t L_2575 = IntStack_get_Count_m17697(L_2574, /*hidden argument*/NULL);
		int32_t L_2576 = V_139;
		if ((!(((uint32_t)L_2575) == ((uint32_t)L_2576))))
		{
			goto IL_3bc5;
		}
	}
	{
		RepeatContext_t4509 * L_2577 = V_135;
		__this->___repeat_12 = L_2577;
		goto IL_3e19;
	}

IL_3bc5:
	{
		RepeatContext_t4509 * L_2578 = V_135;
		RepeatContext_t4509 * L_2579 = L_2578;
		NullCheck(L_2579);
		int32_t L_2580 = RepeatContext_get_Count_m17700(L_2579, /*hidden argument*/NULL);
		NullCheck(L_2579);
		RepeatContext_set_Count_m17701(L_2579, ((int32_t)((int32_t)L_2580-(int32_t)1)), /*hidden argument*/NULL);
		IntStack_t4508 * L_2581 = &(__this->___stack_11);
		int32_t L_2582 = IntStack_Pop_m17695(L_2581, /*hidden argument*/NULL);
		___strpos = L_2582;
		IntStack_t4508 * L_2583 = &(__this->___stack_11);
		int32_t L_2584 = IntStack_Pop_m17695(L_2583, /*hidden argument*/NULL);
		RxInterpreter_Backtrack_m17717(__this, L_2584, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_2585 = ((RxInterpreter_t4511_StaticFields*)RxInterpreter_t4511_il2cpp_TypeInfo_var->static_fields)->___trace_rx_14;
		if (!L_2585)
		{
			goto IL_3c1e;
		}
	}
	{
		int32_t L_2586 = ___strpos;
		int32_t L_2587 = L_2586;
		Object_t * L_2588 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2587);
		RepeatContext_t4509 * L_2589 = V_135;
		NullCheck(L_2589);
		int32_t L_2590 = RepeatContext_get_Expression_m17707(L_2589, /*hidden argument*/NULL);
		int32_t L_2591 = L_2590;
		Object_t * L_2592 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2591);
		int32_t L_2593 = ___pc;
		int32_t L_2594 = L_2593;
		Object_t * L_2595 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2594);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t4577_il2cpp_TypeInfo_var);
		Console_WriteLine_m18165(NULL /*static, unused*/, (String_t*) &_stringLiteral4525, L_2588, L_2592, L_2595, /*hidden argument*/NULL);
	}

IL_3c1e:
	{
		goto IL_3b78;
	}

IL_3c23:
	{
		ByteU5BU5D_t66* L_2596 = (__this->___program_1);
		int32_t L_2597 = ___pc;
		NullCheck(L_2596);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2596, L_2597);
		int32_t L_2598 = L_2597;
		V_143 = ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2596, L_2598))) == ((int32_t)((int32_t)156)))? 1 : 0);
		V_144 = 0;
		int32_t L_2599 = ___pc;
		ByteU5BU5D_t66* L_2600 = (__this->___program_1);
		int32_t L_2601 = ___pc;
		NullCheck(L_2600);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2600, ((int32_t)((int32_t)L_2601+(int32_t)1)));
		int32_t L_2602 = ((int32_t)((int32_t)L_2601+(int32_t)1));
		ByteU5BU5D_t66* L_2603 = (__this->___program_1);
		int32_t L_2604 = ___pc;
		NullCheck(L_2603);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2603, ((int32_t)((int32_t)L_2604+(int32_t)2)));
		int32_t L_2605 = ((int32_t)((int32_t)L_2604+(int32_t)2));
		V_145 = ((int32_t)((int32_t)L_2599+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2600, L_2602))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2603, L_2605))<<(int32_t)8))))));
		ByteU5BU5D_t66* L_2606 = (__this->___program_1);
		int32_t L_2607 = ___pc;
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		int32_t L_2608 = RxInterpreter_ReadInt_m17711(NULL /*static, unused*/, L_2606, ((int32_t)((int32_t)L_2607+(int32_t)3)), /*hidden argument*/NULL);
		V_2 = L_2608;
		ByteU5BU5D_t66* L_2609 = (__this->___program_1);
		int32_t L_2610 = ___pc;
		int32_t L_2611 = RxInterpreter_ReadInt_m17711(NULL /*static, unused*/, L_2609, ((int32_t)((int32_t)L_2610+(int32_t)7)), /*hidden argument*/NULL);
		V_3 = L_2611;
		V_1 = 0;
		__this->___deep_13 = (RepeatContext_t4509 *)NULL;
		goto IL_3c9a;
	}

IL_3c7e:
	{
		int32_t L_2612 = ___pc;
		int32_t L_2613 = ___strpos;
		bool L_2614 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_2612+(int32_t)((int32_t)11))), L_2613, (&V_144), /*hidden argument*/NULL);
		if (L_2614)
		{
			goto IL_3c92;
		}
	}
	{
		return 0;
	}

IL_3c92:
	{
		int32_t L_2615 = V_144;
		___strpos = L_2615;
		int32_t L_2616 = V_1;
		V_1 = ((int32_t)((int32_t)L_2616+(int32_t)1));
	}

IL_3c9a:
	{
		int32_t L_2617 = V_1;
		int32_t L_2618 = V_2;
		if ((((int32_t)L_2617) < ((int32_t)L_2618)))
		{
			goto IL_3c7e;
		}
	}
	{
		bool L_2619 = V_143;
		if (!L_2619)
		{
			goto IL_3cfb;
		}
	}

IL_3ca8:
	{
		int32_t L_2620 = RxInterpreter_Checkpoint_m17716(__this, /*hidden argument*/NULL);
		V_146 = L_2620;
		int32_t L_2621 = V_145;
		int32_t L_2622 = ___strpos;
		bool L_2623 = RxInterpreter_EvalByteCode_m17725(__this, L_2621, L_2622, (&V_144), /*hidden argument*/NULL);
		if (!L_2623)
		{
			goto IL_3cc9;
		}
	}
	{
		int32_t L_2624 = V_144;
		___strpos = L_2624;
		goto IL_3de1;
	}

IL_3cc9:
	{
		int32_t L_2625 = V_146;
		RxInterpreter_Backtrack_m17717(__this, L_2625, /*hidden argument*/NULL);
		int32_t L_2626 = V_1;
		int32_t L_2627 = V_3;
		if ((((int32_t)L_2626) < ((int32_t)L_2627)))
		{
			goto IL_3cda;
		}
	}
	{
		return 0;
	}

IL_3cda:
	{
		int32_t L_2628 = ___pc;
		int32_t L_2629 = ___strpos;
		bool L_2630 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_2628+(int32_t)((int32_t)11))), L_2629, (&V_144), /*hidden argument*/NULL);
		if (L_2630)
		{
			goto IL_3cee;
		}
	}
	{
		return 0;
	}

IL_3cee:
	{
		int32_t L_2631 = V_144;
		___strpos = L_2631;
		int32_t L_2632 = V_1;
		V_1 = ((int32_t)((int32_t)L_2632+(int32_t)1));
		goto IL_3ca8;
	}

IL_3cfb:
	{
		IntStack_t4508 * L_2633 = &(__this->___stack_11);
		int32_t L_2634 = IntStack_get_Count_m17697(L_2633, /*hidden argument*/NULL);
		V_147 = L_2634;
		goto IL_3d55;
	}

IL_3d0d:
	{
		int32_t L_2635 = RxInterpreter_Checkpoint_m17716(__this, /*hidden argument*/NULL);
		V_148 = L_2635;
		int32_t L_2636 = ___pc;
		int32_t L_2637 = ___strpos;
		bool L_2638 = RxInterpreter_EvalByteCode_m17725(__this, ((int32_t)((int32_t)L_2636+(int32_t)((int32_t)11))), L_2637, (&V_144), /*hidden argument*/NULL);
		if (L_2638)
		{
			goto IL_3d34;
		}
	}
	{
		int32_t L_2639 = V_148;
		RxInterpreter_Backtrack_m17717(__this, L_2639, /*hidden argument*/NULL);
		goto IL_3d5c;
	}

IL_3d34:
	{
		IntStack_t4508 * L_2640 = &(__this->___stack_11);
		int32_t L_2641 = V_148;
		IntStack_Push_m17696(L_2640, L_2641, /*hidden argument*/NULL);
		IntStack_t4508 * L_2642 = &(__this->___stack_11);
		int32_t L_2643 = ___strpos;
		IntStack_Push_m17696(L_2642, L_2643, /*hidden argument*/NULL);
		int32_t L_2644 = V_144;
		___strpos = L_2644;
		int32_t L_2645 = V_1;
		V_1 = ((int32_t)((int32_t)L_2645+(int32_t)1));
	}

IL_3d55:
	{
		int32_t L_2646 = V_1;
		int32_t L_2647 = V_3;
		if ((((int32_t)L_2646) < ((int32_t)L_2647)))
		{
			goto IL_3d0d;
		}
	}

IL_3d5c:
	{
		int32_t L_2648 = V_145;
		int32_t L_2649 = ___pc;
		if ((((int32_t)L_2648) > ((int32_t)L_2649)))
		{
			goto IL_3d6a;
		}
	}
	{
		Exception_t57 * L_2650 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m7947(L_2650, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2650);
	}

IL_3d6a:
	{
		int32_t L_2651 = V_145;
		int32_t L_2652 = ___strpos;
		bool L_2653 = RxInterpreter_EvalByteCode_m17725(__this, L_2651, L_2652, (&V_144), /*hidden argument*/NULL);
		if (!L_2653)
		{
			goto IL_3d90;
		}
	}
	{
		int32_t L_2654 = V_144;
		___strpos = L_2654;
		IntStack_t4508 * L_2655 = &(__this->___stack_11);
		int32_t L_2656 = V_147;
		IntStack_set_Count_m17698(L_2655, L_2656, /*hidden argument*/NULL);
		goto IL_3de1;
	}

IL_3d90:
	{
		IntStack_t4508 * L_2657 = &(__this->___stack_11);
		int32_t L_2658 = IntStack_get_Count_m17697(L_2657, /*hidden argument*/NULL);
		int32_t L_2659 = V_147;
		if ((!(((uint32_t)L_2658) == ((uint32_t)L_2659))))
		{
			goto IL_3da4;
		}
	}
	{
		return 0;
	}

IL_3da4:
	{
		IntStack_t4508 * L_2660 = &(__this->___stack_11);
		int32_t L_2661 = IntStack_Pop_m17695(L_2660, /*hidden argument*/NULL);
		___strpos = L_2661;
		IntStack_t4508 * L_2662 = &(__this->___stack_11);
		int32_t L_2663 = IntStack_Pop_m17695(L_2662, /*hidden argument*/NULL);
		RxInterpreter_Backtrack_m17717(__this, L_2663, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RxInterpreter_t4511_il2cpp_TypeInfo_var);
		bool L_2664 = ((RxInterpreter_t4511_StaticFields*)RxInterpreter_t4511_il2cpp_TypeInfo_var->static_fields)->___trace_rx_14;
		if (!L_2664)
		{
			goto IL_3ddc;
		}
	}
	{
		int32_t L_2665 = ___strpos;
		int32_t L_2666 = L_2665;
		Object_t * L_2667 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2666);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t4577_il2cpp_TypeInfo_var);
		Console_WriteLine_m18159(NULL /*static, unused*/, (String_t*) &_stringLiteral4468, L_2667, /*hidden argument*/NULL);
	}

IL_3ddc:
	{
		goto IL_3d6a;
	}

IL_3de1:
	{
		goto IL_3e14;
	}

IL_3de6:
	{
		ByteU5BU5D_t66* L_2668 = (__this->___program_1);
		int32_t L_2669 = ___pc;
		NullCheck(L_2668);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2668, L_2669);
		int32_t L_2670 = L_2669;
		uint8_t L_2671 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2668, L_2670));
		Object_t * L_2672 = Box(RxOp_t4514_il2cpp_TypeInfo_var, &L_2671);
		int32_t L_2673 = ___pc;
		int32_t L_2674 = L_2673;
		Object_t * L_2675 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2674);
		int32_t L_2676 = ___strpos;
		int32_t L_2677 = L_2676;
		Object_t * L_2678 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2677);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t4577_il2cpp_TypeInfo_var);
		Console_WriteLine_m18165(NULL /*static, unused*/, (String_t*) &_stringLiteral4442, L_2672, L_2675, L_2678, /*hidden argument*/NULL);
		NotSupportedException_t56 * L_2679 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_2679, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2679);
	}

IL_3e0f:
	{
		goto IL_0002;
	}

IL_3e14:
	{
		int32_t* L_2680 = ___strpos_result;
		int32_t L_2681 = ___strpos;
		*((int32_t*)(L_2680)) = (int32_t)L_2681;
		return 1;
	}

IL_3e19:
	{
		return 0;
	}

IL_3e1b:
	{
		int32_t L_2682 = V_0;
		___pc = L_2682;
		V_0 = 0;
		goto IL_0002;
	}
	// Dead block : IL_3e25: br IL_0002
}
// System.Text.RegularExpressions.RxLinkRef
#include "System_System_Text_RegularExpressions_RxLinkRef.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.RxLinkRef
#include "System_System_Text_RegularExpressions_RxLinkRefMethodDeclarations.h"

// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRefMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.RxLinkRef::.ctor()
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void RxLinkRef__ctor_m17726 (RxLinkRef_t4512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkRef__ctor_m17465(__this, /*hidden argument*/NULL);
		__this->___offsets_0 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, 8));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxLinkRef::PushInstructionBase(System.Int32)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void RxLinkRef_PushInstructionBase_m17727 (RxLinkRef_t4512 * __this, int32_t ___offset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t484* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___current_1);
		if (!((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		Exception_t57 * L_1 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m7947(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->___current_1);
		Int32U5BU5D_t484* L_3 = (__this->___offsets_0);
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0051;
		}
	}
	{
		Int32U5BU5D_t484* L_4 = (__this->___offsets_0);
		NullCheck(L_4);
		V_0 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))*(int32_t)2))));
		Int32U5BU5D_t484* L_5 = (__this->___offsets_0);
		Int32U5BU5D_t484* L_6 = V_0;
		Int32U5BU5D_t484* L_7 = (__this->___offsets_0);
		NullCheck(L_7);
		Array_Copy_m14753(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, (Array_t *)(Array_t *)L_6, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_8 = V_0;
		__this->___offsets_0 = L_8;
	}

IL_0051:
	{
		Int32U5BU5D_t484* L_9 = (__this->___offsets_0);
		int32_t L_10 = (__this->___current_1);
		int32_t L_11 = L_10;
		V_1 = L_11;
		__this->___current_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_1;
		int32_t L_13 = ___offset;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_12);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_9, L_12)) = (int32_t)L_13;
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxLinkRef::PushOffsetPosition(System.Int32)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" void RxLinkRef_PushOffsetPosition_m17728 (RxLinkRef_t4512 * __this, int32_t ___offset, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___current_1);
		if (((int32_t)((int32_t)L_0&(int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		Exception_t57 * L_1 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m7947(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Int32U5BU5D_t484* L_2 = (__this->___offsets_0);
		int32_t L_3 = (__this->___current_1);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->___current_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		int32_t L_6 = ___offset;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_5)) = (int32_t)L_6;
		return;
	}
}
// System.Text.RegularExpressions.RxCompiler
#include "System_System_Text_RegularExpressions_RxCompiler.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.RxCompiler
#include "System_System_Text_RegularExpressions_RxCompilerMethodDeclarations.h"

// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
// System.Text.RegularExpressions.RxInterpreterFactory
#include "System_System_Text_RegularExpressions_RxInterpreterFactory.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArray.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// System.Text.RegularExpressions.RxInterpreterFactory
#include "System_System_Text_RegularExpressions_RxInterpreterFactoryMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Collections.BitArray
#include "mscorlib_System_Collections_BitArrayMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.RxCompiler::.ctor()
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void RxCompiler__ctor_m17729 (RxCompiler_t4480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___program_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)32)));
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::MakeRoom(System.Int32)
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_MakeRoom_m17730 (RxCompiler_t4480 * __this, int32_t ___bytes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t66* V_1 = {0};
	{
		goto IL_0034;
	}

IL_0005:
	{
		ByteU5BU5D_t66* L_0 = (__this->___program_0);
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))*(int32_t)2));
		int32_t L_1 = V_0;
		V_1 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, L_1));
		ByteU5BU5D_t66* L_2 = (__this->___program_0);
		ByteU5BU5D_t66* L_3 = V_1;
		ByteU5BU5D_t66* L_4 = (__this->___program_0);
		NullCheck(L_4);
		Buffer_BlockCopy_m11462(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (Array_t *)(Array_t *)L_3, 0, (((int32_t)(((Array_t *)L_4)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_5 = V_1;
		__this->___program_0 = L_5;
	}

IL_0034:
	{
		int32_t L_6 = (__this->___curpos_1);
		int32_t L_7 = ___bytes;
		ByteU5BU5D_t66* L_8 = (__this->___program_0);
		NullCheck(L_8);
		if ((((int32_t)((int32_t)((int32_t)L_6+(int32_t)L_7))) > ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Byte)
extern "C" void RxCompiler_Emit_m17731 (RxCompiler_t4480 * __this, uint8_t ___val, const MethodInfo* method)
{
	{
		RxCompiler_MakeRoom_m17730(__this, 1, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_0 = (__this->___program_0);
		int32_t L_1 = (__this->___curpos_1);
		uint8_t L_2 = ___val;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1)) = (uint8_t)L_2;
		int32_t L_3 = (__this->___curpos_1);
		__this->___curpos_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Text.RegularExpressions.RxOp)
extern "C" void RxCompiler_Emit_m17732 (RxCompiler_t4480 * __this, uint8_t ___opcode, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___opcode;
		RxCompiler_Emit_m17731(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.UInt16)
extern "C" void RxCompiler_Emit_m17733 (RxCompiler_t4480 * __this, uint16_t ___val, const MethodInfo* method)
{
	{
		RxCompiler_MakeRoom_m17730(__this, 2, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_0 = (__this->___program_0);
		int32_t L_1 = (__this->___curpos_1);
		uint16_t L_2 = ___val;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1)) = (uint8_t)(((uint8_t)L_2));
		ByteU5BU5D_t66* L_3 = (__this->___program_0);
		int32_t L_4 = (__this->___curpos_1);
		uint16_t L_5 = ___val;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		int32_t L_6 = (__this->___curpos_1);
		__this->___curpos_1 = ((int32_t)((int32_t)L_6+(int32_t)2));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::Emit(System.Int32)
extern "C" void RxCompiler_Emit_m17734 (RxCompiler_t4480 * __this, int32_t ___val, const MethodInfo* method)
{
	{
		RxCompiler_MakeRoom_m17730(__this, 4, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_0 = (__this->___program_0);
		int32_t L_1 = (__this->___curpos_1);
		int32_t L_2 = ___val;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1)) = (uint8_t)(((uint8_t)L_2));
		ByteU5BU5D_t66* L_3 = (__this->___program_0);
		int32_t L_4 = (__this->___curpos_1);
		int32_t L_5 = ___val;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, ((int32_t)((int32_t)L_4+(int32_t)1)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_5>>(int32_t)8))));
		ByteU5BU5D_t66* L_6 = (__this->___program_0);
		int32_t L_7 = (__this->___curpos_1);
		int32_t L_8 = ___val;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, ((int32_t)((int32_t)L_7+(int32_t)2)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_8>>(int32_t)((int32_t)16)))));
		ByteU5BU5D_t66* L_9 = (__this->___program_0);
		int32_t L_10 = (__this->___curpos_1);
		int32_t L_11 = ___val;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)3)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)24)))));
		int32_t L_12 = (__this->___curpos_1);
		__this->___curpos_1 = ((int32_t)((int32_t)L_12+(int32_t)4));
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern TypeInfo* RxLinkRef_t4512_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_BeginLink_m17735 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___lref, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RxLinkRef_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7941);
		s_Il2CppMethodIntialized = true;
	}
	RxLinkRef_t4512 * V_0 = {0};
	{
		LinkRef_t4483 * L_0 = ___lref;
		V_0 = ((RxLinkRef_t4512 *)IsInst(L_0, RxLinkRef_t4512_il2cpp_TypeInfo_var));
		RxLinkRef_t4512 * L_1 = V_0;
		int32_t L_2 = (__this->___curpos_1);
		NullCheck(L_1);
		RxLinkRef_PushInstructionBase_m17727(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern TypeInfo* RxLinkRef_t4512_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitLink_m17736 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___lref, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RxLinkRef_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7941);
		s_Il2CppMethodIntialized = true;
	}
	RxLinkRef_t4512 * V_0 = {0};
	{
		LinkRef_t4483 * L_0 = ___lref;
		V_0 = ((RxLinkRef_t4512 *)IsInst(L_0, RxLinkRef_t4512_il2cpp_TypeInfo_var));
		RxLinkRef_t4512 * L_1 = V_0;
		int32_t L_2 = (__this->___curpos_1);
		NullCheck(L_1);
		RxLinkRef_PushOffsetPosition_m17728(L_1, L_2, /*hidden argument*/NULL);
		RxCompiler_Emit_m17733(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.RxCompiler::GetMachineFactory()
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* RxInterpreterFactory_t4513_il2cpp_TypeInfo_var;
extern "C" Object_t * RxCompiler_GetMachineFactory_m17737 (RxCompiler_t4480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		RxInterpreterFactory_t4513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7890);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t66* V_0 = {0};
	{
		int32_t L_0 = (__this->___curpos_1);
		V_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, L_0));
		ByteU5BU5D_t66* L_1 = (__this->___program_0);
		ByteU5BU5D_t66* L_2 = V_0;
		int32_t L_3 = (__this->___curpos_1);
		Buffer_BlockCopy_m11462(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, 0, (Array_t *)(Array_t *)L_2, 0, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_4 = V_0;
		RxInterpreterFactory_t4513 * L_5 = (RxInterpreterFactory_t4513 *)il2cpp_codegen_object_new (RxInterpreterFactory_t4513_il2cpp_TypeInfo_var);
		RxInterpreterFactory__ctor_m17772(L_5, L_4, (EvalDelegate_t4510 *)NULL, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFalse()
extern "C" void RxCompiler_EmitFalse_m17738 (RxCompiler_t4480 * __this, const MethodInfo* method)
{
	{
		RxCompiler_Emit_m17732(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTrue()
extern "C" void RxCompiler_EmitTrue_m17739 (RxCompiler_t4480 * __this, const MethodInfo* method)
{
	{
		RxCompiler_Emit_m17732(__this, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitOp_m17740 (RxCompiler_t4480 * __this, uint8_t ___op, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		bool L_0 = ___negate;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000c:
	{
		bool L_2 = ___ignore;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)2));
	}

IL_0016:
	{
		bool L_4 = ___reverse;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)4));
	}

IL_0021:
	{
		uint8_t L_6 = ___op;
		int32_t L_7 = V_0;
		RxCompiler_Emit_m17732(__this, (((uint8_t)((int32_t)((int32_t)L_6+(int32_t)L_7)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitOpIgnoreReverse_m17741 (RxCompiler_t4480 * __this, uint8_t ___op, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		bool L_0 = ___ignore;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000c:
	{
		bool L_2 = ___reverse;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)2));
	}

IL_0016:
	{
		uint8_t L_4 = ___op;
		int32_t L_5 = V_0;
		RxCompiler_Emit_m17732(__this, (((uint8_t)((int32_t)((int32_t)L_4+(int32_t)L_5)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitOpNegateReverse_m17742 (RxCompiler_t4480 * __this, uint8_t ___op, bool ___negate, bool ___reverse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		bool L_0 = ___negate;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000c:
	{
		bool L_2 = ___reverse;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)2));
	}

IL_0016:
	{
		uint8_t L_4 = ___op;
		int32_t L_5 = V_0;
		RxCompiler_Emit_m17732(__this, (((uint8_t)((int32_t)((int32_t)L_4+(int32_t)L_5)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitCharacter_m17743 (RxCompiler_t4480 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___ignore;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		uint16_t L_1 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_2 = Char_ToLower_m6225(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___c = L_2;
	}

IL_000e:
	{
		uint16_t L_3 = ___c;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0032;
		}
	}
	{
		bool L_4 = ___negate;
		bool L_5 = ___ignore;
		bool L_6 = ___reverse;
		VirtActionInvoker4< uint8_t, bool, bool, bool >::Invoke(34 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)20), L_4, L_5, L_6);
		uint16_t L_7 = ___c;
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_7)), /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_0032:
	{
		bool L_8 = ___negate;
		bool L_9 = ___ignore;
		bool L_10 = ___reverse;
		VirtActionInvoker4< uint8_t, bool, bool, bool >::Invoke(34 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)44), L_8, L_9, L_10);
		uint16_t L_11 = ___c;
		RxCompiler_Emit_m17733(__this, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUniCat(System.Globalization.UnicodeCategory,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitUniCat_m17744 (RxCompiler_t4480 * __this, int32_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method)
{
	{
		bool L_0 = ___negate;
		bool L_1 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)96), L_0, L_1);
		int32_t L_2 = ___cat;
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCatGeneral(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitCatGeneral_m17745 (RxCompiler_t4480 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method)
{
	{
		bool L_0 = ___negate;
		bool L_1 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)132), L_0, L_1);
		uint16_t L_2 = ___cat;
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern TypeInfo* Category_t4481_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotImplementedException_t1457_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitCategory_m17746 (RxCompiler_t4480 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Category_t4481_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		NotImplementedException_t1457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2540);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = {0};
	{
		uint16_t L_0 = ___cat;
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0227;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0236;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0245;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0254;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0263;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0227;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0c81;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0272;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_0281;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 9)
		{
			goto IL_0293;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 10)
		{
			goto IL_0c73;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 11)
		{
			goto IL_0c73;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 12)
		{
			goto IL_0c73;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 13)
		{
			goto IL_0c73;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 14)
		{
			goto IL_0c73;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 15)
		{
			goto IL_0c73;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 16)
		{
			goto IL_0c73;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 17)
		{
			goto IL_02b1;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 18)
		{
			goto IL_02bf;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 19)
		{
			goto IL_02cd;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 20)
		{
			goto IL_02db;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 21)
		{
			goto IL_02e9;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 22)
		{
			goto IL_02f7;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 23)
		{
			goto IL_0305;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 24)
		{
			goto IL_0313;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 25)
		{
			goto IL_0321;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 26)
		{
			goto IL_032f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 27)
		{
			goto IL_033e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 28)
		{
			goto IL_034d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 29)
		{
			goto IL_035c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 30)
		{
			goto IL_036b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 31)
		{
			goto IL_037a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 32)
		{
			goto IL_0389;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 33)
		{
			goto IL_0398;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 34)
		{
			goto IL_03a7;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 35)
		{
			goto IL_03b6;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 36)
		{
			goto IL_03c5;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 37)
		{
			goto IL_03d4;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 38)
		{
			goto IL_03e3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 39)
		{
			goto IL_03f2;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 40)
		{
			goto IL_0401;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 41)
		{
			goto IL_0410;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 42)
		{
			goto IL_041f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 43)
		{
			goto IL_042e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 44)
		{
			goto IL_043d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 45)
		{
			goto IL_044c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 46)
		{
			goto IL_045b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 47)
		{
			goto IL_046a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 48)
		{
			goto IL_047b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 49)
		{
			goto IL_0493;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 50)
		{
			goto IL_04ab;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 51)
		{
			goto IL_04c3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 52)
		{
			goto IL_04db;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 53)
		{
			goto IL_04f3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 54)
		{
			goto IL_050b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 55)
		{
			goto IL_0523;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 56)
		{
			goto IL_053b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 57)
		{
			goto IL_0553;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 58)
		{
			goto IL_056b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 59)
		{
			goto IL_0583;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 60)
		{
			goto IL_059b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 61)
		{
			goto IL_05b3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 62)
		{
			goto IL_05cb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 63)
		{
			goto IL_05e3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 64)
		{
			goto IL_05fb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 65)
		{
			goto IL_0613;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 66)
		{
			goto IL_062b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 67)
		{
			goto IL_0643;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 68)
		{
			goto IL_065b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 69)
		{
			goto IL_0673;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 70)
		{
			goto IL_068b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 71)
		{
			goto IL_06a3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 72)
		{
			goto IL_06bb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 73)
		{
			goto IL_06d3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 74)
		{
			goto IL_06eb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 75)
		{
			goto IL_0703;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 76)
		{
			goto IL_071b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 77)
		{
			goto IL_0733;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 78)
		{
			goto IL_074b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 79)
		{
			goto IL_0763;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 80)
		{
			goto IL_077b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 81)
		{
			goto IL_0793;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 82)
		{
			goto IL_07ab;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 83)
		{
			goto IL_07c3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 84)
		{
			goto IL_07db;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 85)
		{
			goto IL_07f3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 86)
		{
			goto IL_080b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 87)
		{
			goto IL_0823;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 88)
		{
			goto IL_083b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 89)
		{
			goto IL_0853;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 90)
		{
			goto IL_086b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 91)
		{
			goto IL_0883;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 92)
		{
			goto IL_089b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 93)
		{
			goto IL_08b3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 94)
		{
			goto IL_08cb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 95)
		{
			goto IL_08e3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 96)
		{
			goto IL_08fb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 97)
		{
			goto IL_0913;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 98)
		{
			goto IL_092b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 99)
		{
			goto IL_0943;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 100)
		{
			goto IL_095b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 101)
		{
			goto IL_0973;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 102)
		{
			goto IL_098b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 103)
		{
			goto IL_09a3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 104)
		{
			goto IL_09bb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 105)
		{
			goto IL_09d3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 106)
		{
			goto IL_09eb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 107)
		{
			goto IL_0a03;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 108)
		{
			goto IL_0a1b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 109)
		{
			goto IL_0a33;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 110)
		{
			goto IL_0a4b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 111)
		{
			goto IL_0a63;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 112)
		{
			goto IL_0a7b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 113)
		{
			goto IL_0a93;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 114)
		{
			goto IL_0aab;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 115)
		{
			goto IL_0ac3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 116)
		{
			goto IL_0adb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 117)
		{
			goto IL_0af3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 118)
		{
			goto IL_0b0b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 119)
		{
			goto IL_0b23;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 120)
		{
			goto IL_0b3b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 121)
		{
			goto IL_0b53;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 122)
		{
			goto IL_0b6b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 123)
		{
			goto IL_0b83;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 124)
		{
			goto IL_0b9b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 125)
		{
			goto IL_0bb3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 126)
		{
			goto IL_0bcb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 127)
		{
			goto IL_0be3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 128)
		{
			goto IL_0bfb;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 129)
		{
			goto IL_0c13;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 130)
		{
			goto IL_0c2b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 131)
		{
			goto IL_0c43;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 132)
		{
			goto IL_02a2;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 133)
		{
			goto IL_0c5b;
		}
	}
	{
		goto IL_0c81;
	}

IL_0227:
	{
		bool L_2 = ___negate;
		bool L_3 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)68), L_2, L_3);
		goto IL_0c97;
	}

IL_0236:
	{
		bool L_4 = ___negate;
		bool L_5 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)72), L_4, L_5);
		goto IL_0c97;
	}

IL_0245:
	{
		bool L_6 = ___negate;
		bool L_7 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)80), L_6, L_7);
		goto IL_0c97;
	}

IL_0254:
	{
		bool L_8 = ___negate;
		bool L_9 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)76), L_8, L_9);
		goto IL_0c97;
	}

IL_0263:
	{
		bool L_10 = ___negate;
		bool L_11 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)84), L_10, L_11);
		goto IL_0c97;
	}

IL_0272:
	{
		bool L_12 = ___negate;
		bool L_13 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)88), L_12, L_13);
		goto IL_0c97;
	}

IL_0281:
	{
		bool L_14 = ___negate;
		bool L_15 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)48), ((int32_t)57), L_14, 0, L_15);
		goto IL_0c97;
	}

IL_0293:
	{
		bool L_16 = ___negate;
		bool L_17 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)92), L_16, L_17);
		goto IL_0c97;
	}

IL_02a2:
	{
		bool L_18 = ___negate;
		bool L_19 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(36 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpNegateReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)124), L_18, L_19);
		goto IL_0c97;
	}

IL_02b1:
	{
		bool L_20 = ___negate;
		bool L_21 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 0, L_20, L_21, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_02bf:
	{
		bool L_22 = ___negate;
		bool L_23 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 1, L_22, L_23, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_02cd:
	{
		bool L_24 = ___negate;
		bool L_25 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 2, L_24, L_25, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_02db:
	{
		bool L_26 = ___negate;
		bool L_27 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 3, L_26, L_27, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_02e9:
	{
		bool L_28 = ___negate;
		bool L_29 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 4, L_28, L_29, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_02f7:
	{
		bool L_30 = ___negate;
		bool L_31 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 5, L_30, L_31, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_0305:
	{
		bool L_32 = ___negate;
		bool L_33 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 7, L_32, L_33, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_0313:
	{
		bool L_34 = ___negate;
		bool L_35 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 6, L_34, L_35, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_0321:
	{
		bool L_36 = ___negate;
		bool L_37 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, 8, L_36, L_37, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_032f:
	{
		bool L_38 = ___negate;
		bool L_39 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)9), L_38, L_39, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_033e:
	{
		bool L_40 = ___negate;
		bool L_41 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)10), L_40, L_41, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_034d:
	{
		bool L_42 = ___negate;
		bool L_43 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)11), L_42, L_43, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_035c:
	{
		bool L_44 = ___negate;
		bool L_45 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)12), L_44, L_45, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_036b:
	{
		bool L_46 = ___negate;
		bool L_47 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)13), L_46, L_47, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_037a:
	{
		bool L_48 = ___negate;
		bool L_49 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)19), L_48, L_49, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_0389:
	{
		bool L_50 = ___negate;
		bool L_51 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)20), L_50, L_51, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_0398:
	{
		bool L_52 = ___negate;
		bool L_53 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)22), L_52, L_53, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_03a7:
	{
		bool L_54 = ___negate;
		bool L_55 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)21), L_54, L_55, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_03b6:
	{
		bool L_56 = ___negate;
		bool L_57 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)23), L_56, L_57, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_03c5:
	{
		bool L_58 = ___negate;
		bool L_59 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)18), L_58, L_59, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_03d4:
	{
		bool L_60 = ___negate;
		bool L_61 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)24), L_60, L_61, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_03e3:
	{
		bool L_62 = ___negate;
		bool L_63 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)25), L_62, L_63, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_03f2:
	{
		bool L_64 = ___negate;
		bool L_65 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)26), L_64, L_65, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_0401:
	{
		bool L_66 = ___negate;
		bool L_67 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)27), L_66, L_67, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_0410:
	{
		bool L_68 = ___negate;
		bool L_69 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)28), L_68, L_69, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_041f:
	{
		bool L_70 = ___negate;
		bool L_71 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)14), L_70, L_71, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_042e:
	{
		bool L_72 = ___negate;
		bool L_73 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)15), L_72, L_73, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_043d:
	{
		bool L_74 = ___negate;
		bool L_75 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)17), L_74, L_75, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_044c:
	{
		bool L_76 = ___negate;
		bool L_77 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)16), L_76, L_77, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_045b:
	{
		bool L_78 = ___negate;
		bool L_79 = ___reverse;
		RxCompiler_EmitUniCat_m17744(__this, ((int32_t)29), L_78, L_79, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_046a:
	{
		bool L_80 = ___negate;
		bool L_81 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, 0, ((int32_t)127), L_80, 0, L_81);
		goto IL_0c97;
	}

IL_047b:
	{
		bool L_82 = ___negate;
		bool L_83 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)128), ((int32_t)255), L_82, 0, L_83);
		goto IL_0c97;
	}

IL_0493:
	{
		bool L_84 = ___negate;
		bool L_85 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)256), ((int32_t)383), L_84, 0, L_85);
		goto IL_0c97;
	}

IL_04ab:
	{
		bool L_86 = ___negate;
		bool L_87 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)384), ((int32_t)591), L_86, 0, L_87);
		goto IL_0c97;
	}

IL_04c3:
	{
		bool L_88 = ___negate;
		bool L_89 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)592), ((int32_t)687), L_88, 0, L_89);
		goto IL_0c97;
	}

IL_04db:
	{
		bool L_90 = ___negate;
		bool L_91 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)688), ((int32_t)767), L_90, 0, L_91);
		goto IL_0c97;
	}

IL_04f3:
	{
		bool L_92 = ___negate;
		bool L_93 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)768), ((int32_t)879), L_92, 0, L_93);
		goto IL_0c97;
	}

IL_050b:
	{
		bool L_94 = ___negate;
		bool L_95 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)880), ((int32_t)1023), L_94, 0, L_95);
		goto IL_0c97;
	}

IL_0523:
	{
		bool L_96 = ___negate;
		bool L_97 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)1024), ((int32_t)1279), L_96, 0, L_97);
		goto IL_0c97;
	}

IL_053b:
	{
		bool L_98 = ___negate;
		bool L_99 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)1328), ((int32_t)1423), L_98, 0, L_99);
		goto IL_0c97;
	}

IL_0553:
	{
		bool L_100 = ___negate;
		bool L_101 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)1424), ((int32_t)1535), L_100, 0, L_101);
		goto IL_0c97;
	}

IL_056b:
	{
		bool L_102 = ___negate;
		bool L_103 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)1536), ((int32_t)1791), L_102, 0, L_103);
		goto IL_0c97;
	}

IL_0583:
	{
		bool L_104 = ___negate;
		bool L_105 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)1792), ((int32_t)1871), L_104, 0, L_105);
		goto IL_0c97;
	}

IL_059b:
	{
		bool L_106 = ___negate;
		bool L_107 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)1920), ((int32_t)1983), L_106, 0, L_107);
		goto IL_0c97;
	}

IL_05b3:
	{
		bool L_108 = ___negate;
		bool L_109 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)2304), ((int32_t)2431), L_108, 0, L_109);
		goto IL_0c97;
	}

IL_05cb:
	{
		bool L_110 = ___negate;
		bool L_111 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)2432), ((int32_t)2559), L_110, 0, L_111);
		goto IL_0c97;
	}

IL_05e3:
	{
		bool L_112 = ___negate;
		bool L_113 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)2560), ((int32_t)2687), L_112, 0, L_113);
		goto IL_0c97;
	}

IL_05fb:
	{
		bool L_114 = ___negate;
		bool L_115 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)2688), ((int32_t)2815), L_114, 0, L_115);
		goto IL_0c97;
	}

IL_0613:
	{
		bool L_116 = ___negate;
		bool L_117 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)2816), ((int32_t)2943), L_116, 0, L_117);
		goto IL_0c97;
	}

IL_062b:
	{
		bool L_118 = ___negate;
		bool L_119 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)2944), ((int32_t)3071), L_118, 0, L_119);
		goto IL_0c97;
	}

IL_0643:
	{
		bool L_120 = ___negate;
		bool L_121 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)3072), ((int32_t)3199), L_120, 0, L_121);
		goto IL_0c97;
	}

IL_065b:
	{
		bool L_122 = ___negate;
		bool L_123 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)3200), ((int32_t)3327), L_122, 0, L_123);
		goto IL_0c97;
	}

IL_0673:
	{
		bool L_124 = ___negate;
		bool L_125 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)3328), ((int32_t)3455), L_124, 0, L_125);
		goto IL_0c97;
	}

IL_068b:
	{
		bool L_126 = ___negate;
		bool L_127 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)3456), ((int32_t)3583), L_126, 0, L_127);
		goto IL_0c97;
	}

IL_06a3:
	{
		bool L_128 = ___negate;
		bool L_129 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)3584), ((int32_t)3711), L_128, 0, L_129);
		goto IL_0c97;
	}

IL_06bb:
	{
		bool L_130 = ___negate;
		bool L_131 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)3712), ((int32_t)3839), L_130, 0, L_131);
		goto IL_0c97;
	}

IL_06d3:
	{
		bool L_132 = ___negate;
		bool L_133 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)3840), ((int32_t)4095), L_132, 0, L_133);
		goto IL_0c97;
	}

IL_06eb:
	{
		bool L_134 = ___negate;
		bool L_135 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)4096), ((int32_t)4255), L_134, 0, L_135);
		goto IL_0c97;
	}

IL_0703:
	{
		bool L_136 = ___negate;
		bool L_137 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)4256), ((int32_t)4351), L_136, 0, L_137);
		goto IL_0c97;
	}

IL_071b:
	{
		bool L_138 = ___negate;
		bool L_139 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)4352), ((int32_t)4607), L_138, 0, L_139);
		goto IL_0c97;
	}

IL_0733:
	{
		bool L_140 = ___negate;
		bool L_141 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)4608), ((int32_t)4991), L_140, 0, L_141);
		goto IL_0c97;
	}

IL_074b:
	{
		bool L_142 = ___negate;
		bool L_143 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)5024), ((int32_t)5119), L_142, 0, L_143);
		goto IL_0c97;
	}

IL_0763:
	{
		bool L_144 = ___negate;
		bool L_145 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)5120), ((int32_t)5759), L_144, 0, L_145);
		goto IL_0c97;
	}

IL_077b:
	{
		bool L_146 = ___negate;
		bool L_147 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)5760), ((int32_t)5791), L_146, 0, L_147);
		goto IL_0c97;
	}

IL_0793:
	{
		bool L_148 = ___negate;
		bool L_149 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)5792), ((int32_t)5887), L_148, 0, L_149);
		goto IL_0c97;
	}

IL_07ab:
	{
		bool L_150 = ___negate;
		bool L_151 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)6016), ((int32_t)6143), L_150, 0, L_151);
		goto IL_0c97;
	}

IL_07c3:
	{
		bool L_152 = ___negate;
		bool L_153 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)6144), ((int32_t)6319), L_152, 0, L_153);
		goto IL_0c97;
	}

IL_07db:
	{
		bool L_154 = ___negate;
		bool L_155 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)7680), ((int32_t)7935), L_154, 0, L_155);
		goto IL_0c97;
	}

IL_07f3:
	{
		bool L_156 = ___negate;
		bool L_157 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)7936), ((int32_t)8191), L_156, 0, L_157);
		goto IL_0c97;
	}

IL_080b:
	{
		bool L_158 = ___negate;
		bool L_159 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8192), ((int32_t)8303), L_158, 0, L_159);
		goto IL_0c97;
	}

IL_0823:
	{
		bool L_160 = ___negate;
		bool L_161 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8304), ((int32_t)8351), L_160, 0, L_161);
		goto IL_0c97;
	}

IL_083b:
	{
		bool L_162 = ___negate;
		bool L_163 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8352), ((int32_t)8399), L_162, 0, L_163);
		goto IL_0c97;
	}

IL_0853:
	{
		bool L_164 = ___negate;
		bool L_165 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8400), ((int32_t)8447), L_164, 0, L_165);
		goto IL_0c97;
	}

IL_086b:
	{
		bool L_166 = ___negate;
		bool L_167 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8448), ((int32_t)8527), L_166, 0, L_167);
		goto IL_0c97;
	}

IL_0883:
	{
		bool L_168 = ___negate;
		bool L_169 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8528), ((int32_t)8591), L_168, 0, L_169);
		goto IL_0c97;
	}

IL_089b:
	{
		bool L_170 = ___negate;
		bool L_171 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8592), ((int32_t)8703), L_170, 0, L_171);
		goto IL_0c97;
	}

IL_08b3:
	{
		bool L_172 = ___negate;
		bool L_173 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8704), ((int32_t)8959), L_172, 0, L_173);
		goto IL_0c97;
	}

IL_08cb:
	{
		bool L_174 = ___negate;
		bool L_175 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)8960), ((int32_t)9215), L_174, 0, L_175);
		goto IL_0c97;
	}

IL_08e3:
	{
		bool L_176 = ___negate;
		bool L_177 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)9216), ((int32_t)9279), L_176, 0, L_177);
		goto IL_0c97;
	}

IL_08fb:
	{
		bool L_178 = ___negate;
		bool L_179 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)9280), ((int32_t)9311), L_178, 0, L_179);
		goto IL_0c97;
	}

IL_0913:
	{
		bool L_180 = ___negate;
		bool L_181 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)9312), ((int32_t)9471), L_180, 0, L_181);
		goto IL_0c97;
	}

IL_092b:
	{
		bool L_182 = ___negate;
		bool L_183 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)9472), ((int32_t)9599), L_182, 0, L_183);
		goto IL_0c97;
	}

IL_0943:
	{
		bool L_184 = ___negate;
		bool L_185 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)9600), ((int32_t)9631), L_184, 0, L_185);
		goto IL_0c97;
	}

IL_095b:
	{
		bool L_186 = ___negate;
		bool L_187 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)9632), ((int32_t)9727), L_186, 0, L_187);
		goto IL_0c97;
	}

IL_0973:
	{
		bool L_188 = ___negate;
		bool L_189 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)9728), ((int32_t)9983), L_188, 0, L_189);
		goto IL_0c97;
	}

IL_098b:
	{
		bool L_190 = ___negate;
		bool L_191 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)9984), ((int32_t)10175), L_190, 0, L_191);
		goto IL_0c97;
	}

IL_09a3:
	{
		bool L_192 = ___negate;
		bool L_193 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)10240), ((int32_t)10495), L_192, 0, L_193);
		goto IL_0c97;
	}

IL_09bb:
	{
		bool L_194 = ___negate;
		bool L_195 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)11904), ((int32_t)12031), L_194, 0, L_195);
		goto IL_0c97;
	}

IL_09d3:
	{
		bool L_196 = ___negate;
		bool L_197 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12032), ((int32_t)12255), L_196, 0, L_197);
		goto IL_0c97;
	}

IL_09eb:
	{
		bool L_198 = ___negate;
		bool L_199 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12272), ((int32_t)12287), L_198, 0, L_199);
		goto IL_0c97;
	}

IL_0a03:
	{
		bool L_200 = ___negate;
		bool L_201 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12288), ((int32_t)12351), L_200, 0, L_201);
		goto IL_0c97;
	}

IL_0a1b:
	{
		bool L_202 = ___negate;
		bool L_203 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12352), ((int32_t)12447), L_202, 0, L_203);
		goto IL_0c97;
	}

IL_0a33:
	{
		bool L_204 = ___negate;
		bool L_205 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12448), ((int32_t)12543), L_204, 0, L_205);
		goto IL_0c97;
	}

IL_0a4b:
	{
		bool L_206 = ___negate;
		bool L_207 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12544), ((int32_t)12591), L_206, 0, L_207);
		goto IL_0c97;
	}

IL_0a63:
	{
		bool L_208 = ___negate;
		bool L_209 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12592), ((int32_t)12687), L_208, 0, L_209);
		goto IL_0c97;
	}

IL_0a7b:
	{
		bool L_210 = ___negate;
		bool L_211 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12688), ((int32_t)12703), L_210, 0, L_211);
		goto IL_0c97;
	}

IL_0a93:
	{
		bool L_212 = ___negate;
		bool L_213 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12704), ((int32_t)12735), L_212, 0, L_213);
		goto IL_0c97;
	}

IL_0aab:
	{
		bool L_214 = ___negate;
		bool L_215 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)12800), ((int32_t)13055), L_214, 0, L_215);
		goto IL_0c97;
	}

IL_0ac3:
	{
		bool L_216 = ___negate;
		bool L_217 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)13056), ((int32_t)13311), L_216, 0, L_217);
		goto IL_0c97;
	}

IL_0adb:
	{
		bool L_218 = ___negate;
		bool L_219 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)13312), ((int32_t)19893), L_218, 0, L_219);
		goto IL_0c97;
	}

IL_0af3:
	{
		bool L_220 = ___negate;
		bool L_221 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)19968), ((int32_t)40959), L_220, 0, L_221);
		goto IL_0c97;
	}

IL_0b0b:
	{
		bool L_222 = ___negate;
		bool L_223 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)40960), ((int32_t)42127), L_222, 0, L_223);
		goto IL_0c97;
	}

IL_0b23:
	{
		bool L_224 = ___negate;
		bool L_225 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)42128), ((int32_t)42191), L_224, 0, L_225);
		goto IL_0c97;
	}

IL_0b3b:
	{
		bool L_226 = ___negate;
		bool L_227 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)44032), ((int32_t)55203), L_226, 0, L_227);
		goto IL_0c97;
	}

IL_0b53:
	{
		bool L_228 = ___negate;
		bool L_229 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)55296), ((int32_t)56191), L_228, 0, L_229);
		goto IL_0c97;
	}

IL_0b6b:
	{
		bool L_230 = ___negate;
		bool L_231 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)56192), ((int32_t)56319), L_230, 0, L_231);
		goto IL_0c97;
	}

IL_0b83:
	{
		bool L_232 = ___negate;
		bool L_233 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)56320), ((int32_t)57343), L_232, 0, L_233);
		goto IL_0c97;
	}

IL_0b9b:
	{
		bool L_234 = ___negate;
		bool L_235 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)57344), ((int32_t)63743), L_234, 0, L_235);
		goto IL_0c97;
	}

IL_0bb3:
	{
		bool L_236 = ___negate;
		bool L_237 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)63744), ((int32_t)64255), L_236, 0, L_237);
		goto IL_0c97;
	}

IL_0bcb:
	{
		bool L_238 = ___negate;
		bool L_239 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)64256), ((int32_t)64335), L_238, 0, L_239);
		goto IL_0c97;
	}

IL_0be3:
	{
		bool L_240 = ___negate;
		bool L_241 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)64336), ((int32_t)65023), L_240, 0, L_241);
		goto IL_0c97;
	}

IL_0bfb:
	{
		bool L_242 = ___negate;
		bool L_243 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)65056), ((int32_t)65071), L_242, 0, L_243);
		goto IL_0c97;
	}

IL_0c13:
	{
		bool L_244 = ___negate;
		bool L_245 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)65072), ((int32_t)65103), L_244, 0, L_245);
		goto IL_0c97;
	}

IL_0c2b:
	{
		bool L_246 = ___negate;
		bool L_247 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)65104), ((int32_t)65135), L_246, 0, L_247);
		goto IL_0c97;
	}

IL_0c43:
	{
		bool L_248 = ___negate;
		bool L_249 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)65136), ((int32_t)65278), L_248, 0, L_249);
		goto IL_0c97;
	}

IL_0c5b:
	{
		bool L_250 = ___negate;
		bool L_251 = ___reverse;
		VirtActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(10 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)65280), ((int32_t)65519), L_250, 0, L_251);
		goto IL_0c97;
	}

IL_0c73:
	{
		uint16_t L_252 = ___cat;
		bool L_253 = ___negate;
		bool L_254 = ___reverse;
		RxCompiler_EmitCatGeneral_m17745(__this, L_252, L_253, L_254, /*hidden argument*/NULL);
		goto IL_0c97;
	}

IL_0c81:
	{
		uint16_t L_255 = ___cat;
		uint16_t L_256 = L_255;
		Object_t * L_257 = Box(Category_t4481_il2cpp_TypeInfo_var, &L_256);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_258 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral4526, L_257, /*hidden argument*/NULL);
		NotImplementedException_t1457 * L_259 = (NotImplementedException_t1457 *)il2cpp_codegen_object_new (NotImplementedException_t1457_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7599(L_259, L_258, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_259);
	}

IL_0c97:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitNotCategory_m17747 (RxCompiler_t4480 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method)
{
	{
		bool L_0 = ___negate;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		uint16_t L_1 = ___cat;
		bool L_2 = ___reverse;
		VirtActionInvoker3< uint16_t, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, __this, L_1, 0, L_2);
		goto IL_001d;
	}

IL_0014:
	{
		uint16_t L_3 = ___cat;
		bool L_4 = ___reverse;
		VirtActionInvoker3< uint16_t, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, __this, L_3, 1, L_4);
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitRange_m17748 (RxCompiler_t4480 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___lo;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0038;
		}
	}
	{
		uint16_t L_1 = ___hi;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_2 = ___negate;
		bool L_3 = ___ignore;
		bool L_4 = ___reverse;
		VirtActionInvoker4< uint8_t, bool, bool, bool >::Invoke(34 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)28), L_2, L_3, L_4);
		uint16_t L_5 = ___lo;
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_5)), /*hidden argument*/NULL);
		uint16_t L_6 = ___hi;
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_6)), /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_0038:
	{
		bool L_7 = ___negate;
		bool L_8 = ___ignore;
		bool L_9 = ___reverse;
		VirtActionInvoker4< uint8_t, bool, bool, bool >::Invoke(34 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)52), L_7, L_8, L_9);
		uint16_t L_10 = ___lo;
		RxCompiler_Emit_m17733(__this, L_10, /*hidden argument*/NULL);
		uint16_t L_11 = ___hi;
		RxCompiler_Emit_m17733(__this, L_11, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C" void RxCompiler_EmitSet_m17749 (RxCompiler_t4480 * __this, uint16_t ___lo, BitArray_t4533 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		BitArray_t4533 * L_0 = ___set;
		NullCheck(L_0);
		int32_t L_1 = BitArray_get_Length_m18161(L_0, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)7))>>(int32_t)3));
		uint16_t L_2 = ___lo;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_4 = ___negate;
		bool L_5 = ___ignore;
		bool L_6 = ___reverse;
		VirtActionInvoker4< uint8_t, bool, bool, bool >::Invoke(34 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)36), L_4, L_5, L_6);
		uint16_t L_7 = ___lo;
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_7)), /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_8)), /*hidden argument*/NULL);
		goto IL_005f;
	}

IL_0043:
	{
		bool L_9 = ___negate;
		bool L_10 = ___ignore;
		bool L_11 = ___reverse;
		VirtActionInvoker4< uint8_t, bool, bool, bool >::Invoke(34 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOp(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean,System.Boolean) */, __this, ((int32_t)60), L_9, L_10, L_11);
		uint16_t L_12 = ___lo;
		RxCompiler_Emit_m17733(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_13)), /*hidden argument*/NULL);
	}

IL_005f:
	{
		V_1 = 0;
		goto IL_00af;
	}

IL_0066:
	{
		V_2 = 0;
		V_3 = 0;
		goto IL_00a0;
	}

IL_006f:
	{
		int32_t L_14 = V_1;
		BitArray_t4533 * L_15 = ___set;
		NullCheck(L_15);
		int32_t L_16 = BitArray_get_Length_m18161(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00a7;
	}

IL_0080:
	{
		BitArray_t4533 * L_17 = ___set;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
		NullCheck(L_17);
		bool L_20 = BitArray_get_Item_m18162(L_17, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_3;
		V_2 = ((int32_t)((int32_t)L_21|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
	}

IL_009c:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_00a0:
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) < ((int32_t)8)))
		{
			goto IL_006f;
		}
	}

IL_00a7:
	{
		int32_t L_25 = V_2;
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_25)), /*hidden argument*/NULL);
	}

IL_00af:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)((int32_t)L_27-(int32_t)1));
		if (L_27)
		{
			goto IL_0066;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitString_m17750 (RxCompiler_t4480 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_2 = 0;
		bool L_0 = ___ignore;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		bool L_2 = ___reverse;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_2;
		V_2 = ((int32_t)((int32_t)L_3+(int32_t)2));
	}

IL_0018:
	{
		bool L_4 = ___ignore;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_5 = ___str;
		NullCheck(L_5);
		String_t* L_6 = String_ToLower_m3996(L_5, /*hidden argument*/NULL);
		___str = L_6;
	}

IL_0026:
	{
		String_t* L_7 = ___str;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m410(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)256))))
		{
			goto IL_0067;
		}
	}
	{
		V_0 = 1;
		V_1 = 0;
		goto IL_005b;
	}

IL_003f:
	{
		String_t* L_9 = ___str;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		uint16_t L_11 = String_get_Chars_m407(L_9, L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)256))))
		{
			goto IL_0057;
		}
	}
	{
		V_0 = 0;
		goto IL_0067;
	}

IL_0057:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_13 = V_1;
		String_t* L_14 = ___str;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m410(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_003f;
		}
	}

IL_0067:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_00ae;
		}
	}
	{
		bool L_17 = ___ignore;
		bool L_18 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(35 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)12), L_17, L_18);
		String_t* L_19 = ___str;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m410(L_19, /*hidden argument*/NULL);
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_20)), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_009d;
	}

IL_008b:
	{
		String_t* L_21 = ___str;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		uint16_t L_23 = String_get_Chars_m407(L_21, L_22, /*hidden argument*/NULL);
		RxCompiler_Emit_m17731(__this, (((uint8_t)L_23)), /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_009d:
	{
		int32_t L_25 = V_1;
		String_t* L_26 = ___str;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m410(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_008b;
		}
	}
	{
		goto IL_00ff;
	}

IL_00ae:
	{
		bool L_28 = ___ignore;
		bool L_29 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(35 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)16), L_28, L_29);
		String_t* L_30 = ___str;
		NullCheck(L_30);
		int32_t L_31 = String_get_Length_m410(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_00ce;
		}
	}
	{
		NotSupportedException_t56 * L_32 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_32, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_32);
	}

IL_00ce:
	{
		String_t* L_33 = ___str;
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m410(L_33, /*hidden argument*/NULL);
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_34)), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_00f3;
	}

IL_00e2:
	{
		String_t* L_35 = ___str;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		uint16_t L_37 = String_get_Chars_m407(L_35, L_36, /*hidden argument*/NULL);
		RxCompiler_Emit_m17733(__this, L_37, /*hidden argument*/NULL);
		int32_t L_38 = V_1;
		V_1 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00f3:
	{
		int32_t L_39 = V_1;
		String_t* L_40 = ___str;
		NullCheck(L_40);
		int32_t L_41 = String_get_Length_m410(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_00e2;
		}
	}

IL_00ff:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitPosition_m17751 (RxCompiler_t4480 * __this, uint16_t ___pos, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = {0};
	{
		uint16_t L_0 = ___pos;
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0035;
		}
		if (L_1 == 1)
		{
			goto IL_0041;
		}
		if (L_1 == 2)
		{
			goto IL_004d;
		}
		if (L_1 == 3)
		{
			goto IL_0059;
		}
		if (L_1 == 4)
		{
			goto IL_0065;
		}
		if (L_1 == 5)
		{
			goto IL_0071;
		}
		if (L_1 == 6)
		{
			goto IL_007e;
		}
		if (L_1 == 7)
		{
			goto IL_008a;
		}
		if (L_1 == 8)
		{
			goto IL_0096;
		}
		if (L_1 == 9)
		{
			goto IL_00a3;
		}
	}
	{
		goto IL_00b0;
	}

IL_0035:
	{
		RxCompiler_Emit_m17732(__this, 3, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0041:
	{
		RxCompiler_Emit_m17732(__this, 4, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_004d:
	{
		RxCompiler_Emit_m17732(__this, 4, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0059:
	{
		RxCompiler_Emit_m17732(__this, 5, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0065:
	{
		RxCompiler_Emit_m17732(__this, 6, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0071:
	{
		RxCompiler_Emit_m17732(__this, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_007e:
	{
		RxCompiler_Emit_m17732(__this, 7, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_008a:
	{
		RxCompiler_Emit_m17732(__this, 8, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0096:
	{
		RxCompiler_Emit_m17732(__this, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_00a3:
	{
		RxCompiler_Emit_m17732(__this, ((int32_t)11), /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_00b0:
	{
		NotSupportedException_t56 * L_2 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_00b6:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitOpen(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitOpen_m17752 (RxCompiler_t4480 * __this, int32_t ___gid, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___gid;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
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
		RxCompiler_Emit_m17732(__this, ((int32_t)140), /*hidden argument*/NULL);
		int32_t L_2 = ___gid;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitClose(System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitClose_m17753 (RxCompiler_t4480 * __this, int32_t ___gid, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___gid;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
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
		RxCompiler_Emit_m17732(__this, ((int32_t)141), /*hidden argument*/NULL);
		int32_t L_2 = ___gid;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_2)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitBalanceStart_m17754 (RxCompiler_t4480 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t4483 * ___tail, const MethodInfo* method)
{
	RxCompiler_t4480 * G_B2_0 = {0};
	RxCompiler_t4480 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	RxCompiler_t4480 * G_B3_1 = {0};
	{
		LinkRef_t4483 * L_0 = ___tail;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		RxCompiler_Emit_m17732(__this, ((int32_t)142), /*hidden argument*/NULL);
		int32_t L_1 = ___gid;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_1)), /*hidden argument*/NULL);
		int32_t L_2 = ___balance;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_2)), /*hidden argument*/NULL);
		bool L_3 = ___capture;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		RxCompiler_Emit_m17731(G_B3_1, (((uint8_t)G_B3_0)), /*hidden argument*/NULL);
		LinkRef_t4483 * L_4 = ___tail;
		RxCompiler_EmitLink_m17736(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBalance()
extern "C" void RxCompiler_EmitBalance_m17755 (RxCompiler_t4480 * __this, const MethodInfo* method)
{
	{
		RxCompiler_Emit_m17732(__this, ((int32_t)143), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitReference_m17756 (RxCompiler_t4480 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___gid;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
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
		bool L_2 = ___ignore;
		bool L_3 = ___reverse;
		VirtActionInvoker3< uint8_t, bool, bool >::Invoke(35 /* System.Void System.Text.RegularExpressions.RxCompiler::EmitOpIgnoreReverse(System.Text.RegularExpressions.RxOp,System.Boolean,System.Boolean) */, __this, ((int32_t)136), L_2, L_3);
		int32_t L_4 = ___gid;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitIfDefined_m17757 (RxCompiler_t4480 * __this, int32_t ___gid, LinkRef_t4483 * ___tail, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___gid;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
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
		LinkRef_t4483 * L_2 = ___tail;
		RxCompiler_BeginLink_m17735(__this, L_2, /*hidden argument*/NULL);
		RxCompiler_Emit_m17732(__this, ((int32_t)144), /*hidden argument*/NULL);
		LinkRef_t4483 * L_3 = ___tail;
		RxCompiler_EmitLink_m17736(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___gid;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_4)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitSub_m17758 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t4483 * L_0 = ___tail;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		RxCompiler_Emit_m17732(__this, ((int32_t)146), /*hidden argument*/NULL);
		LinkRef_t4483 * L_1 = ___tail;
		RxCompiler_EmitLink_m17736(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitTest_m17759 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___yes, LinkRef_t4483 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t4483 * L_0 = ___yes;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		LinkRef_t4483 * L_1 = ___tail;
		RxCompiler_BeginLink_m17735(__this, L_1, /*hidden argument*/NULL);
		RxCompiler_Emit_m17732(__this, ((int32_t)147), /*hidden argument*/NULL);
		LinkRef_t4483 * L_2 = ___yes;
		RxCompiler_EmitLink_m17736(__this, L_2, /*hidden argument*/NULL);
		LinkRef_t4483 * L_3 = ___tail;
		RxCompiler_EmitLink_m17736(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitBranch_m17760 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___next, const MethodInfo* method)
{
	{
		LinkRef_t4483 * L_0 = ___next;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		RxCompiler_Emit_m17732(__this, ((int32_t)148), /*hidden argument*/NULL);
		LinkRef_t4483 * L_1 = ___next;
		RxCompiler_EmitLink_m17736(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitJump_m17761 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___target, const MethodInfo* method)
{
	{
		LinkRef_t4483 * L_0 = ___target;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		RxCompiler_Emit_m17732(__this, ((int32_t)145), /*hidden argument*/NULL);
		LinkRef_t4483 * L_1 = ___target;
		RxCompiler_EmitLink_m17736(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitIn_m17762 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___tail, const MethodInfo* method)
{
	{
		LinkRef_t4483 * L_0 = ___tail;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		RxCompiler_Emit_m17732(__this, ((int32_t)149), /*hidden argument*/NULL);
		LinkRef_t4483 * L_1 = ___tail;
		RxCompiler_EmitLink_m17736(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitRepeat_m17763 (RxCompiler_t4480 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t4483 * ___until, const MethodInfo* method)
{
	RxCompiler_t4480 * G_B2_0 = {0};
	RxCompiler_t4480 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	RxCompiler_t4480 * G_B3_1 = {0};
	{
		LinkRef_t4483 * L_0 = ___until;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___lazy;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = ((int32_t)153);
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0019:
	{
		G_B3_0 = ((int32_t)152);
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		RxCompiler_Emit_m17732(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		LinkRef_t4483 * L_2 = ___until;
		RxCompiler_EmitLink_m17736(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___min;
		RxCompiler_Emit_m17734(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___max;
		RxCompiler_Emit_m17734(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitUntil_m17764 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___repeat, const MethodInfo* method)
{
	{
		LinkRef_t4483 * L_0 = ___repeat;
		VirtActionInvoker1< LinkRef_t4483 * >::Invoke(33 /* System.Void System.Text.RegularExpressions.RxCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, __this, L_0);
		RxCompiler_Emit_m17732(__this, ((int32_t)154), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitInfo_m17765 (RxCompiler_t4480 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		RxCompiler_Emit_m17732(__this, 0, /*hidden argument*/NULL);
		int32_t L_0 = ___count;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0018;
		}
	}
	{
		NotSupportedException_t56 * L_1 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___count;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_2)), /*hidden argument*/NULL);
		int32_t L_3 = ___min;
		RxCompiler_Emit_m17734(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___max;
		RxCompiler_Emit_m17734(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void RxCompiler_EmitFastRepeat_m17766 (RxCompiler_t4480 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t4483 * ___tail, const MethodInfo* method)
{
	RxCompiler_t4480 * G_B2_0 = {0};
	RxCompiler_t4480 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	RxCompiler_t4480 * G_B3_1 = {0};
	{
		LinkRef_t4483 * L_0 = ___tail;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___lazy;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = ((int32_t)156);
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0019:
	{
		G_B3_0 = ((int32_t)155);
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		RxCompiler_Emit_m17732(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		LinkRef_t4483 * L_2 = ___tail;
		RxCompiler_EmitLink_m17736(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___min;
		RxCompiler_Emit_m17734(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___max;
		RxCompiler_Emit_m17734(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_EmitAnchor_m17767 (RxCompiler_t4480 * __this, bool ___reverse, int32_t ___offset, LinkRef_t4483 * ___tail, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		LinkRef_t4483 * L_0 = ___tail;
		RxCompiler_BeginLink_m17735(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___reverse;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RxCompiler_Emit_m17732(__this, ((int32_t)151), /*hidden argument*/NULL);
		goto IL_0028;
	}

IL_001d:
	{
		RxCompiler_Emit_m17732(__this, ((int32_t)150), /*hidden argument*/NULL);
	}

IL_0028:
	{
		LinkRef_t4483 * L_2 = ___tail;
		RxCompiler_EmitLink_m17736(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___offset;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0040;
		}
	}
	{
		NotSupportedException_t56 * L_4 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0040:
	{
		int32_t L_5 = ___offset;
		RxCompiler_Emit_m17733(__this, (((uint16_t)L_5)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitBranchEnd()
extern "C" void RxCompiler_EmitBranchEnd_m17768 (RxCompiler_t4480 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::EmitAlternationEnd()
extern "C" void RxCompiler_EmitAlternationEnd_m17769 (RxCompiler_t4480 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.RxCompiler::NewLink()
extern TypeInfo* RxLinkRef_t4512_il2cpp_TypeInfo_var;
extern "C" LinkRef_t4483 * RxCompiler_NewLink_m17770 (RxCompiler_t4480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RxLinkRef_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7941);
		s_Il2CppMethodIntialized = true;
	}
	{
		RxLinkRef_t4512 * L_0 = (RxLinkRef_t4512 *)il2cpp_codegen_object_new (RxLinkRef_t4512_il2cpp_TypeInfo_var);
		RxLinkRef__ctor_m17726(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RxCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern TypeInfo* RxLinkRef_t4512_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RxCompiler_ResolveLink_m17771 (RxCompiler_t4480 * __this, LinkRef_t4483 * ___link, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RxLinkRef_t4512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7941);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	RxLinkRef_t4512 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		LinkRef_t4483 * L_0 = ___link;
		V_0 = ((RxLinkRef_t4512 *)IsInst(L_0, RxLinkRef_t4512_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0056;
	}

IL_000e:
	{
		int32_t L_1 = (__this->___curpos_1);
		RxLinkRef_t4512 * L_2 = V_0;
		NullCheck(L_2);
		Int32U5BU5D_t484* L_3 = (L_2->___offsets_0);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = ((int32_t)((int32_t)L_1-(int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_5))));
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_002f;
		}
	}
	{
		NotSupportedException_t56 * L_7 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002f:
	{
		RxLinkRef_t4512 * L_8 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t484* L_9 = (L_8->___offsets_0);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)));
		int32_t L_11 = ((int32_t)((int32_t)L_10+(int32_t)1));
		V_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11));
		ByteU5BU5D_t66* L_12 = (__this->___program_0);
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13)) = (uint8_t)(((uint8_t)L_14));
		ByteU5BU5D_t66* L_15 = (__this->___program_0);
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_17>>(int32_t)8))));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)2));
	}

IL_0056:
	{
		int32_t L_19 = V_1;
		RxLinkRef_t4512 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (L_20->___current_1);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Text.RegularExpressions.RxInterpreterFactory::.ctor(System.Byte[],System.Text.RegularExpressions.EvalDelegate)
extern "C" void RxInterpreterFactory__ctor_m17772 (RxInterpreterFactory_t4513 * __this, ByteU5BU5D_t66* ___program, EvalDelegate_t4510 * ___eval_del, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_0 = ___program;
		__this->___program_1 = L_0;
		EvalDelegate_t4510 * L_1 = ___eval_del;
		__this->___eval_del_2 = L_1;
		return;
	}
}
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.RxInterpreterFactory::NewInstance()
extern TypeInfo* RxInterpreter_t4511_il2cpp_TypeInfo_var;
extern "C" Object_t * RxInterpreterFactory_NewInstance_m17773 (RxInterpreterFactory_t4513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RxInterpreter_t4511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7884);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t66* L_0 = (__this->___program_1);
		EvalDelegate_t4510 * L_1 = (__this->___eval_del_2);
		RxInterpreter_t4511 * L_2 = (RxInterpreter_t4511 *)il2cpp_codegen_object_new (RxInterpreter_t4511_il2cpp_TypeInfo_var);
		RxInterpreter__ctor_m17709(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_GroupCount()
extern "C" int32_t RxInterpreterFactory_get_GroupCount_m17774 (RxInterpreterFactory_t4513 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t66* L_0 = (__this->___program_1);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		int32_t L_1 = 1;
		ByteU5BU5D_t66* L_2 = (__this->___program_1);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		int32_t L_3 = 2;
		return ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3))<<(int32_t)8))));
	}
}
// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::get_Gap()
extern "C" int32_t RxInterpreterFactory_get_Gap_m17775 (RxInterpreterFactory_t4513 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gap_4);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Gap(System.Int32)
extern "C" void RxInterpreterFactory_set_Gap_m17776 (RxInterpreterFactory_t4513 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___gap_4 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Text.RegularExpressions.RxInterpreterFactory::get_Mapping()
extern "C" Object_t * RxInterpreterFactory_get_Mapping_m17777 (RxInterpreterFactory_t4513 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___mapping_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_Mapping(System.Collections.IDictionary)
extern "C" void RxInterpreterFactory_set_Mapping_m17778 (RxInterpreterFactory_t4513 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___mapping_0 = L_0;
		return;
	}
}
// System.String[] System.Text.RegularExpressions.RxInterpreterFactory::get_NamesMapping()
extern "C" StringU5BU5D_t75* RxInterpreterFactory_get_NamesMapping_m17779 (RxInterpreterFactory_t4513 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = (__this->___namesMapping_3);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.RxInterpreterFactory::set_NamesMapping(System.String[])
extern "C" void RxInterpreterFactory_set_NamesMapping_m17780 (RxInterpreterFactory_t4513 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = ___value;
		__this->___namesMapping_3 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.RxOp
#include "System_System_Text_RegularExpressions_RxOpMethodDeclarations.h"



// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluator.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.ReplacementEvaluator
#include "System_System_Text_RegularExpressions_ReplacementEvaluatorMethodDeclarations.h"

// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C" void ReplacementEvaluator__ctor_m17781 (ReplacementEvaluator_t4515 * __this, Regex_t801 * ___regex, String_t* ___replacement, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Regex_t801 * L_0 = ___regex;
		__this->___regex_0 = L_0;
		String_t* L_1 = ___replacement;
		__this->___replacement_3 = L_1;
		__this->___pieces_2 = (Int32U5BU5D_t484*)NULL;
		__this->___n_pieces_1 = 0;
		ReplacementEvaluator_Compile_m17788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" String_t* ReplacementEvaluator_Evaluate_m17782 (ReplacementEvaluator_t4515 * __this, Match_t1391 * ___match, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	{
		int32_t L_0 = (__this->___n_pieces_1);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___replacement_3);
		return L_1;
	}

IL_0012:
	{
		StringBuilder_t261 * L_2 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		Match_t1391 * L_3 = ___match;
		StringBuilder_t261 * L_4 = V_0;
		ReplacementEvaluator_EvaluateAppend_m17783(__this, L_3, L_4, /*hidden argument*/NULL);
		StringBuilder_t261 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_5);
		return L_6;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void ReplacementEvaluator_EvaluateAppend_m17783 (ReplacementEvaluator_t4515 * __this, Match_t1391 * ___match, StringBuilder_t261 * ___sb, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Group_t1452 * V_3 = {0};
	int32_t V_4 = 0;
	{
		int32_t L_0 = (__this->___n_pieces_1);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t261 * L_1 = ___sb;
		String_t* L_2 = (__this->___replacement_3);
		NullCheck(L_1);
		StringBuilder_Append_m3995(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		V_0 = 0;
		goto IL_00f1;
	}

IL_0020:
	{
		Int32U5BU5D_t484* L_3 = (__this->___pieces_2);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_5);
		int32_t L_6 = L_5;
		V_1 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_3, L_6));
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		Int32U5BU5D_t484* L_8 = (__this->___pieces_2);
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_10);
		int32_t L_11 = L_10;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_11));
		StringBuilder_t261 * L_12 = ___sb;
		String_t* L_13 = (__this->___replacement_3);
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_12);
		StringBuilder_Append_m14824(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_0055:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)-3))))
		{
			goto IL_008b;
		}
	}
	{
		Match_t1391 * L_17 = ___match;
		NullCheck(L_17);
		GroupCollection_t1454 * L_18 = (GroupCollection_t1454 *)VirtFuncInvoker0< GroupCollection_t1454 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_17);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Group_t1452 * L_20 = GroupCollection_get_Item_m11566(L_18, ((-((int32_t)((int32_t)L_19+(int32_t)4)))), /*hidden argument*/NULL);
		V_3 = L_20;
		StringBuilder_t261 * L_21 = ___sb;
		Group_t1452 * L_22 = V_3;
		NullCheck(L_22);
		String_t* L_23 = Capture_get_Text_m17443(L_22, /*hidden argument*/NULL);
		Group_t1452 * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = Capture_get_Index_m7502(L_24, /*hidden argument*/NULL);
		Group_t1452 * L_26 = V_3;
		NullCheck(L_26);
		int32_t L_27 = Capture_get_Length_m7503(L_26, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m14824(L_21, L_23, L_25, L_27, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_008b:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t261 * L_29 = ___sb;
		Match_t1391 * L_30 = ___match;
		NullCheck(L_30);
		String_t* L_31 = Capture_get_Text_m17443(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m3995(L_29, L_31, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_00a4:
	{
		int32_t L_32 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_00c5;
		}
	}
	{
		StringBuilder_t261 * L_33 = ___sb;
		Match_t1391 * L_34 = ___match;
		NullCheck(L_34);
		String_t* L_35 = Capture_get_Text_m17443(L_34, /*hidden argument*/NULL);
		Match_t1391 * L_36 = ___match;
		NullCheck(L_36);
		int32_t L_37 = Capture_get_Index_m7502(L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		StringBuilder_Append_m14824(L_33, L_35, 0, L_37, /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_00c5:
	{
		Match_t1391 * L_38 = ___match;
		NullCheck(L_38);
		int32_t L_39 = Capture_get_Index_m7502(L_38, /*hidden argument*/NULL);
		Match_t1391 * L_40 = ___match;
		NullCheck(L_40);
		int32_t L_41 = Capture_get_Length_m7503(L_40, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)L_41));
		StringBuilder_t261 * L_42 = ___sb;
		Match_t1391 * L_43 = ___match;
		NullCheck(L_43);
		String_t* L_44 = Capture_get_Text_m17443(L_43, /*hidden argument*/NULL);
		int32_t L_45 = V_4;
		Match_t1391 * L_46 = ___match;
		NullCheck(L_46);
		String_t* L_47 = Capture_get_Text_m17443(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m410(L_47, /*hidden argument*/NULL);
		int32_t L_49 = V_4;
		NullCheck(L_42);
		StringBuilder_Append_m14824(L_42, L_44, L_45, ((int32_t)((int32_t)L_48-(int32_t)L_49)), /*hidden argument*/NULL);
	}

IL_00f1:
	{
		int32_t L_50 = V_0;
		int32_t L_51 = (__this->___n_pieces_1);
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C" bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m17784 (ReplacementEvaluator_t4515 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___n_pieces_1);
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
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void ReplacementEvaluator_Ensure_m17785 (ReplacementEvaluator_t4515 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t484* V_1 = {0};
	{
		Int32U5BU5D_t484* L_0 = (__this->___pieces_2);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		V_0 = 4;
		int32_t L_1 = V_0;
		int32_t L_2 = ___size;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___size;
		V_0 = L_3;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		__this->___pieces_2 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_4));
		goto IL_0072;
	}

IL_0027:
	{
		int32_t L_5 = ___size;
		Int32U5BU5D_t484* L_6 = (__this->___pieces_2);
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_0072;
		}
	}
	{
		Int32U5BU5D_t484* L_7 = (__this->___pieces_2);
		NullCheck(L_7);
		Int32U5BU5D_t484* L_8 = (__this->___pieces_2);
		NullCheck(L_8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))+(int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))>>(int32_t)1))));
		int32_t L_9 = V_0;
		int32_t L_10 = ___size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_11 = ___size;
		V_0 = L_11;
	}

IL_0052:
	{
		int32_t L_12 = V_0;
		V_1 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_12));
		Int32U5BU5D_t484* L_13 = (__this->___pieces_2);
		Int32U5BU5D_t484* L_14 = V_1;
		int32_t L_15 = (__this->___n_pieces_1);
		Array_Copy_m14753(NULL /*static, unused*/, (Array_t *)(Array_t *)L_13, (Array_t *)(Array_t *)L_14, L_15, /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_16 = V_1;
		__this->___pieces_2 = L_16;
	}

IL_0072:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C" void ReplacementEvaluator_AddFromReplacement_m17786 (ReplacementEvaluator_t4515 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___start;
		int32_t L_1 = ___end;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		int32_t L_2 = (__this->___n_pieces_1);
		ReplacementEvaluator_Ensure_m17785(__this, ((int32_t)((int32_t)L_2+(int32_t)2)), /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_3 = (__this->___pieces_2);
		int32_t L_4 = (__this->___n_pieces_1);
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___n_pieces_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_0;
		int32_t L_7 = ___start;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_6)) = (int32_t)L_7;
		Int32U5BU5D_t484* L_8 = (__this->___pieces_2);
		int32_t L_9 = (__this->___n_pieces_1);
		int32_t L_10 = L_9;
		V_0 = L_10;
		__this->___n_pieces_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_0;
		int32_t L_12 = ___end;
		int32_t L_13 = ___start;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_11);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_11)) = (int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13));
		return;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C" void ReplacementEvaluator_AddInt_m17787 (ReplacementEvaluator_t4515 * __this, int32_t ___i, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___n_pieces_1);
		ReplacementEvaluator_Ensure_m17785(__this, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_1 = (__this->___pieces_2);
		int32_t L_2 = (__this->___n_pieces_1);
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___n_pieces_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_0;
		int32_t L_5 = ___i;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_4)) = (int32_t)L_5;
		return;
	}
}
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C" void ReplacementEvaluator_Compile_m17788 (ReplacementEvaluator_t4515 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0090;
	}

IL_0009:
	{
		String_t* L_0 = (__this->___replacement_3);
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		V_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		NullCheck(L_0);
		uint16_t L_3 = String_get_Chars_m407(L_0, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		uint16_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)36))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0090;
	}

IL_0027:
	{
		int32_t L_5 = V_1;
		String_t* L_6 = (__this->___replacement_3);
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m410(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_00a1;
	}

IL_003d:
	{
		String_t* L_8 = (__this->___replacement_3);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m407(L_8, L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)36)))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		ReplacementEvaluator_AddFromReplacement_m17786(__this, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		V_0 = L_14;
		goto IL_0090;
	}

IL_0063:
	{
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_15-(int32_t)1));
		int32_t L_16 = ReplacementEvaluator_CompileTerm_m17789(__this, (&V_1), /*hidden argument*/NULL);
		V_4 = L_16;
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_0090;
	}

IL_007e:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		ReplacementEvaluator_AddFromReplacement_m17786(__this, L_18, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_4;
		ReplacementEvaluator_AddInt_m17787(__this, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		V_0 = L_21;
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		String_t* L_23 = (__this->___replacement_3);
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m410(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0009;
		}
	}

IL_00a1:
	{
		int32_t L_25 = V_0;
		if (!L_25)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_26 = V_0;
		int32_t L_27 = V_1;
		ReplacementEvaluator_AddFromReplacement_m17786(__this, L_26, L_27, /*hidden argument*/NULL);
	}

IL_00af:
	{
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IndexOutOfRangeException_t2947_il2cpp_TypeInfo_var;
extern "C" int32_t ReplacementEvaluator_CompileTerm_m17789 (ReplacementEvaluator_t4515 * __this, int32_t* ___ptr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IndexOutOfRangeException_t2947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4509);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	uint16_t V_4 = 0x0;
	int32_t V_5 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___replacement_3);
		int32_t* L_1 = ___ptr;
		NullCheck(L_0);
		uint16_t L_2 = String_get_Chars_m407(L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsDigit_m18100(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_5 = (__this->___replacement_3);
		int32_t* L_6 = ___ptr;
		int32_t L_7 = Parser_ParseDecimal_m17628(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_9 = V_1;
		Regex_t801 * L_10 = (__this->___regex_0);
		NullCheck(L_10);
		int32_t L_11 = Regex_get_GroupCount_m17690(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		return 0;
	}

IL_0040:
	{
		int32_t L_12 = V_1;
		return ((int32_t)((int32_t)((-L_12))-(int32_t)4));
	}

IL_0045:
	{
		int32_t* L_13 = ___ptr;
		int32_t* L_14 = ___ptr;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)1));
		uint16_t L_15 = V_0;
		V_4 = L_15;
		uint16_t L_16 = V_4;
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 0)
		{
			goto IL_015e;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 1)
		{
			goto IL_0164;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 2)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 3)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 4)
		{
			goto IL_0070;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)((int32_t)38))) == 5)
		{
			goto IL_0167;
		}
	}

IL_0070:
	{
		uint16_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)95))))
		{
			goto IL_0176;
		}
	}
	{
		uint16_t L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)96))))
		{
			goto IL_0161;
		}
	}
	{
		uint16_t L_19 = V_4;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)123))))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_0178;
	}

IL_0090:
	{
		V_3 = (-1);
	}

IL_0092:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_20 = (__this->___replacement_3);
			int32_t* L_21 = ___ptr;
			NullCheck(L_20);
			uint16_t L_22 = String_get_Chars_m407(L_20, (*((int32_t*)L_21)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
			bool L_23 = Char_IsDigit_m18100(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00c1;
			}
		}

IL_00a9:
		{
			String_t* L_24 = (__this->___replacement_3);
			int32_t* L_25 = ___ptr;
			int32_t L_26 = Parser_ParseDecimal_m17628(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
			V_3 = L_26;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			V_2 = L_27;
			goto IL_00ce;
		}

IL_00c1:
		{
			String_t* L_28 = (__this->___replacement_3);
			int32_t* L_29 = ___ptr;
			String_t* L_30 = Parser_ParseName_m17632(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
			V_2 = L_30;
		}

IL_00ce:
		{
			goto IL_00ee;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (IndexOutOfRangeException_t2947_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00d3;
		throw e;
	}

CATCH_00d3:
	{ // begin catch(System.IndexOutOfRangeException)
		{
			int32_t* L_31 = ___ptr;
			String_t* L_32 = (__this->___replacement_3);
			NullCheck(L_32);
			int32_t L_33 = String_get_Length_m410(L_32, /*hidden argument*/NULL);
			*((int32_t*)(L_31)) = (int32_t)L_33;
			V_5 = 0;
			goto IL_017a;
		}

IL_00e9:
		{
			; // IL_00e9: leave IL_00ee
		}
	} // end catch (depth: 1)

IL_00ee:
	{
		int32_t* L_34 = ___ptr;
		String_t* L_35 = (__this->___replacement_3);
		NullCheck(L_35);
		int32_t L_36 = String_get_Length_m410(L_35, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_34))) == ((int32_t)L_36)))
		{
			goto IL_011a;
		}
	}
	{
		String_t* L_37 = (__this->___replacement_3);
		int32_t* L_38 = ___ptr;
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m407(L_37, (*((int32_t*)L_38)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_011a;
		}
	}
	{
		String_t* L_40 = V_2;
		if (L_40)
		{
			goto IL_011c;
		}
	}

IL_011a:
	{
		return 0;
	}

IL_011c:
	{
		int32_t* L_41 = ___ptr;
		int32_t* L_42 = ___ptr;
		*((int32_t*)(L_41)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_42))+(int32_t)1));
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_45 = String_op_Inequality_m415(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_013f;
		}
	}
	{
		Regex_t801 * L_46 = (__this->___regex_0);
		String_t* L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = Regex_GroupNumberFromName_m17679(L_46, L_47, /*hidden argument*/NULL);
		V_3 = L_48;
	}

IL_013f:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) < ((int32_t)0)))
		{
			goto IL_0157;
		}
	}
	{
		int32_t L_50 = V_3;
		Regex_t801 * L_51 = (__this->___regex_0);
		NullCheck(L_51);
		int32_t L_52 = Regex_get_GroupCount_m17690(L_51, /*hidden argument*/NULL);
		if ((((int32_t)L_50) <= ((int32_t)L_52)))
		{
			goto IL_0159;
		}
	}

IL_0157:
	{
		return 0;
	}

IL_0159:
	{
		int32_t L_53 = V_3;
		return ((int32_t)((int32_t)((-L_53))-(int32_t)4));
	}

IL_015e:
	{
		return ((int32_t)-4);
	}

IL_0161:
	{
		return ((int32_t)-2);
	}

IL_0164:
	{
		return ((int32_t)-3);
	}

IL_0167:
	{
		Regex_t801 * L_54 = (__this->___regex_0);
		NullCheck(L_54);
		int32_t L_55 = Regex_get_GroupCount_m17690(L_54, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((-L_55))-(int32_t)4));
	}

IL_0176:
	{
		return (-1);
	}

IL_0178:
	{
		return 0;
	}

IL_017a:
	{
		int32_t L_56 = V_5;
		return L_56;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"

// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBaseMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
extern "C" void ExpressionCollection__ctor_m17790 (ExpressionCollection_t4516 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m11515(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
extern TypeInfo* IList_t700_il2cpp_TypeInfo_var;
extern "C" void ExpressionCollection_Add_m17791 (ExpressionCollection_t4516 * __this, Expression_t4517 * ___e, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = CollectionBase_get_List_m14725(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_1 = ___e;
		NullCheck(L_0);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t700_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
extern TypeInfo* IList_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t4517_il2cpp_TypeInfo_var;
extern "C" Expression_t4517 * ExpressionCollection_get_Item_m17792 (ExpressionCollection_t4516 * __this, int32_t ___i, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		Expression_t4517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7931);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = CollectionBase_get_List_m14725(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___i;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t700_il2cpp_TypeInfo_var, L_0, L_1);
		return ((Expression_t4517 *)Castclass(L_2, Expression_t4517_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
extern TypeInfo* IList_t700_il2cpp_TypeInfo_var;
extern "C" void ExpressionCollection_set_Item_m17793 (ExpressionCollection_t4516 * __this, int32_t ___i, Expression_t4517 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IList_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = CollectionBase_get_List_m14725(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___i;
		Expression_t4517 * L_2 = ___value;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(3 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t700_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
extern "C" void ExpressionCollection_OnValidate_m17794 (ExpressionCollection_t4516 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"

// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
extern "C" void Expression__ctor_m17795 (Expression_t4517 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
extern "C" int32_t Expression_GetFixedWidth_m17796 (Expression_t4517 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, __this, (&V_0), (&V_1));
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		return (-1);
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
extern TypeInfo* AnchorInfo_t4535_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t4535 * Expression_GetAnchorInfo_m17797 (Expression_t4517 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t4535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7942);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Expression_GetFixedWidth_m17796(__this, /*hidden argument*/NULL);
		AnchorInfo_t4535 * L_1 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17886(L_1, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpres.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"

// System.Collections.CollectionBase
#include "mscorlib_System_Collections_CollectionBase.h"


// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern TypeInfo* ExpressionCollection_t4516_il2cpp_TypeInfo_var;
extern "C" void CompositeExpression__ctor_m17798 (CompositeExpression_t4518 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExpressionCollection_t4516_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7943);
		s_Il2CppMethodIntialized = true;
	}
	{
		Expression__ctor_m17795(__this, /*hidden argument*/NULL);
		ExpressionCollection_t4516 * L_0 = (ExpressionCollection_t4516 *)il2cpp_codegen_object_new (ExpressionCollection_t4516_il2cpp_TypeInfo_var);
		ExpressionCollection__ctor_m17790(L_0, /*hidden argument*/NULL);
		__this->___expressions_0 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C" ExpressionCollection_t4516 * CompositeExpression_get_Expressions_m17799 (CompositeExpression_t4518 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = (__this->___expressions_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern "C" void CompositeExpression_GetWidth_m17800 (CompositeExpression_t4518 * __this, int32_t* ___min, int32_t* ___max, int32_t ___count, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Expression_t4517 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)((int32_t)2147483647);
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)0;
		V_0 = 1;
		V_1 = 0;
		goto IL_0053;
	}

IL_0013:
	{
		ExpressionCollection_t4516 * L_2 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Expression_t4517 * L_4 = ExpressionCollection_get_Item_m17792(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Expression_t4517 * L_5 = V_2;
		if (L_5)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_004f;
	}

IL_002b:
	{
		V_0 = 0;
		Expression_t4517 * L_6 = V_2;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_6, (&V_3), (&V_4));
		int32_t L_7 = V_3;
		int32_t* L_8 = ___min;
		if ((((int32_t)L_7) >= ((int32_t)(*((int32_t*)L_8)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t* L_9 = ___min;
		int32_t L_10 = V_3;
		*((int32_t*)(L_9)) = (int32_t)L_10;
	}

IL_0042:
	{
		int32_t L_11 = V_4;
		int32_t* L_12 = ___max;
		if ((((int32_t)L_11) <= ((int32_t)(*((int32_t*)L_12)))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t* L_13 = ___max;
		int32_t L_14 = V_4;
		*((int32_t*)(L_13)) = (int32_t)L_14;
	}

IL_004f:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___count;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0013;
		}
	}
	{
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		int32_t* L_19 = ___min;
		int32_t* L_20 = ___max;
		int32_t L_21 = 0;
		V_5 = L_21;
		*((int32_t*)(L_20)) = (int32_t)L_21;
		int32_t L_22 = V_5;
		*((int32_t*)(L_19)) = (int32_t)L_22;
	}

IL_006a:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t4517_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool CompositeExpression_IsComplex_m17801 (CompositeExpression_t4518 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Expression_t4517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7931);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Expression_t4517 * V_0 = {0};
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
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Expression_t4517 *)Castclass(L_3, Expression_t4517_il2cpp_TypeInfo_var));
			Expression_t4517 * L_4 = V_0;
			NullCheck(L_4);
			bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_4);
			if (!L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x5E, FINALLY_003f);
		}

IL_002f:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x51, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_8 = V_1;
			V_3 = ((Object_t *)IsInst(L_8, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_3;
			if (L_9)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_004a:
		{
			Object_t * L_10 = V_3;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_10);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0051:
	{
		int32_t L_11 = Expression_GetFixedWidth_m17796(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_11) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"

// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" void Group__ctor_m17802 (Group_t4519 * __this, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m17798(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_AppendExpression_m17803 (Group_t4519 * __this, Expression_t4517 * ___e, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_1 = ___e;
		NullCheck(L_0);
		ExpressionCollection_Add_m17791(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Group_Compile_m17804 (Group_t4519 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Expression_t4517 * V_2 = {0};
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0048;
	}

IL_0013:
	{
		bool L_2 = ___reverse;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		ExpressionCollection_t4516 * L_3 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		Expression_t4517 * L_6 = ExpressionCollection_get_Item_m17792(L_3, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)L_5))-(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_003c;
	}

IL_002f:
	{
		ExpressionCollection_t4516 * L_7 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Expression_t4517 * L_9 = ExpressionCollection_get_Item_m17792(L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
	}

IL_003c:
	{
		Expression_t4517 * L_10 = V_2;
		Object_t * L_11 = ___cmp;
		bool L_12 = ___reverse;
		NullCheck(L_10);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_10, L_11, L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t4517_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Group_GetWidth_m17805 (Group_t4519 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Expression_t4517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7931);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Expression_t4517 * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)0;
		ExpressionCollection_t4516 * L_2 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_0017:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_4);
			V_0 = ((Expression_t4517 *)Castclass(L_5, Expression_t4517_il2cpp_TypeInfo_var));
			Expression_t4517 * L_6 = V_0;
			NullCheck(L_6);
			VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_6, (&V_2), (&V_3));
			int32_t* L_7 = ___min;
			int32_t* L_8 = ___min;
			int32_t L_9 = V_2;
			*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)L_9));
			int32_t* L_10 = ___max;
			if ((((int32_t)(*((int32_t*)L_10))) == ((int32_t)((int32_t)2147483647))))
			{
				goto IL_004a;
			}
		}

IL_003f:
		{
			int32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)2147483647)))))
			{
				goto IL_0056;
			}
		}

IL_004a:
		{
			int32_t* L_12 = ___max;
			*((int32_t*)(L_12)) = (int32_t)((int32_t)2147483647);
			goto IL_005c;
		}

IL_0056:
		{
			int32_t* L_13 = ___max;
			int32_t* L_14 = ___max;
			int32_t L_15 = V_3;
			*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)L_15));
		}

IL_005c:
		{
			Object_t * L_16 = V_1;
			NullCheck(L_16);
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_0017;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x81, FINALLY_006c);
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
			Object_t * L_18 = V_1;
			V_4 = ((Object_t *)IsInst(L_18, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_19 = V_4;
			if (L_19)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(108)
		}

IL_0079:
		{
			Object_t * L_20 = V_4;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_20);
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0081:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern TypeInfo* ArrayList_t712_il2cpp_TypeInfo_var;
extern TypeInfo* IntervalCollection_t4500_il2cpp_TypeInfo_var;
extern TypeInfo* AnchorInfo_t4535_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Interval_t4497_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Console_t4577_il2cpp_TypeInfo_var;
extern TypeInfo* SystemException_t3383_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t4535 * Group_GetAnchorInfo_m17806 (Group_t4519 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		IntervalCollection_t4500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7912);
		AnchorInfo_t4535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7942);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Interval_t4497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7911);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		Console_t4577_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7830);
		SystemException_t3383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5836);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ArrayList_t712 * V_2 = {0};
	IntervalCollection_t4500 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Expression_t4517 * V_6 = {0};
	AnchorInfo_t4535 * V_7 = {0};
	Interval_t4497  V_8 = {0};
	Interval_t4497  V_9 = {0};
	Object_t * V_10 = {0};
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	AnchorInfo_t4535 * V_14 = {0};
	StringBuilder_t261 * V_15 = {0};
	int32_t V_16 = 0;
	AnchorInfo_t4535 * V_17 = {0};
	Object_t * V_18 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = Expression_GetFixedWidth_m17796(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		ArrayList_t712 * L_1 = (ArrayList_t712 *)il2cpp_codegen_object_new (ArrayList_t712_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4281(L_1, /*hidden argument*/NULL);
		V_2 = L_1;
		IntervalCollection_t4500 * L_2 = (IntervalCollection_t4500 *)il2cpp_codegen_object_new (IntervalCollection_t4500_il2cpp_TypeInfo_var);
		IntervalCollection__ctor_m17595(L_2, /*hidden argument*/NULL);
		V_3 = L_2;
		V_0 = 0;
		ExpressionCollection_t4516 * L_3 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_3);
		V_4 = L_4;
		V_5 = 0;
		goto IL_00ca;
	}

IL_002a:
	{
		bool L_5 = ___reverse;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		ExpressionCollection_t4516 * L_6 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_6);
		Expression_t4517 * L_9 = ExpressionCollection_get_Item_m17792(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7-(int32_t)L_8))-(int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_9;
		goto IL_0058;
	}

IL_0049:
	{
		ExpressionCollection_t4516 * L_10 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_5;
		NullCheck(L_10);
		Expression_t4517 * L_12 = ExpressionCollection_get_Item_m17792(L_10, L_11, /*hidden argument*/NULL);
		V_6 = L_12;
	}

IL_0058:
	{
		Expression_t4517 * L_13 = V_6;
		bool L_14 = ___reverse;
		NullCheck(L_13);
		AnchorInfo_t4535 * L_15 = (AnchorInfo_t4535 *)VirtFuncInvoker1< AnchorInfo_t4535 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean) */, L_13, L_14);
		V_7 = L_15;
		ArrayList_t712 * L_16 = V_2;
		AnchorInfo_t4535 * L_17 = V_7;
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		AnchorInfo_t4535 * L_18 = V_7;
		NullCheck(L_18);
		bool L_19 = AnchorInfo_get_IsPosition_m17898(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_20 = V_0;
		AnchorInfo_t4535 * L_21 = V_7;
		NullCheck(L_21);
		int32_t L_22 = AnchorInfo_get_Offset_m17889(L_21, /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		AnchorInfo_t4535 * L_24 = V_7;
		NullCheck(L_24);
		uint16_t L_25 = AnchorInfo_get_Position_m17896(L_24, /*hidden argument*/NULL);
		AnchorInfo_t4535 * L_26 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17888(L_26, __this, ((int32_t)((int32_t)L_20+(int32_t)L_22)), L_23, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_008f:
	{
		AnchorInfo_t4535 * L_27 = V_7;
		NullCheck(L_27);
		bool L_28 = AnchorInfo_get_IsSubstring_m17897(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a9;
		}
	}
	{
		IntervalCollection_t4500 * L_29 = V_3;
		AnchorInfo_t4535 * L_30 = V_7;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		Interval_t4497  L_32 = AnchorInfo_GetInterval_m17899(L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		IntervalCollection_Add_m17597(L_29, L_32, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		AnchorInfo_t4535 * L_33 = V_7;
		NullCheck(L_33);
		bool L_34 = AnchorInfo_get_IsUnknownWidth_m17892(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00d3;
	}

IL_00ba:
	{
		int32_t L_35 = V_0;
		AnchorInfo_t4535 * L_36 = V_7;
		NullCheck(L_36);
		int32_t L_37 = AnchorInfo_get_Width_m17890(L_36, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_35+(int32_t)L_37));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_4;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_002a;
		}
	}

IL_00d3:
	{
		IntervalCollection_t4500 * L_41 = V_3;
		NullCheck(L_41);
		IntervalCollection_Normalize_m17598(L_41, /*hidden argument*/NULL);
		Interval_t4497  L_42 = Interval_get_Empty_m17575(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_8 = L_42;
		IntervalCollection_t4500 * L_43 = V_3;
		NullCheck(L_43);
		Object_t * L_44 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_43);
		V_10 = L_44;
	}

IL_00e8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0112;
		}

IL_00ed:
		{
			Object_t * L_45 = V_10;
			NullCheck(L_45);
			Object_t * L_46 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_45);
			V_9 = ((*(Interval_t4497 *)((Interval_t4497 *)UnBox (L_46, Interval_t4497_il2cpp_TypeInfo_var))));
			int32_t L_47 = Interval_get_Size_m17579((&V_9), /*hidden argument*/NULL);
			int32_t L_48 = Interval_get_Size_m17579((&V_8), /*hidden argument*/NULL);
			if ((((int32_t)L_47) <= ((int32_t)L_48)))
			{
				goto IL_0112;
			}
		}

IL_010e:
		{
			Interval_t4497  L_49 = V_9;
			V_8 = L_49;
		}

IL_0112:
		{
			Object_t * L_50 = V_10;
			NullCheck(L_50);
			bool L_51 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_50);
			if (L_51)
			{
				goto IL_00ed;
			}
		}

IL_011e:
		{
			IL2CPP_LEAVE(0x139, FINALLY_0123);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0123;
	}

FINALLY_0123:
	{ // begin finally (depth: 1)
		{
			Object_t * L_52 = V_10;
			V_18 = ((Object_t *)IsInst(L_52, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_53 = V_18;
			if (L_53)
			{
				goto IL_0131;
			}
		}

IL_0130:
		{
			IL2CPP_END_FINALLY(291)
		}

IL_0131:
		{
			Object_t * L_54 = V_18;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_54);
			IL2CPP_END_FINALLY(291)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(291)
	{
		IL2CPP_JUMP_TBL(0x139, IL_0139)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0139:
	{
		bool L_55 = Interval_get_IsEmpty_m17578((&V_8), /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_56 = V_1;
		AnchorInfo_t4535 * L_57 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17886(L_57, __this, L_56, /*hidden argument*/NULL);
		return L_57;
	}

IL_014d:
	{
		V_11 = 0;
		V_12 = 0;
		V_0 = 0;
		V_13 = 0;
		goto IL_01c8;
	}

IL_015d:
	{
		ArrayList_t712 * L_58 = V_2;
		int32_t L_59 = V_13;
		NullCheck(L_58);
		Object_t * L_60 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_58, L_59);
		V_14 = ((AnchorInfo_t4535 *)Castclass(L_60, AnchorInfo_t4535_il2cpp_TypeInfo_var));
		AnchorInfo_t4535 * L_61 = V_14;
		NullCheck(L_61);
		bool L_62 = AnchorInfo_get_IsSubstring_m17897(L_61, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_01a7;
		}
	}
	{
		AnchorInfo_t4535 * L_63 = V_14;
		int32_t L_64 = V_0;
		NullCheck(L_63);
		Interval_t4497  L_65 = AnchorInfo_GetInterval_m17899(L_63, L_64, /*hidden argument*/NULL);
		bool L_66 = Interval_Contains_m17582((&V_8), L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_01a7;
		}
	}
	{
		bool L_67 = V_11;
		AnchorInfo_t4535 * L_68 = V_14;
		NullCheck(L_68);
		bool L_69 = AnchorInfo_get_IgnoreCase_m17895(L_68, /*hidden argument*/NULL);
		V_11 = ((int32_t)((int32_t)L_67|(int32_t)L_69));
		ArrayList_t712 * L_70 = V_2;
		int32_t L_71 = V_12;
		int32_t L_72 = L_71;
		V_12 = ((int32_t)((int32_t)L_72+(int32_t)1));
		AnchorInfo_t4535 * L_73 = V_14;
		NullCheck(L_70);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_70, L_72, L_73);
	}

IL_01a7:
	{
		AnchorInfo_t4535 * L_74 = V_14;
		NullCheck(L_74);
		bool L_75 = AnchorInfo_get_IsUnknownWidth_m17892(L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_01b8;
		}
	}
	{
		goto IL_01d5;
	}

IL_01b8:
	{
		int32_t L_76 = V_0;
		AnchorInfo_t4535 * L_77 = V_14;
		NullCheck(L_77);
		int32_t L_78 = AnchorInfo_get_Width_m17890(L_77, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_76+(int32_t)L_78));
		int32_t L_79 = V_13;
		V_13 = ((int32_t)((int32_t)L_79+(int32_t)1));
	}

IL_01c8:
	{
		int32_t L_80 = V_13;
		ArrayList_t712 * L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_81);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_015d;
		}
	}

IL_01d5:
	{
		StringBuilder_t261 * L_83 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_83, /*hidden argument*/NULL);
		V_15 = L_83;
		V_16 = 0;
		goto IL_0227;
	}

IL_01e4:
	{
		bool L_84 = ___reverse;
		if (!L_84)
		{
			goto IL_0203;
		}
	}
	{
		ArrayList_t712 * L_85 = V_2;
		int32_t L_86 = V_12;
		int32_t L_87 = V_16;
		NullCheck(L_85);
		Object_t * L_88 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_85, ((int32_t)((int32_t)((int32_t)((int32_t)L_86-(int32_t)L_87))-(int32_t)1)));
		V_17 = ((AnchorInfo_t4535 *)Castclass(L_88, AnchorInfo_t4535_il2cpp_TypeInfo_var));
		goto IL_0212;
	}

IL_0203:
	{
		ArrayList_t712 * L_89 = V_2;
		int32_t L_90 = V_16;
		NullCheck(L_89);
		Object_t * L_91 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_89, L_90);
		V_17 = ((AnchorInfo_t4535 *)Castclass(L_91, AnchorInfo_t4535_il2cpp_TypeInfo_var));
	}

IL_0212:
	{
		StringBuilder_t261 * L_92 = V_15;
		AnchorInfo_t4535 * L_93 = V_17;
		NullCheck(L_93);
		String_t* L_94 = AnchorInfo_get_Substring_m17894(L_93, /*hidden argument*/NULL);
		NullCheck(L_92);
		StringBuilder_Append_m3995(L_92, L_94, /*hidden argument*/NULL);
		int32_t L_95 = V_16;
		V_16 = ((int32_t)((int32_t)L_95+(int32_t)1));
	}

IL_0227:
	{
		int32_t L_96 = V_16;
		int32_t L_97 = V_12;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_01e4;
		}
	}
	{
		StringBuilder_t261 * L_98 = V_15;
		NullCheck(L_98);
		int32_t L_99 = StringBuilder_get_Length_m7510(L_98, /*hidden argument*/NULL);
		int32_t L_100 = Interval_get_Size_m17579((&V_8), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_99) == ((uint32_t)L_100))))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_101 = ((&V_8)->___low_0);
		int32_t L_102 = V_1;
		StringBuilder_t261 * L_103 = V_15;
		NullCheck(L_103);
		String_t* L_104 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_103);
		bool L_105 = V_11;
		AnchorInfo_t4535 * L_106 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17887(L_106, __this, L_101, L_102, L_104, L_105, /*hidden argument*/NULL);
		return L_106;
	}

IL_025b:
	{
		StringBuilder_t261 * L_107 = V_15;
		NullCheck(L_107);
		int32_t L_108 = StringBuilder_get_Length_m7510(L_107, /*hidden argument*/NULL);
		int32_t L_109 = Interval_get_Size_m17579((&V_8), /*hidden argument*/NULL);
		if ((((int32_t)L_108) <= ((int32_t)L_109)))
		{
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t4577_il2cpp_TypeInfo_var);
		TextWriter_t3558 * L_110 = Console_get_Error_m18115(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_110);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_110, (String_t*) &_stringLiteral4527);
		int32_t L_111 = V_1;
		AnchorInfo_t4535 * L_112 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17886(L_112, __this, L_111, /*hidden argument*/NULL);
		return L_112;
	}

IL_0285:
	{
		SystemException_t3383 * L_113 = (SystemException_t3383 *)il2cpp_codegen_object_new (SystemException_t3383_il2cpp_TypeInfo_var);
		SystemException__ctor_m12108(L_113, (String_t*) &_stringLiteral4528, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_113);
	}
}
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressi.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
extern "C" void RegularExpression__ctor_m17807 (RegularExpression_t4520 * __this, const MethodInfo* method)
{
	{
		Group__ctor_m17802(__this, /*hidden argument*/NULL);
		__this->___group_count_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
extern "C" void RegularExpression_set_GroupCount_m17808 (RegularExpression_t4520 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___group_count_1 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void RegularExpression_Compile_m17809 (RegularExpression_t4520 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnchorInfo_t4535 * V_2 = {0};
	LinkRef_t4483 * V_3 = {0};
	{
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&) */, __this, (&V_0), (&V_1));
		Object_t * L_0 = ___cmp;
		int32_t L_1 = (__this->___group_count_1);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, int32_t, int32_t >::Invoke(23 /* System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		bool L_4 = ___reverse;
		AnchorInfo_t4535 * L_5 = (AnchorInfo_t4535 *)VirtFuncInvoker1< AnchorInfo_t4535 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean) */, __this, L_4);
		V_2 = L_5;
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		LinkRef_t4483 * L_7 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		Object_t * L_8 = ___cmp;
		bool L_9 = ___reverse;
		AnchorInfo_t4535 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = AnchorInfo_get_Offset_m17889(L_10, /*hidden argument*/NULL);
		LinkRef_t4483 * L_12 = V_3;
		NullCheck(L_8);
		InterfaceActionInvoker3< bool, int32_t, LinkRef_t4483 * >::Invoke(25 /* System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_8, L_9, L_11, L_12);
		AnchorInfo_t4535 * L_13 = V_2;
		NullCheck(L_13);
		bool L_14 = AnchorInfo_get_IsPosition_m17898(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_15 = ___cmp;
		AnchorInfo_t4535 * L_16 = V_2;
		NullCheck(L_16);
		uint16_t L_17 = AnchorInfo_get_Position_m17896(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_15, L_17);
		goto IL_006f;
	}

IL_0051:
	{
		AnchorInfo_t4535 * L_18 = V_2;
		NullCheck(L_18);
		bool L_19 = AnchorInfo_get_IsSubstring_m17897(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_006f;
		}
	}
	{
		Object_t * L_20 = ___cmp;
		AnchorInfo_t4535 * L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22 = AnchorInfo_get_Substring_m17894(L_21, /*hidden argument*/NULL);
		AnchorInfo_t4535 * L_23 = V_2;
		NullCheck(L_23);
		bool L_24 = AnchorInfo_get_IgnoreCase_m17895(L_23, /*hidden argument*/NULL);
		bool L_25 = ___reverse;
		NullCheck(L_20);
		InterfaceActionInvoker3< String_t*, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_20, L_22, L_24, L_25);
	}

IL_006f:
	{
		Object_t * L_26 = ___cmp;
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_26);
		Object_t * L_27 = ___cmp;
		LinkRef_t4483 * L_28 = V_3;
		NullCheck(L_27);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_27, L_28);
		Object_t * L_29 = ___cmp;
		bool L_30 = ___reverse;
		Group_Compile_m17804(__this, L_29, L_30, /*hidden argument*/NULL);
		Object_t * L_31 = ___cmp;
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_31);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::.ctor()
extern "C" void CapturingGroup__ctor_m17810 (CapturingGroup_t4521 * __this, const MethodInfo* method)
{
	{
		Group__ctor_m17802(__this, /*hidden argument*/NULL);
		__this->___gid_1 = 0;
		__this->___name_2 = (String_t*)NULL;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
extern "C" int32_t CapturingGroup_get_Index_m17811 (CapturingGroup_t4521 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___gid_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Index(System.Int32)
extern "C" void CapturingGroup_set_Index_m17812 (CapturingGroup_t4521 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___gid_1 = L_0;
		return;
	}
}
// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::get_Name()
extern "C" String_t* CapturingGroup_get_Name_m17813 (CapturingGroup_t4521 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Name(System.String)
extern "C" void CapturingGroup_set_Name_m17814 (CapturingGroup_t4521 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___name_2 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::get_IsNamed()
extern "C" bool CapturingGroup_get_IsNamed_m17815 (CapturingGroup_t4521 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void CapturingGroup_Compile_m17816 (CapturingGroup_t4521 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___cmp;
		int32_t L_1 = (__this->___gid_1);
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Text.RegularExpressions.ICompiler::EmitOpen(System.Int32) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_0, L_1);
		Object_t * L_2 = ___cmp;
		bool L_3 = ___reverse;
		Group_Compile_m17804(__this, L_2, L_3, /*hidden argument*/NULL);
		Object_t * L_4 = ___cmp;
		int32_t L_5 = (__this->___gid_1);
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(11 /* System.Void System.Text.RegularExpressions.ICompiler::EmitClose(System.Int32) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::IsComplex()
extern "C" bool CapturingGroup_IsComplex_m17817 (CapturingGroup_t4521 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::CompareTo(System.Object)
extern TypeInfo* CapturingGroup_t4521_il2cpp_TypeInfo_var;
extern "C" int32_t CapturingGroup_CompareTo_m17818 (CapturingGroup_t4521 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapturingGroup_t4521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7918);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___gid_1);
		Object_t * L_1 = ___other;
		NullCheck(((CapturingGroup_t4521 *)Castclass(L_1, CapturingGroup_t4521_il2cpp_TypeInfo_var)));
		int32_t L_2 = (((CapturingGroup_t4521 *)Castclass(L_1, CapturingGroup_t4521_il2cpp_TypeInfo_var))->___gid_1);
		return ((int32_t)((int32_t)L_0-(int32_t)L_2));
	}
}
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroup.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
extern "C" void BalancingGroup__ctor_m17819 (BalancingGroup_t4522 * __this, const MethodInfo* method)
{
	{
		CapturingGroup__ctor_m17810(__this, /*hidden argument*/NULL);
		__this->___balance_3 = (CapturingGroup_t4521 *)NULL;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void BalancingGroup_set_Balance_m17820 (BalancingGroup_t4522 * __this, CapturingGroup_t4521 * ___value, const MethodInfo* method)
{
	{
		CapturingGroup_t4521 * L_0 = ___value;
		__this->___balance_3 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void BalancingGroup_Compile_m17821 (BalancingGroup_t4522 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t4483 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Expression_t4517 * V_3 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t4483 * L_1 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		int32_t L_3 = CapturingGroup_get_Index_m17811(__this, /*hidden argument*/NULL);
		CapturingGroup_t4521 * L_4 = (__this->___balance_3);
		NullCheck(L_4);
		int32_t L_5 = CapturingGroup_get_Index_m17811(L_4, /*hidden argument*/NULL);
		bool L_6 = CapturingGroup_get_IsNamed_m17815(__this, /*hidden argument*/NULL);
		LinkRef_t4483 * L_7 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t4483 * >::Invoke(12 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_2, L_3, L_5, L_6, L_7);
		ExpressionCollection_t4516 * L_8 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_8);
		V_1 = L_9;
		V_2 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		bool L_10 = ___reverse;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		ExpressionCollection_t4516 * L_11 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		Expression_t4517 * L_14 = ExpressionCollection_get_Item_m17792(L_11, ((int32_t)((int32_t)((int32_t)((int32_t)L_12-(int32_t)L_13))-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_14;
		goto IL_0061;
	}

IL_0054:
	{
		ExpressionCollection_t4516 * L_15 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Expression_t4517 * L_17 = ExpressionCollection_get_Item_m17792(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
	}

IL_0061:
	{
		Expression_t4517 * L_18 = V_3;
		Object_t * L_19 = ___cmp;
		bool L_20 = ___reverse;
		NullCheck(L_18);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_18, L_19, L_20);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0038;
		}
	}
	{
		Object_t * L_24 = ___cmp;
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(13 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBalance() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t4483 * L_26 = V_0;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_25, L_26);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktracking.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::.ctor()
extern "C" void NonBacktrackingGroup__ctor_m17822 (NonBacktrackingGroup_t4523 * __this, const MethodInfo* method)
{
	{
		Group__ctor_m17802(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void NonBacktrackingGroup_Compile_m17823 (NonBacktrackingGroup_t4523 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t4483 * V_0 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t4483 * L_1 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		LinkRef_t4483 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(16 /* System.Void System.Text.RegularExpressions.ICompiler::EmitSub(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_2, L_3);
		Object_t * L_4 = ___cmp;
		bool L_5 = ___reverse;
		Group_Compile_m17804(__this, L_4, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_6);
		Object_t * L_7 = ___cmp;
		LinkRef_t4483 * L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_7, L_8);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::IsComplex()
extern "C" bool NonBacktrackingGroup_IsComplex_m17824 (NonBacktrackingGroup_t4523 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_Repetition.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
extern "C" void Repetition__ctor_m17825 (Repetition_t4524 * __this, int32_t ___min, int32_t ___max, bool ___lazy, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m17798(__this, /*hidden argument*/NULL);
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExpressionCollection_Add_m17791(L_0, (Expression_t4517 *)NULL, /*hidden argument*/NULL);
		int32_t L_1 = ___min;
		__this->___min_1 = L_1;
		int32_t L_2 = ___max;
		__this->___max_2 = L_2;
		bool L_3 = ___lazy;
		__this->___lazy_3 = L_3;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
extern "C" Expression_t4517 * Repetition_get_Expression_m17826 (Repetition_t4524 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t4517 * L_1 = ExpressionCollection_get_Item_m17792(L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Repetition_set_Expression_m17827 (Repetition_t4524 * __this, Expression_t4517 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m17793(L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
extern "C" int32_t Repetition_get_Minimum_m17828 (Repetition_t4524 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___min_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void Repetition_Compile_m17829 (Repetition_t4524 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t4483 * V_0 = {0};
	LinkRef_t4483 * V_1 = {0};
	{
		Expression_t4517 * L_0 = Repetition_get_Expression_m17826(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_2 = ___cmp;
		NullCheck(L_2);
		LinkRef_t4483 * L_3 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = ___cmp;
		int32_t L_5 = (__this->___min_1);
		int32_t L_6 = (__this->___max_2);
		bool L_7 = (__this->___lazy_3);
		LinkRef_t4483 * L_8 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t4483 * >::Invoke(20 /* System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7, L_8);
		Expression_t4517 * L_9 = Repetition_get_Expression_m17826(__this, /*hidden argument*/NULL);
		Object_t * L_10 = ___cmp;
		bool L_11 = ___reverse;
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_9, L_10, L_11);
		Object_t * L_12 = ___cmp;
		LinkRef_t4483 * L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(21 /* System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_12, L_13);
		goto IL_0083;
	}

IL_0049:
	{
		Object_t * L_14 = ___cmp;
		NullCheck(L_14);
		LinkRef_t4483 * L_15 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_14);
		V_1 = L_15;
		Object_t * L_16 = ___cmp;
		int32_t L_17 = (__this->___min_1);
		int32_t L_18 = (__this->___max_2);
		bool L_19 = (__this->___lazy_3);
		LinkRef_t4483 * L_20 = V_1;
		NullCheck(L_16);
		InterfaceActionInvoker4< int32_t, int32_t, bool, LinkRef_t4483 * >::Invoke(24 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19, L_20);
		Expression_t4517 * L_21 = Repetition_get_Expression_m17826(__this, /*hidden argument*/NULL);
		Object_t * L_22 = ___cmp;
		bool L_23 = ___reverse;
		NullCheck(L_21);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_21, L_22, L_23);
		Object_t * L_24 = ___cmp;
		NullCheck(L_24);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t4483 * L_26 = V_1;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_25, L_26);
	}

IL_0083:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
extern "C" void Repetition_GetWidth_m17830 (Repetition_t4524 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		Expression_t4517 * L_0 = Repetition_get_Expression_m17826(__this, /*hidden argument*/NULL);
		int32_t* L_1 = ___min;
		int32_t* L_2 = ___max;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t*, int32_t* >::Invoke(5 /* System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&) */, L_0, L_1, L_2);
		int32_t* L_3 = ___min;
		int32_t* L_4 = ___min;
		int32_t L_5 = (__this->___min_1);
		*((int32_t*)(L_3)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_4))*(int32_t)L_5));
		int32_t* L_6 = ___max;
		if ((((int32_t)(*((int32_t*)L_6))) == ((int32_t)((int32_t)2147483647))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = (__this->___max_2);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0040;
		}
	}

IL_0034:
	{
		int32_t* L_8 = ___max;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)2147483647);
		goto IL_004b;
	}

IL_0040:
	{
		int32_t* L_9 = ___max;
		int32_t* L_10 = ___max;
		int32_t L_11 = (__this->___max_2);
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_10))*(int32_t)L_11));
	}

IL_004b:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
extern TypeInfo* AnchorInfo_t4535_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t4535 * Repetition_GetAnchorInfo_m17831 (Repetition_t4524 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t4535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7942);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	AnchorInfo_t4535 * V_1 = {0};
	String_t* V_2 = {0};
	StringBuilder_t261 * V_3 = {0};
	int32_t V_4 = 0;
	{
		int32_t L_0 = Expression_GetFixedWidth_m17796(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Repetition_get_Minimum_m17828(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = V_0;
		AnchorInfo_t4535 * L_3 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17886(L_3, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		Expression_t4517 * L_4 = Repetition_get_Expression_m17826(__this, /*hidden argument*/NULL);
		bool L_5 = ___reverse;
		NullCheck(L_4);
		AnchorInfo_t4535 * L_6 = (AnchorInfo_t4535 *)VirtFuncInvoker1< AnchorInfo_t4535 *, bool >::Invoke(6 /* System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean) */, L_4, L_5);
		V_1 = L_6;
		AnchorInfo_t4535 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = AnchorInfo_get_IsPosition_m17898(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		AnchorInfo_t4535 * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = AnchorInfo_get_Offset_m17889(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		AnchorInfo_t4535 * L_12 = V_1;
		NullCheck(L_12);
		uint16_t L_13 = AnchorInfo_get_Position_m17896(L_12, /*hidden argument*/NULL);
		AnchorInfo_t4535 * L_14 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17888(L_14, __this, L_10, L_11, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0046:
	{
		AnchorInfo_t4535 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = AnchorInfo_get_IsSubstring_m17897(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bc;
		}
	}
	{
		AnchorInfo_t4535 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = AnchorInfo_get_IsComplete_m17893(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a2;
		}
	}
	{
		AnchorInfo_t4535 * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = AnchorInfo_get_Substring_m17894(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		String_t* L_21 = V_2;
		StringBuilder_t261 * L_22 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5987(L_22, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		V_4 = 1;
		goto IL_0080;
	}

IL_0072:
	{
		StringBuilder_t261 * L_23 = V_3;
		String_t* L_24 = V_2;
		NullCheck(L_23);
		StringBuilder_Append_m3995(L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_26 = V_4;
		int32_t L_27 = Repetition_get_Minimum_m17828(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_28 = V_0;
		StringBuilder_t261 * L_29 = V_3;
		NullCheck(L_29);
		String_t* L_30 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_29);
		AnchorInfo_t4535 * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = AnchorInfo_get_IgnoreCase_m17895(L_31, /*hidden argument*/NULL);
		AnchorInfo_t4535 * L_33 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17887(L_33, __this, 0, L_28, L_30, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00a2:
	{
		AnchorInfo_t4535 * L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = AnchorInfo_get_Offset_m17889(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		AnchorInfo_t4535 * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = AnchorInfo_get_Substring_m17894(L_37, /*hidden argument*/NULL);
		AnchorInfo_t4535 * L_39 = V_1;
		NullCheck(L_39);
		bool L_40 = AnchorInfo_get_IgnoreCase_m17895(L_39, /*hidden argument*/NULL);
		AnchorInfo_t4535 * L_41 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17887(L_41, __this, L_35, L_36, L_38, L_40, /*hidden argument*/NULL);
		return L_41;
	}

IL_00bc:
	{
		int32_t L_42 = V_0;
		AnchorInfo_t4535 * L_43 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17886(L_43, __this, L_42, /*hidden argument*/NULL);
		return L_43;
	}
}
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern "C" void Assertion__ctor_m17832 (Assertion_t4525 * __this, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m17798(__this, /*hidden argument*/NULL);
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExpressionCollection_Add_m17791(L_0, (Expression_t4517 *)NULL, /*hidden argument*/NULL);
		ExpressionCollection_t4516 * L_1 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ExpressionCollection_Add_m17791(L_1, (Expression_t4517 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern "C" Expression_t4517 * Assertion_get_TrueExpression_m17833 (Assertion_t4525 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t4517 * L_1 = ExpressionCollection_get_Item_m17792(L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_TrueExpression_m17834 (Assertion_t4525 * __this, Expression_t4517 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m17793(L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern "C" Expression_t4517 * Assertion_get_FalseExpression_m17835 (Assertion_t4525 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t4517 * L_1 = ExpressionCollection_get_Item_m17792(L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Assertion_set_FalseExpression_m17836 (Assertion_t4525 * __this, Expression_t4517 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m17793(L_0, 1, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void Assertion_GetWidth_m17837 (Assertion_t4525 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		CompositeExpression_GetWidth_m17800(__this, L_0, L_1, 2, /*hidden argument*/NULL);
		Expression_t4517 * L_2 = Assertion_get_TrueExpression_m17833(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Expression_t4517 * L_3 = Assertion_get_FalseExpression_m17835(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_001f:
	{
		int32_t* L_4 = ___min;
		*((int32_t*)(L_4)) = (int32_t)0;
	}

IL_0022:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m17838 (CaptureAssertion_t4528 * __this, Literal_t4527 * ___l, const MethodInfo* method)
{
	{
		Assertion__ctor_m17832(__this, /*hidden argument*/NULL);
		Literal_t4527 * L_0 = ___l;
		__this->___literal_3 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m17839 (CaptureAssertion_t4528 * __this, CapturingGroup_t4521 * ___value, const MethodInfo* method)
{
	{
		CapturingGroup_t4521 * L_0 = ___value;
		__this->___group_2 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void CaptureAssertion_Compile_m17840 (CaptureAssertion_t4528 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	LinkRef_t4483 * V_1 = {0};
	LinkRef_t4483 * V_2 = {0};
	{
		CapturingGroup_t4521 * L_0 = (__this->___group_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ExpressionAssertion_t4526 * L_1 = CaptureAssertion_get_Alternate_m17842(__this, /*hidden argument*/NULL);
		Object_t * L_2 = ___cmp;
		bool L_3 = ___reverse;
		NullCheck(L_1);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_1, L_2, L_3);
		return;
	}

IL_0019:
	{
		CapturingGroup_t4521 * L_4 = (__this->___group_2);
		NullCheck(L_4);
		int32_t L_5 = CapturingGroup_get_Index_m17811(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Object_t * L_6 = ___cmp;
		NullCheck(L_6);
		LinkRef_t4483 * L_7 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		Expression_t4517 * L_8 = Assertion_get_FalseExpression_m17835(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_9 = ___cmp;
		int32_t L_10 = V_0;
		LinkRef_t4483 * L_11 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, LinkRef_t4483 * >::Invoke(15 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		Expression_t4517 * L_12 = Assertion_get_TrueExpression_m17833(__this, /*hidden argument*/NULL);
		Object_t * L_13 = ___cmp;
		bool L_14 = ___reverse;
		NullCheck(L_12);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_12, L_13, L_14);
		goto IL_0088;
	}

IL_0051:
	{
		Object_t * L_15 = ___cmp;
		NullCheck(L_15);
		LinkRef_t4483 * L_16 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
		Object_t * L_17 = ___cmp;
		int32_t L_18 = V_0;
		LinkRef_t4483 * L_19 = V_2;
		NullCheck(L_17);
		InterfaceActionInvoker2< int32_t, LinkRef_t4483 * >::Invoke(15 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_17, L_18, L_19);
		Expression_t4517 * L_20 = Assertion_get_TrueExpression_m17833(__this, /*hidden argument*/NULL);
		Object_t * L_21 = ___cmp;
		bool L_22 = ___reverse;
		NullCheck(L_20);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_20, L_21, L_22);
		Object_t * L_23 = ___cmp;
		LinkRef_t4483 * L_24 = V_1;
		NullCheck(L_23);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_23, L_24);
		Object_t * L_25 = ___cmp;
		LinkRef_t4483 * L_26 = V_2;
		NullCheck(L_25);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_25, L_26);
		Expression_t4517 * L_27 = Assertion_get_FalseExpression_m17835(__this, /*hidden argument*/NULL);
		Object_t * L_28 = ___cmp;
		bool L_29 = ___reverse;
		NullCheck(L_27);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_27, L_28, L_29);
	}

IL_0088:
	{
		Object_t * L_30 = ___cmp;
		LinkRef_t4483 * L_31 = V_1;
		NullCheck(L_30);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_30, L_31);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m17841 (CaptureAssertion_t4528 * __this, const MethodInfo* method)
{
	{
		CapturingGroup_t4521 * L_0 = (__this->___group_2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ExpressionAssertion_t4526 * L_1 = CaptureAssertion_get_Alternate_m17842(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex() */, L_1);
		return L_2;
	}

IL_0017:
	{
		Expression_t4517 * L_3 = Assertion_get_TrueExpression_m17833(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Expression_t4517 * L_4 = Assertion_get_TrueExpression_m17833(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Expression_t4517 * L_6 = Assertion_get_FalseExpression_m17835(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		Expression_t4517 * L_7 = Assertion_get_FalseExpression_m17835(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex() */, L_7);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		return 1;
	}

IL_0051:
	{
		int32_t L_9 = Expression_GetFixedWidth_m17796(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_9) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern TypeInfo* ExpressionAssertion_t4526_il2cpp_TypeInfo_var;
extern "C" ExpressionAssertion_t4526 * CaptureAssertion_get_Alternate_m17842 (CaptureAssertion_t4528 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExpressionAssertion_t4526_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7926);
		s_Il2CppMethodIntialized = true;
	}
	{
		ExpressionAssertion_t4526 * L_0 = (__this->___alternate_1);
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		ExpressionAssertion_t4526 * L_1 = (ExpressionAssertion_t4526 *)il2cpp_codegen_object_new (ExpressionAssertion_t4526_il2cpp_TypeInfo_var);
		ExpressionAssertion__ctor_m17843(L_1, /*hidden argument*/NULL);
		__this->___alternate_1 = L_1;
		ExpressionAssertion_t4526 * L_2 = (__this->___alternate_1);
		Expression_t4517 * L_3 = Assertion_get_TrueExpression_m17833(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Assertion_set_TrueExpression_m17834(L_2, L_3, /*hidden argument*/NULL);
		ExpressionAssertion_t4526 * L_4 = (__this->___alternate_1);
		Expression_t4517 * L_5 = Assertion_get_FalseExpression_m17835(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assertion_set_FalseExpression_m17836(L_4, L_5, /*hidden argument*/NULL);
		ExpressionAssertion_t4526 * L_6 = (__this->___alternate_1);
		Literal_t4527 * L_7 = (__this->___literal_3);
		NullCheck(L_6);
		ExpressionAssertion_set_TestExpression_m17847(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0049:
	{
		ExpressionAssertion_t4526 * L_8 = (__this->___alternate_1);
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern "C" void ExpressionAssertion__ctor_m17843 (ExpressionAssertion_t4526 * __this, const MethodInfo* method)
{
	{
		Assertion__ctor_m17832(__this, /*hidden argument*/NULL);
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExpressionCollection_Add_m17791(L_0, (Expression_t4517 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern "C" void ExpressionAssertion_set_Reverse_m17844 (ExpressionAssertion_t4526 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___reverse_1 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C" void ExpressionAssertion_set_Negate_m17845 (ExpressionAssertion_t4526 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___negate_2 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C" Expression_t4517 * ExpressionAssertion_get_TestExpression_m17846 (ExpressionAssertion_t4526 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Expression_t4517 * L_1 = ExpressionCollection_get_Item_m17792(L_0, 2, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void ExpressionAssertion_set_TestExpression_m17847 (ExpressionAssertion_t4526 * __this, Expression_t4517 * ___value, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_1 = ___value;
		NullCheck(L_0);
		ExpressionCollection_set_Item_m17793(L_0, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void ExpressionAssertion_Compile_m17848 (ExpressionAssertion_t4526 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t4483 * V_0 = {0};
	LinkRef_t4483 * V_1 = {0};
	LinkRef_t4483 * V_2 = {0};
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t4483 * L_1 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		Object_t * L_2 = ___cmp;
		NullCheck(L_2);
		LinkRef_t4483 * L_3 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		bool L_4 = (__this->___negate_2);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_5 = ___cmp;
		LinkRef_t4483 * L_6 = V_0;
		LinkRef_t4483 * L_7 = V_1;
		NullCheck(L_5);
		InterfaceActionInvoker2< LinkRef_t4483 *, LinkRef_t4483 * >::Invoke(17 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		goto IL_002e;
	}

IL_0026:
	{
		Object_t * L_8 = ___cmp;
		LinkRef_t4483 * L_9 = V_1;
		LinkRef_t4483 * L_10 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker2< LinkRef_t4483 *, LinkRef_t4483 * >::Invoke(17 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_8, L_9, L_10);
	}

IL_002e:
	{
		Expression_t4517 * L_11 = ExpressionAssertion_get_TestExpression_m17846(__this, /*hidden argument*/NULL);
		Object_t * L_12 = ___cmp;
		bool L_13 = (__this->___reverse_1);
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_11, L_12, L_13);
		Object_t * L_14 = ___cmp;
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_14);
		Expression_t4517 * L_15 = Assertion_get_TrueExpression_m17833(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_006a;
		}
	}
	{
		Object_t * L_16 = ___cmp;
		LinkRef_t4483 * L_17 = V_1;
		NullCheck(L_16);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_16, L_17);
		Object_t * L_18 = ___cmp;
		NullCheck(L_18);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_18);
		Object_t * L_19 = ___cmp;
		LinkRef_t4483 * L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_19, L_20);
		goto IL_00be;
	}

IL_006a:
	{
		Object_t * L_21 = ___cmp;
		LinkRef_t4483 * L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_21, L_22);
		Expression_t4517 * L_23 = Assertion_get_TrueExpression_m17833(__this, /*hidden argument*/NULL);
		Object_t * L_24 = ___cmp;
		bool L_25 = ___reverse;
		NullCheck(L_23);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_23, L_24, L_25);
		Expression_t4517 * L_26 = Assertion_get_FalseExpression_m17835(__this, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0095;
		}
	}
	{
		Object_t * L_27 = ___cmp;
		LinkRef_t4483 * L_28 = V_1;
		NullCheck(L_27);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_27, L_28);
		goto IL_00be;
	}

IL_0095:
	{
		Object_t * L_29 = ___cmp;
		NullCheck(L_29);
		LinkRef_t4483 * L_30 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_29);
		V_2 = L_30;
		Object_t * L_31 = ___cmp;
		LinkRef_t4483 * L_32 = V_2;
		NullCheck(L_31);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_31, L_32);
		Object_t * L_33 = ___cmp;
		LinkRef_t4483 * L_34 = V_1;
		NullCheck(L_33);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_33, L_34);
		Expression_t4517 * L_35 = Assertion_get_FalseExpression_m17835(__this, /*hidden argument*/NULL);
		Object_t * L_36 = ___cmp;
		bool L_37 = ___reverse;
		NullCheck(L_35);
		VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_35, L_36, L_37);
		Object_t * L_38 = ___cmp;
		LinkRef_t4483 * L_39 = V_2;
		NullCheck(L_38);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_38, L_39);
	}

IL_00be:
	{
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C" bool ExpressionAssertion_IsComplex_m17849 (ExpressionAssertion_t4526 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
extern "C" void Alternation__ctor_m17850 (Alternation_t4529 * __this, const MethodInfo* method)
{
	{
		CompositeExpression__ctor_m17798(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
extern "C" ExpressionCollection_t4516 * Alternation_get_Alternatives_m17851 (Alternation_t4529 * __this, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = CompositeExpression_get_Expressions_m17799(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Alternation_AddAlternative_m17852 (Alternation_t4529 * __this, Expression_t4517 * ___e, const MethodInfo* method)
{
	{
		ExpressionCollection_t4516 * L_0 = Alternation_get_Alternatives_m17851(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_1 = ___e;
		NullCheck(L_0);
		ExpressionCollection_Add_m17791(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Expression_t4517_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Alternation_Compile_m17853 (Alternation_t4529 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Expression_t4517_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7931);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	LinkRef_t4483 * V_0 = {0};
	Expression_t4517 * V_1 = {0};
	Object_t * V_2 = {0};
	LinkRef_t4483 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___cmp;
		NullCheck(L_0);
		LinkRef_t4483 * L_1 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		ExpressionCollection_t4516 * L_2 = Alternation_get_Alternatives_m17851(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0018:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Expression_t4517 *)Castclass(L_5, Expression_t4517_il2cpp_TypeInfo_var));
			Object_t * L_6 = ___cmp;
			NullCheck(L_6);
			LinkRef_t4483 * L_7 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			Object_t * L_8 = ___cmp;
			LinkRef_t4483 * L_9 = V_3;
			NullCheck(L_8);
			InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(18 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_8, L_9);
			Expression_t4517 * L_10 = V_1;
			Object_t * L_11 = ___cmp;
			bool L_12 = ___reverse;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean) */, L_10, L_11, L_12);
			Object_t * L_13 = ___cmp;
			LinkRef_t4483 * L_14 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(19 /* System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_13, L_14);
			Object_t * L_15 = ___cmp;
			LinkRef_t4483 * L_16 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_15, L_16);
			Object_t * L_17 = ___cmp;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(26 /* System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_17);
		}

IL_004e:
		{
			Object_t * L_18 = V_2;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0018;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x73, FINALLY_005e);
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
			Object_t * L_20 = V_2;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_006b;
			}
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(94)
		}

IL_006b:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0073:
	{
		Object_t * L_23 = ___cmp;
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_23);
		Object_t * L_24 = ___cmp;
		LinkRef_t4483 * L_25 = V_0;
		NullCheck(L_24);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_24, L_25);
		Object_t * L_26 = ___cmp;
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(27 /* System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_26);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
extern "C" void Alternation_GetWidth_m17854 (Alternation_t4529 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		ExpressionCollection_t4516 * L_2 = Alternation_get_Alternatives_m17851(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_2);
		CompositeExpression_GetWidth_m17800(__this, L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern "C" void Literal__ctor_m17855 (Literal_t4527 * __this, String_t* ___str, bool ___ignore, const MethodInfo* method)
{
	{
		Expression__ctor_m17795(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str;
		__this->___str_0 = L_0;
		bool L_1 = ___ignore;
		__this->___ignore_1 = L_1;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void Literal_CompileLiteral_m17856 (Object_t * __this /* static, unused */, String_t* ___str, Object_t * ___cmp, bool ___ignore, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m410(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		String_t* L_2 = ___str;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_4 = ___cmp;
		String_t* L_5 = ___str;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m407(L_5, 0, /*hidden argument*/NULL);
		bool L_7 = ___ignore;
		bool L_8 = ___reverse;
		NullCheck(L_4);
		InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(3 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_4, L_6, 0, L_7, L_8);
		goto IL_0036;
	}

IL_002d:
	{
		Object_t * L_9 = ___cmp;
		String_t* L_10 = ___str;
		bool L_11 = ___ignore;
		bool L_12 = ___reverse;
		NullCheck(L_9);
		InterfaceActionInvoker3< String_t*, bool, bool >::Invoke(8 /* System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Literal_Compile_m17857 (Literal_t4527 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_0);
		Object_t * L_1 = ___cmp;
		bool L_2 = (__this->___ignore_1);
		bool L_3 = ___reverse;
		Literal_CompileLiteral_m17856(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C" void Literal_GetWidth_m17858 (Literal_t4527 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		String_t* L_2 = (__this->___str_0);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		V_0 = L_4;
		*((int32_t*)(L_1)) = (int32_t)L_4;
		int32_t L_5 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_5;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern TypeInfo* AnchorInfo_t4535_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t4535 * Literal_GetAnchorInfo_m17859 (Literal_t4527 * __this, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t4535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7942);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___str_0);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m410(L_0, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___str_0);
		bool L_3 = (__this->___ignore_1);
		AnchorInfo_t4535 * L_4 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17887(L_4, __this, 0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C" bool Literal_IsComplex_m17860 (Literal_t4527 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern "C" void PositionAssertion__ctor_m17861 (PositionAssertion_t4530 * __this, uint16_t ___pos, const MethodInfo* method)
{
	{
		Expression__ctor_m17795(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___pos;
		__this->___pos_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void PositionAssertion_Compile_m17862 (PositionAssertion_t4530 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___cmp;
		uint16_t L_1 = (__this->___pos_0);
		NullCheck(L_0);
		InterfaceActionInvoker1< uint16_t >::Invoke(9 /* System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern "C" void PositionAssertion_GetWidth_m17863 (PositionAssertion_t4530 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 0;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern "C" bool PositionAssertion_IsComplex_m17864 (PositionAssertion_t4530 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern TypeInfo* AnchorInfo_t4535_il2cpp_TypeInfo_var;
extern "C" AnchorInfo_t4535 * PositionAssertion_GetAnchorInfo_m17865 (PositionAssertion_t4530 * __this, bool ___revers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AnchorInfo_t4535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7942);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = {0};
	{
		uint16_t L_0 = (__this->___pos_0);
		V_0 = L_0;
		uint16_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_0020;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002f;
	}

IL_0020:
	{
		uint16_t L_2 = (__this->___pos_0);
		AnchorInfo_t4535 * L_3 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17888(L_3, __this, 0, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002f:
	{
		AnchorInfo_t4535 * L_4 = (AnchorInfo_t4535 *)il2cpp_codegen_object_new (AnchorInfo_t4535_il2cpp_TypeInfo_var);
		AnchorInfo__ctor_m17886(L_4, __this, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern "C" void Reference__ctor_m17866 (Reference_t4531 * __this, bool ___ignore, const MethodInfo* method)
{
	{
		Expression__ctor_m17795(__this, /*hidden argument*/NULL);
		bool L_0 = ___ignore;
		__this->___ignore_1 = L_0;
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern "C" CapturingGroup_t4521 * Reference_get_CapturingGroup_m17867 (Reference_t4531 * __this, const MethodInfo* method)
{
	{
		CapturingGroup_t4521 * L_0 = (__this->___group_0);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void Reference_set_CapturingGroup_m17868 (Reference_t4531 * __this, CapturingGroup_t4521 * ___value, const MethodInfo* method)
{
	{
		CapturingGroup_t4521 * L_0 = ___value;
		__this->___group_0 = L_0;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern "C" bool Reference_get_IgnoreCase_m17869 (Reference_t4531 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignore_1);
		return L_0;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern "C" void Reference_Compile_m17870 (Reference_t4531 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___cmp;
		CapturingGroup_t4521 * L_1 = (__this->___group_0);
		NullCheck(L_1);
		int32_t L_2 = CapturingGroup_get_Index_m17811(L_1, /*hidden argument*/NULL);
		bool L_3 = (__this->___ignore_1);
		bool L_4 = ___reverse;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, bool, bool >::Invoke(14 /* System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_0, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern "C" void Reference_GetWidth_m17871 (Reference_t4531 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	{
		int32_t* L_0 = ___min;
		*((int32_t*)(L_0)) = (int32_t)0;
		int32_t* L_1 = ___max;
		*((int32_t*)(L_1)) = (int32_t)((int32_t)2147483647);
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern "C" bool Reference_IsComplex_m17872 (Reference_t4531 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
extern "C" void BackslashNumber__ctor_m17873 (BackslashNumber_t4532 * __this, bool ___ignore, bool ___ecma, const MethodInfo* method)
{
	{
		bool L_0 = ___ignore;
		Reference__ctor_m17866(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___ecma;
		__this->___ecma_3 = L_1;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
extern TypeInfo* CapturingGroup_t4521_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool BackslashNumber_ResolveReference_m17874 (BackslashNumber_t4532 * __this, String_t* ___num_str, Hashtable_t710 * ___groups, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CapturingGroup_t4521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7918);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = (__this->___ecma_3);
		if (!L_0)
		{
			goto IL_006c;
		}
	}
	{
		V_0 = 0;
		V_1 = 1;
		goto IL_002d;
	}

IL_0014:
	{
		Hashtable_t710 * L_1 = ___groups;
		String_t* L_2 = ___num_str;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = String_Substring_m418(L_2, 0, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_1, L_4);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = L_6;
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = ___num_str;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m410(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		Hashtable_t710 * L_12 = ___groups;
		String_t* L_13 = ___num_str;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m418(L_13, 0, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_12, L_15);
		Reference_set_CapturingGroup_m17868(__this, ((CapturingGroup_t4521 *)Castclass(L_16, CapturingGroup_t4521_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_17 = ___num_str;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m4270(L_17, L_18, /*hidden argument*/NULL);
		__this->___literal_2 = L_19;
		return 1;
	}

IL_0067:
	{
		goto IL_007a;
	}

IL_006c:
	{
		String_t* L_20 = ___num_str;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m410(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		return 0;
	}

IL_007a:
	{
		V_2 = 0;
		String_t* L_22 = ___num_str;
		int32_t L_23 = Parser_ParseOctal_m17629(NULL /*static, unused*/, L_22, (&V_2), /*hidden argument*/NULL);
		V_3 = L_23;
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_008e;
		}
	}
	{
		return 0;
	}

IL_008e:
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) <= ((int32_t)((int32_t)255))))
		{
			goto IL_00ac;
		}
	}
	{
		bool L_26 = (__this->___ecma_3);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27/(int32_t)8));
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28-(int32_t)1));
	}

IL_00ac:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29&(int32_t)((int32_t)255)));
		int32_t L_30 = V_3;
		uint16_t L_31 = (((uint16_t)L_30));
		Object_t * L_32 = Box(Char_t60_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33 = ___num_str;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		String_t* L_35 = String_Substring_m4270(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m409(NULL /*static, unused*/, L_32, L_35, /*hidden argument*/NULL);
		__this->___literal_2 = L_36;
		return 1;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void BackslashNumber_Compile_m17875 (BackslashNumber_t4532 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	{
		CapturingGroup_t4521 * L_0 = Reference_get_CapturingGroup_m17867(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = ___cmp;
		bool L_2 = ___reverse;
		Reference_Compile_m17870(__this, L_1, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		String_t* L_3 = (__this->___literal_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = (__this->___literal_2);
		Object_t * L_5 = ___cmp;
		bool L_6 = Reference_get_IgnoreCase_m17869(__this, /*hidden argument*/NULL);
		bool L_7 = ___reverse;
		Literal_CompileLiteral_m17856(NULL /*static, unused*/, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"


// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern TypeInfo* IntervalCollection_t4500_il2cpp_TypeInfo_var;
extern TypeInfo* BitArray_t4533_il2cpp_TypeInfo_var;
extern "C" void CharacterClass__ctor_m17876 (CharacterClass_t4534 * __this, bool ___negate, bool ___ignore, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntervalCollection_t4500_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7912);
		BitArray_t4533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7944);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Expression__ctor_m17795(__this, /*hidden argument*/NULL);
		bool L_0 = ___negate;
		__this->___negate_1 = L_0;
		bool L_1 = ___ignore;
		__this->___ignore_2 = L_1;
		IntervalCollection_t4500 * L_2 = (IntervalCollection_t4500 *)il2cpp_codegen_object_new (IntervalCollection_t4500_il2cpp_TypeInfo_var);
		IntervalCollection__ctor_m17595(L_2, /*hidden argument*/NULL);
		__this->___intervals_5 = L_2;
		V_0 = ((int32_t)144);
		int32_t L_3 = V_0;
		BitArray_t4533 * L_4 = (BitArray_t4533 *)il2cpp_codegen_object_new (BitArray_t4533_il2cpp_TypeInfo_var);
		BitArray__ctor_m18166(L_4, L_3, /*hidden argument*/NULL);
		__this->___pos_cats_3 = L_4;
		int32_t L_5 = V_0;
		BitArray_t4533 * L_6 = (BitArray_t4533 *)il2cpp_codegen_object_new (BitArray_t4533_il2cpp_TypeInfo_var);
		BitArray__ctor_m18166(L_6, L_5, /*hidden argument*/NULL);
		__this->___neg_cats_4 = L_6;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass__ctor_m17877 (CharacterClass_t4534 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method)
{
	{
		CharacterClass__ctor_m17876(__this, 0, 0, /*hidden argument*/NULL);
		uint16_t L_0 = ___cat;
		bool L_1 = ___negate;
		CharacterClass_AddCategory_m17879(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern TypeInfo* CharacterClass_t4534_il2cpp_TypeInfo_var;
extern "C" void CharacterClass__cctor_m17878 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterClass_t4534_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7921);
		s_Il2CppMethodIntialized = true;
	}
	{
		Interval_t4497  L_0 = {0};
		Interval__ctor_m17574(&L_0, ((int32_t)65), ((int32_t)90), /*hidden argument*/NULL);
		((CharacterClass_t4534_StaticFields*)CharacterClass_t4534_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0 = L_0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C" void CharacterClass_AddCategory_m17879 (CharacterClass_t4534 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		uint16_t L_0 = ___cat;
		V_0 = L_0;
		bool L_1 = ___negate;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		BitArray_t4533 * L_2 = (__this->___neg_cats_4);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		BitArray_set_Item_m18167(L_2, L_3, 1, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001a:
	{
		BitArray_t4533 * L_4 = (__this->___pos_cats_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BitArray_set_Item_m18167(L_4, L_5, 1, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern "C" void CharacterClass_AddCharacter_m17880 (CharacterClass_t4534 * __this, uint16_t ___c, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___c;
		uint16_t L_1 = ___c;
		CharacterClass_AddRange_m17881(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern TypeInfo* CharacterClass_t4534_il2cpp_TypeInfo_var;
extern "C" void CharacterClass_AddRange_m17881 (CharacterClass_t4534 * __this, uint16_t ___lo, uint16_t ___hi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharacterClass_t4534_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7921);
		s_Il2CppMethodIntialized = true;
	}
	Interval_t4497  V_0 = {0};
	Interval_t4497  V_1 = {0};
	{
		uint16_t L_0 = ___lo;
		uint16_t L_1 = ___hi;
		Interval__ctor_m17574((&V_0), L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___ignore_2);
		if (!L_2)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t4534_il2cpp_TypeInfo_var);
		Interval_t4497  L_3 = V_0;
		bool L_4 = Interval_Intersects_m17584((&((CharacterClass_t4534_StaticFields*)CharacterClass_t4534_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_5 = ((&V_0)->___low_0);
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t4534_il2cpp_TypeInfo_var);
		int32_t L_6 = ((&((CharacterClass_t4534_StaticFields*)CharacterClass_t4534_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t4534_il2cpp_TypeInfo_var);
		int32_t L_7 = ((&((CharacterClass_t4534_StaticFields*)CharacterClass_t4534_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		int32_t L_8 = ((&V_0)->___high_1);
		Interval__ctor_m17574((&V_1), ((int32_t)((int32_t)L_7+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_8+(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		int32_t L_9 = ((&((CharacterClass_t4534_StaticFields*)CharacterClass_t4534_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___low_0);
		(&V_0)->___high_1 = ((int32_t)((int32_t)L_9-(int32_t)1));
		goto IL_00a1;
	}

IL_0070:
	{
		int32_t L_10 = ((&V_0)->___low_0);
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t4534_il2cpp_TypeInfo_var);
		int32_t L_11 = ((&((CharacterClass_t4534_StaticFields*)CharacterClass_t4534_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___high_1);
		Interval__ctor_m17574((&V_1), ((int32_t)((int32_t)L_10+(int32_t)((int32_t)32))), ((int32_t)((int32_t)L_11+(int32_t)((int32_t)32))), /*hidden argument*/NULL);
		int32_t L_12 = ((&((CharacterClass_t4534_StaticFields*)CharacterClass_t4534_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0)->___high_1);
		(&V_0)->___low_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_00a1:
	{
		IntervalCollection_t4500 * L_13 = (__this->___intervals_5);
		Interval_t4497  L_14 = V_1;
		NullCheck(L_13);
		IntervalCollection_Add_m17597(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00e2;
	}

IL_00b2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CharacterClass_t4534_il2cpp_TypeInfo_var);
		Interval_t4497  L_15 = V_0;
		bool L_16 = Interval_Contains_m17582((&((CharacterClass_t4534_StaticFields*)CharacterClass_t4534_il2cpp_TypeInfo_var->static_fields)->___upper_case_characters_0), L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00e2;
		}
	}
	{
		Interval_t4497 * L_17 = (&V_0);
		int32_t L_18 = (L_17->___high_1);
		L_17->___high_1 = ((int32_t)((int32_t)L_18+(int32_t)((int32_t)32)));
		Interval_t4497 * L_19 = (&V_0);
		int32_t L_20 = (L_19->___low_0);
		L_19->___low_0 = ((int32_t)((int32_t)L_20+(int32_t)((int32_t)32)));
	}

IL_00e2:
	{
		IntervalCollection_t4500 * L_21 = (__this->___intervals_5);
		Interval_t4497  L_22 = V_0;
		NullCheck(L_21);
		IntervalCollection_Add_m17597(L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern TypeInfo* CostDelegate_t4499_il2cpp_TypeInfo_var;
extern TypeInfo* ICompiler_t4554_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Interval_t4497_il2cpp_TypeInfo_var;
extern TypeInfo* BitArray_t4533_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* CharacterClass_GetIntervalCost_m17885_MethodInfo_var;
extern "C" void CharacterClass_Compile_m17882 (CharacterClass_t4534 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CostDelegate_t4499_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7945);
		ICompiler_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7936);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		Interval_t4497_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7911);
		BitArray_t4533_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7944);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		CharacterClass_GetIntervalCost_m17885_MethodInfo_var = il2cpp_codegen_method_info_from_index(1613);
		s_Il2CppMethodIntialized = true;
	}
	IntervalCollection_t4500 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	LinkRef_t4483 * V_3 = {0};
	Interval_t4497  V_4 = {0};
	Object_t * V_5 = {0};
	BitArray_t4533 * V_6 = {0};
	Interval_t4497  V_7 = {0};
	Object_t * V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IntervalCollection_t4500 * L_0 = (__this->___intervals_5);
		IntPtr_t L_1 = { (void*)CharacterClass_GetIntervalCost_m17885_MethodInfo_var };
		CostDelegate_t4499 * L_2 = (CostDelegate_t4499 *)il2cpp_codegen_object_new (CostDelegate_t4499_il2cpp_TypeInfo_var);
		CostDelegate__ctor_m17591(L_2, NULL, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IntervalCollection_t4500 * L_3 = IntervalCollection_GetMetaCollection_m17599(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IntervalCollection_t4500 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count() */, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0050;
	}

IL_0026:
	{
		BitArray_t4533 * L_6 = (__this->___pos_cats_3);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		bool L_8 = BitArray_get_Item_m18162(L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		BitArray_t4533 * L_9 = (__this->___neg_cats_4);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = BitArray_get_Item_m18162(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004c;
		}
	}

IL_0048:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004c:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_14 = V_2;
		BitArray_t4533 * L_15 = (__this->___pos_cats_3);
		NullCheck(L_15);
		int32_t L_16 = BitArray_get_Length_m18161(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0068;
		}
	}
	{
		return;
	}

IL_0068:
	{
		Object_t * L_18 = ___cmp;
		NullCheck(L_18);
		LinkRef_t4483 * L_19 = (LinkRef_t4483 *)InterfaceFuncInvoker0< LinkRef_t4483 * >::Invoke(28 /* System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) <= ((int32_t)1)))
		{
			goto IL_007d;
		}
	}
	{
		Object_t * L_21 = ___cmp;
		LinkRef_t4483 * L_22 = V_3;
		NullCheck(L_21);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(22 /* System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_007d:
	{
		IntervalCollection_t4500 * L_23 = V_0;
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_23);
		V_5 = L_24;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ac;
		}

IL_008a:
		{
			Object_t * L_25 = V_5;
			NullCheck(L_25);
			Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_25);
			V_4 = ((*(Interval_t4497 *)((Interval_t4497 *)UnBox (L_26, Interval_t4497_il2cpp_TypeInfo_var))));
			bool L_27 = Interval_get_IsDiscontiguous_m17576((&V_4), /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_015d;
			}
		}

IL_00a4:
		{
			int32_t L_28 = Interval_get_Size_m17579((&V_4), /*hidden argument*/NULL);
			BitArray_t4533 * L_29 = (BitArray_t4533 *)il2cpp_codegen_object_new (BitArray_t4533_il2cpp_TypeInfo_var);
			BitArray__ctor_m18166(L_29, L_28, /*hidden argument*/NULL);
			V_6 = L_29;
			IntervalCollection_t4500 * L_30 = (__this->___intervals_5);
			NullCheck(L_30);
			Object_t * L_31 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator() */, L_30);
			V_8 = L_31;
		}

IL_00bf:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0114;
			}

IL_00c4:
			{
				Object_t * L_32 = V_8;
				NullCheck(L_32);
				Object_t * L_33 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_32);
				V_7 = ((*(Interval_t4497 *)((Interval_t4497 *)UnBox (L_33, Interval_t4497_il2cpp_TypeInfo_var))));
				Interval_t4497  L_34 = V_7;
				bool L_35 = Interval_Contains_m17582((&V_4), L_34, /*hidden argument*/NULL);
				if (!L_35)
				{
					goto IL_0114;
				}
			}

IL_00e0:
			{
				int32_t L_36 = ((&V_7)->___low_0);
				V_9 = L_36;
				goto IL_0106;
			}

IL_00ee:
			{
				BitArray_t4533 * L_37 = V_6;
				int32_t L_38 = V_9;
				int32_t L_39 = ((&V_4)->___low_0);
				NullCheck(L_37);
				BitArray_set_Item_m18167(L_37, ((int32_t)((int32_t)L_38-(int32_t)L_39)), 1, /*hidden argument*/NULL);
				int32_t L_40 = V_9;
				V_9 = ((int32_t)((int32_t)L_40+(int32_t)1));
			}

IL_0106:
			{
				int32_t L_41 = V_9;
				int32_t L_42 = ((&V_7)->___high_1);
				if ((((int32_t)L_41) <= ((int32_t)L_42)))
				{
					goto IL_00ee;
				}
			}

IL_0114:
			{
				Object_t * L_43 = V_8;
				NullCheck(L_43);
				bool L_44 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_43);
				if (L_44)
				{
					goto IL_00c4;
				}
			}

IL_0120:
			{
				IL2CPP_LEAVE(0x13B, FINALLY_0125);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0125;
		}

FINALLY_0125:
		{ // begin finally (depth: 2)
			{
				Object_t * L_45 = V_8;
				V_11 = ((Object_t *)IsInst(L_45, IDisposable_t58_il2cpp_TypeInfo_var));
				Object_t * L_46 = V_11;
				if (L_46)
				{
					goto IL_0133;
				}
			}

IL_0132:
			{
				IL2CPP_END_FINALLY(293)
			}

IL_0133:
			{
				Object_t * L_47 = V_11;
				NullCheck(L_47);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_47);
				IL2CPP_END_FINALLY(293)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(293)
		{
			IL2CPP_JUMP_TBL(0x13B, IL_013b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_013b:
		{
			Object_t * L_48 = ___cmp;
			int32_t L_49 = ((&V_4)->___low_0);
			BitArray_t4533 * L_50 = V_6;
			bool L_51 = (__this->___negate_1);
			bool L_52 = (__this->___ignore_2);
			bool L_53 = ___reverse;
			NullCheck(L_48);
			InterfaceActionInvoker5< uint16_t, BitArray_t4533 *, bool, bool, bool >::Invoke(7 /* System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_48, (((uint16_t)L_49)), L_50, L_51, L_52, L_53);
			goto IL_01ac;
		}

IL_015d:
		{
			bool L_54 = Interval_get_IsSingleton_m17577((&V_4), /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_0189;
			}
		}

IL_0169:
		{
			Object_t * L_55 = ___cmp;
			int32_t L_56 = ((&V_4)->___low_0);
			bool L_57 = (__this->___negate_1);
			bool L_58 = (__this->___ignore_2);
			bool L_59 = ___reverse;
			NullCheck(L_55);
			InterfaceActionInvoker4< uint16_t, bool, bool, bool >::Invoke(3 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_55, (((uint16_t)L_56)), L_57, L_58, L_59);
			goto IL_01ac;
		}

IL_0189:
		{
			Object_t * L_60 = ___cmp;
			int32_t L_61 = ((&V_4)->___low_0);
			int32_t L_62 = ((&V_4)->___high_1);
			bool L_63 = (__this->___negate_1);
			bool L_64 = (__this->___ignore_2);
			bool L_65 = ___reverse;
			NullCheck(L_60);
			InterfaceActionInvoker5< uint16_t, uint16_t, bool, bool, bool >::Invoke(6 /* System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_60, (((uint16_t)L_61)), (((uint16_t)L_62)), L_63, L_64, L_65);
		}

IL_01ac:
		{
			Object_t * L_66 = V_5;
			NullCheck(L_66);
			bool L_67 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_66);
			if (L_67)
			{
				goto IL_008a;
			}
		}

IL_01b8:
		{
			IL2CPP_LEAVE(0x1D3, FINALLY_01bd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_01bd;
	}

FINALLY_01bd:
	{ // begin finally (depth: 1)
		{
			Object_t * L_68 = V_5;
			V_12 = ((Object_t *)IsInst(L_68, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_69 = V_12;
			if (L_69)
			{
				goto IL_01cb;
			}
		}

IL_01ca:
		{
			IL2CPP_END_FINALLY(445)
		}

IL_01cb:
		{
			Object_t * L_70 = V_12;
			NullCheck(L_70);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_70);
			IL2CPP_END_FINALLY(445)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(445)
	{
		IL2CPP_JUMP_TBL(0x1D3, IL_01d3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_01d3:
	{
		V_10 = 0;
		goto IL_024f;
	}

IL_01db:
	{
		BitArray_t4533 * L_71 = (__this->___pos_cats_3);
		int32_t L_72 = V_10;
		NullCheck(L_71);
		bool L_73 = BitArray_get_Item_m18162(L_71, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0227;
		}
	}
	{
		BitArray_t4533 * L_74 = (__this->___neg_cats_4);
		int32_t L_75 = V_10;
		NullCheck(L_74);
		bool L_76 = BitArray_get_Item_m18162(L_74, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0212;
		}
	}
	{
		Object_t * L_77 = ___cmp;
		bool L_78 = (__this->___negate_1);
		bool L_79 = ___reverse;
		NullCheck(L_77);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_77, 2, L_78, L_79);
		goto IL_0222;
	}

IL_0212:
	{
		Object_t * L_80 = ___cmp;
		int32_t L_81 = V_10;
		bool L_82 = (__this->___negate_1);
		bool L_83 = ___reverse;
		NullCheck(L_80);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(4 /* System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_80, (((uint16_t)L_81)), L_82, L_83);
	}

IL_0222:
	{
		goto IL_0249;
	}

IL_0227:
	{
		BitArray_t4533 * L_84 = (__this->___neg_cats_4);
		int32_t L_85 = V_10;
		NullCheck(L_84);
		bool L_86 = BitArray_get_Item_m18162(L_84, L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0249;
		}
	}
	{
		Object_t * L_87 = ___cmp;
		int32_t L_88 = V_10;
		bool L_89 = (__this->___negate_1);
		bool L_90 = ___reverse;
		NullCheck(L_87);
		InterfaceActionInvoker3< uint16_t, bool, bool >::Invoke(5 /* System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_87, (((uint16_t)L_88)), L_89, L_90);
	}

IL_0249:
	{
		int32_t L_91 = V_10;
		V_10 = ((int32_t)((int32_t)L_91+(int32_t)1));
	}

IL_024f:
	{
		int32_t L_92 = V_10;
		BitArray_t4533 * L_93 = (__this->___pos_cats_3);
		NullCheck(L_93);
		int32_t L_94 = BitArray_get_Length_m18161(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_95 = V_1;
		if ((((int32_t)L_95) <= ((int32_t)1)))
		{
			goto IL_028b;
		}
	}
	{
		bool L_96 = (__this->___negate_1);
		if (!L_96)
		{
			goto IL_027e;
		}
	}
	{
		Object_t * L_97 = ___cmp;
		NullCheck(L_97);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Text.RegularExpressions.ICompiler::EmitTrue() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_97);
		goto IL_0284;
	}

IL_027e:
	{
		Object_t * L_98 = ___cmp;
		NullCheck(L_98);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Text.RegularExpressions.ICompiler::EmitFalse() */, ICompiler_t4554_il2cpp_TypeInfo_var, L_98);
	}

IL_0284:
	{
		Object_t * L_99 = ___cmp;
		LinkRef_t4483 * L_100 = V_3;
		NullCheck(L_99);
		InterfaceActionInvoker1< LinkRef_t4483 * >::Invoke(29 /* System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef) */, ICompiler_t4554_il2cpp_TypeInfo_var, L_99, L_100);
	}

IL_028b:
	{
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern "C" void CharacterClass_GetWidth_m17883 (CharacterClass_t4534 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___min;
		int32_t* L_1 = ___max;
		int32_t L_2 = 1;
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		return;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern "C" bool CharacterClass_IsComplex_m17884 (CharacterClass_t4534 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern "C" double CharacterClass_GetIntervalCost_m17885 (Object_t * __this /* static, unused */, Interval_t4497  ___i, const MethodInfo* method)
{
	{
		bool L_0 = Interval_get_IsDiscontiguous_m17576((&___i), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = Interval_get_Size_m17579((&___i), /*hidden argument*/NULL);
		return (((double)((int32_t)((int32_t)3+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1+(int32_t)((int32_t)15)))>>(int32_t)4))))));
	}

IL_001c:
	{
		bool L_2 = Interval_get_IsSingleton_m17577((&___i), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		return (2.0);
	}

IL_0032:
	{
		return (3.0);
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern "C" void AnchorInfo__ctor_m17886 (AnchorInfo_t4535 * __this, Expression_t4517 * ___expr, int32_t ___width, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		__this->___offset_2 = 0;
		int32_t L_1 = ___width;
		__this->___width_4 = L_1;
		__this->___str_3 = (String_t*)NULL;
		__this->___ignore_5 = 0;
		__this->___pos_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern "C" void AnchorInfo__ctor_m17887 (AnchorInfo_t4535 * __this, Expression_t4517 * ___expr, int32_t ___offset, int32_t ___width, String_t* ___str, bool ___ignore, const MethodInfo* method)
{
	AnchorInfo_t4535 * G_B2_0 = {0};
	AnchorInfo_t4535 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	AnchorInfo_t4535 * G_B3_1 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		int32_t L_1 = ___offset;
		__this->___offset_2 = L_1;
		int32_t L_2 = ___width;
		__this->___width_4 = L_2;
		bool L_3 = ___ignore;
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___str;
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m3996(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_002f:
	{
		String_t* L_6 = ___str;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___str_3 = G_B3_0;
		bool L_7 = ___ignore;
		__this->___ignore_5 = L_7;
		__this->___pos_1 = 0;
		return;
	}
}
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern "C" void AnchorInfo__ctor_m17888 (AnchorInfo_t4535 * __this, Expression_t4517 * ___expr, int32_t ___offset, int32_t ___width, uint16_t ___pos, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Expression_t4517 * L_0 = ___expr;
		__this->___expr_0 = L_0;
		int32_t L_1 = ___offset;
		__this->___offset_2 = L_1;
		int32_t L_2 = ___width;
		__this->___width_4 = L_2;
		uint16_t L_3 = ___pos;
		__this->___pos_1 = L_3;
		__this->___str_3 = (String_t*)NULL;
		__this->___ignore_5 = 0;
		return;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C" int32_t AnchorInfo_get_Offset_m17889 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___offset_2);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern "C" int32_t AnchorInfo_get_Width_m17890 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___width_4);
		return L_0;
	}
}
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern "C" int32_t AnchorInfo_get_Length_m17891 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___str_3);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_1 = (__this->___str_3);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m410(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern "C" bool AnchorInfo_get_IsUnknownWidth_m17892 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___width_4);
		return ((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern "C" bool AnchorInfo_get_IsComplete_m17893 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = AnchorInfo_get_Length_m17891(__this, /*hidden argument*/NULL);
		int32_t L_1 = AnchorInfo_get_Width_m17890(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C" String_t* AnchorInfo_get_Substring_m17894 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_3);
		return L_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C" bool AnchorInfo_get_IgnoreCase_m17895 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___ignore_5);
		return L_0;
	}
}
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C" uint16_t AnchorInfo_get_Position_m17896 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___pos_1);
		return L_0;
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C" bool AnchorInfo_get_IsSubstring_m17897 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___str_3);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C" bool AnchorInfo_get_IsPosition_m17898 (AnchorInfo_t4535 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___pos_1);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
extern "C" Interval_t4497  AnchorInfo_GetInterval_m17899 (AnchorInfo_t4535 * __this, int32_t ___start, const MethodInfo* method)
{
	{
		bool L_0 = AnchorInfo_get_IsSubstring_m17897(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Interval_t4497  L_1 = Interval_get_Empty_m17575(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		int32_t L_2 = ___start;
		int32_t L_3 = AnchorInfo_get_Offset_m17889(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___start;
		int32_t L_5 = AnchorInfo_get_Offset_m17889(__this, /*hidden argument*/NULL);
		int32_t L_6 = AnchorInfo_get_Length_m17891(__this, /*hidden argument*/NULL);
		Interval_t4497  L_7 = {0};
		Interval__ctor_m17574(&L_7, ((int32_t)((int32_t)L_2+(int32_t)L_3)), ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))+(int32_t)L_6))-(int32_t)1)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.UriBuilder
#include "System_System_UriBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.UriBuilder
#include "System_System_UriBuilderMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"


// System.Void System.UriBuilder::.ctor(System.Uri)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UriBuilder__ctor_m17900 (UriBuilder_t4536 * __this, Uri_t771 * ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Uri_t771 * L_0 = ___uri;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m14794(L_0, /*hidden argument*/NULL);
		__this->___scheme_0 = L_1;
		Uri_t771 * L_2 = ___uri;
		NullCheck(L_2);
		String_t* L_3 = Uri_get_Host_m11537(L_2, /*hidden argument*/NULL);
		__this->___host_1 = L_3;
		Uri_t771 * L_4 = ___uri;
		NullCheck(L_4);
		int32_t L_5 = Uri_get_Port_m17917(L_4, /*hidden argument*/NULL);
		__this->___port_2 = L_5;
		Uri_t771 * L_6 = ___uri;
		NullCheck(L_6);
		String_t* L_7 = Uri_get_AbsolutePath_m14795(L_6, /*hidden argument*/NULL);
		__this->___path_3 = L_7;
		Uri_t771 * L_8 = ___uri;
		NullCheck(L_8);
		String_t* L_9 = Uri_get_Query_m7480(L_8, /*hidden argument*/NULL);
		__this->___query_4 = L_9;
		Uri_t771 * L_10 = ___uri;
		NullCheck(L_10);
		String_t* L_11 = Uri_get_Fragment_m7479(L_10, /*hidden argument*/NULL);
		__this->___fragment_5 = L_11;
		Uri_t771 * L_12 = ___uri;
		NullCheck(L_12);
		String_t* L_13 = Uri_get_UserInfo_m17918(L_12, /*hidden argument*/NULL);
		__this->___username_6 = L_13;
		String_t* L_14 = (__this->___username_6);
		NullCheck(L_14);
		int32_t L_15 = String_IndexOf_m3991(L_14, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_15;
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_009b;
		}
	}
	{
		String_t* L_17 = (__this->___username_6);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m4270(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), /*hidden argument*/NULL);
		__this->___password_7 = L_19;
		String_t* L_20 = (__this->___username_6);
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m418(L_20, 0, L_21, /*hidden argument*/NULL);
		__this->___username_6 = L_22;
		goto IL_00a6;
	}

IL_009b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___password_7 = L_23;
	}

IL_00a6:
	{
		__this->___modified_9 = 1;
		return;
	}
}
// System.Void System.UriBuilder::set_Host(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void UriBuilder_set_Host_m17901 (UriBuilder_t4536 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	UriBuilder_t4536 * G_B2_0 = {0};
	UriBuilder_t4536 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	UriBuilder_t4536 * G_B3_1 = {0};
	{
		String_t* L_0 = ___value;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		String_t* L_2 = ___value;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___host_1 = G_B3_0;
		__this->___modified_9 = 1;
		return;
	}
}
// System.Uri System.UriBuilder::get_Uri()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" Uri_t771 * UriBuilder_get_Uri_m17902 (UriBuilder_t4536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___modified_9);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Uri_t771 * L_1 = (__this->___uri_8);
		return L_1;
	}

IL_0012:
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.UriBuilder::ToString() */, __this);
		Uri_t771 * L_3 = (Uri_t771 *)il2cpp_codegen_object_new (Uri_t771_il2cpp_TypeInfo_var);
		Uri__ctor_m14809(L_3, L_2, 1, /*hidden argument*/NULL);
		__this->___uri_8 = L_3;
		__this->___modified_9 = 0;
		Uri_t771 * L_4 = (__this->___uri_8);
		return L_4;
	}
}
// System.Boolean System.UriBuilder::Equals(System.Object)
extern "C" bool UriBuilder_Equals_m17903 (UriBuilder_t4536 * __this, Object_t * ___rparam, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___rparam;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_001d;
	}

IL_000c:
	{
		Uri_t771 * L_1 = UriBuilder_get_Uri_m17902(__this, /*hidden argument*/NULL);
		Object_t * L_2 = ___rparam;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Uri::Equals(System.Object) */, L_1, L_3);
		G_B3_0 = ((int32_t)(L_4));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Int32 System.UriBuilder::GetHashCode()
extern "C" int32_t UriBuilder_GetHashCode_m17904 (UriBuilder_t4536 * __this, const MethodInfo* method)
{
	{
		Uri_t771 * L_0 = UriBuilder_get_Uri_m17902(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Uri::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String System.UriBuilder::ToString()
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* UriBuilder_ToString_m17905 (UriBuilder_t4536 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t261 * L_1 = V_0;
		String_t* L_2 = (__this->___scheme_0);
		NullCheck(L_1);
		StringBuilder_Append_m3995(L_1, L_2, /*hidden argument*/NULL);
		StringBuilder_t261 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_Append_m3995(L_3, (String_t*) &_stringLiteral4169, /*hidden argument*/NULL);
		String_t* L_4 = (__this->___username_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Inequality_m415(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		StringBuilder_t261 * L_7 = V_0;
		String_t* L_8 = (__this->___username_6);
		NullCheck(L_7);
		StringBuilder_Append_m3995(L_7, L_8, /*hidden argument*/NULL);
		String_t* L_9 = (__this->___password_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_11 = String_op_Inequality_m415(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		StringBuilder_t261 * L_12 = V_0;
		String_t* L_13 = (__this->___password_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral610, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		StringBuilder_Append_m3995(L_12, L_14, /*hidden argument*/NULL);
	}

IL_006d:
	{
		StringBuilder_t261 * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m3989(L_15, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_0076:
	{
		StringBuilder_t261 * L_16 = V_0;
		String_t* L_17 = (__this->___host_1);
		NullCheck(L_16);
		StringBuilder_Append_m3995(L_16, L_17, /*hidden argument*/NULL);
		int32_t L_18 = (__this->___port_2);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		StringBuilder_t261 * L_19 = V_0;
		int32_t L_20 = (__this->___port_2);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral610, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_Append_m3995(L_19, L_23, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		String_t* L_24 = (__this->___path_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_26 = String_op_Inequality_m415(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0102;
		}
	}
	{
		StringBuilder_t261 * L_27 = V_0;
		StringBuilder_t261 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = StringBuilder_get_Length_m7510(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		uint16_t L_30 = StringBuilder_get_Chars_m14755(L_27, ((int32_t)((int32_t)L_29-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_30) == ((int32_t)((int32_t)47))))
		{
			goto IL_0102;
		}
	}
	{
		String_t* L_31 = (__this->___path_3);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m410(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0102;
		}
	}
	{
		String_t* L_33 = (__this->___path_3);
		NullCheck(L_33);
		uint16_t L_34 = String_get_Chars_m407(L_33, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)47))))
		{
			goto IL_0102;
		}
	}
	{
		StringBuilder_t261 * L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_Append_m3989(L_35, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0102:
	{
		StringBuilder_t261 * L_36 = V_0;
		String_t* L_37 = (__this->___path_3);
		NullCheck(L_36);
		StringBuilder_Append_m3995(L_36, L_37, /*hidden argument*/NULL);
		StringBuilder_t261 * L_38 = V_0;
		String_t* L_39 = (__this->___query_4);
		NullCheck(L_38);
		StringBuilder_Append_m3995(L_38, L_39, /*hidden argument*/NULL);
		StringBuilder_t261 * L_40 = V_0;
		String_t* L_41 = (__this->___fragment_5);
		NullCheck(L_40);
		StringBuilder_Append_m3995(L_40, L_41, /*hidden argument*/NULL);
		StringBuilder_t261 * L_42 = V_0;
		NullCheck(L_42);
		String_t* L_43 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_42);
		return L_43;
	}
}
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
#ifndef _MSC_VER
#else
#endif
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"



// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
extern "C" void UriScheme__ctor_m17906 (UriScheme_t4537 * __this, String_t* ___s, String_t* ___d, int32_t ___p, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		__this->___scheme_0 = L_0;
		String_t* L_1 = ___d;
		__this->___delimiter_1 = L_1;
		int32_t L_2 = ___p;
		__this->___defaultPort_2 = L_2;
		return;
	}
}
// Conversion methods for marshalling of: System.Uri/UriScheme
void UriScheme_t4537_marshal(const UriScheme_t4537& unmarshaled, UriScheme_t4537_marshaled& marshaled)
{
	marshaled.___scheme_0 = il2cpp_codegen_marshal_string(unmarshaled.___scheme_0);
	marshaled.___delimiter_1 = il2cpp_codegen_marshal_string(unmarshaled.___delimiter_1);
	marshaled.___defaultPort_2 = unmarshaled.___defaultPort_2;
}
void UriScheme_t4537_marshal_back(const UriScheme_t4537_marshaled& marshaled, UriScheme_t4537& unmarshaled)
{
	unmarshaled.___scheme_0 = il2cpp_codegen_marshal_string_result(marshaled.___scheme_0);
	unmarshaled.___delimiter_1 = il2cpp_codegen_marshal_string_result(marshaled.___delimiter_1);
	unmarshaled.___defaultPort_2 = marshaled.___defaultPort_2;
}
// Conversion method for clean up from marshalling of: System.Uri/UriScheme
void UriScheme_t4537_marshal_cleanup(UriScheme_t4537_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___scheme_0);
	marshaled.___scheme_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___delimiter_1);
	marshaled.___delimiter_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.UriPartial
#include "System_System_UriPartial.h"
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// System.Net.IPAddress
#include "System_System_Net_IPAddress.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6Address.h"
// System.IO.Path
#include "mscorlib_System_IO_Path.h"
// System.UriParser
#include "System_System_UriParser.h"
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UriKind
#include "System_System_UriKind.h"
// System.UriFormatException
#include "System_System_UriFormatException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Net.IPAddress
#include "System_System_Net_IPAddressMethodDeclarations.h"
// System.Net.IPv6Address
#include "System_System_Net_IPv6AddressMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
// Locale
#include "System_LocaleMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"


// System.Void System.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m7622 (Uri_t771 * __this, String_t* ___uriString, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uriString;
		Uri__ctor_m14809(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri__ctor_m17907 (Uri_t771 * __this, SerializationInfo_t2936 * ___serializationInfo, StreamingContext_t2937  ___streamingContext, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___serializationInfo;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m12072(L_0, (String_t*) &_stringLiteral4530, /*hidden argument*/NULL);
		Uri__ctor_m14809(__this, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t3724_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t696_il2cpp_TypeInfo_var;
extern TypeInfo* UriKind_t4540_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void Uri__ctor_m7485 (Uri_t771 * __this, String_t* ___uriString, int32_t ___uriKind, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		UriFormatException_t3724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6115);
		ObjectU5BU5D_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		UriKind_t4540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7946);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___uriString;
		__this->___source_2 = L_6;
		int32_t L_7 = ___uriKind;
		Uri_ParseUri_m17936(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___uriKind;
		V_1 = L_8;
		int32_t L_9 = V_1;
		if (L_9 == 0)
		{
			goto IL_00b3;
		}
		if (L_9 == 1)
		{
			goto IL_007d;
		}
		if (L_9 == 2)
		{
			goto IL_0098;
		}
	}
	{
		goto IL_00b8;
	}

IL_007d:
	{
		bool L_10 = Uri_get_IsAbsoluteUri_m14793(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		UriFormatException_t3724 * L_11 = (UriFormatException_t3724 *)il2cpp_codegen_object_new (UriFormatException_t3724_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m17959(L_11, (String_t*) &_stringLiteral4531, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0093:
	{
		goto IL_00d9;
	}

IL_0098:
	{
		bool L_12 = Uri_get_IsAbsoluteUri_m14793(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00ae;
		}
	}
	{
		UriFormatException_t3724 * L_13 = (UriFormatException_t3724 *)il2cpp_codegen_object_new (UriFormatException_t3724_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m17959(L_13, (String_t*) &_stringLiteral4532, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_00ae:
	{
		goto IL_00d9;
	}

IL_00b3:
	{
		goto IL_00d9;
	}

IL_00b8:
	{
		ObjectU5BU5D_t696* L_14 = ((ObjectU5BU5D_t696*)SZArrayNew(ObjectU5BU5D_t696_il2cpp_TypeInfo_var, 1));
		int32_t L_15 = ___uriKind;
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(UriKind_t4540_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0)) = (Object_t *)L_17;
		String_t* L_18 = Locale_GetText_m15579(NULL /*static, unused*/, (String_t*) &_stringLiteral4533, L_14, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		ArgumentException_t725 * L_20 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4217(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" void Uri__ctor_m7629 (Uri_t771 * __this, Uri_t771 * ___baseUri, Uri_t771 * ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t771 * G_B2_0 = {0};
	Uri_t771 * G_B2_1 = {0};
	Uri_t771 * G_B1_0 = {0};
	Uri_t771 * G_B1_1 = {0};
	String_t* G_B3_0 = {0};
	Uri_t771 * G_B3_1 = {0};
	Uri_t771 * G_B3_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Uri_t771 * L_6 = ___baseUri;
		Uri_t771 * L_7 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_8 = Uri_op_Equality_m14784(NULL /*static, unused*/, L_7, (Uri_t771 *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_6;
		G_B1_1 = __this;
		if (!L_8)
		{
			G_B2_0 = L_6;
			G_B2_1 = __this;
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0074;
	}

IL_006e:
	{
		Uri_t771 * L_10 = ___relativeUri;
		NullCheck(L_10);
		String_t* L_11 = Uri_get_OriginalString_m14814(L_10, /*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0074:
	{
		NullCheck(G_B3_2);
		Uri_Merge_m17909(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t3724_il2cpp_TypeInfo_var;
extern "C" void Uri__ctor_m14809 (Uri_t771 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		UriFormatException_t3724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6115);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		bool L_6 = ___dontEscape;
		__this->___userEscaped_14 = L_6;
		String_t* L_7 = ___uriString;
		__this->___source_2 = L_7;
		Uri_ParseUri_m17936(__this, 1, /*hidden argument*/NULL);
		bool L_8 = (__this->___isAbsoluteUri_12);
		if (L_8)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_9 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral4534, L_9, /*hidden argument*/NULL);
		UriFormatException_t3724 * L_11 = (UriFormatException_t3724 *)il2cpp_codegen_object_new (UriFormatException_t3724_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m17959(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0087:
	{
		return;
	}
}
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Uri__ctor_m7465 (Uri_t771 * __this, Uri_t771 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
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
		__this->___scheme_3 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_1;
		__this->___port_5 = (-1);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_3;
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_4;
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userinfo_9 = L_5;
		__this->___isAbsoluteUri_12 = 1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Uri_t771 * L_6 = ___baseUri;
		String_t* L_7 = ___relativeUri;
		Uri_Merge_m17909(__this, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::.cctor()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* UriSchemeU5BU5D_t4538_il2cpp_TypeInfo_var;
extern "C" void Uri__cctor_m17908 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		UriSchemeU5BU5D_t4538_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7947);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19 = (String_t*) &_stringLiteral1910;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20 = (String_t*) &_stringLiteral4169;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21 = (String_t*) &_stringLiteral2958;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22 = (String_t*) &_stringLiteral4535;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23 = (String_t*) &_stringLiteral4536;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24 = (String_t*) &_stringLiteral4167;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25 = (String_t*) &_stringLiteral3982;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26 = (String_t*) &_stringLiteral4529;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27 = (String_t*) &_stringLiteral4537;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28 = (String_t*) &_stringLiteral4538;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetPipe_29 = (String_t*) &_stringLiteral4539;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetTcp_30 = (String_t*) &_stringLiteral4540;
		UriSchemeU5BU5D_t4538* L_0 = ((UriSchemeU5BU5D_t4538*)SZArrayNew(UriSchemeU5BU5D_t4538_il2cpp_TypeInfo_var, 8));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		String_t* L_1 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		String_t* L_2 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t4537  L_3 = {0};
		UriScheme__ctor_m17906(&L_3, L_1, L_2, ((int32_t)80), /*hidden argument*/NULL);
		*((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_0, 0)) = L_3;
		UriSchemeU5BU5D_t4538* L_4 = L_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		String_t* L_5 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		String_t* L_6 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t4537  L_7 = {0};
		UriScheme__ctor_m17906(&L_7, L_5, L_6, ((int32_t)443), /*hidden argument*/NULL);
		*((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_4, 1)) = L_7;
		UriSchemeU5BU5D_t4538* L_8 = L_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		String_t* L_9 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		String_t* L_10 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t4537  L_11 = {0};
		UriScheme__ctor_m17906(&L_11, L_9, L_10, ((int32_t)21), /*hidden argument*/NULL);
		*((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_8, 2)) = L_11;
		UriSchemeU5BU5D_t4538* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		String_t* L_13 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_14 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t4537  L_15 = {0};
		UriScheme__ctor_m17906(&L_15, L_13, L_14, (-1), /*hidden argument*/NULL);
		*((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_12, 3)) = L_15;
		UriSchemeU5BU5D_t4538* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		String_t* L_17 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		UriScheme_t4537  L_18 = {0};
		UriScheme__ctor_m17906(&L_18, L_17, (String_t*) &_stringLiteral610, ((int32_t)25), /*hidden argument*/NULL);
		*((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_16, 4)) = L_18;
		UriSchemeU5BU5D_t4538* L_19 = L_16;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 5);
		String_t* L_20 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		UriScheme_t4537  L_21 = {0};
		UriScheme__ctor_m17906(&L_21, L_20, (String_t*) &_stringLiteral610, ((int32_t)119), /*hidden argument*/NULL);
		*((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_19, 5)) = L_21;
		UriSchemeU5BU5D_t4538* L_22 = L_19;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 6);
		String_t* L_23 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		String_t* L_24 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t4537  L_25 = {0};
		UriScheme__ctor_m17906(&L_25, L_23, L_24, ((int32_t)119), /*hidden argument*/NULL);
		*((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_22, 6)) = L_25;
		UriSchemeU5BU5D_t4538* L_26 = L_22;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 7);
		String_t* L_27 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		String_t* L_28 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		UriScheme_t4537  L_29 = {0};
		UriScheme__ctor_m17906(&L_29, L_27, L_28, ((int32_t)70), /*hidden argument*/NULL);
		*((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_26, 7)) = L_29;
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___schemes_31 = L_26;
		return;
	}
}
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m14932 (Uri_t771 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___info;
		String_t* L_1 = Uri_get_AbsoluteUri_m7478(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m11514(L_0, (String_t*) &_stringLiteral4530, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Uri::Merge(System.Uri,System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" void Uri_Merge_m17909 (Uri_t771 * __this, Uri_t771 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Uri_t771 * L_0 = ___baseUri;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m14784(NULL /*static, unused*/, L_0, (Uri_t771 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t784 * L_2 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_2, (String_t*) &_stringLiteral4541, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0017:
	{
		Uri_t771 * L_3 = ___baseUri;
		NullCheck(L_3);
		bool L_4 = Uri_get_IsAbsoluteUri_m14793(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_5 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_5, (String_t*) &_stringLiteral4541, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		String_t* L_6 = ___relativeUri;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___relativeUri = L_7;
	}

IL_003a:
	{
		String_t* L_8 = ___relativeUri;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m410(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)2)))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_10 = ___relativeUri;
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m407(L_10, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_12 = ___relativeUri;
		NullCheck(L_12);
		uint16_t L_13 = String_get_Chars_m407(L_12, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_14 = ___relativeUri;
		__this->___source_2 = L_14;
		Uri_ParseUri_m17936(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_0071:
	{
		String_t* L_15 = ___relativeUri;
		NullCheck(L_15);
		int32_t L_16 = String_IndexOf_m3991(L_15, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_0107;
		}
	}
	{
		String_t* L_18 = ___relativeUri;
		CharU5BU5D_t711* L_19 = ((CharU5BU5D_t711*)SZArrayNew(CharU5BU5D_t711_il2cpp_TypeInfo_var, 3));
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_19, 0)) = (uint16_t)((int32_t)47);
		CharU5BU5D_t711* L_20 = L_19;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_20, 1)) = (uint16_t)((int32_t)92);
		CharU5BU5D_t711* L_21 = L_20;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_21, 2)) = (uint16_t)((int32_t)63);
		NullCheck(L_18);
		int32_t L_22 = String_IndexOfAny_m14800(L_18, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) > ((int32_t)L_24)))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}

IL_00ab:
	{
		Uri_t771 * L_26 = ___baseUri;
		NullCheck(L_26);
		String_t* L_27 = Uri_get_Scheme_m14794(L_26, /*hidden argument*/NULL);
		String_t* L_28 = ___relativeUri;
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_30 = String_CompareOrdinal_m14767(NULL /*static, unused*/, L_27, 0, L_28, 0, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00ed;
		}
	}
	{
		Uri_t771 * L_31 = ___baseUri;
		NullCheck(L_31);
		String_t* L_32 = Uri_get_Scheme_m14794(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_33 = Uri_IsPredefinedScheme_m17949(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00ed;
		}
	}
	{
		String_t* L_34 = ___relativeUri;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m410(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)((int32_t)L_36+(int32_t)1)))))
		{
			goto IL_00fc;
		}
	}
	{
		String_t* L_37 = ___relativeUri;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		uint16_t L_39 = String_get_Chars_m407(L_37, ((int32_t)((int32_t)L_38+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00fc;
		}
	}

IL_00ed:
	{
		String_t* L_40 = ___relativeUri;
		__this->___source_2 = L_40;
		Uri_ParseUri_m17936(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_00fc:
	{
		String_t* L_41 = ___relativeUri;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m4270(L_41, ((int32_t)((int32_t)L_42+(int32_t)1)), /*hidden argument*/NULL);
		___relativeUri = L_43;
	}

IL_0107:
	{
		Uri_t771 * L_44 = ___baseUri;
		NullCheck(L_44);
		String_t* L_45 = (L_44->___scheme_3);
		__this->___scheme_3 = L_45;
		Uri_t771 * L_46 = ___baseUri;
		NullCheck(L_46);
		String_t* L_47 = (L_46->___host_4);
		__this->___host_4 = L_47;
		Uri_t771 * L_48 = ___baseUri;
		NullCheck(L_48);
		int32_t L_49 = (L_48->___port_5);
		__this->___port_5 = L_49;
		Uri_t771 * L_50 = ___baseUri;
		NullCheck(L_50);
		String_t* L_51 = (L_50->___userinfo_9);
		__this->___userinfo_9 = L_51;
		Uri_t771 * L_52 = ___baseUri;
		NullCheck(L_52);
		bool L_53 = (L_52->___isUnc_10);
		__this->___isUnc_10 = L_53;
		Uri_t771 * L_54 = ___baseUri;
		NullCheck(L_54);
		bool L_55 = (L_54->___isUnixFilePath_1);
		__this->___isUnixFilePath_1 = L_55;
		Uri_t771 * L_56 = ___baseUri;
		NullCheck(L_56);
		bool L_57 = (L_56->___isOpaquePart_11);
		__this->___isOpaquePart_11 = L_57;
		String_t* L_58 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_59 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_60 = String_op_Equality_m456(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0190;
		}
	}
	{
		Uri_t771 * L_61 = ___baseUri;
		NullCheck(L_61);
		String_t* L_62 = (L_61->___path_6);
		__this->___path_6 = L_62;
		Uri_t771 * L_63 = ___baseUri;
		NullCheck(L_63);
		String_t* L_64 = (L_63->___query_7);
		__this->___query_7 = L_64;
		Uri_t771 * L_65 = ___baseUri;
		NullCheck(L_65);
		String_t* L_66 = (L_65->___fragment_8);
		__this->___fragment_8 = L_66;
		return;
	}

IL_0190:
	{
		String_t* L_67 = ___relativeUri;
		NullCheck(L_67);
		int32_t L_68 = String_IndexOf_m3991(L_67, ((int32_t)35), /*hidden argument*/NULL);
		V_0 = L_68;
		int32_t L_69 = V_0;
		if ((((int32_t)L_69) == ((int32_t)(-1))))
		{
			goto IL_01e5;
		}
	}
	{
		bool L_70 = (__this->___userEscaped_14);
		if (!L_70)
		{
			goto IL_01bd;
		}
	}
	{
		String_t* L_71 = ___relativeUri;
		int32_t L_72 = V_0;
		NullCheck(L_71);
		String_t* L_73 = String_Substring_m4270(L_71, L_72, /*hidden argument*/NULL);
		__this->___fragment_8 = L_73;
		goto IL_01db;
	}

IL_01bd:
	{
		String_t* L_74 = ___relativeUri;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		String_t* L_76 = String_Substring_m4270(L_74, ((int32_t)((int32_t)L_75+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_77 = Uri_EscapeString_m17934(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_78 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral2891, L_77, /*hidden argument*/NULL);
		__this->___fragment_8 = L_78;
	}

IL_01db:
	{
		String_t* L_79 = ___relativeUri;
		int32_t L_80 = V_0;
		NullCheck(L_79);
		String_t* L_81 = String_Substring_m418(L_79, 0, L_80, /*hidden argument*/NULL);
		___relativeUri = L_81;
	}

IL_01e5:
	{
		String_t* L_82 = ___relativeUri;
		NullCheck(L_82);
		int32_t L_83 = String_IndexOf_m3991(L_82, ((int32_t)63), /*hidden argument*/NULL);
		V_0 = L_83;
		int32_t L_84 = V_0;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_0228;
		}
	}
	{
		String_t* L_85 = ___relativeUri;
		int32_t L_86 = V_0;
		NullCheck(L_85);
		String_t* L_87 = String_Substring_m4270(L_85, L_86, /*hidden argument*/NULL);
		__this->___query_7 = L_87;
		bool L_88 = (__this->___userEscaped_14);
		if (L_88)
		{
			goto IL_021e;
		}
	}
	{
		String_t* L_89 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_90 = Uri_EscapeString_m17934(NULL /*static, unused*/, L_89, /*hidden argument*/NULL);
		__this->___query_7 = L_90;
	}

IL_021e:
	{
		String_t* L_91 = ___relativeUri;
		int32_t L_92 = V_0;
		NullCheck(L_91);
		String_t* L_93 = String_Substring_m418(L_91, 0, L_92, /*hidden argument*/NULL);
		___relativeUri = L_93;
	}

IL_0228:
	{
		String_t* L_94 = ___relativeUri;
		NullCheck(L_94);
		int32_t L_95 = String_get_Length_m410(L_94, /*hidden argument*/NULL);
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_96 = ___relativeUri;
		NullCheck(L_96);
		uint16_t L_97 = String_get_Chars_m407(L_96, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_98 = ___relativeUri;
		NullCheck(L_98);
		int32_t L_99 = String_get_Length_m410(L_98, /*hidden argument*/NULL);
		if ((((int32_t)L_99) <= ((int32_t)1)))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_100 = ___relativeUri;
		NullCheck(L_100);
		uint16_t L_101 = String_get_Chars_m407(L_100, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027d;
		}
	}
	{
		String_t* L_102 = (__this->___scheme_3);
		uint16_t L_103 = ((int32_t)58);
		Object_t * L_104 = Box(Char_t60_il2cpp_TypeInfo_var, &L_103);
		String_t* L_105 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_106 = String_Concat_m4021(NULL /*static, unused*/, L_102, L_104, L_105, /*hidden argument*/NULL);
		__this->___source_2 = L_106;
		Uri_ParseUri_m17936(__this, 1, /*hidden argument*/NULL);
		return;
	}

IL_027d:
	{
		String_t* L_107 = ___relativeUri;
		__this->___path_6 = L_107;
		bool L_108 = (__this->___userEscaped_14);
		if (L_108)
		{
			goto IL_02a0;
		}
	}
	{
		String_t* L_109 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_110 = Uri_EscapeString_m17934(NULL /*static, unused*/, L_109, /*hidden argument*/NULL);
		__this->___path_6 = L_110;
	}

IL_02a0:
	{
		return;
	}

IL_02a1:
	{
		Uri_t771 * L_111 = ___baseUri;
		NullCheck(L_111);
		String_t* L_112 = (L_111->___path_6);
		__this->___path_6 = L_112;
		String_t* L_113 = ___relativeUri;
		NullCheck(L_113);
		int32_t L_114 = String_get_Length_m410(L_113, /*hidden argument*/NULL);
		if ((((int32_t)L_114) > ((int32_t)0)))
		{
			goto IL_02ca;
		}
	}
	{
		String_t* L_115 = (__this->___query_7);
		NullCheck(L_115);
		int32_t L_116 = String_get_Length_m410(L_115, /*hidden argument*/NULL);
		if ((((int32_t)L_116) <= ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}

IL_02ca:
	{
		String_t* L_117 = (__this->___path_6);
		NullCheck(L_117);
		int32_t L_118 = String_LastIndexOf_m18099(L_117, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_118;
		int32_t L_119 = V_0;
		if ((((int32_t)L_119) < ((int32_t)0)))
		{
			goto IL_02f4;
		}
	}
	{
		String_t* L_120 = (__this->___path_6);
		int32_t L_121 = V_0;
		NullCheck(L_120);
		String_t* L_122 = String_Substring_m418(L_120, 0, ((int32_t)((int32_t)L_121+(int32_t)1)), /*hidden argument*/NULL);
		__this->___path_6 = L_122;
	}

IL_02f4:
	{
		String_t* L_123 = ___relativeUri;
		NullCheck(L_123);
		int32_t L_124 = String_get_Length_m410(L_123, /*hidden argument*/NULL);
		if (L_124)
		{
			goto IL_0300;
		}
	}
	{
		return;
	}

IL_0300:
	{
		String_t* L_125 = (__this->___path_6);
		String_t* L_126 = ___relativeUri;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_127 = String_Concat_m408(NULL /*static, unused*/, L_125, L_126, /*hidden argument*/NULL);
		__this->___path_6 = L_127;
		V_2 = 0;
	}

IL_0314:
	{
		String_t* L_128 = (__this->___path_6);
		int32_t L_129 = V_2;
		NullCheck(L_128);
		int32_t L_130 = String_IndexOf_m10333(L_128, (String_t*) &_stringLiteral4542, L_129, /*hidden argument*/NULL);
		V_0 = L_130;
		int32_t L_131 = V_0;
		if ((!(((uint32_t)L_131) == ((uint32_t)(-1)))))
		{
			goto IL_0332;
		}
	}
	{
		goto IL_0386;
	}

IL_0332:
	{
		int32_t L_132 = V_0;
		if (L_132)
		{
			goto IL_0350;
		}
	}
	{
		String_t* L_133 = (__this->___path_6);
		NullCheck(L_133);
		String_t* L_134 = String_Remove_m6199(L_133, 0, 2, /*hidden argument*/NULL);
		__this->___path_6 = L_134;
		goto IL_0381;
	}

IL_0350:
	{
		String_t* L_135 = (__this->___path_6);
		int32_t L_136 = V_0;
		NullCheck(L_135);
		uint16_t L_137 = String_get_Chars_m407(L_135, ((int32_t)((int32_t)L_136-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_137) == ((int32_t)((int32_t)46))))
		{
			goto IL_037d;
		}
	}
	{
		String_t* L_138 = (__this->___path_6);
		int32_t L_139 = V_0;
		NullCheck(L_138);
		String_t* L_140 = String_Remove_m6199(L_138, L_139, 2, /*hidden argument*/NULL);
		__this->___path_6 = L_140;
		goto IL_0381;
	}

IL_037d:
	{
		int32_t L_141 = V_0;
		V_2 = ((int32_t)((int32_t)L_141+(int32_t)1));
	}

IL_0381:
	{
		goto IL_0314;
	}

IL_0386:
	{
		String_t* L_142 = (__this->___path_6);
		NullCheck(L_142);
		int32_t L_143 = String_get_Length_m410(L_142, /*hidden argument*/NULL);
		if ((((int32_t)L_143) <= ((int32_t)1)))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_144 = (__this->___path_6);
		String_t* L_145 = (__this->___path_6);
		NullCheck(L_145);
		int32_t L_146 = String_get_Length_m410(L_145, /*hidden argument*/NULL);
		NullCheck(L_144);
		uint16_t L_147 = String_get_Chars_m407(L_144, ((int32_t)((int32_t)L_146-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_147) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_148 = (__this->___path_6);
		String_t* L_149 = (__this->___path_6);
		NullCheck(L_149);
		int32_t L_150 = String_get_Length_m410(L_149, /*hidden argument*/NULL);
		NullCheck(L_148);
		uint16_t L_151 = String_get_Chars_m407(L_148, ((int32_t)((int32_t)L_150-(int32_t)2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_151) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_03f4;
		}
	}
	{
		String_t* L_152 = (__this->___path_6);
		String_t* L_153 = (__this->___path_6);
		NullCheck(L_153);
		int32_t L_154 = String_get_Length_m410(L_153, /*hidden argument*/NULL);
		NullCheck(L_152);
		String_t* L_155 = String_Remove_m6199(L_152, ((int32_t)((int32_t)L_154-(int32_t)1)), 1, /*hidden argument*/NULL);
		__this->___path_6 = L_155;
	}

IL_03f4:
	{
		V_2 = 0;
	}

IL_03f6:
	{
		String_t* L_156 = (__this->___path_6);
		int32_t L_157 = V_2;
		NullCheck(L_156);
		int32_t L_158 = String_IndexOf_m10333(L_156, (String_t*) &_stringLiteral4543, L_157, /*hidden argument*/NULL);
		V_0 = L_158;
		int32_t L_159 = V_0;
		if ((!(((uint32_t)L_159) == ((uint32_t)(-1)))))
		{
			goto IL_0414;
		}
	}
	{
		goto IL_048b;
	}

IL_0414:
	{
		int32_t L_160 = V_0;
		if (L_160)
		{
			goto IL_0421;
		}
	}
	{
		V_2 = 3;
		goto IL_03f6;
	}

IL_0421:
	{
		String_t* L_161 = (__this->___path_6);
		int32_t L_162 = V_0;
		NullCheck(L_161);
		int32_t L_163 = String_LastIndexOf_m18168(L_161, ((int32_t)47), ((int32_t)((int32_t)L_162-(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_163;
		int32_t L_164 = V_3;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_0442;
		}
	}
	{
		int32_t L_165 = V_0;
		V_2 = ((int32_t)((int32_t)L_165+(int32_t)1));
		goto IL_0486;
	}

IL_0442:
	{
		String_t* L_166 = (__this->___path_6);
		int32_t L_167 = V_3;
		int32_t L_168 = V_0;
		int32_t L_169 = V_3;
		NullCheck(L_166);
		String_t* L_170 = String_Substring_m418(L_166, ((int32_t)((int32_t)L_167+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_168-(int32_t)L_169))-(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_171 = String_op_Inequality_m415(NULL /*static, unused*/, L_170, (String_t*) &_stringLiteral4544, /*hidden argument*/NULL);
		if (!L_171)
		{
			goto IL_0482;
		}
	}
	{
		String_t* L_172 = (__this->___path_6);
		int32_t L_173 = V_3;
		int32_t L_174 = V_0;
		int32_t L_175 = V_3;
		NullCheck(L_172);
		String_t* L_176 = String_Remove_m6199(L_172, ((int32_t)((int32_t)L_173+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_174-(int32_t)L_175))+(int32_t)3)), /*hidden argument*/NULL);
		__this->___path_6 = L_176;
		goto IL_0486;
	}

IL_0482:
	{
		int32_t L_177 = V_0;
		V_2 = ((int32_t)((int32_t)L_177+(int32_t)1));
	}

IL_0486:
	{
		goto IL_03f6;
	}

IL_048b:
	{
		String_t* L_178 = (__this->___path_6);
		NullCheck(L_178);
		int32_t L_179 = String_get_Length_m410(L_178, /*hidden argument*/NULL);
		if ((((int32_t)L_179) <= ((int32_t)3)))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_180 = (__this->___path_6);
		NullCheck(L_180);
		bool L_181 = String_EndsWith_m10332(L_180, (String_t*) &_stringLiteral4545, /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_182 = (__this->___path_6);
		String_t* L_183 = (__this->___path_6);
		NullCheck(L_183);
		int32_t L_184 = String_get_Length_m410(L_183, /*hidden argument*/NULL);
		NullCheck(L_182);
		int32_t L_185 = String_LastIndexOf_m18168(L_182, ((int32_t)47), ((int32_t)((int32_t)L_184-(int32_t)4)), /*hidden argument*/NULL);
		V_0 = L_185;
		int32_t L_186 = V_0;
		if ((((int32_t)L_186) == ((int32_t)(-1))))
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_187 = (__this->___path_6);
		int32_t L_188 = V_0;
		String_t* L_189 = (__this->___path_6);
		NullCheck(L_189);
		int32_t L_190 = String_get_Length_m410(L_189, /*hidden argument*/NULL);
		int32_t L_191 = V_0;
		NullCheck(L_187);
		String_t* L_192 = String_Substring_m418(L_187, ((int32_t)((int32_t)L_188+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_190-(int32_t)L_191))-(int32_t)4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_193 = String_op_Inequality_m415(NULL /*static, unused*/, L_192, (String_t*) &_stringLiteral4544, /*hidden argument*/NULL);
		if (!L_193)
		{
			goto IL_0522;
		}
	}
	{
		String_t* L_194 = (__this->___path_6);
		int32_t L_195 = V_0;
		String_t* L_196 = (__this->___path_6);
		NullCheck(L_196);
		int32_t L_197 = String_get_Length_m410(L_196, /*hidden argument*/NULL);
		int32_t L_198 = V_0;
		NullCheck(L_194);
		String_t* L_199 = String_Remove_m6199(L_194, ((int32_t)((int32_t)L_195+(int32_t)1)), ((int32_t)((int32_t)((int32_t)((int32_t)L_197-(int32_t)L_198))-(int32_t)1)), /*hidden argument*/NULL);
		__this->___path_6 = L_199;
	}

IL_0522:
	{
		bool L_200 = (__this->___userEscaped_14);
		if (L_200)
		{
			goto IL_053e;
		}
	}
	{
		String_t* L_201 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_202 = Uri_EscapeString_m17934(NULL /*static, unused*/, L_201, /*hidden argument*/NULL);
		__this->___path_6 = L_202;
	}

IL_053e:
	{
		return;
	}
}
// System.String System.Uri::get_AbsolutePath()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3994_MethodInfo_var;
extern "C" String_t* Uri_get_AbsolutePath_m14795 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2__ctor_m3994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Dictionary_2_t223 * V_2 = {0};
	int32_t V_3 = 0;
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_2 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1C_33;
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3994(L_3, 2, /*hidden argument*/Dictionary_2__ctor_m3994_MethodInfo_var);
		V_2 = L_3;
		Dictionary_2_t223 * L_4 = V_2;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral4529, 0);
		Dictionary_2_t223 * L_5 = V_2;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, (String_t*) &_stringLiteral2958, 0);
		Dictionary_2_t223 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1C_33 = L_6;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_7 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1C_33;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_7, L_8, (&V_3));
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = V_3;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0066;
	}

IL_005f:
	{
		String_t* L_11 = (__this->___path_6);
		return L_11;
	}

IL_0066:
	{
		String_t* L_12 = (__this->___path_6);
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m410(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00a4;
		}
	}
	{
		String_t* L_14 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_15 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m408(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		String_t* L_17 = (__this->___path_6);
		String_t* L_18 = V_0;
		NullCheck(L_17);
		bool L_19 = String_StartsWith_m4202(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		return (String_t*) &_stringLiteral521;
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_20;
	}

IL_00a4:
	{
		String_t* L_21 = (__this->___path_6);
		return L_21;
	}
}
// System.String System.Uri::get_AbsoluteUri()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_get_AbsoluteUri_m7478 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___cachedAbsoluteUri_15);
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_1 = Uri_GetLeftPart_m17927(__this, 2, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_1;
		String_t* L_2 = (__this->___query_7);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_4 = (__this->___cachedAbsoluteUri_15);
		String_t* L_5 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m408(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_6;
	}

IL_0046:
	{
		String_t* L_7 = (__this->___fragment_8);
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m410(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_9 = (__this->___cachedAbsoluteUri_15);
		String_t* L_10 = (__this->___fragment_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m408(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->___cachedAbsoluteUri_15 = L_11;
	}

IL_006e:
	{
		String_t* L_12 = (__this->___cachedAbsoluteUri_15);
		return L_12;
	}
}
// System.String System.Uri::get_Authority()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_get_Authority_m17910 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_GetDefaultPort_m17947(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___port_5);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = (__this->___host_4);
		G_B3_0 = L_3;
		goto IL_0042;
	}

IL_0027:
	{
		String_t* L_4 = (__this->___host_4);
		int32_t L_5 = (__this->___port_5);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m4021(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral610, L_7, /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0042:
	{
		return G_B3_0;
	}
}
// System.String System.Uri::get_Fragment()
extern "C" String_t* Uri_get_Fragment_m7479 (Uri_t771 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___fragment_8);
		return L_0;
	}
}
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m11537 (Uri_t771 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___host_4);
		return L_0;
	}
}
// System.UriHostNameType System.Uri::get_HostNameType()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3994_MethodInfo_var;
extern "C" int32_t Uri_get_HostNameType_m17911 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		Dictionary_2__ctor_m3994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	String_t* V_1 = {0};
	Dictionary_2_t223 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t G_B12_0 = 0;
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Host_m11537(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_CheckHostName_m17919(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_001a:
	{
		String_t* L_4 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_6 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1D_34;
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		Dictionary_2_t223 * L_7 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3994(L_7, 1, /*hidden argument*/Dictionary_2__ctor_m3994_MethodInfo_var);
		V_2 = L_7;
		Dictionary_2_t223 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, (String_t*) &_stringLiteral4529, 0);
		Dictionary_2_t223 * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1D_34 = L_9;
	}

IL_004a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_10 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1D_34;
		String_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_3));
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_13 = V_3;
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		goto IL_0069;
	}

IL_0067:
	{
		return (int32_t)(1);
	}

IL_0069:
	{
		bool L_14 = Uri_get_IsFile_m17913(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		G_B12_0 = 1;
		goto IL_007b;
	}

IL_007a:
	{
		int32_t L_15 = V_0;
		G_B12_0 = ((int32_t)(L_15));
	}

IL_007b:
	{
		return (int32_t)(G_B12_0);
	}
}
// System.Boolean System.Uri::get_IsDefaultPort()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" bool Uri_get_IsDefaultPort_m17912 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_1 = Uri_GetDefaultPort_m17947(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___port_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean System.Uri::get_IsFile()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Uri_get_IsFile_m17913 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_1 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m456(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::get_IsLoopback()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IPAddress_t4382_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t4384_il2cpp_TypeInfo_var;
extern "C" bool Uri_get_IsLoopback_m17914 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IPAddress_t4382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7785);
		IPv6Address_t4384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7821);
		s_Il2CppMethodIntialized = true;
	}
	IPAddress_t4382 * V_0 = {0};
	IPv6Address_t4384 * V_1 = {0};
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = Uri_get_Host_m11537(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m410(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = Uri_get_IsFile_m17913(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		String_t* L_3 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral4318, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m456(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral4317, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return 1;
	}

IL_0049:
	{
		String_t* L_7 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t4382_il2cpp_TypeInfo_var);
		bool L_8 = IPAddress_TryParse_m16701(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t4382_il2cpp_TypeInfo_var);
		IPAddress_t4382 * L_9 = ((IPAddress_t4382_StaticFields*)IPAddress_t4382_il2cpp_TypeInfo_var->static_fields)->___Loopback_6;
		IPAddress_t4382 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Net.IPAddress::Equals(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		String_t* L_12 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t4384_il2cpp_TypeInfo_var);
		bool L_13 = IPv6Address_TryParse_m16738(NULL /*static, unused*/, L_12, (&V_1), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		IPv6Address_t4384 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t4384_il2cpp_TypeInfo_var);
		bool L_15 = IPv6Address_IsLoopback_m16742(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_008c;
		}
	}
	{
		return 1;
	}

IL_008c:
	{
		return 0;
	}
}
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m17915 (Uri_t771 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		bool L_0 = (__this->___isUnc_10);
		return L_0;
	}
}
// System.String System.Uri::get_LocalPath()
extern TypeInfo* Path_t2160_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_get_LocalPath_m14796 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t2160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3403);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	bool V_2 = false;
	String_t* V_3 = {0};
	uint16_t V_4 = 0x0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___cachedLocalPath_17);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = (__this->___cachedLocalPath_17);
		return L_1;
	}

IL_0018:
	{
		bool L_2 = Uri_get_IsFile_m17913(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_3 = Uri_get_AbsolutePath_m14795(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		String_t* L_4 = (__this->___path_6);
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m410(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)3)))
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_6 = (__this->___path_6);
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m407(L_6, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_8 = (__this->___path_6);
		NullCheck(L_8);
		uint16_t L_9 = String_get_Chars_m407(L_8, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_10 = (__this->___path_6);
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m407(L_10, 2, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_11) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B9_0 = 1;
	}

IL_0074:
	{
		G_B11_0 = G_B9_0;
		goto IL_0077;
	}

IL_0076:
	{
		G_B11_0 = 0;
	}

IL_0077:
	{
		V_0 = G_B11_0;
		bool L_12 = Uri_get_IsUnc_m17915(__this, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00b9;
		}
	}
	{
		String_t* L_13 = (__this->___path_6);
		String_t* L_14 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_13);
		V_1 = L_14;
		bool L_15 = V_0;
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m4278(L_17, ((int32_t)47), ((int32_t)92), /*hidden argument*/NULL);
		__this->___cachedLocalPath_17 = L_18;
		goto IL_00b4;
	}

IL_00ad:
	{
		String_t* L_19 = V_1;
		__this->___cachedLocalPath_17 = L_19;
	}

IL_00b4:
	{
		goto IL_018f;
	}

IL_00b9:
	{
		String_t* L_20 = (__this->___path_6);
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m410(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) <= ((int32_t)1)))
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_22 = (__this->___path_6);
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m407(L_22, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_24 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2160_il2cpp_TypeInfo_var);
		uint16_t L_25 = ((Path_t2160_StaticFields*)Path_t2160_il2cpp_TypeInfo_var->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_26 = ((Path_t2160_StaticFields*)Path_t2160_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_24);
		String_t* L_27 = String_Replace_m4278(L_24, L_25, L_26, /*hidden argument*/NULL);
		String_t* L_28 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_27);
		__this->___cachedLocalPath_17 = L_28;
		goto IL_018f;
	}

IL_0103:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2160_il2cpp_TypeInfo_var);
		uint16_t L_29 = ((Path_t2160_StaticFields*)Path_t2160_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_30 = (__this->___host_4);
		V_3 = L_30;
		String_t* L_31 = (__this->___path_6);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m410(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0161;
		}
	}
	{
		String_t* L_33 = (__this->___path_6);
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m410(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_34) > ((int32_t)1)))
		{
			goto IL_014b;
		}
	}
	{
		String_t* L_35 = (__this->___path_6);
		NullCheck(L_35);
		uint16_t L_36 = String_get_Chars_m407(L_35, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)47))))
		{
			goto IL_0161;
		}
	}

IL_014b:
	{
		String_t* L_37 = V_3;
		String_t* L_38 = (__this->___path_6);
		NullCheck(L_38);
		String_t* L_39 = String_Replace_m4278(L_38, ((int32_t)47), ((int32_t)92), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Concat_m408(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		V_3 = L_40;
	}

IL_0161:
	{
		String_t* L_41 = V_3;
		String_t* L_42 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_41);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral108, L_42, /*hidden argument*/NULL);
		__this->___cachedLocalPath_17 = L_43;
		goto IL_018f;
	}

IL_017d:
	{
		String_t* L_44 = (__this->___path_6);
		String_t* L_45 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_44);
		__this->___cachedLocalPath_17 = L_45;
	}

IL_018f:
	{
		String_t* L_46 = (__this->___cachedLocalPath_17);
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m410(L_46, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_01b3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2160_il2cpp_TypeInfo_var);
		uint16_t L_48 = ((Path_t2160_StaticFields*)Path_t2160_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		V_4 = L_48;
		String_t* L_49 = Char_ToString_m4283((&V_4), /*hidden argument*/NULL);
		__this->___cachedLocalPath_17 = L_49;
	}

IL_01b3:
	{
		String_t* L_50 = (__this->___cachedLocalPath_17);
		return L_50;
	}
}
// System.String System.Uri::get_PathAndQuery()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_get_PathAndQuery_m17916 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___path_6);
		String_t* L_1 = Uri_get_Query_m7480(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m408(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Uri::get_Port()
extern "C" int32_t Uri_get_Port_m17917 (Uri_t771 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___port_5);
		return L_0;
	}
}
// System.String System.Uri::get_Query()
extern "C" String_t* Uri_get_Query_m7480 (Uri_t771 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___query_7);
		return L_0;
	}
}
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m14794 (Uri_t771 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___scheme_3);
		return L_0;
	}
}
// System.String System.Uri::get_UserInfo()
extern "C" String_t* Uri_get_UserInfo_m17918 (Uri_t771 * __this, const MethodInfo* method)
{
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		String_t* L_0 = (__this->___userinfo_9);
		return L_0;
	}
}
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m14793 (Uri_t771 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isAbsoluteUri_12);
		return L_0;
	}
}
// System.String System.Uri::get_OriginalString()
extern "C" String_t* Uri_get_OriginalString_m14814 (Uri_t771 * __this, const MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = (__this->___source_2);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = (__this->___source_2);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, __this);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t4384_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_CheckHostName_m17919 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		IPv6Address_t4384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7821);
		s_Il2CppMethodIntialized = true;
	}
	IPv6Address_t4384 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___name;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m410(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (int32_t)(0);
	}

IL_0013:
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_4 = Uri_IsIPv4Address_m17920(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_6 = Uri_IsDomainAddress_m17921(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t4384_il2cpp_TypeInfo_var);
		bool L_8 = IPv6Address_TryParse_m16738(NULL /*static, unused*/, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		return (int32_t)(4);
	}

IL_003c:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern TypeInfo* CharU5BU5D_t711_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsIPv4Address_m17920 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		CharU5BU5D_t711* L_1 = ((CharU5BU5D_t711*)SZArrayNew(CharU5BU5D_t711_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)((int32_t)46);
		NullCheck(L_0);
		StringU5BU5D_t75* L_2 = String_Split_m3860(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t75* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		V_1 = 0;
		goto IL_0057;
	}

IL_0024:
	{
		StringU5BU5D_t75* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = String_get_Length_m410((*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6)), /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		StringU5BU5D_t75* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		bool L_12 = UInt32_TryParse_m18169(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11)), (&V_3), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		uint32_t L_13 = V_3;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0057:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsDomainAddress_m17921 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	{
		String_t* L_0 = ___name;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m410(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		goto IL_006e;
	}

IL_0010:
	{
		String_t* L_2 = ___name;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m407(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_7 = Char_IsLetterOrDigit_m14810(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		goto IL_005c;
	}

IL_0030:
	{
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 0;
		goto IL_005c;
	}

IL_003f:
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_10 = Char_IsLetterOrDigit_m14810(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)45))))
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_005c;
		}
	}
	{
		return 0;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_1 = L_14;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_006a;
		}
	}
	{
		return 0;
	}

IL_006a:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" bool Uri_CheckSchemeName_m17922 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		String_t* L_0 = ___schemeName;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___schemeName;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m410(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return 0;
	}

IL_0013:
	{
		String_t* L_3 = ___schemeName;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m407(L_3, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_5 = Uri_IsAlpha_m17923(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		return 0;
	}

IL_0026:
	{
		String_t* L_6 = ___schemeName;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m410(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 1;
		goto IL_0070;
	}

IL_0034:
	{
		String_t* L_8 = ___schemeName;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m407(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsDigit_m18100(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_14 = Uri_IsAlpha_m17923(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)46))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_006c;
		}
	}
	{
		uint16_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_006c;
		}
	}
	{
		return 0;
	}

IL_006c:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0070:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}
}
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" bool Uri_IsAlpha_m17923 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		uint16_t L_0 = ___c;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)65))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0027;
		}
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)97))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_4) > ((int32_t)((int32_t)122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		G_B7_0 = G_B5_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B7_0 = 1;
	}

IL_0028:
	{
		return G_B7_0;
	}
}
// System.Boolean System.Uri::Equals(System.Object)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Uri_Equals_m17924 (Uri_t771 * __this, Object_t * ___comparant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t771 * V_0 = {0};
	String_t* V_1 = {0};
	{
		Object_t * L_0 = ___comparant;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___comparant;
		V_0 = ((Uri_t771 *)IsInst(L_1, Uri_t771_il2cpp_TypeInfo_var));
		Uri_t771 * L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		Object_t * L_3 = ___comparant;
		V_1 = ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
		String_t* L_4 = V_1;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return 0;
	}

IL_0024:
	{
		String_t* L_5 = V_1;
		Uri_t771 * L_6 = (Uri_t771 *)il2cpp_codegen_object_new (Uri_t771_il2cpp_TypeInfo_var);
		Uri__ctor_m7622(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002b:
	{
		Uri_t771 * L_7 = V_0;
		bool L_8 = Uri_InternalEquals_m17925(__this, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t782_il2cpp_TypeInfo_var;
extern "C" bool Uri_InternalEquals_m17925 (Uri_t771 * __this, Uri_t771 * ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CultureInfo_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t782 * V_0 = {0};
	int32_t G_B10_0 = 0;
	{
		bool L_0 = (__this->___isAbsoluteUri_12);
		Uri_t771 * L_1 = ___uri;
		NullCheck(L_1);
		bool L_2 = (L_1->___isAbsoluteUri_12);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		bool L_3 = (__this->___isAbsoluteUri_12);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = (__this->___source_2);
		Uri_t771 * L_5 = ___uri;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___source_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m456(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
		CultureInfo_t782 * L_8 = CultureInfo_get_InvariantCulture_m4210(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = (__this->___scheme_3);
		CultureInfo_t782 * L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_ToLower_m14787(L_9, L_10, /*hidden argument*/NULL);
		Uri_t771 * L_12 = ___uri;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___scheme_3);
		CultureInfo_t782 * L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m14787(L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_op_Equality_m456(NULL /*static, unused*/, L_11, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_17 = (__this->___host_4);
		CultureInfo_t782 * L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_ToLower_m14787(L_17, L_18, /*hidden argument*/NULL);
		Uri_t771 * L_20 = ___uri;
		NullCheck(L_20);
		String_t* L_21 = (L_20->___host_4);
		CultureInfo_t782 * L_22 = V_0;
		NullCheck(L_21);
		String_t* L_23 = String_ToLower_m14787(L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_op_Equality_m456(NULL /*static, unused*/, L_19, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_25 = (__this->___port_5);
		Uri_t771 * L_26 = ___uri;
		NullCheck(L_26);
		int32_t L_27 = (L_26->___port_5);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_27))))
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_28 = (__this->___query_7);
		Uri_t771 * L_29 = ___uri;
		NullCheck(L_29);
		String_t* L_30 = (L_29->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m456(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		String_t* L_32 = (__this->___path_6);
		Uri_t771 * L_33 = ___uri;
		NullCheck(L_33);
		String_t* L_34 = (L_33->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Equality_m456(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_35));
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B10_0 = 0;
	}

IL_00b5:
	{
		return G_B10_0;
	}
}
// System.Int32 System.Uri::GetHashCode()
extern TypeInfo* CultureInfo_t782_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetHashCode_m17926 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t782 * V_0 = {0};
	{
		int32_t L_0 = (__this->___cachedHashCode_18);
		if (L_0)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
		CultureInfo_t782 * L_1 = CultureInfo_get_InvariantCulture_m4210(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = (__this->___isAbsoluteUri_12);
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_3 = (__this->___scheme_3);
		CultureInfo_t782 * L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m14787(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_5);
		String_t* L_7 = (__this->___host_4);
		CultureInfo_t782 * L_8 = V_0;
		NullCheck(L_7);
		String_t* L_9 = String_ToLower_m14787(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_9);
		int32_t L_11 = (__this->___port_5);
		String_t* L_12 = (__this->___query_7);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_12);
		String_t* L_14 = (__this->___path_6);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_14);
		__this->___cachedHashCode_18 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6^(int32_t)L_10))^(int32_t)L_11))^(int32_t)L_13))^(int32_t)L_15));
		goto IL_007a;
	}

IL_0069:
	{
		String_t* L_16 = (__this->___source_2);
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_16);
		__this->___cachedHashCode_18 = L_17;
	}

IL_007a:
	{
		int32_t L_18 = (__this->___cachedHashCode_18);
		return L_18;
	}
}
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3994_MethodInfo_var;
extern "C" String_t* Uri_GetLeftPart_m17927 (Uri_t771 * __this, int32_t ___part, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		Dictionary_2__ctor_m3994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t261 * V_1 = {0};
	StringBuilder_t261 * V_2 = {0};
	int32_t V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t223 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Uri_EnsureAbsoluteUri_m17957(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___part;
		V_3 = L_0;
		int32_t L_1 = V_3;
		if (L_1 == 0)
		{
			goto IL_001f;
		}
		if (L_1 == 1)
		{
			goto IL_0031;
		}
		if (L_1 == 2)
		{
			goto IL_0134;
		}
	}
	{
		goto IL_02ad;
	}

IL_001f:
	{
		String_t* L_2 = (__this->___scheme_3);
		String_t* L_3 = Uri_GetOpaqueWiseSchemeDelimiter_m17948(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0031:
	{
		String_t* L_5 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m456(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_9 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m456(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_11;
	}

IL_0061:
	{
		StringBuilder_t261 * L_12 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		StringBuilder_t261 * L_13 = V_1;
		String_t* L_14 = (__this->___scheme_3);
		NullCheck(L_13);
		StringBuilder_Append_m3995(L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t261 * L_15 = V_1;
		String_t* L_16 = Uri_GetOpaqueWiseSchemeDelimiter_m17948(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m3995(L_15, L_16, /*hidden argument*/NULL);
		String_t* L_17 = (__this->___path_6);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m410(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_19 = (__this->___path_6);
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m407(L_19, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_21 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_22 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m456(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		StringBuilder_t261 * L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_Append_m3989(L_24, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_00c3:
	{
		String_t* L_25 = (__this->___userinfo_9);
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m410(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t261 * L_27 = V_1;
		String_t* L_28 = (__this->___userinfo_9);
		NullCheck(L_27);
		StringBuilder_t261 * L_29 = StringBuilder_Append_m3995(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m3989(L_29, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_00e8:
	{
		StringBuilder_t261 * L_30 = V_1;
		String_t* L_31 = (__this->___host_4);
		NullCheck(L_30);
		StringBuilder_Append_m3995(L_30, L_31, /*hidden argument*/NULL);
		String_t* L_32 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_GetDefaultPort_m17947(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34 = (__this->___port_5);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_012d;
		}
	}
	{
		int32_t L_35 = (__this->___port_5);
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) == ((int32_t)L_36)))
		{
			goto IL_012d;
		}
	}
	{
		StringBuilder_t261 * L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t261 * L_38 = StringBuilder_Append_m3989(L_37, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_39 = (__this->___port_5);
		NullCheck(L_38);
		StringBuilder_Append_m14750(L_38, L_39, /*hidden argument*/NULL);
	}

IL_012d:
	{
		StringBuilder_t261 * L_40 = V_1;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_40);
		return L_41;
	}

IL_0134:
	{
		StringBuilder_t261 * L_42 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_42, /*hidden argument*/NULL);
		V_2 = L_42;
		StringBuilder_t261 * L_43 = V_2;
		String_t* L_44 = (__this->___scheme_3);
		NullCheck(L_43);
		StringBuilder_Append_m3995(L_43, L_44, /*hidden argument*/NULL);
		StringBuilder_t261 * L_45 = V_2;
		String_t* L_46 = Uri_GetOpaqueWiseSchemeDelimiter_m17948(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		StringBuilder_Append_m3995(L_45, L_46, /*hidden argument*/NULL);
		String_t* L_47 = (__this->___path_6);
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m410(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) <= ((int32_t)1)))
		{
			goto IL_0196;
		}
	}
	{
		String_t* L_49 = (__this->___path_6);
		NullCheck(L_49);
		uint16_t L_50 = String_get_Chars_m407(L_49, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0196;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_51 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		String_t* L_52 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Equality_m456(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0196;
		}
	}
	{
		StringBuilder_t261 * L_54 = V_2;
		NullCheck(L_54);
		StringBuilder_Append_m3989(L_54, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0196:
	{
		String_t* L_55 = (__this->___userinfo_9);
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m410(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01bb;
		}
	}
	{
		StringBuilder_t261 * L_57 = V_2;
		String_t* L_58 = (__this->___userinfo_9);
		NullCheck(L_57);
		StringBuilder_t261 * L_59 = StringBuilder_Append_m3995(L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		StringBuilder_Append_m3989(L_59, ((int32_t)64), /*hidden argument*/NULL);
	}

IL_01bb:
	{
		StringBuilder_t261 * L_60 = V_2;
		String_t* L_61 = (__this->___host_4);
		NullCheck(L_60);
		StringBuilder_Append_m3995(L_60, L_61, /*hidden argument*/NULL);
		String_t* L_62 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_63 = Uri_GetDefaultPort_m17947(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		int32_t L_64 = (__this->___port_5);
		if ((((int32_t)L_64) == ((int32_t)(-1))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_65 = (__this->___port_5);
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_0200;
		}
	}
	{
		StringBuilder_t261 * L_67 = V_2;
		NullCheck(L_67);
		StringBuilder_t261 * L_68 = StringBuilder_Append_m3989(L_67, ((int32_t)58), /*hidden argument*/NULL);
		int32_t L_69 = (__this->___port_5);
		NullCheck(L_68);
		StringBuilder_Append_m14750(L_68, L_69, /*hidden argument*/NULL);
	}

IL_0200:
	{
		String_t* L_70 = (__this->___path_6);
		NullCheck(L_70);
		int32_t L_71 = String_get_Length_m410(L_70, /*hidden argument*/NULL);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_02a6;
		}
	}
	{
		String_t* L_72 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		V_4 = L_72;
		String_t* L_73 = V_4;
		if (!L_73)
		{
			goto IL_0284;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_74 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1E_35;
		if (L_74)
		{
			goto IL_0253;
		}
	}
	{
		Dictionary_2_t223 * L_75 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3994(L_75, 2, /*hidden argument*/Dictionary_2__ctor_m3994_MethodInfo_var);
		V_5 = L_75;
		Dictionary_2_t223 * L_76 = V_5;
		NullCheck(L_76);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_76, (String_t*) &_stringLiteral4529, 0);
		Dictionary_2_t223 * L_77 = V_5;
		NullCheck(L_77);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_77, (String_t*) &_stringLiteral4537, 0);
		Dictionary_2_t223 * L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1E_35 = L_78;
	}

IL_0253:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_79 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1E_35;
		String_t* L_80 = V_4;
		NullCheck(L_79);
		bool L_81 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_79, L_80, (&V_6));
		if (!L_81)
		{
			goto IL_0284;
		}
	}
	{
		int32_t L_82 = V_6;
		if (!L_82)
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0284;
	}

IL_0272:
	{
		StringBuilder_t261 * L_83 = V_2;
		String_t* L_84 = (__this->___path_6);
		NullCheck(L_83);
		StringBuilder_Append_m3995(L_83, L_84, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_0284:
	{
		StringBuilder_t261 * L_85 = V_2;
		String_t* L_86 = (__this->___path_6);
		String_t* L_87 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_88 = Uri_CompactEscaped_m17943(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
		String_t* L_89 = Uri_Reduce_m17944(NULL /*static, unused*/, L_86, L_88, /*hidden argument*/NULL);
		NullCheck(L_85);
		StringBuilder_Append_m3995(L_85, L_89, /*hidden argument*/NULL);
		goto IL_02a6;
	}

IL_02a6:
	{
		StringBuilder_t261 * L_90 = V_2;
		NullCheck(L_90);
		String_t* L_91 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_90);
		return L_91;
	}

IL_02ad:
	{
		return (String_t*)NULL;
	}
}
// System.Int32 System.Uri::FromHex(System.Char)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_FromHex_m17928 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)57))))
		{
			goto IL_0015;
		}
	}
	{
		uint16_t L_2 = ___digit;
		return ((int32_t)((int32_t)L_2-(int32_t)((int32_t)48)));
	}

IL_0015:
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)102))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_5 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_002d:
	{
		uint16_t L_6 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_7 = ___digit;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)70))))
		{
			goto IL_0045;
		}
	}
	{
		uint16_t L_8 = ___digit;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_8-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0045:
	{
		ArgumentException_t725 * L_9 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4217(L_9, (String_t*) &_stringLiteral4546, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}
}
// System.String System.Uri::HexEscape(System.Char)
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_HexEscape_m17929 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t L_0 = ___character;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_1 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_1, (String_t*) &_stringLiteral4547, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19;
		uint16_t L_3 = ___character;
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m407(L_2, ((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)240)))>>(int32_t)4)), /*hidden argument*/NULL);
		uint16_t L_5 = L_4;
		Object_t * L_6 = Box(Char_t60_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___hexUpperChars_19;
		uint16_t L_8 = ___character;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m407(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		uint16_t L_10 = L_9;
		Object_t * L_11 = Box(Char_t60_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m4021(NULL /*static, unused*/, (String_t*) &_stringLiteral2893, L_6, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m17930 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		uint16_t L_0 = ___digit;
		if ((((int32_t)((int32_t)48)) > ((int32_t)L_0)))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = ___digit;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0035;
		}
	}

IL_0010:
	{
		uint16_t L_2 = ___digit;
		if ((((int32_t)((int32_t)97)) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = ___digit;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)102))))
		{
			goto IL_0035;
		}
	}

IL_0020:
	{
		uint16_t L_4 = ___digit;
		if ((((int32_t)((int32_t)65)) > ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_5 = ___digit;
		G_B7_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 0;
	}

IL_0033:
	{
		G_B9_0 = G_B7_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B9_0 = 1;
	}

IL_0036:
	{
		return G_B9_0;
	}
}
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" bool Uri_IsHexEncoding_m17931 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___index;
		String_t* L_1 = ___pattern;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m410(L_1, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) <= ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		String_t* L_3 = ___pattern;
		int32_t L_4 = ___index;
		int32_t L_5 = L_4;
		___index = ((int32_t)((int32_t)L_5+(int32_t)1));
		NullCheck(L_3);
		uint16_t L_6 = String_get_Chars_m407(L_3, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_7 = ___pattern;
		int32_t L_8 = ___index;
		int32_t L_9 = L_8;
		___index = ((int32_t)((int32_t)L_9+(int32_t)1));
		NullCheck(L_7);
		uint16_t L_10 = String_get_Chars_m407(L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_11 = Uri_IsHexDigit_m17930(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___pattern;
		int32_t L_13 = ___index;
		NullCheck(L_12);
		uint16_t L_14 = String_get_Chars_m407(L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_15 = Uri_IsHexDigit_m17930(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_0048;
	}

IL_0047:
	{
		G_B6_0 = 0;
	}

IL_0048:
	{
		return G_B6_0;
	}
}
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Uri_AppendQueryAndFragment_m17932 (Uri_t771 * __this, String_t** ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B4_0 = {0};
	{
		String_t* L_0 = (__this->___query_7);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m410(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_2 = (__this->___query_7);
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m407(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0047;
		}
	}
	{
		uint16_t L_4 = ((int32_t)63);
		Object_t * L_5 = Box(Char_t60_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = (__this->___query_7);
		NullCheck(L_6);
		String_t* L_7 = String_Substring_m4270(L_6, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_8 = Uri_Unescape_m17937(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m409(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
		goto IL_0053;
	}

IL_0047:
	{
		String_t* L_10 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_11 = Uri_Unescape_m17937(NULL /*static, unused*/, L_10, 0, /*hidden argument*/NULL);
		G_B4_0 = L_11;
	}

IL_0053:
	{
		V_0 = G_B4_0;
		String_t** L_12 = ___result;
		String_t** L_13 = ___result;
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m408(NULL /*static, unused*/, (*((String_t**)L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_12)) = (Object_t *)L_15;
	}

IL_005e:
	{
		String_t* L_16 = (__this->___fragment_8);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m410(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		String_t** L_18 = ___result;
		String_t** L_19 = ___result;
		String_t* L_20 = (__this->___fragment_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m408(NULL /*static, unused*/, (*((String_t**)L_19)), L_20, /*hidden argument*/NULL);
		*((Object_t **)(L_18)) = (Object_t *)L_21;
	}

IL_007e:
	{
		return;
	}
}
// System.String System.Uri::ToString()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_ToString_m17933 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___cachedToString_16);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = (__this->___cachedToString_16);
		return L_1;
	}

IL_0012:
	{
		bool L_2 = (__this->___isAbsoluteUri_12);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_3 = Uri_GetLeftPart_m17927(__this, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_Unescape_m17937(NULL /*static, unused*/, L_3, 1, /*hidden argument*/NULL);
		__this->___cachedToString_16 = L_4;
		goto IL_0047;
	}

IL_0035:
	{
		String_t* L_5 = (__this->___path_6);
		String_t* L_6 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String System.Uri::Unescape(System.String) */, __this, L_5);
		__this->___cachedToString_16 = L_6;
	}

IL_0047:
	{
		String_t** L_7 = &(__this->___cachedToString_16);
		Uri_AppendQueryAndFragment_m17932(__this, L_7, /*hidden argument*/NULL);
		String_t* L_8 = (__this->___cachedToString_16);
		return L_8;
	}
}
// System.String System.Uri::EscapeString(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_EscapeString_m17934 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_EscapeString_m17935(NULL /*static, unused*/, L_0, 0, 1, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t711_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_EscapeString_m17935 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		CharU5BU5D_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t66* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0x0;
	{
		String_t* L_0 = ___str;
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
		StringBuilder_t261 * L_2 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m410(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0105;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_7 = Uri_IsHexEncoding_m17931(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t261 * L_8 = V_0;
		String_t* L_9 = ___str;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m418(L_9, L_10, 3, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_m3995(L_8, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)2));
		goto IL_0101;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_t753 * L_13 = Encoding_get_UTF8_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharU5BU5D_t711* L_14 = ((CharU5BU5D_t711*)SZArrayNew(CharU5BU5D_t711_il2cpp_TypeInfo_var, 1));
		String_t* L_15 = ___str;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m407(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_14, 0)) = (uint16_t)L_17;
		NullCheck(L_13);
		ByteU5BU5D_t66* L_18 = (ByteU5BU5D_t66*)VirtFuncInvoker1< ByteU5BU5D_t66*, CharU5BU5D_t711* >::Invoke(12 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_13, L_14);
		V_3 = L_18;
		ByteU5BU5D_t66* L_19 = V_3;
		NullCheck(L_19);
		V_4 = (((int32_t)(((Array_t *)L_19)->max_length)));
		V_5 = 0;
		goto IL_00f8;
	}

IL_006c:
	{
		ByteU5BU5D_t66* L_20 = V_3;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_6 = (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22))));
		uint16_t L_23 = V_6;
		if ((((int32_t)L_23) <= ((int32_t)((int32_t)32))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_24 = V_6;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)127))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_25 = V_6;
		NullCheck((String_t*) &_stringLiteral4548);
		int32_t L_26 = String_IndexOf_m3991((String_t*) &_stringLiteral4548, L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		bool L_27 = ___escapeHex;
		if (!L_27)
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_28 = V_6;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)35))))
		{
			goto IL_00d6;
		}
	}

IL_00a6:
	{
		bool L_29 = ___escapeBrackets;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		uint16_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d6;
		}
	}
	{
		uint16_t L_31 = V_6;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}

IL_00be:
	{
		bool L_32 = ___escapeReserved;
		if (!L_32)
		{
			goto IL_00e9;
		}
	}
	{
		uint16_t L_33 = V_6;
		NullCheck((String_t*) &_stringLiteral4549);
		int32_t L_34 = String_IndexOf_m3991((String_t*) &_stringLiteral4549, L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e9;
		}
	}

IL_00d6:
	{
		StringBuilder_t261 * L_35 = V_0;
		uint16_t L_36 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_37 = Uri_HexEscape_m17929(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		StringBuilder_Append_m3995(L_35, L_37, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00e9:
	{
		StringBuilder_t261 * L_38 = V_0;
		uint16_t L_39 = V_6;
		NullCheck(L_38);
		StringBuilder_Append_m3989(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00f2:
	{
		int32_t L_40 = V_5;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
	}

IL_00f8:
	{
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_006c;
		}
	}

IL_0101:
	{
		int32_t L_43 = V_2;
		V_2 = ((int32_t)((int32_t)L_43+(int32_t)1));
	}

IL_0105:
	{
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t261 * L_46 = V_0;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_46);
		return L_47;
	}
}
// System.Void System.Uri::ParseUri(System.UriKind)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t782_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseUri_m17936 (Uri_t771 * __this, int32_t ___kind, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		CultureInfo_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___kind;
		String_t* L_1 = (__this->___source_2);
		Uri_Parse_m17941(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = (__this->___userEscaped_14);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		String_t* L_3 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_4 = Uri_EscapeString_m17935(NULL /*static, unused*/, L_3, 0, 1, 0, /*hidden argument*/NULL);
		__this->___host_4 = L_4;
		String_t* L_5 = (__this->___host_4);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m410(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_7 = (__this->___host_4);
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m407(L_7, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)((int32_t)91))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_9 = (__this->___host_4);
		String_t* L_10 = (__this->___host_4);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m410(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		uint16_t L_12 = String_get_Chars_m407(L_9, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)93))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_13 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
		CultureInfo_t782 * L_14 = CultureInfo_get_InvariantCulture_m4210(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_15 = String_ToLower_m14787(L_13, L_14, /*hidden argument*/NULL);
		__this->___host_4 = L_15;
	}

IL_0086:
	{
		String_t* L_16 = (__this->___path_6);
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m410(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_18 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_19 = Uri_EscapeString_m17934(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		__this->___path_6 = L_19;
	}

IL_00a8:
	{
		return;
	}
}
// System.String System.Uri::Unescape(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_Unescape_m14933 (Uri_t771 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_1 = Uri_Unescape_m17937(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_Unescape_m17937 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	uint16_t V_5 = 0x0;
	{
		String_t* L_0 = ___str;
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
		StringBuilder_t261 * L_2 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___str;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m410(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ca;
	}

IL_0020:
	{
		String_t* L_5 = ___str;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m407(L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		uint16_t L_8 = V_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_9 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		uint16_t L_10 = Uri_HexUnescapeMultiByte_m17945(NULL /*static, unused*/, L_9, (&V_2), (&V_4), /*hidden argument*/NULL);
		V_5 = L_10;
		bool L_11 = ___excludeSpecial;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t L_12 = V_5;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t261 * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m3995(L_13, (String_t*) &_stringLiteral2892, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_005c:
	{
		bool L_14 = ___excludeSpecial;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		uint16_t L_15 = V_5;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_007c;
		}
	}
	{
		StringBuilder_t261 * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_Append_m3995(L_16, (String_t*) &_stringLiteral2894, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_007c:
	{
		bool L_17 = ___excludeSpecial;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_009c;
		}
	}
	{
		StringBuilder_t261 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3995(L_19, (String_t*) &_stringLiteral4550, /*hidden argument*/NULL);
		goto IL_00b5;
	}

IL_009c:
	{
		StringBuilder_t261 * L_20 = V_0;
		uint16_t L_21 = V_5;
		NullCheck(L_20);
		StringBuilder_Append_m3989(L_20, L_21, /*hidden argument*/NULL);
		uint16_t L_22 = V_4;
		if (!L_22)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t261 * L_23 = V_0;
		uint16_t L_24 = V_4;
		NullCheck(L_23);
		StringBuilder_Append_m3989(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25-(int32_t)1));
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t261 * L_26 = V_0;
		uint16_t L_27 = V_3;
		NullCheck(L_26);
		StringBuilder_Append_m3989(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ca:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t261 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_31);
		return L_32;
	}
}
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t711_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseAsWindowsUNC_m17938 (Uri_t771 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_0;
		__this->___port_5 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_2;
		__this->___isUnc_10 = 1;
		String_t* L_3 = ___uriString;
		CharU5BU5D_t711* L_4 = ((CharU5BU5D_t711*)SZArrayNew(CharU5BU5D_t711_il2cpp_TypeInfo_var, 1));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 0)) = (uint16_t)((int32_t)92);
		NullCheck(L_3);
		String_t* L_5 = String_TrimStart_m18170(L_3, L_4, /*hidden argument*/NULL);
		___uriString = L_5;
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m3991(L_6, ((int32_t)92), /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_9 = ___uriString;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_m4270(L_9, L_10, /*hidden argument*/NULL);
		__this->___path_6 = L_11;
		String_t* L_12 = ___uriString;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m418(L_12, 0, L_13, /*hidden argument*/NULL);
		__this->___host_4 = L_14;
		goto IL_0084;
	}

IL_0072:
	{
		String_t* L_15 = ___uriString;
		__this->___host_4 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___path_6 = L_16;
	}

IL_0084:
	{
		String_t* L_17 = (__this->___path_6);
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m3891(L_17, (String_t*) &_stringLiteral1914, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		__this->___path_6 = L_18;
		return;
	}
}
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m17939 (Uri_t771 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m410(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m407(L_2, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m407(L_4, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		return (String_t*) &_stringLiteral4551;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_7;
		__this->___port_5 = (-1);
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		String_t* L_9 = String_Replace_m3891(L_8, (String_t*) &_stringLiteral1914, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		__this->___path_6 = L_9;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_10;
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_11;
		return (String_t*)NULL;
	}
}
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m17940 (Uri_t771 * __this, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isUnixFilePath_1 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		__this->___scheme_3 = L_0;
		__this->___port_5 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___fragment_8 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___query_7 = L_2;
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_3;
		__this->___path_6 = (String_t*)NULL;
		String_t* L_4 = ___uriString;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m410(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_6 = ___uriString;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m407(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_8 = ___uriString;
		NullCheck(L_8);
		uint16_t L_9 = String_get_Chars_m407(L_8, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_10 = ___uriString;
		CharU5BU5D_t711* L_11 = ((CharU5BU5D_t711*)SZArrayNew(CharU5BU5D_t711_il2cpp_TypeInfo_var, 1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)((int32_t)47);
		NullCheck(L_10);
		String_t* L_12 = String_TrimStart_m18170(L_10, L_11, /*hidden argument*/NULL);
		___uriString = L_12;
		uint16_t L_13 = ((int32_t)47);
		Object_t * L_14 = Box(Char_t60_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m409(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		__this->___path_6 = L_16;
	}

IL_008f:
	{
		String_t* L_17 = (__this->___path_6);
		if (L_17)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_18 = ___uriString;
		__this->___path_6 = L_18;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t3724_il2cpp_TypeInfo_var;
extern "C" void Uri_Parse_m17941 (Uri_t771 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		UriFormatException_t3724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6115);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___uriString;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral4552, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___kind;
		String_t* L_3 = ___uriString;
		String_t* L_4 = Uri_ParseNoExceptions_m17942(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = V_0;
		UriFormatException_t3724 * L_7 = (UriFormatException_t3724 *)il2cpp_codegen_object_new (UriFormatException_t3724_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m17959(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0027:
	{
		return;
	}
}
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern TypeInfo* Path_t2160_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t782_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* IPv6Address_t4384_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t4276_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_ParseNoExceptions_m17942 (Uri_t771 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t2160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3403);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		CultureInfo_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		IPv6Address_t4384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7821);
		DefaultUriParser_t4276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7949);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	String_t* V_10 = {0};
	bool V_11 = false;
	IPv6Address_t4384 * V_12 = {0};
	UriFormatException_t3724 * V_13 = {0};
	int32_t G_B50_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B139_0 = 0;
	{
		String_t* L_0 = ___uriString;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m413(L_0, /*hidden argument*/NULL);
		___uriString = L_1;
		String_t* L_2 = ___uriString;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = ___kind;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_6 = ___kind;
		if (L_6)
		{
			goto IL_002b;
		}
	}

IL_0022:
	{
		__this->___isAbsoluteUri_12 = 0;
		return (String_t*)NULL;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = ___kind;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		return (String_t*) &_stringLiteral4553;
	}

IL_003f:
	{
		V_1 = 0;
		String_t* L_9 = ___uriString;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m3991(L_9, ((int32_t)58), /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		return (String_t*) &_stringLiteral4531;
	}

IL_0056:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_13 = ___uriString;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m407(L_13, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2160_il2cpp_TypeInfo_var);
		uint16_t L_15 = ((Path_t2160_StaticFields*)Path_t2160_il2cpp_TypeInfo_var->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_16 = ___uriString;
		Uri_ParseAsUnixAbsoluteFilePath_m17940(__this, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___kind;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_008c;
		}
	}
	{
		__this->___isAbsoluteUri_12 = 0;
	}

IL_008c:
	{
		goto IL_00d3;
	}

IL_0091:
	{
		String_t* L_18 = ___uriString;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m410(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_20 = ___uriString;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m407(L_20, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_22 = ___uriString;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m407(L_22, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_24 = ___uriString;
		Uri_ParseAsWindowsUNC_m17938(__this, L_24, /*hidden argument*/NULL);
		goto IL_00d3;
	}

IL_00c5:
	{
		__this->___isAbsoluteUri_12 = 0;
		String_t* L_25 = ___uriString;
		__this->___path_6 = L_25;
	}

IL_00d3:
	{
		return (String_t*)NULL;
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0105;
		}
	}
	{
		String_t* L_27 = ___uriString;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m407(L_27, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_29 = Uri_IsAlpha_m17923(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f3;
		}
	}
	{
		return (String_t*) &_stringLiteral4554;
	}

IL_00f3:
	{
		String_t* L_30 = ___uriString;
		String_t* L_31 = Uri_ParseAsWindowsAbsoluteFilePath_m17939(__this, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_2;
		if (!L_32)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_33 = V_2;
		return L_33;
	}

IL_0103:
	{
		return (String_t*)NULL;
	}

IL_0105:
	{
		String_t* L_34 = ___uriString;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		String_t* L_36 = String_Substring_m418(L_34, 0, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
		CultureInfo_t782 * L_37 = CultureInfo_get_InvariantCulture_m4210(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_38 = String_ToLower_m14787(L_36, L_37, /*hidden argument*/NULL);
		__this->___scheme_3 = L_38;
		String_t* L_39 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_40 = Uri_CheckSchemeName_m17922(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0138;
		}
	}
	{
		String_t* L_41 = Locale_GetText_m15578(NULL /*static, unused*/, (String_t*) &_stringLiteral4555, /*hidden argument*/NULL);
		return L_41;
	}

IL_0138:
	{
		int32_t L_42 = V_1;
		V_3 = ((int32_t)((int32_t)L_42+(int32_t)1));
		String_t* L_43 = ___uriString;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m410(L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		String_t* L_45 = ___uriString;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = String_IndexOf_m10261(L_45, ((int32_t)35), L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		bool L_48 = Uri_get_IsUnc_m17915(__this, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_50 = (__this->___userEscaped_14);
		if (!L_50)
		{
			goto IL_017d;
		}
	}
	{
		String_t* L_51 = ___uriString;
		int32_t L_52 = V_1;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m4270(L_51, L_52, /*hidden argument*/NULL);
		__this->___fragment_8 = L_53;
		goto IL_019b;
	}

IL_017d:
	{
		String_t* L_54 = ___uriString;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		String_t* L_56 = String_Substring_m4270(L_54, ((int32_t)((int32_t)L_55+(int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_57 = Uri_EscapeString_m17934(NULL /*static, unused*/, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral2891, L_57, /*hidden argument*/NULL);
		__this->___fragment_8 = L_58;
	}

IL_019b:
	{
		int32_t L_59 = V_1;
		V_4 = L_59;
	}

IL_019e:
	{
		String_t* L_60 = ___uriString;
		int32_t L_61 = V_3;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		NullCheck(L_60);
		int32_t L_64 = String_IndexOf_m18171(L_60, ((int32_t)63), L_61, ((int32_t)((int32_t)L_62-(int32_t)L_63)), /*hidden argument*/NULL);
		V_1 = L_64;
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_66 = ___uriString;
		int32_t L_67 = V_1;
		int32_t L_68 = V_4;
		int32_t L_69 = V_1;
		NullCheck(L_66);
		String_t* L_70 = String_Substring_m418(L_66, L_67, ((int32_t)((int32_t)L_68-(int32_t)L_69)), /*hidden argument*/NULL);
		__this->___query_7 = L_70;
		int32_t L_71 = V_1;
		V_4 = L_71;
		bool L_72 = (__this->___userEscaped_14);
		if (L_72)
		{
			goto IL_01e3;
		}
	}
	{
		String_t* L_73 = (__this->___query_7);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_74 = Uri_EscapeString_m17934(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		__this->___query_7 = L_74;
	}

IL_01e3:
	{
		String_t* L_75 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_76 = Uri_IsPredefinedScheme_m17949(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
		if (!L_76)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_77 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_78 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_79 = String_op_Inequality_m415(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_80 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_81 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_82 = String_op_Inequality_m415(NULL /*static, unused*/, L_80, L_81, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_0255;
		}
	}
	{
		int32_t L_83 = V_4;
		int32_t L_84 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_83-(int32_t)L_84))) < ((int32_t)2)))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_85-(int32_t)L_86))) < ((int32_t)2)))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_87 = ___uriString;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		uint16_t L_89 = String_get_Chars_m407(L_87, L_88, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0255;
		}
	}
	{
		String_t* L_90 = ___uriString;
		int32_t L_91 = V_3;
		NullCheck(L_90);
		uint16_t L_92 = String_get_Chars_m407(L_90, ((int32_t)((int32_t)L_91+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)47))))
		{
			goto IL_0255;
		}
	}

IL_024f:
	{
		return (String_t*) &_stringLiteral4556;
	}

IL_0255:
	{
		int32_t L_93 = V_4;
		int32_t L_94 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_93-(int32_t)L_94))) < ((int32_t)2)))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_95 = ___uriString;
		int32_t L_96 = V_3;
		NullCheck(L_95);
		uint16_t L_97 = String_get_Chars_m407(L_95, L_96, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_027c;
		}
	}
	{
		String_t* L_98 = ___uriString;
		int32_t L_99 = V_3;
		NullCheck(L_98);
		uint16_t L_100 = String_get_Chars_m407(L_98, ((int32_t)((int32_t)L_99+(int32_t)1)), /*hidden argument*/NULL);
		G_B50_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_027d;
	}

IL_027c:
	{
		G_B50_0 = 0;
	}

IL_027d:
	{
		V_5 = G_B50_0;
		String_t* L_101 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_102 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_103 = String_op_Equality_m456(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_02b7;
		}
	}
	{
		bool L_104 = V_5;
		if (!L_104)
		{
			goto IL_02b7;
		}
	}
	{
		int32_t L_105 = V_4;
		int32_t L_106 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_105-(int32_t)L_106))) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		String_t* L_107 = ___uriString;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		uint16_t L_109 = String_get_Chars_m407(L_107, ((int32_t)((int32_t)L_108+(int32_t)2)), /*hidden argument*/NULL);
		G_B55_0 = ((((int32_t)L_109) == ((int32_t)((int32_t)47)))? 1 : 0);
		goto IL_02b5;
	}

IL_02b4:
	{
		G_B55_0 = 1;
	}

IL_02b5:
	{
		G_B57_0 = G_B55_0;
		goto IL_02b8;
	}

IL_02b7:
	{
		G_B57_0 = 0;
	}

IL_02b8:
	{
		V_6 = G_B57_0;
		V_7 = 0;
		bool L_110 = V_5;
		if (!L_110)
		{
			goto IL_03a8;
		}
	}
	{
		int32_t L_111 = ___kind;
		if ((!(((uint32_t)L_111) == ((uint32_t)2))))
		{
			goto IL_02d1;
		}
	}
	{
		return (String_t*) &_stringLiteral4557;
	}

IL_02d1:
	{
		String_t* L_112 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_113 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_114 = String_op_Inequality_m415(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_02ff;
		}
	}
	{
		String_t* L_115 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_116 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_117 = String_op_Inequality_m415(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		if (!L_117)
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_118 = V_3;
		V_3 = ((int32_t)((int32_t)L_118+(int32_t)2));
	}

IL_02ff:
	{
		String_t* L_119 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_120 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_121 = String_op_Equality_m456(NULL /*static, unused*/, L_119, L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0383;
		}
	}
	{
		V_8 = 2;
		int32_t L_122 = V_3;
		V_9 = L_122;
		goto IL_033f;
	}

IL_031f:
	{
		String_t* L_123 = ___uriString;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		uint16_t L_125 = String_get_Chars_m407(L_123, L_124, /*hidden argument*/NULL);
		if ((((int32_t)L_125) == ((int32_t)((int32_t)47))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_0348;
	}

IL_0333:
	{
		int32_t L_126 = V_8;
		V_8 = ((int32_t)((int32_t)L_126+(int32_t)1));
		int32_t L_127 = V_9;
		V_9 = ((int32_t)((int32_t)L_127+(int32_t)1));
	}

IL_033f:
	{
		int32_t L_128 = V_9;
		int32_t L_129 = V_4;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_031f;
		}
	}

IL_0348:
	{
		int32_t L_130 = V_8;
		if ((((int32_t)L_130) < ((int32_t)4)))
		{
			goto IL_0377;
		}
	}
	{
		V_6 = 0;
		goto IL_035c;
	}

IL_0358:
	{
		int32_t L_131 = V_3;
		V_3 = ((int32_t)((int32_t)L_131+(int32_t)1));
	}

IL_035c:
	{
		int32_t L_132 = V_3;
		int32_t L_133 = V_4;
		if ((((int32_t)L_132) >= ((int32_t)L_133)))
		{
			goto IL_0372;
		}
	}
	{
		String_t* L_134 = ___uriString;
		int32_t L_135 = V_3;
		NullCheck(L_134);
		uint16_t L_136 = String_get_Chars_m407(L_134, L_135, /*hidden argument*/NULL);
		if ((((int32_t)L_136) == ((int32_t)((int32_t)47))))
		{
			goto IL_0358;
		}
	}

IL_0372:
	{
		goto IL_0383;
	}

IL_0377:
	{
		int32_t L_137 = V_8;
		if ((((int32_t)L_137) < ((int32_t)3)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_138 = V_3;
		V_3 = ((int32_t)((int32_t)L_138+(int32_t)1));
	}

IL_0383:
	{
		int32_t L_139 = V_4;
		int32_t L_140 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_139-(int32_t)L_140))) <= ((int32_t)1)))
		{
			goto IL_03a3;
		}
	}
	{
		String_t* L_141 = ___uriString;
		int32_t L_142 = V_3;
		NullCheck(L_141);
		uint16_t L_143 = String_get_Chars_m407(L_141, ((int32_t)((int32_t)L_142+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_03a3;
		}
	}
	{
		V_6 = 0;
		V_7 = 1;
	}

IL_03a3:
	{
		goto IL_03d2;
	}

IL_03a8:
	{
		String_t* L_144 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_145 = Uri_IsPredefinedScheme_m17949(NULL /*static, unused*/, L_144, /*hidden argument*/NULL);
		if (L_145)
		{
			goto IL_03d2;
		}
	}
	{
		String_t* L_146 = ___uriString;
		int32_t L_147 = V_3;
		int32_t L_148 = V_4;
		int32_t L_149 = V_3;
		NullCheck(L_146);
		String_t* L_150 = String_Substring_m418(L_146, L_147, ((int32_t)((int32_t)L_148-(int32_t)L_149)), /*hidden argument*/NULL);
		__this->___path_6 = L_150;
		__this->___isOpaquePart_11 = 1;
		return (String_t*)NULL;
	}

IL_03d2:
	{
		bool L_151 = V_6;
		if (!L_151)
		{
			goto IL_03e0;
		}
	}
	{
		V_1 = (-1);
		goto IL_040a;
	}

IL_03e0:
	{
		String_t* L_152 = ___uriString;
		int32_t L_153 = V_3;
		int32_t L_154 = V_4;
		int32_t L_155 = V_3;
		NullCheck(L_152);
		int32_t L_156 = String_IndexOf_m18171(L_152, ((int32_t)47), L_153, ((int32_t)((int32_t)L_154-(int32_t)L_155)), /*hidden argument*/NULL);
		V_1 = L_156;
		int32_t L_157 = V_1;
		if ((!(((uint32_t)L_157) == ((uint32_t)(-1)))))
		{
			goto IL_040a;
		}
	}
	{
		bool L_158 = V_7;
		if (!L_158)
		{
			goto IL_040a;
		}
	}
	{
		String_t* L_159 = ___uriString;
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		int32_t L_162 = V_3;
		NullCheck(L_159);
		int32_t L_163 = String_IndexOf_m18171(L_159, ((int32_t)92), L_160, ((int32_t)((int32_t)L_161-(int32_t)L_162)), /*hidden argument*/NULL);
		V_1 = L_163;
	}

IL_040a:
	{
		int32_t L_164 = V_1;
		if ((!(((uint32_t)L_164) == ((uint32_t)(-1)))))
		{
			goto IL_044b;
		}
	}
	{
		String_t* L_165 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_166 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_167 = String_op_Inequality_m415(NULL /*static, unused*/, L_165, L_166, /*hidden argument*/NULL);
		if (!L_167)
		{
			goto IL_0446;
		}
	}
	{
		String_t* L_168 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_169 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_170 = String_op_Inequality_m415(NULL /*static, unused*/, L_168, L_169, /*hidden argument*/NULL);
		if (!L_170)
		{
			goto IL_0446;
		}
	}
	{
		__this->___path_6 = (String_t*) &_stringLiteral521;
	}

IL_0446:
	{
		goto IL_045f;
	}

IL_044b:
	{
		String_t* L_171 = ___uriString;
		int32_t L_172 = V_1;
		int32_t L_173 = V_4;
		int32_t L_174 = V_1;
		NullCheck(L_171);
		String_t* L_175 = String_Substring_m418(L_171, L_172, ((int32_t)((int32_t)L_173-(int32_t)L_174)), /*hidden argument*/NULL);
		__this->___path_6 = L_175;
		int32_t L_176 = V_1;
		V_4 = L_176;
	}

IL_045f:
	{
		bool L_177 = V_6;
		if (!L_177)
		{
			goto IL_046d;
		}
	}
	{
		V_1 = (-1);
		goto IL_047b;
	}

IL_046d:
	{
		String_t* L_178 = ___uriString;
		int32_t L_179 = V_3;
		int32_t L_180 = V_4;
		int32_t L_181 = V_3;
		NullCheck(L_178);
		int32_t L_182 = String_IndexOf_m18171(L_178, ((int32_t)64), L_179, ((int32_t)((int32_t)L_180-(int32_t)L_181)), /*hidden argument*/NULL);
		V_1 = L_182;
	}

IL_047b:
	{
		int32_t L_183 = V_1;
		if ((((int32_t)L_183) == ((int32_t)(-1))))
		{
			goto IL_0496;
		}
	}
	{
		String_t* L_184 = ___uriString;
		int32_t L_185 = V_3;
		int32_t L_186 = V_1;
		int32_t L_187 = V_3;
		NullCheck(L_184);
		String_t* L_188 = String_Substring_m418(L_184, L_185, ((int32_t)((int32_t)L_186-(int32_t)L_187)), /*hidden argument*/NULL);
		__this->___userinfo_9 = L_188;
		int32_t L_189 = V_1;
		V_3 = ((int32_t)((int32_t)L_189+(int32_t)1));
	}

IL_0496:
	{
		__this->___port_5 = (-1);
		bool L_190 = V_6;
		if (!L_190)
		{
			goto IL_04ab;
		}
	}
	{
		V_1 = (-1);
		goto IL_04bc;
	}

IL_04ab:
	{
		String_t* L_191 = ___uriString;
		int32_t L_192 = V_4;
		int32_t L_193 = V_4;
		int32_t L_194 = V_3;
		NullCheck(L_191);
		int32_t L_195 = String_LastIndexOf_m18172(L_191, ((int32_t)58), ((int32_t)((int32_t)L_192-(int32_t)1)), ((int32_t)((int32_t)L_193-(int32_t)L_194)), /*hidden argument*/NULL);
		V_1 = L_195;
	}

IL_04bc:
	{
		int32_t L_196 = V_1;
		if ((((int32_t)L_196) == ((int32_t)(-1))))
		{
			goto IL_0566;
		}
	}
	{
		int32_t L_197 = V_1;
		int32_t L_198 = V_4;
		if ((((int32_t)L_197) == ((int32_t)((int32_t)((int32_t)L_198-(int32_t)1)))))
		{
			goto IL_0566;
		}
	}
	{
		String_t* L_199 = ___uriString;
		int32_t L_200 = V_1;
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		NullCheck(L_199);
		String_t* L_203 = String_Substring_m418(L_199, ((int32_t)((int32_t)L_200+(int32_t)1)), ((int32_t)((int32_t)L_201-(int32_t)((int32_t)((int32_t)L_202+(int32_t)1)))), /*hidden argument*/NULL);
		V_10 = L_203;
		String_t* L_204 = V_10;
		NullCheck(L_204);
		int32_t L_205 = String_get_Length_m410(L_204, /*hidden argument*/NULL);
		if ((((int32_t)L_205) <= ((int32_t)0)))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_206 = V_10;
		String_t* L_207 = V_10;
		NullCheck(L_207);
		int32_t L_208 = String_get_Length_m410(L_207, /*hidden argument*/NULL);
		NullCheck(L_206);
		uint16_t L_209 = String_get_Chars_m407(L_206, ((int32_t)((int32_t)L_208-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_209) == ((int32_t)((int32_t)93))))
		{
			goto IL_0544;
		}
	}
	{
		String_t* L_210 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
		CultureInfo_t782 * L_211 = CultureInfo_get_InvariantCulture_m4210(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t* L_212 = &(__this->___port_5);
		bool L_213 = Int32_TryParse_m18112(NULL /*static, unused*/, L_210, 7, L_211, L_212, /*hidden argument*/NULL);
		if (!L_213)
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_214 = (__this->___port_5);
		if ((((int32_t)L_214) < ((int32_t)0)))
		{
			goto IL_0536;
		}
	}
	{
		int32_t L_215 = (__this->___port_5);
		if ((((int32_t)L_215) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_053c;
		}
	}

IL_0536:
	{
		return (String_t*) &_stringLiteral4558;
	}

IL_053c:
	{
		int32_t L_216 = V_1;
		V_4 = L_216;
		goto IL_0561;
	}

IL_0544:
	{
		int32_t L_217 = (__this->___port_5);
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_0561;
		}
	}
	{
		String_t* L_218 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_219 = Uri_GetDefaultPort_m17947(NULL /*static, unused*/, L_218, /*hidden argument*/NULL);
		__this->___port_5 = L_219;
	}

IL_0561:
	{
		goto IL_0583;
	}

IL_0566:
	{
		int32_t L_220 = (__this->___port_5);
		if ((!(((uint32_t)L_220) == ((uint32_t)(-1)))))
		{
			goto IL_0583;
		}
	}
	{
		String_t* L_221 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_222 = Uri_GetDefaultPort_m17947(NULL /*static, unused*/, L_221, /*hidden argument*/NULL);
		__this->___port_5 = L_222;
	}

IL_0583:
	{
		String_t* L_223 = ___uriString;
		int32_t L_224 = V_3;
		int32_t L_225 = V_4;
		int32_t L_226 = V_3;
		NullCheck(L_223);
		String_t* L_227 = String_Substring_m418(L_223, L_224, ((int32_t)((int32_t)L_225-(int32_t)L_226)), /*hidden argument*/NULL);
		___uriString = L_227;
		String_t* L_228 = ___uriString;
		__this->___host_4 = L_228;
		bool L_229 = V_6;
		if (!L_229)
		{
			goto IL_05c7;
		}
	}
	{
		uint16_t L_230 = ((int32_t)47);
		Object_t * L_231 = Box(Char_t60_il2cpp_TypeInfo_var, &L_230);
		String_t* L_232 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_233 = String_Concat_m409(NULL /*static, unused*/, L_231, L_232, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_234 = Uri_Reduce_m17944(NULL /*static, unused*/, L_233, 1, /*hidden argument*/NULL);
		__this->___path_6 = L_234;
		String_t* L_235 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_235;
		goto IL_071c;
	}

IL_05c7:
	{
		String_t* L_236 = (__this->___host_4);
		NullCheck(L_236);
		int32_t L_237 = String_get_Length_m410(L_236, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_237) == ((uint32_t)2))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_238 = (__this->___host_4);
		NullCheck(L_238);
		uint16_t L_239 = String_get_Chars_m407(L_238, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_239) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0612;
		}
	}
	{
		String_t* L_240 = (__this->___host_4);
		String_t* L_241 = (__this->___path_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_242 = String_Concat_m408(NULL /*static, unused*/, L_240, L_241, /*hidden argument*/NULL);
		__this->___path_6 = L_242;
		String_t* L_243 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_243;
		goto IL_071c;
	}

IL_0612:
	{
		bool L_244 = (__this->___isUnixFilePath_1);
		if (!L_244)
		{
			goto IL_063a;
		}
	}
	{
		String_t* L_245 = ___uriString;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_246 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral3546, L_245, /*hidden argument*/NULL);
		___uriString = L_246;
		String_t* L_247 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_247;
		goto IL_071c;
	}

IL_063a:
	{
		String_t* L_248 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_249 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_250 = String_op_Equality_m456(NULL /*static, unused*/, L_248, L_249, /*hidden argument*/NULL);
		if (!L_250)
		{
			goto IL_065b;
		}
	}
	{
		__this->___isUnc_10 = 1;
		goto IL_071c;
	}

IL_065b:
	{
		String_t* L_251 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_252 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_253 = String_op_Equality_m456(NULL /*static, unused*/, L_251, L_252, /*hidden argument*/NULL);
		if (!L_253)
		{
			goto IL_069d;
		}
	}
	{
		String_t* L_254 = (__this->___host_4);
		NullCheck(L_254);
		int32_t L_255 = String_get_Length_m410(L_254, /*hidden argument*/NULL);
		if ((((int32_t)L_255) <= ((int32_t)0)))
		{
			goto IL_0698;
		}
	}
	{
		String_t* L_256 = (__this->___host_4);
		__this->___path_6 = L_256;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_257 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___host_4 = L_257;
	}

IL_0698:
	{
		goto IL_071c;
	}

IL_069d:
	{
		String_t* L_258 = (__this->___host_4);
		NullCheck(L_258);
		int32_t L_259 = String_get_Length_m410(L_258, /*hidden argument*/NULL);
		if (L_259)
		{
			goto IL_071c;
		}
	}
	{
		String_t* L_260 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_261 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_262 = String_op_Equality_m456(NULL /*static, unused*/, L_260, L_261, /*hidden argument*/NULL);
		if (L_262)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_263 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_264 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_265 = String_op_Equality_m456(NULL /*static, unused*/, L_263, L_264, /*hidden argument*/NULL);
		if (L_265)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_266 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_267 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_268 = String_op_Equality_m456(NULL /*static, unused*/, L_266, L_267, /*hidden argument*/NULL);
		if (L_268)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_269 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_270 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_271 = String_op_Equality_m456(NULL /*static, unused*/, L_269, L_270, /*hidden argument*/NULL);
		if (L_271)
		{
			goto IL_0716;
		}
	}
	{
		String_t* L_272 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_273 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_274 = String_op_Equality_m456(NULL /*static, unused*/, L_272, L_273, /*hidden argument*/NULL);
		if (!L_274)
		{
			goto IL_071c;
		}
	}

IL_0716:
	{
		return (String_t*) &_stringLiteral4559;
	}

IL_071c:
	{
		String_t* L_275 = (__this->___host_4);
		NullCheck(L_275);
		int32_t L_276 = String_get_Length_m410(L_275, /*hidden argument*/NULL);
		if ((((int32_t)L_276) <= ((int32_t)0)))
		{
			goto IL_073d;
		}
	}
	{
		String_t* L_277 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_278 = Uri_CheckHostName_m17919(NULL /*static, unused*/, L_277, /*hidden argument*/NULL);
		G_B139_0 = ((((int32_t)L_278) == ((int32_t)0))? 1 : 0);
		goto IL_073e;
	}

IL_073d:
	{
		G_B139_0 = 0;
	}

IL_073e:
	{
		V_11 = G_B139_0;
		bool L_279 = V_11;
		if (L_279)
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_280 = (__this->___host_4);
		NullCheck(L_280);
		int32_t L_281 = String_get_Length_m410(L_280, /*hidden argument*/NULL);
		if ((((int32_t)L_281) <= ((int32_t)1)))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_282 = (__this->___host_4);
		NullCheck(L_282);
		uint16_t L_283 = String_get_Chars_m407(L_282, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_283) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_284 = (__this->___host_4);
		String_t* L_285 = (__this->___host_4);
		NullCheck(L_285);
		int32_t L_286 = String_get_Length_m410(L_285, /*hidden argument*/NULL);
		NullCheck(L_284);
		uint16_t L_287 = String_get_Chars_m407(L_284, ((int32_t)((int32_t)L_286-(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_287) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_07c1;
		}
	}
	{
		String_t* L_288 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(IPv6Address_t4384_il2cpp_TypeInfo_var);
		bool L_289 = IPv6Address_TryParse_m16738(NULL /*static, unused*/, L_288, (&V_12), /*hidden argument*/NULL);
		if (!L_289)
		{
			goto IL_07be;
		}
	}
	{
		IPv6Address_t4384 * L_290 = V_12;
		NullCheck(L_290);
		String_t* L_291 = IPv6Address_ToString_m16748(L_290, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_292 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral950, L_291, (String_t*) &_stringLiteral123, /*hidden argument*/NULL);
		__this->___host_4 = L_292;
		goto IL_07c1;
	}

IL_07be:
	{
		V_11 = 1;
	}

IL_07c1:
	{
		bool L_293 = V_11;
		if (!L_293)
		{
			goto IL_07fe;
		}
	}
	{
		UriParser_t4277 * L_294 = Uri_get_Parser_m17950(__this, /*hidden argument*/NULL);
		if (((DefaultUriParser_t4276 *)IsInst(L_294, DefaultUriParser_t4276_il2cpp_TypeInfo_var)))
		{
			goto IL_07e3;
		}
	}
	{
		UriParser_t4277 * L_295 = Uri_get_Parser_m17950(__this, /*hidden argument*/NULL);
		if (L_295)
		{
			goto IL_07fe;
		}
	}

IL_07e3:
	{
		String_t* L_296 = (__this->___host_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_297 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral4560, L_296, (String_t*) &_stringLiteral1259, /*hidden argument*/NULL);
		String_t* L_298 = Locale_GetText_m15578(NULL /*static, unused*/, L_297, /*hidden argument*/NULL);
		return L_298;
	}

IL_07fe:
	{
		V_13 = (UriFormatException_t3724 *)NULL;
		UriParser_t4277 * L_299 = Uri_get_Parser_m17950(__this, /*hidden argument*/NULL);
		if (!L_299)
		{
			goto IL_081a;
		}
	}
	{
		UriParser_t4277 * L_300 = Uri_get_Parser_m17950(__this, /*hidden argument*/NULL);
		NullCheck(L_300);
		VirtActionInvoker2< Uri_t771 *, UriFormatException_t3724 ** >::Invoke(4 /* System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&) */, L_300, __this, (&V_13));
	}

IL_081a:
	{
		UriFormatException_t3724 * L_301 = V_13;
		if (!L_301)
		{
			goto IL_0829;
		}
	}
	{
		UriFormatException_t3724 * L_302 = V_13;
		NullCheck(L_302);
		String_t* L_303 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_302);
		return L_303;
	}

IL_0829:
	{
		String_t* L_304 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_305 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_306 = String_op_Inequality_m415(NULL /*static, unused*/, L_304, L_305, /*hidden argument*/NULL);
		if (!L_306)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_307 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_308 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_309 = String_op_Inequality_m415(NULL /*static, unused*/, L_307, L_308, /*hidden argument*/NULL);
		if (!L_309)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_310 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_311 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_312 = String_op_Inequality_m415(NULL /*static, unused*/, L_310, L_311, /*hidden argument*/NULL);
		if (!L_312)
		{
			goto IL_0884;
		}
	}
	{
		String_t* L_313 = (__this->___path_6);
		String_t* L_314 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_315 = Uri_CompactEscaped_m17943(NULL /*static, unused*/, L_314, /*hidden argument*/NULL);
		String_t* L_316 = Uri_Reduce_m17944(NULL /*static, unused*/, L_313, L_315, /*hidden argument*/NULL);
		__this->___path_6 = L_316;
	}

IL_0884:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Uri::CompactEscaped(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3994_MethodInfo_var;
extern "C" bool Uri_CompactEscaped_m17943 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		Dictionary_2__ctor_m3994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_2 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_36;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3994(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m3994_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral2958, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, (String_t*) &_stringLiteral4167, 0);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, (String_t*) &_stringLiteral3982, 0);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral4539, 0);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, (String_t*) &_stringLiteral4540, 0);
		Dictionary_2_t223 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_36 = L_9;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_10 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_36;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_007a;
	}

IL_0078:
	{
		return 1;
	}

IL_007a:
	{
		return 0;
	}
}
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t712_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_Reduce_m17944 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		ArrayList_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	uint16_t V_3 = 0x0;
	uint16_t V_4 = 0x0;
	ArrayList_t712 * V_5 = {0};
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = {0};
	int32_t V_9 = 0;
	bool V_10 = false;
	String_t* V_11 = {0};
	Object_t * V_12 = {0};
	uint16_t V_13 = 0x0;
	Object_t * V_14 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m456(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_0012:
	{
		StringBuilder_t261 * L_3 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = ___compact_escaped;
		if (!L_4)
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 0;
		goto IL_00dc;
	}

IL_0025:
	{
		String_t* L_5 = ___path;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		uint16_t L_7 = String_get_Chars_m407(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		uint16_t L_8 = V_2;
		V_13 = L_8;
		uint16_t L_9 = V_13;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)37))))
		{
			goto IL_0055;
		}
	}
	{
		uint16_t L_10 = V_13;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00cb;
	}

IL_0047:
	{
		StringBuilder_t261 * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m3989(L_11, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0055:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___path;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m410(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)((int32_t)L_14-(int32_t)2)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_15 = ___path;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m407(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_17;
		String_t* L_18 = ___path;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		uint16_t L_20 = String_get_Chars_m407(L_18, ((int32_t)((int32_t)L_19+(int32_t)2)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		uint16_t L_21 = Char_ToUpper_m6223(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		uint16_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_008e;
		}
	}
	{
		uint16_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)70))))
		{
			goto IL_009f;
		}
	}

IL_008e:
	{
		uint16_t L_24 = V_3;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_00b1;
		}
	}
	{
		uint16_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_00b1;
		}
	}

IL_009f:
	{
		StringBuilder_t261 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m3989(L_26, ((int32_t)47), /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)2));
		goto IL_00b9;
	}

IL_00b1:
	{
		StringBuilder_t261 * L_28 = V_0;
		uint16_t L_29 = V_2;
		NullCheck(L_28);
		StringBuilder_Append_m3989(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		goto IL_00c6;
	}

IL_00be:
	{
		StringBuilder_t261 * L_30 = V_0;
		uint16_t L_31 = V_2;
		NullCheck(L_30);
		StringBuilder_Append_m3989(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		goto IL_00d8;
	}

IL_00cb:
	{
		StringBuilder_t261 * L_32 = V_0;
		uint16_t L_33 = V_2;
		NullCheck(L_32);
		StringBuilder_Append_m3989(L_32, L_33, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00d8:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_35 = V_1;
		String_t* L_36 = ___path;
		NullCheck(L_36);
		int32_t L_37 = String_get_Length_m410(L_36, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t261 * L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_38);
		___path = L_39;
		goto IL_0101;
	}

IL_00f5:
	{
		String_t* L_40 = ___path;
		NullCheck(L_40);
		String_t* L_41 = String_Replace_m4278(L_40, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		___path = L_41;
	}

IL_0101:
	{
		ArrayList_t712 * L_42 = (ArrayList_t712 *)il2cpp_codegen_object_new (ArrayList_t712_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4281(L_42, /*hidden argument*/NULL);
		V_5 = L_42;
		V_6 = 0;
		goto IL_01a3;
	}

IL_0110:
	{
		String_t* L_43 = ___path;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = String_IndexOf_m10261(L_43, ((int32_t)47), L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)(-1)))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_47 = ___path;
		NullCheck(L_47);
		int32_t L_48 = String_get_Length_m410(L_47, /*hidden argument*/NULL);
		V_7 = L_48;
	}

IL_012c:
	{
		String_t* L_49 = ___path;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		NullCheck(L_49);
		String_t* L_53 = String_Substring_m418(L_49, L_50, ((int32_t)((int32_t)L_51-(int32_t)L_52)), /*hidden argument*/NULL);
		V_8 = L_53;
		int32_t L_54 = V_7;
		V_6 = ((int32_t)((int32_t)L_54+(int32_t)1));
		String_t* L_55 = V_8;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m410(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_015e;
		}
	}
	{
		String_t* L_57 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m456(NULL /*static, unused*/, L_57, (String_t*) &_stringLiteral993, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0163;
		}
	}

IL_015e:
	{
		goto IL_01a3;
	}

IL_0163:
	{
		String_t* L_59 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_60 = String_op_Equality_m456(NULL /*static, unused*/, L_59, (String_t*) &_stringLiteral4544, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0199;
		}
	}
	{
		ArrayList_t712 * L_61 = V_5;
		NullCheck(L_61);
		int32_t L_62 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_61);
		V_9 = L_62;
		int32_t L_63 = V_9;
		if (L_63)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_01a3;
	}

IL_0189:
	{
		ArrayList_t712 * L_64 = V_5;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_64, ((int32_t)((int32_t)L_65-(int32_t)1)));
		goto IL_01a3;
	}

IL_0199:
	{
		ArrayList_t712 * L_66 = V_5;
		String_t* L_67 = V_8;
		NullCheck(L_66);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_66, L_67);
	}

IL_01a3:
	{
		int32_t L_68 = V_6;
		String_t* L_69 = ___path;
		NullCheck(L_69);
		int32_t L_70 = String_get_Length_m410(L_69, /*hidden argument*/NULL);
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t712 * L_71 = V_5;
		NullCheck(L_71);
		int32_t L_72 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_71);
		if (L_72)
		{
			goto IL_01c2;
		}
	}
	{
		return (String_t*) &_stringLiteral521;
	}

IL_01c2:
	{
		StringBuilder_t261 * L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_set_Length_m14734(L_73, 0, /*hidden argument*/NULL);
		String_t* L_74 = ___path;
		NullCheck(L_74);
		uint16_t L_75 = String_get_Chars_m407(L_74, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_01e0;
		}
	}
	{
		StringBuilder_t261 * L_76 = V_0;
		NullCheck(L_76);
		StringBuilder_Append_m3989(L_76, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_01e0:
	{
		V_10 = 1;
		ArrayList_t712 * L_77 = V_5;
		NullCheck(L_77);
		Object_t * L_78 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_77);
		V_12 = L_78;
	}

IL_01ec:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f1:
		{
			Object_t * L_79 = V_12;
			NullCheck(L_79);
			Object_t * L_80 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_79);
			V_11 = ((String_t*)Castclass(L_80, String_t_il2cpp_TypeInfo_var));
			bool L_81 = V_10;
			if (!L_81)
			{
				goto IL_020e;
			}
		}

IL_0206:
		{
			V_10 = 0;
			goto IL_0217;
		}

IL_020e:
		{
			StringBuilder_t261 * L_82 = V_0;
			NullCheck(L_82);
			StringBuilder_Append_m3989(L_82, ((int32_t)47), /*hidden argument*/NULL);
		}

IL_0217:
		{
			StringBuilder_t261 * L_83 = V_0;
			String_t* L_84 = V_11;
			NullCheck(L_83);
			StringBuilder_Append_m3995(L_83, L_84, /*hidden argument*/NULL);
		}

IL_0220:
		{
			Object_t * L_85 = V_12;
			NullCheck(L_85);
			bool L_86 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_85);
			if (L_86)
			{
				goto IL_01f1;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			Object_t * L_87 = V_12;
			V_14 = ((Object_t *)IsInst(L_87, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_88 = V_14;
			if (L_88)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			Object_t * L_89 = V_14;
			NullCheck(L_89);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_89);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0247:
	{
		String_t* L_90 = ___path;
		NullCheck(L_90);
		bool L_91 = String_EndsWith_m10332(L_90, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_0260;
		}
	}
	{
		StringBuilder_t261 * L_92 = V_0;
		NullCheck(L_92);
		StringBuilder_Append_m3989(L_92, ((int32_t)47), /*hidden argument*/NULL);
	}

IL_0260:
	{
		StringBuilder_t261 * L_93 = V_0;
		NullCheck(L_93);
		String_t* L_94 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_93);
		return L_94;
	}
}
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" uint16_t Uri_HexUnescapeMultiByte_m17945 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t66* V_5 = {0};
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint8_t V_10 = 0x0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		uint16_t* L_0 = ___surrogate;
		*((int16_t*)(L_0)) = (int16_t)0;
		String_t* L_1 = ___pattern;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t725 * L_2 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4217(L_2, (String_t*) &_stringLiteral3440, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		int32_t* L_3 = ___index;
		if ((((int32_t)(*((int32_t*)L_3))) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = ___index;
		String_t* L_5 = ___pattern;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m410(L_5, /*hidden argument*/NULL);
		if ((((int32_t)(*((int32_t*)L_4))) < ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentOutOfRangeException_t1490 * L_7 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_7, (String_t*) &_stringLiteral3023, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0034:
	{
		String_t* L_8 = ___pattern;
		int32_t* L_9 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_10 = Uri_IsHexEncoding_m17931(NULL /*static, unused*/, L_8, (*((int32_t*)L_9)), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_11 = ___pattern;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_13 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_13;
		NullCheck(L_11);
		uint16_t L_16 = String_get_Chars_m407(L_11, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0053:
	{
		int32_t* L_17 = ___index;
		int32_t* L_18 = ___index;
		int32_t L_19 = (*((int32_t*)L_18));
		V_13 = L_19;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = V_13;
		V_0 = L_20;
		String_t* L_21 = ___pattern;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_13 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_13;
		NullCheck(L_21);
		uint16_t L_26 = String_get_Chars_m407(L_21, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_27 = Uri_FromHex_m17928(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		String_t* L_28 = ___pattern;
		int32_t* L_29 = ___index;
		int32_t* L_30 = ___index;
		int32_t L_31 = (*((int32_t*)L_30));
		V_13 = L_31;
		*((int32_t*)(L_29)) = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_13;
		NullCheck(L_28);
		uint16_t L_33 = String_get_Chars_m407(L_28, L_32, /*hidden argument*/NULL);
		int32_t L_34 = Uri_FromHex_m17928(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		int32_t L_35 = V_1;
		V_3 = L_35;
		V_4 = 0;
		goto IL_00a1;
	}

IL_0097:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)((int32_t)L_37<<(int32_t)1));
	}

IL_00a1:
	{
		int32_t L_38 = V_3;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)8))) == ((int32_t)8)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40<<(int32_t)4))|(int32_t)L_41))));
	}

IL_00b9:
	{
		int32_t L_42 = V_4;
		V_5 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, L_42));
		V_6 = 0;
		ByteU5BU5D_t66* L_43 = V_5;
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 0)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44<<(int32_t)4))|(int32_t)L_45))));
		V_7 = 1;
		goto IL_014b;
	}

IL_00d7:
	{
		String_t* L_46 = ___pattern;
		int32_t* L_47 = ___index;
		int32_t* L_48 = ___index;
		int32_t L_49 = (*((int32_t*)L_48));
		V_13 = L_49;
		*((int32_t*)(L_47)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		int32_t L_50 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_51 = Uri_IsHexEncoding_m17931(NULL /*static, unused*/, L_46, L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_00f5;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_00f5:
	{
		String_t* L_52 = ___pattern;
		int32_t* L_53 = ___index;
		int32_t* L_54 = ___index;
		int32_t L_55 = (*((int32_t*)L_54));
		V_13 = L_55;
		*((int32_t*)(L_53)) = (int32_t)((int32_t)((int32_t)L_55+(int32_t)1));
		int32_t L_56 = V_13;
		NullCheck(L_52);
		uint16_t L_57 = String_get_Chars_m407(L_52, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_58 = Uri_FromHex_m17928(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		V_8 = L_58;
		int32_t L_59 = V_8;
		if ((((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)12)))) == ((int32_t)8)))
		{
			goto IL_0120;
		}
	}
	{
		V_6 = 1;
		goto IL_0154;
	}

IL_0120:
	{
		String_t* L_60 = ___pattern;
		int32_t* L_61 = ___index;
		int32_t* L_62 = ___index;
		int32_t L_63 = (*((int32_t*)L_62));
		V_13 = L_63;
		*((int32_t*)(L_61)) = (int32_t)((int32_t)((int32_t)L_63+(int32_t)1));
		int32_t L_64 = V_13;
		NullCheck(L_60);
		uint16_t L_65 = String_get_Chars_m407(L_60, L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_66 = Uri_FromHex_m17928(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		V_9 = L_66;
		ByteU5BU5D_t66* L_67 = V_5;
		int32_t L_68 = V_7;
		int32_t L_69 = V_8;
		int32_t L_70 = V_9;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_67, L_68)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)4))|(int32_t)L_70))));
		int32_t L_71 = V_7;
		V_7 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_72 = V_7;
		int32_t L_73 = V_4;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_00d7;
		}
	}

IL_0154:
	{
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_0166;
		}
	}
	{
		int32_t* L_75 = ___index;
		int32_t L_76 = V_0;
		*((int32_t*)(L_75)) = (int32_t)((int32_t)((int32_t)L_76+(int32_t)3));
		ByteU5BU5D_t66* L_77 = V_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 0);
		int32_t L_78 = 0;
		return (((uint16_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_78))));
	}

IL_0166:
	{
		V_10 = ((int32_t)255);
		uint8_t L_79 = V_10;
		int32_t L_80 = V_4;
		V_10 = (((uint8_t)((int32_t)((int32_t)L_79>>(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_80+(int32_t)1))&(int32_t)((int32_t)31)))))));
		ByteU5BU5D_t66* L_81 = V_5;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 0);
		int32_t L_82 = 0;
		uint8_t L_83 = V_10;
		V_11 = ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_82))&(int32_t)L_83));
		V_12 = 1;
		goto IL_01a4;
	}

IL_018b:
	{
		int32_t L_84 = V_11;
		V_11 = ((int32_t)((int32_t)L_84<<(int32_t)6));
		int32_t L_85 = V_11;
		ByteU5BU5D_t66* L_86 = V_5;
		int32_t L_87 = V_12;
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, L_87);
		int32_t L_88 = L_87;
		V_11 = ((int32_t)((int32_t)L_85|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_86, L_88))&(int32_t)((int32_t)63)))));
		int32_t L_89 = V_12;
		V_12 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_01a4:
	{
		int32_t L_90 = V_12;
		int32_t L_91 = V_4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_92 = V_11;
		if ((((int32_t)L_92) > ((int32_t)((int32_t)65535))))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_93 = V_11;
		return (((uint16_t)L_93));
	}

IL_01bd:
	{
		int32_t L_94 = V_11;
		V_11 = ((int32_t)((int32_t)L_94-(int32_t)((int32_t)65536)));
		uint16_t* L_95 = ___surrogate;
		int32_t L_96 = V_11;
		*((int16_t*)(L_95)) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_96&(int32_t)((int32_t)1023)))|(int32_t)((int32_t)56320)))));
		int32_t L_97 = V_11;
		return (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_97>>(int32_t)((int32_t)10)))|(int32_t)((int32_t)55296)))));
	}
}
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_GetSchemeDelimiter_m17946 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t4538* L_0 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		String_t* L_2 = (((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_0, L_1))->___scheme_0);
		String_t* L_3 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t4538* L_5 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		String_t* L_7 = (((UriScheme_t4537 *)(UriScheme_t4537 *)SZArrayLdElema(L_5, L_6))->___delimiter_1);
		return L_7;
	}

IL_0033:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		UriSchemeU5BU5D_t4538* L_10 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___schemes_31;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_11 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___SchemeDelimiter_20;
		return L_11;
	}
}
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern TypeInfo* UriParser_t4277_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetDefaultPort_m17947 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t4277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7720);
		s_Il2CppMethodIntialized = true;
	}
	UriParser_t4277 * V_0 = {0};
	{
		String_t* L_0 = ___scheme;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t4277_il2cpp_TypeInfo_var);
		UriParser_t4277 * L_1 = UriParser_GetParser_m17971(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		UriParser_t4277 * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (-1);
	}

IL_000f:
	{
		UriParser_t4277 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = UriParser_get_DefaultPort_m17967(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m17948 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isOpaquePart_11);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		return (String_t*) &_stringLiteral610;
	}

IL_0011:
	{
		String_t* L_1 = (__this->___scheme_3);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_2 = Uri_GetSchemeDelimiter_m17946(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3994_MethodInfo_var;
extern "C" bool Uri_IsPredefinedScheme_m17949 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		Dictionary_2__ctor_m3994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___scheme;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_2 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_37;
		if (L_2)
		{
			goto IL_0098;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3994(L_3, ((int32_t)10), /*hidden argument*/Dictionary_2__ctor_m3994_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral4167, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, (String_t*) &_stringLiteral3982, 0);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, (String_t*) &_stringLiteral2958, 0);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral4535, 0);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, (String_t*) &_stringLiteral4538, 0);
		Dictionary_2_t223 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, (String_t*) &_stringLiteral4536, 0);
		Dictionary_2_t223 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, (String_t*) &_stringLiteral4529, 0);
		Dictionary_2_t223 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral4537, 0);
		Dictionary_2_t223 * L_12 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, (String_t*) &_stringLiteral4539, 0);
		Dictionary_2_t223 * L_13 = V_1;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, (String_t*) &_stringLiteral4540, 0);
		Dictionary_2_t223 * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_37 = L_14;
	}

IL_0098:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_15 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_37;
		String_t* L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_15, L_16, (&V_2));
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00b7;
	}

IL_00b5:
	{
		return 1;
	}

IL_00b7:
	{
		return 0;
	}
}
// System.UriParser System.Uri::get_Parser()
extern TypeInfo* UriParser_t4277_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t4276_il2cpp_TypeInfo_var;
extern "C" UriParser_t4277 * Uri_get_Parser_m17950 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t4277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7720);
		DefaultUriParser_t4276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7949);
		s_Il2CppMethodIntialized = true;
	}
	{
		UriParser_t4277 * L_0 = (__this->___parser_32);
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_1 = Uri_get_Scheme_m14794(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t4277_il2cpp_TypeInfo_var);
		UriParser_t4277 * L_2 = UriParser_GetParser_m17971(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___parser_32 = L_2;
		UriParser_t4277 * L_3 = (__this->___parser_32);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		DefaultUriParser_t4276 * L_4 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16026(L_4, (String_t*) &_stringLiteral1321, /*hidden argument*/NULL);
		__this->___parser_32 = L_4;
	}

IL_0037:
	{
		UriParser_t4277 * L_5 = (__this->___parser_32);
		return L_5;
	}
}
// System.Boolean System.Uri::NeedToEscapeDataChar(System.Char)
extern "C" bool Uri_NeedToEscapeDataChar_m17951 (Object_t * __this /* static, unused */, uint16_t ___b, const MethodInfo* method)
{
	int32_t G_B16_0 = 0;
	{
		uint16_t L_0 = ___b;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)65))))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = ___b;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0077;
		}
	}

IL_0010:
	{
		uint16_t L_2 = ___b;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)97))))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = ___b;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0077;
		}
	}

IL_0020:
	{
		uint16_t L_4 = ___b;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_5 = ___b;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0077;
		}
	}

IL_0030:
	{
		uint16_t L_6 = ___b;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)95))))
		{
			goto IL_0077;
		}
	}
	{
		uint16_t L_7 = ___b;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)126))))
		{
			goto IL_0077;
		}
	}
	{
		uint16_t L_8 = ___b;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)33))))
		{
			goto IL_0077;
		}
	}
	{
		uint16_t L_9 = ___b;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)39))))
		{
			goto IL_0077;
		}
	}
	{
		uint16_t L_10 = ___b;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)40))))
		{
			goto IL_0077;
		}
	}
	{
		uint16_t L_11 = ___b;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)41))))
		{
			goto IL_0077;
		}
	}
	{
		uint16_t L_12 = ___b;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)42))))
		{
			goto IL_0077;
		}
	}
	{
		uint16_t L_13 = ___b;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)45))))
		{
			goto IL_0077;
		}
	}
	{
		uint16_t L_14 = ___b;
		G_B16_0 = ((((int32_t)L_14) == ((int32_t)((int32_t)46)))? 1 : 0);
		goto IL_0078;
	}

IL_0077:
	{
		G_B16_0 = 1;
	}

IL_0078:
	{
		return ((((int32_t)G_B16_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.String System.Uri::EscapeDataString(System.String)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t3724_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_EscapeDataString_m4090 (Object_t * __this /* static, unused */, String_t* ___stringToEscape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		UriFormatException_t3724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6115);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	StringBuilder_t261 * V_5 = {0};
	ByteU5BU5D_t66* V_6 = {0};
	uint8_t V_7 = 0x0;
	ByteU5BU5D_t66* V_8 = {0};
	int32_t V_9 = 0;
	{
		String_t* L_0 = ___stringToEscape;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral4561, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___stringToEscape;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)32766))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_4 = Locale_GetText_m15578(NULL /*static, unused*/, (String_t*) &_stringLiteral4562, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		UriFormatException_t3724 * L_6 = (UriFormatException_t3724 *)il2cpp_codegen_object_new (UriFormatException_t3724_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m17959(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0033:
	{
		V_1 = 0;
		String_t* L_7 = ___stringToEscape;
		V_3 = L_7;
		V_4 = 0;
		goto IL_0060;
	}

IL_003f:
	{
		String_t* L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m407(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_12 = Uri_NeedToEscapeDataChar_m17951(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = 1;
		goto IL_006d;
	}

IL_005a:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_14 = V_4;
		String_t* L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m410(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_003f;
		}
	}

IL_006d:
	{
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_18 = ___stringToEscape;
		return L_18;
	}

IL_0075:
	{
		StringBuilder_t261 * L_19 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_19, /*hidden argument*/NULL);
		V_5 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_t753 * L_20 = Encoding_get_UTF8_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_21 = ___stringToEscape;
		NullCheck(L_20);
		ByteU5BU5D_t66* L_22 = (ByteU5BU5D_t66*)VirtFuncInvoker1< ByteU5BU5D_t66*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_20, L_21);
		V_6 = L_22;
		ByteU5BU5D_t66* L_23 = V_6;
		V_8 = L_23;
		V_9 = 0;
		goto IL_00cf;
	}

IL_0095:
	{
		ByteU5BU5D_t66* L_24 = V_8;
		int32_t L_25 = V_9;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = L_25;
		V_7 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_26));
		uint8_t L_27 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_28 = Uri_NeedToEscapeDataChar_m17951(NULL /*static, unused*/, (((uint16_t)L_27)), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00be;
		}
	}
	{
		StringBuilder_t261 * L_29 = V_5;
		uint8_t L_30 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_31 = Uri_HexEscape_m17929(NULL /*static, unused*/, (((uint16_t)L_30)), /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m3995(L_29, L_31, /*hidden argument*/NULL);
		goto IL_00c9;
	}

IL_00be:
	{
		StringBuilder_t261 * L_32 = V_5;
		uint8_t L_33 = V_7;
		NullCheck(L_32);
		StringBuilder_Append_m3989(L_32, (((uint16_t)L_33)), /*hidden argument*/NULL);
	}

IL_00c9:
	{
		int32_t L_34 = V_9;
		V_9 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00cf:
	{
		int32_t L_35 = V_9;
		ByteU5BU5D_t66* L_36 = V_8;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)(((Array_t *)L_36)->max_length))))))
		{
			goto IL_0095;
		}
	}
	{
		StringBuilder_t261 * L_37 = V_5;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_37);
		return L_38;
	}
}
// System.Boolean System.Uri::NeedToEscapeUriChar(System.Char)
extern "C" bool Uri_NeedToEscapeUriChar_m17952 (Object_t * __this /* static, unused */, uint16_t ___b, const MethodInfo* method)
{
	int32_t G_B15_0 = 0;
	{
		uint16_t L_0 = ___b;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)65))))
		{
			goto IL_0010;
		}
	}
	{
		uint16_t L_1 = ___b;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)90))))
		{
			goto IL_006f;
		}
	}

IL_0010:
	{
		uint16_t L_2 = ___b;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)97))))
		{
			goto IL_0020;
		}
	}
	{
		uint16_t L_3 = ___b;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)122))))
		{
			goto IL_006f;
		}
	}

IL_0020:
	{
		uint16_t L_4 = ___b;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)38))))
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_5 = ___b;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)59))))
		{
			goto IL_006f;
		}
	}

IL_0030:
	{
		uint16_t L_6 = ___b;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)33))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_7 = ___b;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)35))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_8 = ___b;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)36))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_9 = ___b;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)61))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_10 = ___b;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)63))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_11 = ___b;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)64))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_12 = ___b;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)95))))
		{
			goto IL_006f;
		}
	}
	{
		uint16_t L_13 = ___b;
		G_B15_0 = ((((int32_t)L_13) == ((int32_t)((int32_t)126)))? 1 : 0);
		goto IL_0070;
	}

IL_006f:
	{
		G_B15_0 = 1;
	}

IL_0070:
	{
		return ((((int32_t)G_B15_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.String System.Uri::EscapeUriString(System.String)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t3724_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_EscapeUriString_m17953 (Object_t * __this /* static, unused */, String_t* ___stringToEscape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		UriFormatException_t3724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6115);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	StringBuilder_t261 * V_5 = {0};
	ByteU5BU5D_t66* V_6 = {0};
	uint8_t V_7 = 0x0;
	ByteU5BU5D_t66* V_8 = {0};
	int32_t V_9 = 0;
	{
		String_t* L_0 = ___stringToEscape;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral4561, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___stringToEscape;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)32766))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_4 = Locale_GetText_m15578(NULL /*static, unused*/, (String_t*) &_stringLiteral4562, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		UriFormatException_t3724 * L_6 = (UriFormatException_t3724 *)il2cpp_codegen_object_new (UriFormatException_t3724_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m17959(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0033:
	{
		V_1 = 0;
		String_t* L_7 = ___stringToEscape;
		V_3 = L_7;
		V_4 = 0;
		goto IL_0060;
	}

IL_003f:
	{
		String_t* L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		uint16_t L_10 = String_get_Chars_m407(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		uint16_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_12 = Uri_NeedToEscapeUriChar_m17952(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = 1;
		goto IL_006d;
	}

IL_005a:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_14 = V_4;
		String_t* L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m410(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_003f;
		}
	}

IL_006d:
	{
		bool L_17 = V_1;
		if (L_17)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_18 = ___stringToEscape;
		return L_18;
	}

IL_0075:
	{
		StringBuilder_t261 * L_19 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_19, /*hidden argument*/NULL);
		V_5 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_t753 * L_20 = Encoding_get_UTF8_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_21 = ___stringToEscape;
		NullCheck(L_20);
		ByteU5BU5D_t66* L_22 = (ByteU5BU5D_t66*)VirtFuncInvoker1< ByteU5BU5D_t66*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_20, L_21);
		V_6 = L_22;
		ByteU5BU5D_t66* L_23 = V_6;
		V_8 = L_23;
		V_9 = 0;
		goto IL_00cf;
	}

IL_0095:
	{
		ByteU5BU5D_t66* L_24 = V_8;
		int32_t L_25 = V_9;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = L_25;
		V_7 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_24, L_26));
		uint8_t L_27 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_28 = Uri_NeedToEscapeUriChar_m17952(NULL /*static, unused*/, (((uint16_t)L_27)), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00be;
		}
	}
	{
		StringBuilder_t261 * L_29 = V_5;
		uint8_t L_30 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_31 = Uri_HexEscape_m17929(NULL /*static, unused*/, (((uint16_t)L_30)), /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m3995(L_29, L_31, /*hidden argument*/NULL);
		goto IL_00c9;
	}

IL_00be:
	{
		StringBuilder_t261 * L_32 = V_5;
		uint8_t L_33 = V_7;
		NullCheck(L_32);
		StringBuilder_Append_m3989(L_32, (((uint16_t)L_33)), /*hidden argument*/NULL);
	}

IL_00c9:
	{
		int32_t L_34 = V_9;
		V_9 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00cf:
	{
		int32_t L_35 = V_9;
		ByteU5BU5D_t66* L_36 = V_8;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)(((Array_t *)L_36)->max_length))))))
		{
			goto IL_0095;
		}
	}
	{
		StringBuilder_t261 * L_37 = V_5;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_37);
		return L_38;
	}
}
// System.String System.Uri::UnescapeDataString(System.String)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t65_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" String_t* Uri_UnescapeDataString_m7635 (Object_t * __this /* static, unused */, String_t* ___stringToUnescape, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		MemoryStream_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	int64_t V_1 = 0;
	MemoryStream_t65 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___stringToUnescape;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral4563, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___stringToUnescape;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m3991(L_2, ((int32_t)37), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_4 = ___stringToUnescape;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m3991(L_4, ((int32_t)43), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_6 = ___stringToUnescape;
		return L_6;
	}

IL_002f:
	{
		StringBuilder_t261 * L_7 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3988(L_7, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8 = ___stringToUnescape;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m410(L_8, /*hidden argument*/NULL);
		V_1 = (((int64_t)L_9));
		MemoryStream_t65 * L_10 = (MemoryStream_t65 *)il2cpp_codegen_object_new (MemoryStream_t65_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m425(L_10, /*hidden argument*/NULL);
		V_2 = L_10;
		V_4 = 0;
		goto IL_015e;
	}

IL_004b:
	{
		String_t* L_11 = ___stringToUnescape;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		uint16_t L_13 = String_get_Chars_m407(L_11, L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_14 = V_4;
		int64_t L_15 = V_1;
		if ((((int64_t)(((int64_t)((int32_t)((int32_t)L_14+(int32_t)2))))) >= ((int64_t)L_15)))
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_16 = ___stringToUnescape;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		uint16_t L_18 = String_get_Chars_m407(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)37))))
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_19 = ___stringToUnescape;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		uint16_t L_21 = String_get_Chars_m407(L_19, ((int32_t)((int32_t)L_20+(int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_22 = V_4;
		int64_t L_23 = V_1;
		if ((((int64_t)(((int64_t)((int32_t)((int32_t)L_22+(int32_t)5))))) >= ((int64_t)L_23)))
		{
			goto IL_00ee;
		}
	}
	{
		MemoryStream_t65 * L_24 = V_2;
		NullCheck(L_24);
		int64_t L_25 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_24);
		if ((((int64_t)L_25) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_00b9;
		}
	}
	{
		StringBuilder_t261 * L_26 = V_0;
		MemoryStream_t65 * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_t753 * L_28 = Encoding_get_UTF8_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		CharU5BU5D_t711* L_29 = Uri_GetChars_m17956(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m18173(L_26, L_29, /*hidden argument*/NULL);
		MemoryStream_t65 * L_30 = V_2;
		NullCheck(L_30);
		VirtActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_30, (((int64_t)0)));
	}

IL_00b9:
	{
		String_t* L_31 = ___stringToUnescape;
		int32_t L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_33 = Uri_GetChar_m17955(NULL /*static, unused*/, L_31, ((int32_t)((int32_t)L_32+(int32_t)2)), 4, /*hidden argument*/NULL);
		V_3 = L_33;
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_00e0;
		}
	}
	{
		StringBuilder_t261 * L_35 = V_0;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		StringBuilder_Append_m3989(L_35, (((uint16_t)L_36)), /*hidden argument*/NULL);
		int32_t L_37 = V_4;
		V_4 = ((int32_t)((int32_t)L_37+(int32_t)5));
		goto IL_00e9;
	}

IL_00e0:
	{
		StringBuilder_t261 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m3989(L_38, ((int32_t)37), /*hidden argument*/NULL);
	}

IL_00e9:
	{
		goto IL_011d;
	}

IL_00ee:
	{
		String_t* L_39 = ___stringToUnescape;
		int32_t L_40 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_41 = Uri_GetChar_m17955(NULL /*static, unused*/, L_39, ((int32_t)((int32_t)L_40+(int32_t)1)), 2, /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		V_3 = L_42;
		if ((((int32_t)L_42) == ((int32_t)(-1))))
		{
			goto IL_0114;
		}
	}
	{
		MemoryStream_t65 * L_43 = V_2;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		VirtActionInvoker1< uint8_t >::Invoke(23 /* System.Void System.IO.MemoryStream::WriteByte(System.Byte) */, L_43, (((uint8_t)L_44)));
		int32_t L_45 = V_4;
		V_4 = ((int32_t)((int32_t)L_45+(int32_t)2));
		goto IL_011d;
	}

IL_0114:
	{
		StringBuilder_t261 * L_46 = V_0;
		NullCheck(L_46);
		StringBuilder_Append_m3989(L_46, ((int32_t)37), /*hidden argument*/NULL);
	}

IL_011d:
	{
		goto IL_0158;
	}

IL_0122:
	{
		MemoryStream_t65 * L_47 = V_2;
		NullCheck(L_47);
		int64_t L_48 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_47);
		if ((((int64_t)L_48) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0149;
		}
	}
	{
		StringBuilder_t261 * L_49 = V_0;
		MemoryStream_t65 * L_50 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_t753 * L_51 = Encoding_get_UTF8_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		CharU5BU5D_t711* L_52 = Uri_GetChars_m17956(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_49);
		StringBuilder_Append_m18173(L_49, L_52, /*hidden argument*/NULL);
		MemoryStream_t65 * L_53 = V_2;
		NullCheck(L_53);
		VirtActionInvoker1< int64_t >::Invoke(21 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_53, (((int64_t)0)));
	}

IL_0149:
	{
		StringBuilder_t261 * L_54 = V_0;
		String_t* L_55 = ___stringToUnescape;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		uint16_t L_57 = String_get_Chars_m407(L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		StringBuilder_Append_m3989(L_54, L_57, /*hidden argument*/NULL);
	}

IL_0158:
	{
		int32_t L_58 = V_4;
		V_4 = ((int32_t)((int32_t)L_58+(int32_t)1));
	}

IL_015e:
	{
		int32_t L_59 = V_4;
		int64_t L_60 = V_1;
		if ((((int64_t)(((int64_t)L_59))) < ((int64_t)L_60)))
		{
			goto IL_004b;
		}
	}
	{
		MemoryStream_t65 * L_61 = V_2;
		NullCheck(L_61);
		int64_t L_62 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_61);
		if ((((int64_t)L_62) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0186;
		}
	}
	{
		StringBuilder_t261 * L_63 = V_0;
		MemoryStream_t65 * L_64 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_t753 * L_65 = Encoding_get_UTF8_m3985(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		CharU5BU5D_t711* L_66 = Uri_GetChars_m17956(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		StringBuilder_Append_m18173(L_63, L_66, /*hidden argument*/NULL);
	}

IL_0186:
	{
		V_2 = (MemoryStream_t65 *)NULL;
		StringBuilder_t261 * L_67 = V_0;
		NullCheck(L_67);
		String_t* L_68 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_67);
		return L_68;
	}
}
// System.Int32 System.Uri::GetInt(System.Byte)
extern "C" int32_t Uri_GetInt_m17954 (Object_t * __this /* static, unused */, uint8_t ___b, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		uint8_t L_0 = ___b;
		V_0 = (((uint16_t)L_0));
		uint16_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)48))))
		{
			goto IL_0018;
		}
	}
	{
		uint16_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)57))))
		{
			goto IL_0018;
		}
	}
	{
		uint16_t L_3 = V_0;
		return ((int32_t)((int32_t)L_3-(int32_t)((int32_t)48)));
	}

IL_0018:
	{
		uint16_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)102))))
		{
			goto IL_0030;
		}
	}
	{
		uint16_t L_6 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)((int32_t)97)))+(int32_t)((int32_t)10)));
	}

IL_0030:
	{
		uint16_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)65))))
		{
			goto IL_0048;
		}
	}
	{
		uint16_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)70))))
		{
			goto IL_0048;
		}
	}
	{
		uint16_t L_9 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_9-(int32_t)((int32_t)65)))+(int32_t)((int32_t)10)));
	}

IL_0048:
	{
		return (-1);
	}
}
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" int32_t Uri_GetChar_m17955 (Object_t * __this /* static, unused */, String_t* ___str, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___length;
		int32_t L_1 = ___offset;
		V_1 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___offset;
		V_2 = L_2;
		goto IL_003d;
	}

IL_000d:
	{
		String_t* L_3 = ___str;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		uint16_t L_5 = String_get_Chars_m407(L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		uint16_t L_6 = V_3;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)127))))
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}

IL_001f:
	{
		uint16_t L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		int32_t L_8 = Uri_GetInt_m17954(NULL /*static, unused*/, (((uint8_t)L_7)), /*hidden argument*/NULL);
		V_4 = L_8;
		int32_t L_9 = V_4;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = V_4;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_10<<(int32_t)4))+(int32_t)L_11));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C" CharU5BU5D_t711* Uri_GetChars_m17956 (Object_t * __this /* static, unused */, MemoryStream_t65 * ___b, Encoding_t753 * ___e, const MethodInfo* method)
{
	{
		Encoding_t753 * L_0 = ___e;
		MemoryStream_t65 * L_1 = ___b;
		NullCheck(L_1);
		ByteU5BU5D_t66* L_2 = (ByteU5BU5D_t66*)VirtFuncInvoker0< ByteU5BU5D_t66* >::Invoke(29 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_1);
		MemoryStream_t65 * L_3 = ___b;
		NullCheck(L_3);
		int64_t L_4 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_3);
		NullCheck(L_0);
		CharU5BU5D_t711* L_5 = (CharU5BU5D_t711*)VirtFuncInvoker3< CharU5BU5D_t711*, ByteU5BU5D_t66*, int32_t, int32_t >::Invoke(15 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32) */, L_0, L_2, 0, (((int32_t)L_4)));
		return L_5;
	}
}
// System.Void System.Uri::EnsureAbsoluteUri()
extern TypeInfo* InvalidOperationException_t1446_il2cpp_TypeInfo_var;
extern "C" void Uri_EnsureAbsoluteUri_m17957 (Uri_t771 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2510);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Uri_get_IsAbsoluteUri_m14793(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t1446 * L_1 = (InvalidOperationException_t1446 *)il2cpp_codegen_object_new (InvalidOperationException_t1446_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7482(L_1, (String_t*) &_stringLiteral4564, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" bool Uri_op_Equality_m14784 (Object_t * __this /* static, unused */, Uri_t771 * ___u1, Uri_t771 * ___u2, const MethodInfo* method)
{
	{
		Uri_t771 * L_0 = ___u1;
		Uri_t771 * L_1 = ___u2;
		bool L_2 = Object_Equals_m7533(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" bool Uri_op_Inequality_m14736 (Object_t * __this /* static, unused */, Uri_t771 * ___u1, Uri_t771 * ___u2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t771 * L_0 = ___u1;
		Uri_t771 * L_1 = ___u2;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_2 = Uri_op_Equality_m14784(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"


// System.Void System.UriFormatException::.ctor()
extern "C" void UriFormatException__ctor_m17958 (UriFormatException_t3724 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m15578(NULL /*static, unused*/, (String_t*) &_stringLiteral4565, /*hidden argument*/NULL);
		FormatException__ctor_m10277(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" void UriFormatException__ctor_m17959 (UriFormatException_t3724 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		FormatException__ctor_m10277(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UriFormatException__ctor_m17960 (UriFormatException_t3724 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___info;
		StreamingContext_t2937  L_1 = ___context;
		FormatException__ctor_m18093(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m17961 (UriFormatException_t3724 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___info;
		StreamingContext_t2937  L_1 = ___context;
		Exception_GetObjectData_m8541(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void System.UriParser::.ctor()
extern "C" void UriParser__ctor_m17962 (UriParser_t4277 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UriParser::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriParser_t4277_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t801_il2cpp_TypeInfo_var;
extern "C" void UriParser__cctor_m17963 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		UriParser_t4277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7720);
		Regex_t801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_0, /*hidden argument*/NULL);
		((UriParser_t4277_StaticFields*)UriParser_t4277_il2cpp_TypeInfo_var->static_fields)->___lock_object_0 = L_0;
		Regex_t801 * L_1 = (Regex_t801 *)il2cpp_codegen_object_new (Regex_t801_il2cpp_TypeInfo_var);
		Regex__ctor_m7516(L_1, (String_t*) &_stringLiteral4566, 8, /*hidden argument*/NULL);
		((UriParser_t4277_StaticFields*)UriParser_t4277_il2cpp_TypeInfo_var->static_fields)->___uri_regex_4 = L_1;
		Regex_t801 * L_2 = (Regex_t801 *)il2cpp_codegen_object_new (Regex_t801_il2cpp_TypeInfo_var);
		Regex__ctor_m7515(L_2, (String_t*) &_stringLiteral4567, /*hidden argument*/NULL);
		((UriParser_t4277_StaticFields*)UriParser_t4277_il2cpp_TypeInfo_var->static_fields)->___auth_regex_5 = L_2;
		return;
	}
}
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UriFormatException_t3724_il2cpp_TypeInfo_var;
extern "C" void UriParser_InitializeAndValidate_m17964 (UriParser_t4277 * __this, Uri_t771 * ___uri, UriFormatException_t3724 ** ___parsingError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		UriFormatException_t3724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6115);
		s_Il2CppMethodIntialized = true;
	}
	{
		Uri_t771 * L_0 = ___uri;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m14794(L_0, /*hidden argument*/NULL);
		String_t* L_2 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = (__this->___scheme_name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m415(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral1321, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		UriFormatException_t3724 ** L_6 = ___parsingError;
		UriFormatException_t3724 * L_7 = (UriFormatException_t3724 *)il2cpp_codegen_object_new (UriFormatException_t3724_il2cpp_TypeInfo_var);
		UriFormatException__ctor_m17959(L_7, (String_t*) &_stringLiteral4568, /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_7;
		goto IL_003f;
	}

IL_003c:
	{
		UriFormatException_t3724 ** L_8 = ___parsingError;
		*((Object_t **)(L_8)) = (Object_t *)NULL;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C" void UriParser_OnRegister_m17965 (UriParser_t4277 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" void UriParser_set_SchemeName_m17966 (UriParser_t4277 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___scheme_name_2 = L_0;
		return;
	}
}
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" int32_t UriParser_get_DefaultPort_m17967 (UriParser_t4277 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___default_port_3);
		return L_0;
	}
}
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" void UriParser_set_DefaultPort_m17968 (UriParser_t4277 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___default_port_3 = L_0;
		return;
	}
}
// System.Void System.UriParser::CreateDefaults()
extern TypeInfo* UriParser_t4277_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t710_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t4276_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" void UriParser_CreateDefaults_m17969 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t4277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7720);
		Hashtable_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		DefaultUriParser_t4276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7949);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t710 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t4277_il2cpp_TypeInfo_var);
		Hashtable_t710 * L_0 = ((UriParser_t4277_StaticFields*)UriParser_t4277_il2cpp_TypeInfo_var->static_fields)->___table_1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Hashtable_t710 * L_1 = (Hashtable_t710 *)il2cpp_codegen_object_new (Hashtable_t710_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4280(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t710 * L_2 = V_0;
		DefaultUriParser_t4276 * L_3 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFile_21;
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t4277_il2cpp_TypeInfo_var);
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_2, L_3, L_4, (-1), /*hidden argument*/NULL);
		Hashtable_t710 * L_5 = V_0;
		DefaultUriParser_t4276 * L_6 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_6, /*hidden argument*/NULL);
		String_t* L_7 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeFtp_22;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_5, L_6, L_7, ((int32_t)21), /*hidden argument*/NULL);
		Hashtable_t710 * L_8 = V_0;
		DefaultUriParser_t4276 * L_9 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_9, /*hidden argument*/NULL);
		String_t* L_10 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeGopher_23;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_8, L_9, L_10, ((int32_t)70), /*hidden argument*/NULL);
		Hashtable_t710 * L_11 = V_0;
		DefaultUriParser_t4276 * L_12 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_12, /*hidden argument*/NULL);
		String_t* L_13 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttp_24;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_11, L_12, L_13, ((int32_t)80), /*hidden argument*/NULL);
		Hashtable_t710 * L_14 = V_0;
		DefaultUriParser_t4276 * L_15 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_15, /*hidden argument*/NULL);
		String_t* L_16 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeHttps_25;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_14, L_15, L_16, ((int32_t)443), /*hidden argument*/NULL);
		Hashtable_t710 * L_17 = V_0;
		DefaultUriParser_t4276 * L_18 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_18, /*hidden argument*/NULL);
		String_t* L_19 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeMailto_26;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_17, L_18, L_19, ((int32_t)25), /*hidden argument*/NULL);
		Hashtable_t710 * L_20 = V_0;
		DefaultUriParser_t4276 * L_21 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_21, /*hidden argument*/NULL);
		String_t* L_22 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetPipe_29;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_20, L_21, L_22, (-1), /*hidden argument*/NULL);
		Hashtable_t710 * L_23 = V_0;
		DefaultUriParser_t4276 * L_24 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_24, /*hidden argument*/NULL);
		String_t* L_25 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNetTcp_30;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_23, L_24, L_25, (-1), /*hidden argument*/NULL);
		Hashtable_t710 * L_26 = V_0;
		DefaultUriParser_t4276 * L_27 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_27, /*hidden argument*/NULL);
		String_t* L_28 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNews_27;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_26, L_27, L_28, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t710 * L_29 = V_0;
		DefaultUriParser_t4276 * L_30 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ((Uri_t771_StaticFields*)Uri_t771_il2cpp_TypeInfo_var->static_fields)->___UriSchemeNntp_28;
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_29, L_30, L_31, ((int32_t)119), /*hidden argument*/NULL);
		Hashtable_t710 * L_32 = V_0;
		DefaultUriParser_t4276 * L_33 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_33, /*hidden argument*/NULL);
		UriParser_InternalRegister_m17970(NULL /*static, unused*/, L_32, L_33, (String_t*) &_stringLiteral4569, ((int32_t)389), /*hidden argument*/NULL);
		Object_t * L_34 = ((UriParser_t4277_StaticFields*)UriParser_t4277_il2cpp_TypeInfo_var->static_fields)->___lock_object_0;
		V_1 = L_34;
		Object_t * L_35 = V_1;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_00e6:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t4277_il2cpp_TypeInfo_var);
			Hashtable_t710 * L_36 = ((UriParser_t4277_StaticFields*)UriParser_t4277_il2cpp_TypeInfo_var->static_fields)->___table_1;
			if (L_36)
			{
				goto IL_00fb;
			}
		}

IL_00f0:
		{
			Hashtable_t710 * L_37 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(UriParser_t4277_il2cpp_TypeInfo_var);
			((UriParser_t4277_StaticFields*)UriParser_t4277_il2cpp_TypeInfo_var->static_fields)->___table_1 = L_37;
			goto IL_00fd;
		}

IL_00fb:
		{
			V_0 = (Hashtable_t710 *)NULL;
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_0102);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0102;
	}

FINALLY_0102:
	{ // begin finally (depth: 1)
		Object_t * L_38 = V_1;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0109:
	{
		return;
	}
}
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern TypeInfo* GenericUriParser_t4291_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultUriParser_t4276_il2cpp_TypeInfo_var;
extern "C" void UriParser_InternalRegister_m17970 (Object_t * __this /* static, unused */, Hashtable_t710 * ___table, UriParser_t4277 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericUriParser_t4291_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7950);
		DefaultUriParser_t4276_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7949);
		s_Il2CppMethodIntialized = true;
	}
	DefaultUriParser_t4276 * V_0 = {0};
	{
		UriParser_t4277 * L_0 = ___uriParser;
		String_t* L_1 = ___schemeName;
		NullCheck(L_0);
		UriParser_set_SchemeName_m17966(L_0, L_1, /*hidden argument*/NULL);
		UriParser_t4277 * L_2 = ___uriParser;
		int32_t L_3 = ___defaultPort;
		NullCheck(L_2);
		UriParser_set_DefaultPort_m17968(L_2, L_3, /*hidden argument*/NULL);
		UriParser_t4277 * L_4 = ___uriParser;
		if (!((GenericUriParser_t4291 *)IsInst(L_4, GenericUriParser_t4291_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		Hashtable_t710 * L_5 = ___table;
		String_t* L_6 = ___schemeName;
		UriParser_t4277 * L_7 = ___uriParser;
		NullCheck(L_5);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
		goto IL_0042;
	}

IL_0026:
	{
		DefaultUriParser_t4276 * L_8 = (DefaultUriParser_t4276 *)il2cpp_codegen_object_new (DefaultUriParser_t4276_il2cpp_TypeInfo_var);
		DefaultUriParser__ctor_m16025(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		DefaultUriParser_t4276 * L_9 = V_0;
		String_t* L_10 = ___schemeName;
		NullCheck(L_9);
		UriParser_set_SchemeName_m17966(L_9, L_10, /*hidden argument*/NULL);
		DefaultUriParser_t4276 * L_11 = V_0;
		int32_t L_12 = ___defaultPort;
		NullCheck(L_11);
		UriParser_set_DefaultPort_m17968(L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t710 * L_13 = ___table;
		String_t* L_14 = ___schemeName;
		DefaultUriParser_t4276 * L_15 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_13, L_14, L_15);
	}

IL_0042:
	{
		UriParser_t4277 * L_16 = ___uriParser;
		String_t* L_17 = ___schemeName;
		int32_t L_18 = ___defaultPort;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(5 /* System.Void System.UriParser::OnRegister(System.String,System.Int32) */, L_16, L_17, L_18);
		return;
	}
}
// System.UriParser System.UriParser::GetParser(System.String)
extern TypeInfo* UriParser_t4277_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t782_il2cpp_TypeInfo_var;
extern "C" UriParser_t4277 * UriParser_GetParser_m17971 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UriParser_t4277_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7720);
		CultureInfo_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___schemeName;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (UriParser_t4277 *)NULL;
	}

IL_0008:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UriParser_t4277_il2cpp_TypeInfo_var);
		UriParser_CreateDefaults_m17969(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___schemeName;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
		CultureInfo_t782 * L_2 = CultureInfo_get_InvariantCulture_m4210(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_3 = String_ToLower_m14787(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Hashtable_t710 * L_4 = ((UriParser_t4277_StaticFields*)UriParser_t4277_il2cpp_TypeInfo_var->static_fields)->___table_1;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
		return ((UriParser_t4277 *)Castclass(L_6, UriParser_t4277_il2cpp_TypeInfo_var));
	}
}
#ifndef _MSC_VER
#else
#endif
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"



// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ComponentModel.Design.Serialization.InstanceDescriptor
#include "System_System_ComponentModel_Design_Serialization_InstanceDe.h"
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverter.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverterMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ComponentModel.Design.Serialization.InstanceDescriptor
#include "System_System_ComponentModel_Design_Serialization_InstanceDeMethodDeclarations.h"


// System.Void System.UriTypeConverter::.ctor()
extern "C" void UriTypeConverter__ctor_m17972 (UriTypeConverter_t4542 * __this, const MethodInfo* method)
{
	{
		TypeConverter__ctor_m15953(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.UriTypeConverter::CanConvert(System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Uri_t771_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t4237_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool UriTypeConverter_CanConvert_m17973 (UriTypeConverter_t4542 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Uri_t771_0_0_0_var = il2cpp_codegen_type_from_index(345);
		InstanceDescriptor_t4237_0_0_0_var = il2cpp_codegen_type_from_index(7658);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(Uri_t771_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		Type_t * L_4 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t4237_0_0_0_var), /*hidden argument*/NULL);
		return ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5))? 1 : 0);
	}
}
// System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern "C" bool UriTypeConverter_CanConvertFrom_m17974 (UriTypeConverter_t4542 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___sourceType;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral4570, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Type_t * L_2 = ___sourceType;
		bool L_3 = UriTypeConverter_CanConvert_m17973(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool UriTypeConverter_CanConvertTo_m17975 (UriTypeConverter_t4542 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___destinationType;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Type_t * L_1 = ___destinationType;
		bool L_2 = UriTypeConverter_CanConvert_m17973(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object System.UriTypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InstanceDescriptor_t4237_il2cpp_TypeInfo_var;
extern "C" Object_t * UriTypeConverter_ConvertFrom_m17976 (UriTypeConverter_t4542 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		InstanceDescriptor_t4237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7658);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	InstanceDescriptor_t4237 * V_1 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral956, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___context;
		Object_t * L_3 = ___value;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m4208(L_3, /*hidden argument*/NULL);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Type_t * >::Invoke(4 /* System.Boolean System.UriTypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_2, L_4);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_6 = Locale_GetText_m15578(NULL /*static, unused*/, (String_t*) &_stringLiteral4571, /*hidden argument*/NULL);
		NotSupportedException_t56 * L_7 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11464(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0033:
	{
		Object_t * L_8 = ___value;
		if (!((Uri_t771 *)IsInst(L_8, Uri_t771_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		Object_t * L_9 = ___value;
		return L_9;
	}

IL_0040:
	{
		Object_t * L_10 = ___value;
		V_0 = ((String_t*)IsInst(L_10, String_t_il2cpp_TypeInfo_var));
		String_t* L_11 = V_0;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_12 = V_0;
		Uri_t771 * L_13 = (Uri_t771 *)il2cpp_codegen_object_new (Uri_t771_il2cpp_TypeInfo_var);
		Uri__ctor_m7485(L_13, L_12, 0, /*hidden argument*/NULL);
		return L_13;
	}

IL_0055:
	{
		Object_t * L_14 = ___value;
		V_1 = ((InstanceDescriptor_t4237 *)IsInst(L_14, InstanceDescriptor_t4237_il2cpp_TypeInfo_var));
		InstanceDescriptor_t4237 * L_15 = V_1;
		if (!L_15)
		{
			goto IL_0069;
		}
	}
	{
		InstanceDescriptor_t4237 * L_16 = V_1;
		NullCheck(L_16);
		Object_t * L_17 = InstanceDescriptor_Invoke_m15800(L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0069:
	{
		Object_t * L_18 = ___context;
		CultureInfo_t782 * L_19 = ___culture;
		Object_t * L_20 = ___value;
		Object_t * L_21 = TypeConverter_ConvertFrom_m15956(__this, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Object System.UriTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Uri_t771_0_0_0_var;
extern const Il2CppType* InstanceDescriptor_t4237_0_0_0_var;
extern const Il2CppType* UriKind_t4540_0_0_0_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1220_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t696_il2cpp_TypeInfo_var;
extern TypeInfo* UriKind_t4540_il2cpp_TypeInfo_var;
extern TypeInfo* InstanceDescriptor_t4237_il2cpp_TypeInfo_var;
extern "C" Object_t * UriTypeConverter_ConvertTo_m17977 (UriTypeConverter_t4542 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Uri_t771_0_0_0_var = il2cpp_codegen_type_from_index(345);
		InstanceDescriptor_t4237_0_0_0_var = il2cpp_codegen_type_from_index(7658);
		UriKind_t4540_0_0_0_var = il2cpp_codegen_type_from_index(7946);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2723);
		ObjectU5BU5D_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		UriKind_t4540_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7946);
		InstanceDescriptor_t4237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7658);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t771 * V_0 = {0};
	ConstructorInfo_t1398 * V_1 = {0};
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t696* G_B10_1 = {0};
	ObjectU5BU5D_t696* G_B10_2 = {0};
	ConstructorInfo_t1398 * G_B10_3 = {0};
	int32_t G_B9_0 = 0;
	ObjectU5BU5D_t696* G_B9_1 = {0};
	ObjectU5BU5D_t696* G_B9_2 = {0};
	ConstructorInfo_t1398 * G_B9_3 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	ObjectU5BU5D_t696* G_B11_2 = {0};
	ObjectU5BU5D_t696* G_B11_3 = {0};
	ConstructorInfo_t1398 * G_B11_4 = {0};
	{
		Object_t * L_0 = ___context;
		Type_t * L_1 = ___destinationType;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Type_t * >::Invoke(5 /* System.Boolean System.UriTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = Locale_GetText_m15578(NULL /*static, unused*/, (String_t*) &_stringLiteral4572, /*hidden argument*/NULL);
		NotSupportedException_t56 * L_4 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11464(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001e:
	{
		Object_t * L_5 = ___value;
		V_0 = ((Uri_t771 *)IsInst(L_5, Uri_t771_il2cpp_TypeInfo_var));
		Uri_t771 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t771_il2cpp_TypeInfo_var);
		bool L_7 = Uri_op_Inequality_m14736(NULL /*static, unused*/, L_6, (Uri_t771 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00cd;
		}
	}
	{
		Type_t * L_8 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))))
		{
			goto IL_0049;
		}
	}
	{
		Uri_t771 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_10);
		return L_11;
	}

IL_0049:
	{
		Type_t * L_12 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(Uri_t771_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_12) == ((Object_t*)(Type_t *)L_13))))
		{
			goto IL_005c;
		}
	}
	{
		Uri_t771 * L_14 = V_0;
		return L_14;
	}

IL_005c:
	{
		Type_t * L_15 = ___destinationType;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(InstanceDescriptor_t4237_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_15) == ((Object_t*)(Type_t *)L_16))))
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(Uri_t771_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t1220* L_18 = ((TypeU5BU5D_t1220*)SZArrayNew(TypeU5BU5D_t1220_il2cpp_TypeInfo_var, 2));
		Type_t * L_19 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		ArrayElementTypeCheck (L_18, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_18, 0)) = (Type_t *)L_19;
		TypeU5BU5D_t1220* L_20 = L_18;
		Type_t * L_21 = Type_GetTypeFromHandle_m4206(NULL /*static, unused*/, LoadTypeToken(UriKind_t4540_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 1)) = (Type_t *)L_21;
		NullCheck(L_17);
		ConstructorInfo_t1398 * L_22 = (ConstructorInfo_t1398 *)VirtFuncInvoker1< ConstructorInfo_t1398 *, TypeU5BU5D_t1220* >::Invoke(75 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_17, L_20);
		V_1 = L_22;
		ConstructorInfo_t1398 * L_23 = V_1;
		ObjectU5BU5D_t696* L_24 = ((ObjectU5BU5D_t696*)SZArrayNew(ObjectU5BU5D_t696_il2cpp_TypeInfo_var, 2));
		Uri_t771 * L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_25);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		ArrayElementTypeCheck (L_24, L_26);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 0)) = (Object_t *)L_26;
		ObjectU5BU5D_t696* L_27 = L_24;
		Uri_t771 * L_28 = V_0;
		NullCheck(L_28);
		bool L_29 = Uri_get_IsAbsoluteUri_m14793(L_28, /*hidden argument*/NULL);
		G_B9_0 = 1;
		G_B9_1 = L_27;
		G_B9_2 = L_27;
		G_B9_3 = L_23;
		if (!L_29)
		{
			G_B10_0 = 1;
			G_B10_1 = L_27;
			G_B10_2 = L_27;
			G_B10_3 = L_23;
			goto IL_00c0;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		goto IL_00c1;
	}

IL_00c0:
	{
		G_B11_0 = 2;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
	}

IL_00c1:
	{
		int32_t L_30 = G_B11_0;
		Object_t * L_31 = Box(UriKind_t4540_il2cpp_TypeInfo_var, &L_30);
		NullCheck(G_B11_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B11_2, G_B11_1);
		ArrayElementTypeCheck (G_B11_2, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B11_2, G_B11_1)) = (Object_t *)L_31;
		InstanceDescriptor_t4237 * L_32 = (InstanceDescriptor_t4237 *)il2cpp_codegen_object_new (InstanceDescriptor_t4237_il2cpp_TypeInfo_var);
		InstanceDescriptor__ctor_m15797(L_32, G_B11_4, (Object_t *)(Object_t *)G_B11_3, /*hidden argument*/NULL);
		return L_32;
	}

IL_00cd:
	{
		Object_t * L_33 = ___context;
		CultureInfo_t782 * L_34 = ___culture;
		Object_t * L_35 = ___value;
		Type_t * L_36 = ___destinationType;
		Object_t * L_37 = TypeConverter_ConvertTo_m15959(__this, L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// System.Boolean System.UriTypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t771_il2cpp_TypeInfo_var;
extern "C" bool UriTypeConverter_IsValid_m17978 (UriTypeConverter_t4542 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Uri_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		Object_t * L_1 = ___value;
		if (((String_t*)IsInst(L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_2 = ___value;
		G_B5_0 = ((!(((Object_t*)(Uri_t771 *)((Uri_t771 *)IsInst(L_2, Uri_t771_il2cpp_TypeInfo_var))) <= ((Object_t*)(Object_t *)NULL)))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B5_0 = 1;
	}

IL_001f:
	{
		return G_B5_0;
	}
}
// System.ComponentModel.PropertyChangedEventHandler
#include "System_System_ComponentModel_PropertyChangedEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.ComponentModel.PropertyChangedEventHandler
#include "System_System_ComponentModel_PropertyChangedEventHandlerMethodDeclarations.h"

// System.ComponentModel.PropertyChangedEventArgs
#include "System_System_ComponentModel_PropertyChangedEventArgs.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PropertyChangedEventHandler__ctor_m17979 (PropertyChangedEventHandler_t1418 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C" void PropertyChangedEventHandler_Invoke_m17980 (PropertyChangedEventHandler_t1418 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1524 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PropertyChangedEventHandler_Invoke_m17980((PropertyChangedEventHandler_t1418 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, PropertyChangedEventArgs_t1524 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, PropertyChangedEventArgs_t1524 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, PropertyChangedEventArgs_t1524 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PropertyChangedEventHandler_t1418(Il2CppObject* delegate, Object_t * ___sender, PropertyChangedEventArgs_t1524 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * PropertyChangedEventHandler_BeginInvoke_m17981 (PropertyChangedEventHandler_t1418 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1524 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PropertyChangedEventHandler_EndInvoke_m17982 (PropertyChangedEventHandler_t1418 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Net.BindIPEndPoint
#include "System_System_Net_BindIPEndPoint.h"
#ifndef _MSC_VER
#else
#endif
// System.Net.BindIPEndPoint
#include "System_System_Net_BindIPEndPointMethodDeclarations.h"

// System.Net.IPEndPoint
#include "System_System_Net_IPEndPoint.h"
// System.Net.ServicePoint
#include "System_System_Net_ServicePoint.h"


// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C" void BindIPEndPoint__ctor_m17983 (BindIPEndPoint_t4394 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C" IPEndPoint_t4369 * BindIPEndPoint_Invoke_m17984 (BindIPEndPoint_t4394 * __this, ServicePoint_t3276 * ___servicePoint, IPEndPoint_t4369 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BindIPEndPoint_Invoke_m17984((BindIPEndPoint_t4394 *)__this->___prev_9,___servicePoint, ___remoteEndPoint, ___retryCount, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef IPEndPoint_t4369 * (*FunctionPointerType) (Object_t *, Object_t * __this, ServicePoint_t3276 * ___servicePoint, IPEndPoint_t4369 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___servicePoint, ___remoteEndPoint, ___retryCount,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef IPEndPoint_t4369 * (*FunctionPointerType) (Object_t * __this, ServicePoint_t3276 * ___servicePoint, IPEndPoint_t4369 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___servicePoint, ___remoteEndPoint, ___retryCount,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef IPEndPoint_t4369 * (*FunctionPointerType) (Object_t * __this, IPEndPoint_t4369 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___servicePoint, ___remoteEndPoint, ___retryCount,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" IPEndPoint_t4369 * pinvoke_delegate_wrapper_BindIPEndPoint_t4394(Il2CppObject* delegate, ServicePoint_t3276 * ___servicePoint, IPEndPoint_t4369 * ___remoteEndPoint, int32_t ___retryCount)
{
	// Marshaling of parameter '___servicePoint' to native representation
	ServicePoint_t3276 * ____servicePoint_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Net.ServicePoint'."));
}
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * BindIPEndPoint_BeginInvoke_m17985 (BindIPEndPoint_t4394 * __this, ServicePoint_t3276 * ___servicePoint, IPEndPoint_t4369 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___servicePoint;
	__d_args[1] = ___remoteEndPoint;
	__d_args[2] = Box(Int32_t82_il2cpp_TypeInfo_var, &___retryCount);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C" IPEndPoint_t4369 * BindIPEndPoint_EndInvoke_m17986 (BindIPEndPoint_t4394 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (IPEndPoint_t4369 *)__result;
}
// System.Net.HttpContinueDelegate
#include "System_System_Net_HttpContinueDelegate.h"
#ifndef _MSC_VER
#else
#endif
// System.Net.HttpContinueDelegate
#include "System_System_Net_HttpContinueDelegateMethodDeclarations.h"

// System.Net.WebHeaderCollection
#include "System_System_Net_WebHeaderCollection.h"


// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void HttpContinueDelegate__ctor_m17987 (HttpContinueDelegate_t4375 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C" void HttpContinueDelegate_Invoke_m17988 (HttpContinueDelegate_t4375 * __this, int32_t ___StatusCode, WebHeaderCollection_t4307 * ___httpHeaders, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HttpContinueDelegate_Invoke_m17988((HttpContinueDelegate_t4375 *)__this->___prev_9,___StatusCode, ___httpHeaders, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___StatusCode, WebHeaderCollection_t4307 * ___httpHeaders, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___StatusCode, ___httpHeaders,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___StatusCode, WebHeaderCollection_t4307 * ___httpHeaders, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___StatusCode, ___httpHeaders,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_HttpContinueDelegate_t4375(Il2CppObject* delegate, int32_t ___StatusCode, WebHeaderCollection_t4307 * ___httpHeaders)
{
	// Marshaling of parameter '___httpHeaders' to native representation
	WebHeaderCollection_t4307 * ____httpHeaders_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Net.WebHeaderCollection'."));
}
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * HttpContinueDelegate_BeginInvoke_m17989 (HttpContinueDelegate_t4375 * __this, int32_t ___StatusCode, WebHeaderCollection_t4307 * ___httpHeaders, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t82_il2cpp_TypeInfo_var, &___StatusCode);
	__d_args[1] = ___httpHeaders;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HttpContinueDelegate_EndInvoke_m17990 (HttpContinueDelegate_t4375 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Net.Security.LocalCertificateSelectionCallback
#include "System_System_Net_Security_LocalCertificateSelectionCallback.h"
#ifndef _MSC_VER
#else
#endif
// System.Net.Security.LocalCertificateSelectionCallback
#include "System_System_Net_Security_LocalCertificateSelectionCallbackMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer.h"


// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LocalCertificateSelectionCallback__ctor_m17991 (LocalCertificateSelectionCallback_t4392 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C" X509Certificate_t3221 * LocalCertificateSelectionCallback_Invoke_m17992 (LocalCertificateSelectionCallback_t4392 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3220 * ___localCertificates, X509Certificate_t3221 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LocalCertificateSelectionCallback_Invoke_m17992((LocalCertificateSelectionCallback_t4392 *)__this->___prev_9,___sender, ___targetHost, ___localCertificates, ___remoteCertificate, ___acceptableIssuers, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t3221 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3220 * ___localCertificates, X509Certificate_t3221 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___targetHost, ___localCertificates, ___remoteCertificate, ___acceptableIssuers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t3221 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3220 * ___localCertificates, X509Certificate_t3221 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___targetHost, ___localCertificates, ___remoteCertificate, ___acceptableIssuers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t3221 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, X509CertificateCollection_t3220 * ___localCertificates, X509Certificate_t3221 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___targetHost, ___localCertificates, ___remoteCertificate, ___acceptableIssuers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t3221 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t4392(Il2CppObject* delegate, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3220 * ___localCertificates, X509Certificate_t3221 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * LocalCertificateSelectionCallback_BeginInvoke_m17993 (LocalCertificateSelectionCallback_t4392 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3220 * ___localCertificates, X509Certificate_t3221 * ___remoteCertificate, StringU5BU5D_t75* ___acceptableIssuers, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[6] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___targetHost;
	__d_args[2] = ___localCertificates;
	__d_args[3] = ___remoteCertificate;
	__d_args[4] = ___acceptableIssuers;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t3221 * LocalCertificateSelectionCallback_EndInvoke_m17994 (LocalCertificateSelectionCallback_t4392 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t3221 *)__result;
}
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
#ifndef _MSC_VER
#else
#endif
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509Chain
#include "System_System_Security_Cryptography_X509Certificates_X509Cha.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"


// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void RemoteCertificateValidationCallback__ctor_m17995 (RemoteCertificateValidationCallback_t3277 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool RemoteCertificateValidationCallback_Invoke_m17996 (RemoteCertificateValidationCallback_t3277 * __this, Object_t * ___sender, X509Certificate_t3221 * ___certificate, X509Chain_t3279 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RemoteCertificateValidationCallback_Invoke_m17996((RemoteCertificateValidationCallback_t3277 *)__this->___prev_9,___sender, ___certificate, ___chain, ___sslPolicyErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, X509Certificate_t3221 * ___certificate, X509Chain_t3279 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, X509Certificate_t3221 * ___certificate, X509Chain_t3279 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t3221 * ___certificate, X509Chain_t3279 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___certificate, ___chain, ___sslPolicyErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t3277(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t3221 * ___certificate, X509Chain_t3279 * ___chain, int32_t ___sslPolicyErrors)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern TypeInfo* SslPolicyErrors_t4393_il2cpp_TypeInfo_var;
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m17997 (RemoteCertificateValidationCallback_t3277 * __this, Object_t * ___sender, X509Certificate_t3221 * ___certificate, X509Chain_t3279 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslPolicyErrors_t4393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7811);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___certificate;
	__d_args[2] = ___chain;
	__d_args[3] = Box(SslPolicyErrors_t4393_il2cpp_TypeInfo_var, &___sslPolicyErrors);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m17998 (RemoteCertificateValidationCallback_t3277 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluator.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.RegularExpressions.MatchEvaluator
#include "System_System_Text_RegularExpressions_MatchEvaluatorMethodDeclarations.h"



// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C" void MatchEvaluator__ctor_m7511 (MatchEvaluator_t1196 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C" String_t* MatchEvaluator_Invoke_m17999 (MatchEvaluator_t1196 * __this, Match_t1391 * ___match, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MatchEvaluator_Invoke_m17999((MatchEvaluator_t1196 *)__this->___prev_9,___match, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t *, Object_t * __this, Match_t1391 * ___match, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, Match_t1391 * ___match, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef String_t* (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___match,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t1196(Il2CppObject* delegate, Match_t1391 * ___match)
{
	// Marshaling of parameter '___match' to native representation
	Match_t1391 * ____match_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Text.RegularExpressions.Match'."));
}
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchEvaluator_BeginInvoke_m18000 (MatchEvaluator_t1196 * __this, Match_t1391 * ___match, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___match;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C" String_t* MatchEvaluator_EndInvoke_m18001 (MatchEvaluator_t1196 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (String_t*)__result;
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Text.RegularExpressions.EvalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void EvalDelegate__ctor_m18002 (EvalDelegate_t4510 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Text.RegularExpressions.EvalDelegate::Invoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&)
extern "C" bool EvalDelegate_Invoke_m18003 (EvalDelegate_t4510 * __this, RxInterpreter_t4511 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EvalDelegate_Invoke_m18003((EvalDelegate_t4510 *)__this->___prev_9,___interp, ___strpos, ___strpos_result, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, RxInterpreter_t4511 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___interp, ___strpos, ___strpos_result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, RxInterpreter_t4511 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___interp, ___strpos, ___strpos_result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___strpos, int32_t* ___strpos_result, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___interp, ___strpos, ___strpos_result,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_EvalDelegate_t4510(Il2CppObject* delegate, RxInterpreter_t4511 * ___interp, int32_t ___strpos, int32_t* ___strpos_result)
{
	// Marshaling of parameter '___interp' to native representation
	RxInterpreter_t4511 * ____interp_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Text.RegularExpressions.RxInterpreter'."));
}
// System.IAsyncResult System.Text.RegularExpressions.EvalDelegate::BeginInvoke(System.Text.RegularExpressions.RxInterpreter,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" Object_t * EvalDelegate_BeginInvoke_m18004 (EvalDelegate_t4510 * __this, RxInterpreter_t4511 * ___interp, int32_t ___strpos, int32_t* ___strpos_result, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___interp;
	__d_args[1] = Box(Int32_t82_il2cpp_TypeInfo_var, &___strpos);
	__d_args[2] = Box(Int32_t82_il2cpp_TypeInfo_var, &(*___strpos_result));
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Text.RegularExpressions.EvalDelegate::EndInvoke(System.Int32&,System.IAsyncResult)
extern "C" bool EvalDelegate_EndInvoke_m18005 (EvalDelegate_t4510 * __this, int32_t* ___strpos_result, Object_t * ___result, const MethodInfo* method)
{
	void* ___out_args[] = {
	___strpos_result,
	};
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, ___out_args);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2416.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$16
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2416MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t4543_marshal(const U24ArrayTypeU2416_t4543& unmarshaled, U24ArrayTypeU2416_t4543_marshaled& marshaled)
{
}
void U24ArrayTypeU2416_t4543_marshal_back(const U24ArrayTypeU2416_t4543_marshaled& marshaled, U24ArrayTypeU2416_t4543& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t4543_marshal_cleanup(U24ArrayTypeU2416_t4543_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU24128MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void U24ArrayTypeU24128_t4544_marshal(const U24ArrayTypeU24128_t4544& unmarshaled, U24ArrayTypeU24128_t4544_marshaled& marshaled)
{
}
void U24ArrayTypeU24128_t4544_marshal_back(const U24ArrayTypeU24128_t4544_marshaled& marshaled, U24ArrayTypeU24128_t4544& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void U24ArrayTypeU24128_t4544_marshal_cleanup(U24ArrayTypeU24128_t4544_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU2412MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t4545_marshal(const U24ArrayTypeU2412_t4545& unmarshaled, U24ArrayTypeU2412_t4545_marshaled& marshaled)
{
}
void U24ArrayTypeU2412_t4545_marshal_back(const U24ArrayTypeU2412_t4545_marshaled& marshaled, U24ArrayTypeU2412_t4545& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t4545_marshal_cleanup(U24ArrayTypeU2412_t4545_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif