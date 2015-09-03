#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Text.UTF8Encoding
#include "mscorlib_System_Text_UTF8Encoding.h"
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
// System.Text.UTF8Encoding
#include "mscorlib_System_Text_UTF8EncodingMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.String
#include "mscorlib_System_String.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Text.DecoderFallback
#include "mscorlib_System_Text_DecoderFallback.h"
// System.Text.EncoderFallback
#include "mscorlib_System_Text_EncoderFallback.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeException.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.DecoderFallbackBuffer
#include "mscorlib_System_Text_DecoderFallbackBuffer.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Text.Decoder
#include "mscorlib_System_Text_Decoder.h"
// System.Text.UTF8Encoding/UTF8Decoder
#include "mscorlib_System_Text_UTF8Encoding_UTF8Decoder.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.Text.DecoderFallback
#include "mscorlib_System_Text_DecoderFallbackMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.IndexOutOfRangeException
#include "mscorlib_System_IndexOutOfRangeExceptionMethodDeclarations.h"
// System.Text.Decoder
#include "mscorlib_System_Text_DecoderMethodDeclarations.h"
// System.Text.DecoderFallbackBuffer
#include "mscorlib_System_Text_DecoderFallbackBufferMethodDeclarations.h"
// System.Text.UTF8Encoding/UTF8Decoder
#include "mscorlib_System_Text_UTF8Encoding_UTF8DecoderMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Text.UTF8Encoding::.ctor()
extern "C" void UTF8Encoding__ctor_m24249 (UTF8Encoding_t3729 * __this, const MethodInfo* method)
{
	{
		UTF8Encoding__ctor_m14799(__this, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
extern "C" void UTF8Encoding__ctor_m24250 (UTF8Encoding_t3729 * __this, bool ___encoderShouldEmitUTF8Identifier, const MethodInfo* method)
{
	{
		bool L_0 = ___encoderShouldEmitUTF8Identifier;
		UTF8Encoding__ctor_m14799(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* DecoderFallback_t5350_il2cpp_TypeInfo_var;
extern "C" void UTF8Encoding__ctor_m14799 (UTF8Encoding_t3729 * __this, bool ___encoderShouldEmitUTF8Identifier, bool ___throwOnInvalidBytes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		DecoderFallback_t5350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9332);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding__ctor_m24137(__this, ((int32_t)65001), /*hidden argument*/NULL);
		bool L_0 = ___encoderShouldEmitUTF8Identifier;
		__this->___emitIdentifier_28 = L_0;
		bool L_1 = ___throwOnInvalidBytes;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DecoderFallback_t5350_il2cpp_TypeInfo_var);
		DecoderFallback_t5350 * L_2 = DecoderFallback_get_ExceptionFallback_m24084(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_SetFallbackInternal_m24144(__this, (EncoderFallback_t5358 *)NULL, L_2, /*hidden argument*/NULL);
		goto IL_002f;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DecoderFallback_t5350_il2cpp_TypeInfo_var);
		DecoderFallback_t5350 * L_3 = DecoderFallback_get_StandardSafeFallback_m24086(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_SetFallbackInternal_m24144(__this, (EncoderFallback_t5358 *)NULL, L_3, /*hidden argument*/NULL);
	}

IL_002f:
	{
		String_t* L_4 = (String_t*) &_stringLiteral6517;
		V_0 = L_4;
		((Encoding_t753 *)__this)->___header_name_10 = L_4;
		String_t* L_5 = V_0;
		String_t* L_6 = L_5;
		V_0 = L_6;
		((Encoding_t753 *)__this)->___body_name_8 = L_6;
		String_t* L_7 = V_0;
		((Encoding_t753 *)__this)->___web_name_15 = L_7;
		((Encoding_t753 *)__this)->___encoding_name_9 = (String_t*) &_stringLiteral6518;
		((Encoding_t753 *)__this)->___is_browser_save_13 = 1;
		((Encoding_t753 *)__this)->___is_browser_display_14 = 1;
		((Encoding_t753 *)__this)->___is_mail_news_display_11 = 1;
		((Encoding_t753 *)__this)->___is_mail_news_save_12 = 1;
		((Encoding_t753 *)__this)->___windows_code_page_1 = ((int32_t)1200);
		return;
	}
}
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m24251 (Object_t * __this /* static, unused */, CharU5BU5D_t711* ___chars, int32_t ___index, int32_t ___count, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t* V_0 = {0};
	uintptr_t G_B17_0;
	{
		CharU5BU5D_t711* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		CharU5BU5D_t711* L_4 = ___chars;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_5 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_6 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_6, (String_t*) &_stringLiteral3023, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count;
		CharU5BU5D_t711* L_9 = ___chars;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_11 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_12 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_12, (String_t*) &_stringLiteral632, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		int32_t L_13 = ___index;
		CharU5BU5D_t711* L_14 = ___chars;
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) == ((uint32_t)(((int32_t)(((Array_t *)L_14)->max_length)))))))
		{
			goto IL_0063;
		}
	}
	{
		bool L_15 = ___flush;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		uint16_t* L_16 = ___leftOver;
		if (!(*((uint16_t*)L_16)))
		{
			goto IL_0061;
		}
	}
	{
		uint16_t* L_17 = ___leftOver;
		*((int16_t*)(L_17)) = (int16_t)0;
		return 3;
	}

IL_0061:
	{
		return 0;
	}

IL_0063:
	{
		CharU5BU5D_t711* L_18 = ___chars;
		if (!L_18)
		{
			goto IL_006b;
		}
	}
	{
		CharU5BU5D_t711* L_19 = ___chars;
		NullCheck(L_19);
		if ((((int32_t)(((Array_t *)L_19)->max_length))))
		{
			goto IL_006f;
		}
	}

IL_006b:
	{
		G_B17_0 = (((uintptr_t)0));
		goto IL_0076;
	}

IL_006f:
	{
		CharU5BU5D_t711* L_20 = ___chars;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		G_B17_0 = ((uintptr_t)(((uint16_t*)(uint16_t*)SZArrayLdElema(L_20, 0))));
	}

IL_0076:
	{
		V_0 = (uint16_t*)G_B17_0;
		uint16_t* L_21 = V_0;
		int32_t L_22 = ___index;
		int32_t L_23 = ___count;
		uint16_t* L_24 = ___leftOver;
		bool L_25 = ___flush;
		int32_t L_26 = UTF8Encoding_InternalGetByteCount_m24252(NULL /*static, unused*/, (uint16_t*)(uint16_t*)((intptr_t)((intptr_t)L_21+(int32_t)((int32_t)((int32_t)L_22*(int32_t)2)))), L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m24252 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t* V_1 = {0};
	{
		V_0 = 0;
		uint16_t* L_0 = ___chars;
		int32_t L_1 = ___count;
		V_1 = (uint16_t*)((intptr_t)((intptr_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)2))));
		goto IL_00d2;
	}

IL_000d:
	{
		uint16_t* L_2 = ___leftOver;
		if ((*((uint16_t*)L_2)))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00a2;
	}

IL_0019:
	{
		uint16_t* L_3 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_3))) >= ((int32_t)((int32_t)128))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		goto IL_009a;
	}

IL_002b:
	{
		uint16_t* L_5 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_5))) >= ((int32_t)((int32_t)2048))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)2));
		goto IL_009a;
	}

IL_003a:
	{
		uint16_t* L_7 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_7))) < ((int32_t)((int32_t)55296))))
		{
			goto IL_004c;
		}
	}
	{
		uint16_t* L_8 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_8))) <= ((int32_t)((int32_t)57343))))
		{
			goto IL_0052;
		}
	}

IL_004c:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)3));
		goto IL_009a;
	}

IL_0052:
	{
		uint16_t* L_10 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_10))) > ((int32_t)((int32_t)56319))))
		{
			goto IL_0093;
		}
	}
	{
		uint16_t* L_11 = ___chars;
		uint16_t* L_12 = V_1;
		if ((!(((uintptr_t)((intptr_t)((intptr_t)L_11+(int32_t)2))) < ((uintptr_t)L_12))))
		{
			goto IL_0085;
		}
	}
	{
		uint16_t* L_13 = ___chars;
		if ((((int32_t)(*((uint16_t*)((intptr_t)((intptr_t)L_13+(int32_t)2))))) < ((int32_t)((int32_t)56320))))
		{
			goto IL_0085;
		}
	}
	{
		uint16_t* L_14 = ___chars;
		if ((((int32_t)(*((uint16_t*)((intptr_t)((intptr_t)L_14+(int32_t)2))))) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)4));
		uint16_t* L_16 = ___chars;
		___chars = (uint16_t*)((intptr_t)((intptr_t)L_16+(intptr_t)(((intptr_t)2))));
		goto IL_009a;
	}

IL_0085:
	{
		uint16_t* L_17 = ___leftOver;
		uint16_t* L_18 = ___chars;
		*((int16_t*)(L_17)) = (int16_t)(*((uint16_t*)L_18));
		uint16_t* L_19 = ___chars;
		___chars = (uint16_t*)((intptr_t)((intptr_t)L_19+(intptr_t)(((intptr_t)2))));
		goto IL_00a9;
	}

IL_0093:
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)3));
		uint16_t* L_21 = ___leftOver;
		*((int16_t*)(L_21)) = (int16_t)0;
	}

IL_009a:
	{
		uint16_t* L_22 = ___chars;
		___chars = (uint16_t*)((intptr_t)((intptr_t)L_22+(intptr_t)(((intptr_t)2))));
	}

IL_00a2:
	{
		uint16_t* L_23 = ___chars;
		uint16_t* L_24 = V_1;
		if ((!(((uintptr_t)L_23) >= ((uintptr_t)L_24))))
		{
			goto IL_0019;
		}
	}

IL_00a9:
	{
		goto IL_00d2;
	}

IL_00ab:
	{
		uint16_t* L_25 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_25))) < ((int32_t)((int32_t)56320))))
		{
			goto IL_00cb;
		}
	}
	{
		uint16_t* L_26 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_26))) > ((int32_t)((int32_t)57343))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)((int32_t)L_27+(int32_t)4));
		uint16_t* L_28 = ___chars;
		___chars = (uint16_t*)((intptr_t)((intptr_t)L_28+(intptr_t)(((intptr_t)2))));
		goto IL_00cf;
	}

IL_00cb:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)3));
	}

IL_00cf:
	{
		uint16_t* L_30 = ___leftOver;
		*((int16_t*)(L_30)) = (int16_t)0;
	}

IL_00d2:
	{
		uint16_t* L_31 = ___chars;
		uint16_t* L_32 = V_1;
		if ((!(((uintptr_t)L_31) >= ((uintptr_t)L_32))))
		{
			goto IL_000d;
		}
	}
	{
		bool L_33 = ___flush;
		if (!L_33)
		{
			goto IL_00e7;
		}
	}
	{
		uint16_t* L_34 = ___leftOver;
		if (!(*((uint16_t*)L_34)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_35 = V_0;
		V_0 = ((int32_t)((int32_t)L_35+(int32_t)3));
		uint16_t* L_36 = ___leftOver;
		*((int16_t*)(L_36)) = (int16_t)0;
	}

IL_00e7:
	{
		int32_t L_37 = V_0;
		return L_37;
	}
}
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m24253 (UTF8Encoding_t3729 * __this, CharU5BU5D_t711* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		V_0 = 0;
		CharU5BU5D_t711* L_0 = ___chars;
		int32_t L_1 = ___index;
		int32_t L_2 = ___count;
		int32_t L_3 = UTF8Encoding_InternalGetByteCount_m24251(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), 1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_GetByteCount_m24254 (UTF8Encoding_t3729 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	{
		uint16_t* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___count;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		V_0 = 0;
		uint16_t* L_3 = ___chars;
		int32_t L_4 = ___count;
		int32_t L_5 = UTF8Encoding_InternalGetByteCount_m24252(NULL /*static, unused*/, (uint16_t*)(uint16_t*)L_3, L_4, (&V_0), 1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_InternalGetBytes_m24255 (Object_t * __this /* static, unused */, CharU5BU5D_t711* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t* V_0 = {0};
	uint8_t* V_1 = {0};
	uintptr_t G_B22_0;
	uintptr_t G_B28_0;
	{
		CharU5BU5D_t711* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ByteU5BU5D_t66* L_2 = ___bytes;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t784 * L_3 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_3, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___charIndex;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___charIndex;
		CharU5BU5D_t711* L_6 = ___chars;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_003b;
		}
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_7 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_8 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_8, (String_t*) &_stringLiteral6435, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003b:
	{
		int32_t L_9 = ___charCount;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_10 = ___charCount;
		CharU5BU5D_t711* L_11 = ___chars;
		NullCheck(L_11);
		int32_t L_12 = ___charIndex;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_005c;
		}
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_13 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_14 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_14, (String_t*) &_stringLiteral6436, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005c:
	{
		int32_t L_15 = ___byteIndex;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_16 = ___byteIndex;
		ByteU5BU5D_t66* L_17 = ___bytes;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_18 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_19 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_19, (String_t*) &_stringLiteral6437, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_007d:
	{
		int32_t L_20 = ___charIndex;
		CharU5BU5D_t711* L_21 = ___chars;
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)(((int32_t)(((Array_t *)L_21)->max_length)))))))
		{
			goto IL_0092;
		}
	}
	{
		bool L_22 = ___flush;
		if (!L_22)
		{
			goto IL_0090;
		}
	}
	{
		uint16_t* L_23 = ___leftOver;
		if (!(*((uint16_t*)L_23)))
		{
			goto IL_0090;
		}
	}
	{
		uint16_t* L_24 = ___leftOver;
		*((int16_t*)(L_24)) = (int16_t)0;
	}

IL_0090:
	{
		return 0;
	}

IL_0092:
	{
		CharU5BU5D_t711* L_25 = ___chars;
		if (!L_25)
		{
			goto IL_009a;
		}
	}
	{
		CharU5BU5D_t711* L_26 = ___chars;
		NullCheck(L_26);
		if ((((int32_t)(((Array_t *)L_26)->max_length))))
		{
			goto IL_009e;
		}
	}

IL_009a:
	{
		G_B22_0 = (((uintptr_t)0));
		goto IL_00a5;
	}

IL_009e:
	{
		CharU5BU5D_t711* L_27 = ___chars;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		G_B22_0 = ((uintptr_t)(((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, 0))));
	}

IL_00a5:
	{
		V_0 = (uint16_t*)G_B22_0;
		ByteU5BU5D_t66* L_28 = ___bytes;
		NullCheck(L_28);
		int32_t L_29 = ___byteIndex;
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_28)->max_length)))) == ((uint32_t)L_29))))
		{
			goto IL_00c0;
		}
	}
	{
		uint16_t* L_30 = V_0;
		int32_t L_31 = ___charIndex;
		int32_t L_32 = ___charCount;
		uint16_t* L_33 = ___leftOver;
		bool L_34 = ___flush;
		int32_t L_35 = UTF8Encoding_InternalGetBytes_m24256(NULL /*static, unused*/, (uint16_t*)(uint16_t*)((intptr_t)((intptr_t)L_30+(int32_t)((int32_t)((int32_t)L_31*(int32_t)2)))), L_32, (uint8_t*)(uint8_t*)(((uintptr_t)0)), 0, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}

IL_00c0:
	{
		ByteU5BU5D_t66* L_36 = ___bytes;
		if (!L_36)
		{
			goto IL_00c8;
		}
	}
	{
		ByteU5BU5D_t66* L_37 = ___bytes;
		NullCheck(L_37);
		if ((((int32_t)(((Array_t *)L_37)->max_length))))
		{
			goto IL_00cc;
		}
	}

IL_00c8:
	{
		G_B28_0 = (((uintptr_t)0));
		goto IL_00d3;
	}

IL_00cc:
	{
		ByteU5BU5D_t66* L_38 = ___bytes;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 0);
		G_B28_0 = ((uintptr_t)(((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, 0))));
	}

IL_00d3:
	{
		V_1 = (uint8_t*)G_B28_0;
		uint16_t* L_39 = V_0;
		int32_t L_40 = ___charIndex;
		int32_t L_41 = ___charCount;
		uint8_t* L_42 = V_1;
		int32_t L_43 = ___byteIndex;
		ByteU5BU5D_t66* L_44 = ___bytes;
		NullCheck(L_44);
		int32_t L_45 = ___byteIndex;
		uint16_t* L_46 = ___leftOver;
		bool L_47 = ___flush;
		int32_t L_48 = UTF8Encoding_InternalGetBytes_m24256(NULL /*static, unused*/, (uint16_t*)(uint16_t*)((intptr_t)((intptr_t)L_39+(int32_t)((int32_t)((int32_t)L_40*(int32_t)2)))), L_41, (uint8_t*)(uint8_t*)((intptr_t)((intptr_t)L_42+(int32_t)L_43)), ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)L_45)), L_46, L_47, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_InternalGetBytes_m24256 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint8_t* ___bytes, int32_t ___bcount, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t* V_0 = {0};
	uint8_t* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		uint16_t* L_0 = ___chars;
		int32_t L_1 = ___count;
		V_0 = (uint16_t*)((intptr_t)((intptr_t)L_0+(int32_t)((int32_t)((int32_t)L_1*(int32_t)2))));
		uint8_t* L_2 = ___bytes;
		int32_t L_3 = ___bcount;
		V_1 = (uint8_t*)((intptr_t)((intptr_t)L_2+(int32_t)L_3));
		goto IL_0211;
	}

IL_000f:
	{
		uint16_t* L_4 = ___leftOver;
		if ((*((uint16_t*)L_4)))
		{
			goto IL_013a;
		}
	}
	{
		goto IL_012e;
	}

IL_001c:
	{
		uint16_t* L_5 = ___chars;
		V_2 = (*((uint16_t*)L_5));
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0041;
		}
	}
	{
		uint8_t* L_7 = ___bytes;
		uint8_t* L_8 = V_1;
		if ((!(((uintptr_t)L_7) >= ((uintptr_t)L_8))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0273;
	}

IL_0030:
	{
		uint8_t* L_9 = ___bytes;
		uint8_t* L_10 = (uint8_t*)L_9;
		___bytes = (uint8_t*)((intptr_t)((intptr_t)L_10+(intptr_t)(((intptr_t)1))));
		int32_t L_11 = V_2;
		*((int8_t*)(L_10)) = (int8_t)(((uint8_t)L_11));
		goto IL_0126;
	}

IL_0041:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)2048))))
		{
			goto IL_007b;
		}
	}
	{
		uint8_t* L_13 = ___bytes;
		uint8_t* L_14 = V_1;
		if ((!(((uintptr_t)((intptr_t)((intptr_t)L_13+(int32_t)1))) >= ((uintptr_t)L_14))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_0273;
	}

IL_0054:
	{
		uint8_t* L_15 = ___bytes;
		int32_t L_16 = V_2;
		*((int8_t*)(L_15)) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)192)|(int32_t)((int32_t)((int32_t)L_16>>(int32_t)6))))));
		uint8_t* L_17 = ___bytes;
		int32_t L_18 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)L_17+(int32_t)1)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)63)))))));
		uint8_t* L_19 = ___bytes;
		___bytes = (uint8_t*)((intptr_t)((intptr_t)L_19+(int32_t)2));
		goto IL_0126;
	}

IL_007b:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)55296))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)57343))))
		{
			goto IL_00cc;
		}
	}

IL_008b:
	{
		uint8_t* L_22 = ___bytes;
		uint8_t* L_23 = V_1;
		if ((!(((uintptr_t)((intptr_t)((intptr_t)L_22+(int32_t)2))) >= ((uintptr_t)L_23))))
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0273;
	}

IL_0096:
	{
		uint8_t* L_24 = ___bytes;
		int32_t L_25 = V_2;
		*((int8_t*)(L_24)) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)224)|(int32_t)((int32_t)((int32_t)L_25>>(int32_t)((int32_t)12)))))));
		uint8_t* L_26 = ___bytes;
		int32_t L_27 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)L_26+(int32_t)1)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_27>>(int32_t)6))&(int32_t)((int32_t)63)))))));
		uint8_t* L_28 = ___bytes;
		int32_t L_29 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)L_28+(int32_t)2)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)63)))))));
		uint8_t* L_30 = ___bytes;
		___bytes = (uint8_t*)((intptr_t)((intptr_t)L_30+(int32_t)3));
		goto IL_0126;
	}

IL_00cc:
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) > ((int32_t)((int32_t)56319))))
		{
			goto IL_00e3;
		}
	}
	{
		uint16_t* L_32 = ___leftOver;
		uint16_t* L_33 = ___chars;
		*((int16_t*)(L_32)) = (int16_t)(*((uint16_t*)L_33));
		uint16_t* L_34 = ___chars;
		___chars = (uint16_t*)((intptr_t)((intptr_t)L_34+(intptr_t)(((intptr_t)2))));
		goto IL_0135;
	}

IL_00e3:
	{
		uint8_t* L_35 = ___bytes;
		uint8_t* L_36 = V_1;
		if ((!(((uintptr_t)((intptr_t)((intptr_t)L_35+(int32_t)2))) >= ((uintptr_t)L_36))))
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_0273;
	}

IL_00ee:
	{
		uint8_t* L_37 = ___bytes;
		int32_t L_38 = V_2;
		*((int8_t*)(L_37)) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)224)|(int32_t)((int32_t)((int32_t)L_38>>(int32_t)((int32_t)12)))))));
		uint8_t* L_39 = ___bytes;
		int32_t L_40 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)L_39+(int32_t)1)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_40>>(int32_t)6))&(int32_t)((int32_t)63)))))));
		uint8_t* L_41 = ___bytes;
		int32_t L_42 = V_2;
		*((int8_t*)(((intptr_t)((intptr_t)L_41+(int32_t)2)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)L_42&(int32_t)((int32_t)63)))))));
		uint8_t* L_43 = ___bytes;
		___bytes = (uint8_t*)((intptr_t)((intptr_t)L_43+(int32_t)3));
		uint16_t* L_44 = ___leftOver;
		*((int16_t*)(L_44)) = (int16_t)0;
	}

IL_0126:
	{
		uint16_t* L_45 = ___chars;
		___chars = (uint16_t*)((intptr_t)((intptr_t)L_45+(intptr_t)(((intptr_t)2))));
	}

IL_012e:
	{
		uint16_t* L_46 = ___chars;
		uint16_t* L_47 = V_0;
		if ((!(((uintptr_t)L_46) >= ((uintptr_t)L_47))))
		{
			goto IL_001c;
		}
	}

IL_0135:
	{
		goto IL_0211;
	}

IL_013a:
	{
		uint16_t* L_48 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_48))) < ((int32_t)((int32_t)56320))))
		{
			goto IL_01c6;
		}
	}
	{
		uint16_t* L_49 = ___chars;
		if ((((int32_t)(*((uint16_t*)L_49))) > ((int32_t)((int32_t)57343))))
		{
			goto IL_01c6;
		}
	}
	{
		uint16_t* L_50 = ___chars;
		uint16_t* L_51 = ___leftOver;
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)65536)+(int32_t)(*((uint16_t*)L_50))))-(int32_t)((int32_t)56320)))+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*((uint16_t*)L_51))-(int32_t)((int32_t)55296)))<<(int32_t)((int32_t)10)))));
		uint8_t* L_52 = ___bytes;
		uint8_t* L_53 = V_1;
		if ((!(((uintptr_t)((intptr_t)((intptr_t)L_52+(int32_t)3))) >= ((uintptr_t)L_53))))
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0273;
	}

IL_0176:
	{
		uint8_t* L_54 = ___bytes;
		int32_t L_55 = V_3;
		*((int8_t*)(L_54)) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)240)|(int32_t)((int32_t)((int32_t)L_55>>(int32_t)((int32_t)18)))))));
		uint8_t* L_56 = ___bytes;
		int32_t L_57 = V_3;
		*((int8_t*)(((intptr_t)((intptr_t)L_56+(int32_t)1)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_57>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)63)))))));
		uint8_t* L_58 = ___bytes;
		int32_t L_59 = V_3;
		*((int8_t*)(((intptr_t)((intptr_t)L_58+(int32_t)2)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_59>>(int32_t)6))&(int32_t)((int32_t)63)))))));
		uint8_t* L_60 = ___bytes;
		int32_t L_61 = V_3;
		*((int8_t*)(((intptr_t)((intptr_t)L_60+(int32_t)3)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)L_61&(int32_t)((int32_t)63)))))));
		uint8_t* L_62 = ___bytes;
		___bytes = (uint8_t*)((intptr_t)((intptr_t)L_62+(int32_t)4));
		uint16_t* L_63 = ___chars;
		___chars = (uint16_t*)((intptr_t)((intptr_t)L_63+(intptr_t)(((intptr_t)2))));
		goto IL_020d;
	}

IL_01c6:
	{
		uint16_t* L_64 = ___leftOver;
		V_4 = (*((uint16_t*)L_64));
		uint8_t* L_65 = ___bytes;
		uint8_t* L_66 = V_1;
		if ((!(((uintptr_t)((intptr_t)((intptr_t)L_65+(int32_t)2))) >= ((uintptr_t)L_66))))
		{
			goto IL_01d6;
		}
	}
	{
		goto IL_0273;
	}

IL_01d6:
	{
		uint8_t* L_67 = ___bytes;
		int32_t L_68 = V_4;
		*((int8_t*)(L_67)) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)224)|(int32_t)((int32_t)((int32_t)L_68>>(int32_t)((int32_t)12)))))));
		uint8_t* L_69 = ___bytes;
		int32_t L_70 = V_4;
		*((int8_t*)(((intptr_t)((intptr_t)L_69+(int32_t)1)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_70>>(int32_t)6))&(int32_t)((int32_t)63)))))));
		uint8_t* L_71 = ___bytes;
		int32_t L_72 = V_4;
		*((int8_t*)(((intptr_t)((intptr_t)L_71+(int32_t)2)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)63)))))));
		uint8_t* L_73 = ___bytes;
		___bytes = (uint8_t*)((intptr_t)((intptr_t)L_73+(int32_t)3));
	}

IL_020d:
	{
		uint16_t* L_74 = ___leftOver;
		*((int16_t*)(L_74)) = (int16_t)0;
	}

IL_0211:
	{
		uint16_t* L_75 = ___chars;
		uint16_t* L_76 = V_0;
		if ((!(((uintptr_t)L_75) >= ((uintptr_t)L_76))))
		{
			goto IL_000f;
		}
	}
	{
		bool L_77 = ___flush;
		if (!L_77)
		{
			goto IL_026b;
		}
	}
	{
		uint16_t* L_78 = ___leftOver;
		if (!(*((uint16_t*)L_78)))
		{
			goto IL_026b;
		}
	}
	{
		uint16_t* L_79 = ___leftOver;
		V_5 = (*((uint16_t*)L_79));
		uint8_t* L_80 = ___bytes;
		uint8_t* L_81 = V_1;
		if ((!(((uintptr_t)((intptr_t)((intptr_t)L_80+(int32_t)2))) < ((uintptr_t)L_81))))
		{
			goto IL_0265;
		}
	}
	{
		uint8_t* L_82 = ___bytes;
		int32_t L_83 = V_5;
		*((int8_t*)(L_82)) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)224)|(int32_t)((int32_t)((int32_t)L_83>>(int32_t)((int32_t)12)))))));
		uint8_t* L_84 = ___bytes;
		int32_t L_85 = V_5;
		*((int8_t*)(((intptr_t)((intptr_t)L_84+(int32_t)1)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_85>>(int32_t)6))&(int32_t)((int32_t)63)))))));
		uint8_t* L_86 = ___bytes;
		int32_t L_87 = V_5;
		*((int8_t*)(((intptr_t)((intptr_t)L_86+(int32_t)2)))) = (int8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)L_87&(int32_t)((int32_t)63)))))));
		uint8_t* L_88 = ___bytes;
		___bytes = (uint8_t*)((intptr_t)((intptr_t)L_88+(int32_t)3));
		goto IL_0267;
	}

IL_0265:
	{
		goto IL_0273;
	}

IL_0267:
	{
		uint16_t* L_89 = ___leftOver;
		*((int16_t*)(L_89)) = (int16_t)0;
	}

IL_026b:
	{
		uint8_t* L_90 = ___bytes;
		uint8_t* L_91 = V_1;
		int32_t L_92 = ___bcount;
		return (((int32_t)(((int64_t)((intptr_t)((intptr_t)L_90-(intptr_t)((intptr_t)((intptr_t)L_91-(int32_t)L_92))))))));
	}

IL_0273:
	{
		ArgumentException_t725 * L_93 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3862(L_93, (String_t*) &_stringLiteral6519, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_93);
	}
}
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m24257 (UTF8Encoding_t3729 * __this, CharU5BU5D_t711* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		V_0 = 0;
		CharU5BU5D_t711* L_0 = ___chars;
		int32_t L_1 = ___charIndex;
		int32_t L_2 = ___charCount;
		ByteU5BU5D_t66* L_3 = ___bytes;
		int32_t L_4 = ___byteIndex;
		int32_t L_5 = UTF8Encoding_InternalGetBytes_m24255(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (&V_0), 1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_GetBytes_m24258 (UTF8Encoding_t3729 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t* V_0 = {0};
	uint16_t V_1 = 0x0;
	uint8_t* V_2 = {0};
	String_t* V_3 = {0};
	uintptr_t G_B21_0;
	{
		String_t* L_0 = ___s;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral4578, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ByteU5BU5D_t66* L_2 = ___bytes;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t784 * L_3 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_3, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = ___charIndex;
		String_t* L_6 = ___s;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m410(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_003f;
		}
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_8 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6439, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_9 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_9, (String_t*) &_stringLiteral6435, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003f:
	{
		int32_t L_10 = ___charCount;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_11 = ___charCount;
		String_t* L_12 = ___s;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m410(L_12, /*hidden argument*/NULL);
		int32_t L_14 = ___charIndex;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)((int32_t)L_13-(int32_t)L_14)))))
		{
			goto IL_0063;
		}
	}

IL_004e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_15 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6440, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_16 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_16, (String_t*) &_stringLiteral6436, L_15, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0063:
	{
		int32_t L_17 = ___byteIndex;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_18 = ___byteIndex;
		ByteU5BU5D_t66* L_19 = ___bytes;
		NullCheck(L_19);
		if ((((int32_t)L_18) <= ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_0085;
		}
	}

IL_0070:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_20 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_21 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_21, (String_t*) &_stringLiteral6437, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0085:
	{
		int32_t L_22 = ___charIndex;
		String_t* L_23 = ___s;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m410(L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_24))))
		{
			goto IL_0090;
		}
	}
	{
		return 0;
	}

IL_0090:
	{
		String_t* L_25 = ___s;
		V_3 = L_25;
		String_t* L_26 = V_3;
		int32_t L_27 = RuntimeHelpers_get_OffsetToStringData_m19285(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (uint16_t*)((intptr_t)((intptr_t)(((intptr_t)L_26))+(int32_t)L_27));
		V_1 = 0;
		ByteU5BU5D_t66* L_28 = ___bytes;
		NullCheck(L_28);
		int32_t L_29 = ___byteIndex;
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_28)->max_length)))) == ((uint32_t)L_29))))
		{
			goto IL_00b7;
		}
	}
	{
		uint16_t* L_30 = V_0;
		int32_t L_31 = ___charIndex;
		int32_t L_32 = ___charCount;
		int32_t L_33 = UTF8Encoding_InternalGetBytes_m24256(NULL /*static, unused*/, (uint16_t*)(uint16_t*)((intptr_t)((intptr_t)L_30+(int32_t)((int32_t)((int32_t)L_31*(int32_t)2)))), L_32, (uint8_t*)(uint8_t*)(((uintptr_t)0)), 0, (&V_1), 1, /*hidden argument*/NULL);
		return L_33;
	}

IL_00b7:
	{
		ByteU5BU5D_t66* L_34 = ___bytes;
		if (!L_34)
		{
			goto IL_00c1;
		}
	}
	{
		ByteU5BU5D_t66* L_35 = ___bytes;
		NullCheck(L_35);
		if ((((int32_t)(((Array_t *)L_35)->max_length))))
		{
			goto IL_00c5;
		}
	}

IL_00c1:
	{
		G_B21_0 = (((uintptr_t)0));
		goto IL_00cd;
	}

IL_00c5:
	{
		ByteU5BU5D_t66* L_36 = ___bytes;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		G_B21_0 = ((uintptr_t)(((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, 0))));
	}

IL_00cd:
	{
		V_2 = (uint8_t*)G_B21_0;
		uint16_t* L_37 = V_0;
		int32_t L_38 = ___charIndex;
		int32_t L_39 = ___charCount;
		uint8_t* L_40 = V_2;
		int32_t L_41 = ___byteIndex;
		ByteU5BU5D_t66* L_42 = ___bytes;
		NullCheck(L_42);
		int32_t L_43 = ___byteIndex;
		int32_t L_44 = UTF8Encoding_InternalGetBytes_m24256(NULL /*static, unused*/, (uint16_t*)(uint16_t*)((intptr_t)((intptr_t)L_37+(int32_t)((int32_t)((int32_t)L_38*(int32_t)2)))), L_39, (uint8_t*)(uint8_t*)((intptr_t)((intptr_t)L_40+(int32_t)L_41)), ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_42)->max_length)))-(int32_t)L_43)), (&V_1), 1, /*hidden argument*/NULL);
		return L_44;
	}
}
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* IndexOutOfRangeException_t2947_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_GetBytes_m24259 (UTF8Encoding_t3729 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IndexOutOfRangeException_t2947_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4509);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	{
		uint16_t* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___charCount;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		IndexOutOfRangeException_t2947 * L_3 = (IndexOutOfRangeException_t2947 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t2947_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m10256(L_3, (String_t*) &_stringLiteral6436, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		uint8_t* L_4 = ___bytes;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		ArgumentNullException_t784 * L_5 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_5, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002b:
	{
		int32_t L_6 = ___byteCount;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		IndexOutOfRangeException_t2947 * L_7 = (IndexOutOfRangeException_t2947 *)il2cpp_codegen_object_new (IndexOutOfRangeException_t2947_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m10256(L_7, (String_t*) &_stringLiteral6436, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003b:
	{
		int32_t L_8 = ___charCount;
		if (L_8)
		{
			goto IL_0040;
		}
	}
	{
		return 0;
	}

IL_0040:
	{
		V_0 = 0;
		int32_t L_9 = ___byteCount;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		uint16_t* L_10 = ___chars;
		int32_t L_11 = ___charCount;
		int32_t L_12 = UTF8Encoding_InternalGetBytes_m24256(NULL /*static, unused*/, (uint16_t*)(uint16_t*)L_10, L_11, (uint8_t*)(uint8_t*)(((uintptr_t)0)), 0, (&V_0), 1, /*hidden argument*/NULL);
		return L_12;
	}

IL_0054:
	{
		uint16_t* L_13 = ___chars;
		int32_t L_14 = ___charCount;
		uint8_t* L_15 = ___bytes;
		int32_t L_16 = ___byteCount;
		int32_t L_17 = UTF8Encoding_InternalGetBytes_m24256(NULL /*static, unused*/, (uint16_t*)(uint16_t*)L_13, L_14, (uint8_t*)(uint8_t*)L_15, L_16, (&V_0), 1, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m24260 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t5351 ** ___fallbackBuffer, ByteU5BU5D_t66** ___bufferArg, bool ___flush, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t* V_0 = {0};
	uintptr_t G_B14_0;
	{
		ByteU5BU5D_t66* L_0 = ___bytes;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		ByteU5BU5D_t66* L_4 = ___bytes;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_5 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_6 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_6, (String_t*) &_stringLiteral3023, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count;
		ByteU5BU5D_t66* L_9 = ___bytes;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_11 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_12 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_12, (String_t*) &_stringLiteral632, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		int32_t L_13 = ___count;
		if (L_13)
		{
			goto IL_0053;
		}
	}
	{
		return 0;
	}

IL_0053:
	{
		ByteU5BU5D_t66* L_14 = ___bytes;
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		ByteU5BU5D_t66* L_15 = ___bytes;
		NullCheck(L_15);
		if ((((int32_t)(((Array_t *)L_15)->max_length))))
		{
			goto IL_005f;
		}
	}

IL_005b:
	{
		G_B14_0 = (((uintptr_t)0));
		goto IL_0066;
	}

IL_005f:
	{
		ByteU5BU5D_t66* L_16 = ___bytes;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		G_B14_0 = ((uintptr_t)(((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, 0))));
	}

IL_0066:
	{
		V_0 = (uint8_t*)G_B14_0;
		uint8_t* L_17 = V_0;
		int32_t L_18 = ___index;
		int32_t L_19 = ___count;
		uint32_t L_20 = ___leftOverBits;
		uint32_t L_21 = ___leftOverCount;
		Object_t * L_22 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_23 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_24 = ___bufferArg;
		bool L_25 = ___flush;
		int32_t L_26 = UTF8Encoding_InternalGetCharCount_m24261(NULL /*static, unused*/, (uint8_t*)(uint8_t*)((intptr_t)((intptr_t)L_17+(int32_t)L_18)), L_19, L_20, L_21, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m24261 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t5351 ** ___fallbackBuffer, ByteU5BU5D_t66** ___bufferArg, bool ___flush, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	bool V_7 = false;
	uint32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		uint32_t L_0 = ___leftOverCount;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = V_0;
		int32_t L_2 = ___count;
		V_2 = ((int32_t)((int32_t)L_1+(int32_t)L_2));
		goto IL_002b;
	}

IL_000d:
	{
		uint8_t* L_3 = ___bytes;
		int32_t L_4 = V_0;
		if ((((int32_t)(*((uint8_t*)((intptr_t)((intptr_t)L_3+(int32_t)L_4))))) >= ((int32_t)((int32_t)128))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
		goto IL_0020;
	}

IL_001e:
	{
		goto IL_002f;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = ___count;
		___count = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000d;
		}
	}

IL_002f:
	{
		uint32_t L_10 = ___leftOverBits;
		V_4 = L_10;
		uint32_t L_11 = ___leftOverCount;
		V_5 = ((int32_t)((int32_t)L_11&(int32_t)((int32_t)15)));
		uint32_t L_12 = ___leftOverCount;
		V_6 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_12>>4))&(int32_t)((int32_t)15)));
		goto IL_0256;
	}

IL_0045:
	{
		uint8_t* L_13 = ___bytes;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		V_3 = (*((uint8_t*)((intptr_t)((intptr_t)L_13+(int32_t)L_15))));
		int32_t L_16 = ___count;
		___count = ((int32_t)((int32_t)L_16-(int32_t)1));
		uint32_t L_17 = V_6;
		if (L_17)
		{
			goto IL_0112;
		}
	}
	{
		uint32_t L_18 = V_3;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)128)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
		goto IL_010d;
	}

IL_006d:
	{
		uint32_t L_20 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)224)))) == ((uint32_t)((int32_t)192)))))
		{
			goto IL_008c;
		}
	}
	{
		uint32_t L_21 = V_3;
		V_4 = ((int32_t)((int32_t)L_21&(int32_t)((int32_t)31)));
		V_5 = 1;
		V_6 = 2;
		goto IL_010d;
	}

IL_008c:
	{
		uint32_t L_22 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)240)))) == ((uint32_t)((int32_t)224)))))
		{
			goto IL_00a8;
		}
	}
	{
		uint32_t L_23 = V_3;
		V_4 = ((int32_t)((int32_t)L_23&(int32_t)((int32_t)15)));
		V_5 = 1;
		V_6 = 3;
		goto IL_010d;
	}

IL_00a8:
	{
		uint32_t L_24 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_24&(int32_t)((int32_t)248)))) == ((uint32_t)((int32_t)240)))))
		{
			goto IL_00c3;
		}
	}
	{
		uint32_t L_25 = V_3;
		V_4 = ((int32_t)((int32_t)L_25&(int32_t)7));
		V_5 = 1;
		V_6 = 4;
		goto IL_010d;
	}

IL_00c3:
	{
		uint32_t L_26 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)252)))) == ((uint32_t)((int32_t)248)))))
		{
			goto IL_00de;
		}
	}
	{
		uint32_t L_27 = V_3;
		V_4 = ((int32_t)((int32_t)L_27&(int32_t)3));
		V_5 = 1;
		V_6 = 5;
		goto IL_010d;
	}

IL_00de:
	{
		uint32_t L_28 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)254)))) == ((uint32_t)((int32_t)252)))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_29 = V_3;
		V_4 = ((int32_t)((int32_t)L_29&(int32_t)3));
		V_5 = 1;
		V_6 = 6;
		goto IL_010d;
	}

IL_00f9:
	{
		int32_t L_30 = V_1;
		Object_t * L_31 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_32 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_33 = ___bufferArg;
		uint8_t* L_34 = ___bytes;
		int32_t L_35 = V_0;
		int32_t L_36 = UTF8Encoding_Fallback_m24262(NULL /*static, unused*/, L_31, L_32, L_33, (uint8_t*)(uint8_t*)L_34, (((int64_t)((int32_t)((int32_t)L_35-(int32_t)1)))), 1, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_30+(int32_t)L_36));
	}

IL_010d:
	{
		goto IL_0256;
	}

IL_0112:
	{
		uint32_t L_37 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)192)))) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0231;
		}
	}
	{
		uint32_t L_38 = V_4;
		uint32_t L_39 = V_3;
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)L_38<<(int32_t)6))|(int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)63)))));
		uint32_t L_40 = V_5;
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)1));
		V_5 = L_41;
		uint32_t L_42 = V_6;
		if ((!(((uint32_t)L_41) >= ((uint32_t)L_42))))
		{
			goto IL_022f;
		}
	}
	{
		uint32_t L_43 = V_4;
		if ((!(((uint32_t)L_43) < ((uint32_t)((int32_t)65536)))))
		{
			goto IL_0206;
		}
	}
	{
		V_7 = 0;
		uint32_t L_44 = V_6;
		V_8 = L_44;
		uint32_t L_45 = V_8;
		if (((int32_t)((int32_t)L_45-(int32_t)2)) == 0)
		{
			goto IL_016e;
		}
		if (((int32_t)((int32_t)L_45-(int32_t)2)) == 1)
		{
			goto IL_017b;
		}
		if (((int32_t)((int32_t)L_45-(int32_t)2)) == 2)
		{
			goto IL_018b;
		}
		if (((int32_t)((int32_t)L_45-(int32_t)2)) == 3)
		{
			goto IL_019b;
		}
		if (((int32_t)((int32_t)L_45-(int32_t)2)) == 4)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_01bb;
	}

IL_016e:
	{
		uint32_t L_46 = V_4;
		V_7 = ((((int32_t)((!(((uint32_t)L_46) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01bb;
	}

IL_017b:
	{
		uint32_t L_47 = V_4;
		V_7 = ((((int32_t)((!(((uint32_t)L_47) <= ((uint32_t)((int32_t)2047))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01bb;
	}

IL_018b:
	{
		uint32_t L_48 = V_4;
		V_7 = ((((int32_t)((!(((uint32_t)L_48) <= ((uint32_t)((int32_t)65535))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01bb;
	}

IL_019b:
	{
		uint32_t L_49 = V_4;
		V_7 = ((((int32_t)((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)2097151))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01bb;
	}

IL_01ab:
	{
		uint32_t L_50 = V_4;
		V_7 = ((((int32_t)((!(((uint32_t)L_50) <= ((uint32_t)((int32_t)67108863))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01bb;
	}

IL_01bb:
	{
		bool L_51 = V_7;
		if (!L_51)
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_52 = V_1;
		Object_t * L_53 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_54 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_55 = ___bufferArg;
		uint8_t* L_56 = ___bytes;
		int32_t L_57 = V_0;
		uint32_t L_58 = V_5;
		uint32_t L_59 = V_5;
		int32_t L_60 = UTF8Encoding_Fallback_m24262(NULL /*static, unused*/, L_53, L_54, L_55, (uint8_t*)(uint8_t*)L_56, ((int64_t)((int64_t)(((int64_t)L_57))-(int64_t)(((uint64_t)L_58)))), L_59, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_52+(int32_t)L_60));
		goto IL_0204;
	}

IL_01d8:
	{
		uint32_t L_61 = V_4;
		if ((!(((uint32_t)((int32_t)((int32_t)L_61&(int32_t)((int32_t)63488)))) == ((uint32_t)((int32_t)55296)))))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_62 = V_1;
		Object_t * L_63 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_64 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_65 = ___bufferArg;
		uint8_t* L_66 = ___bytes;
		int32_t L_67 = V_0;
		uint32_t L_68 = V_5;
		uint32_t L_69 = V_5;
		int32_t L_70 = UTF8Encoding_Fallback_m24262(NULL /*static, unused*/, L_63, L_64, L_65, (uint8_t*)(uint8_t*)L_66, ((int64_t)((int64_t)(((int64_t)L_67))-(int64_t)(((uint64_t)L_68)))), L_69, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_62+(int32_t)L_70));
		goto IL_0204;
	}

IL_0200:
	{
		int32_t L_71 = V_1;
		V_1 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_0204:
	{
		goto IL_022c;
	}

IL_0206:
	{
		uint32_t L_72 = V_4;
		if ((!(((uint32_t)L_72) < ((uint32_t)((int32_t)1114112)))))
		{
			goto IL_0215;
		}
	}
	{
		int32_t L_73 = V_1;
		V_1 = ((int32_t)((int32_t)L_73+(int32_t)2));
		goto IL_022c;
	}

IL_0215:
	{
		int32_t L_74 = V_1;
		Object_t * L_75 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_76 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_77 = ___bufferArg;
		uint8_t* L_78 = ___bytes;
		int32_t L_79 = V_0;
		uint32_t L_80 = V_5;
		uint32_t L_81 = V_5;
		int32_t L_82 = UTF8Encoding_Fallback_m24262(NULL /*static, unused*/, L_75, L_76, L_77, (uint8_t*)(uint8_t*)L_78, ((int64_t)((int64_t)(((int64_t)L_79))-(int64_t)(((uint64_t)L_80)))), L_81, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_74+(int32_t)L_82));
	}

IL_022c:
	{
		V_6 = 0;
	}

IL_022f:
	{
		goto IL_0256;
	}

IL_0231:
	{
		int32_t L_83 = V_1;
		Object_t * L_84 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_85 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_86 = ___bufferArg;
		uint8_t* L_87 = ___bytes;
		int32_t L_88 = V_0;
		uint32_t L_89 = V_5;
		uint32_t L_90 = V_5;
		int32_t L_91 = UTF8Encoding_Fallback_m24262(NULL /*static, unused*/, L_84, L_85, L_86, (uint8_t*)(uint8_t*)L_87, ((int64_t)((int64_t)(((int64_t)L_88))-(int64_t)(((uint64_t)L_89)))), L_90, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_83+(int32_t)L_91));
		V_6 = 0;
		int32_t L_92 = V_0;
		V_0 = ((int32_t)((int32_t)L_92-(int32_t)1));
		int32_t L_93 = ___count;
		___count = ((int32_t)((int32_t)L_93+(int32_t)1));
	}

IL_0256:
	{
		int32_t L_94 = ___count;
		if ((((int32_t)L_94) > ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		bool L_95 = ___flush;
		if (!L_95)
		{
			goto IL_027c;
		}
	}
	{
		uint32_t L_96 = V_6;
		if (!L_96)
		{
			goto IL_027c;
		}
	}
	{
		int32_t L_97 = V_1;
		Object_t * L_98 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_99 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_100 = ___bufferArg;
		uint8_t* L_101 = ___bytes;
		int32_t L_102 = V_0;
		uint32_t L_103 = V_5;
		uint32_t L_104 = V_5;
		int32_t L_105 = UTF8Encoding_Fallback_m24262(NULL /*static, unused*/, L_98, L_99, L_100, (uint8_t*)(uint8_t*)L_101, ((int64_t)((int64_t)(((int64_t)L_102))-(int64_t)(((uint64_t)L_103)))), L_104, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_97+(int32_t)L_105));
	}

IL_027c:
	{
		int32_t L_106 = V_1;
		return L_106;
	}
}
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
extern TypeInfo* DecoderFallback_t5350_il2cpp_TypeInfo_var;
extern TypeInfo* Decoder_t3563_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_Fallback_m24262 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t5351 ** ___buffer, ByteU5BU5D_t66** ___bufferArg, uint8_t* ___bytes, int64_t ___index, uint32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DecoderFallback_t5350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9332);
		Decoder_t3563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9350);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	DecoderFallback_t5350 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		DecoderFallbackBuffer_t5351 ** L_0 = ___buffer;
		if ((*((DecoderFallbackBuffer_t5351 **)L_0)))
		{
			goto IL_0025;
		}
	}
	{
		Object_t * L_1 = ___provider;
		V_0 = ((DecoderFallback_t5350 *)IsInst(L_1, DecoderFallback_t5350_il2cpp_TypeInfo_var));
		DecoderFallback_t5350 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		DecoderFallbackBuffer_t5351 ** L_3 = ___buffer;
		DecoderFallback_t5350 * L_4 = V_0;
		NullCheck(L_4);
		DecoderFallbackBuffer_t5351 * L_5 = (DecoderFallbackBuffer_t5351 *)VirtFuncInvoker0< DecoderFallbackBuffer_t5351 * >::Invoke(4 /* System.Text.DecoderFallbackBuffer System.Text.DecoderFallback::CreateFallbackBuffer() */, L_4);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0018:
	{
		DecoderFallbackBuffer_t5351 ** L_6 = ___buffer;
		Object_t * L_7 = ___provider;
		NullCheck(((Decoder_t3563 *)Castclass(L_7, Decoder_t3563_il2cpp_TypeInfo_var)));
		DecoderFallbackBuffer_t5351 * L_8 = Decoder_get_FallbackBuffer_m24073(((Decoder_t3563 *)Castclass(L_7, Decoder_t3563_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_8;
	}

IL_0025:
	{
		ByteU5BU5D_t66** L_9 = ___bufferArg;
		if ((*((ByteU5BU5D_t66**)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		ByteU5BU5D_t66** L_10 = ___bufferArg;
		*((Object_t **)(L_10)) = (Object_t *)((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, 1));
	}

IL_0031:
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_0063;
	}

IL_0037:
	{
		ByteU5BU5D_t66** L_11 = ___bufferArg;
		uint8_t* L_12 = ___bytes;
		int64_t L_13 = ___index;
		int32_t L_14 = V_2;
		NullCheck((*((ByteU5BU5D_t66**)L_11)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ByteU5BU5D_t66**)L_11)), 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema((*((ByteU5BU5D_t66**)L_11)), 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(int32_t)((int32_t)((int32_t)(((int32_t)L_13))+(int32_t)L_14))))));
		DecoderFallbackBuffer_t5351 ** L_15 = ___buffer;
		ByteU5BU5D_t66** L_16 = ___bufferArg;
		NullCheck((*((DecoderFallbackBuffer_t5351 **)L_15)));
		VirtFuncInvoker2< bool, ByteU5BU5D_t66*, int32_t >::Invoke(5 /* System.Boolean System.Text.DecoderFallbackBuffer::Fallback(System.Byte[],System.Int32) */, (*((DecoderFallbackBuffer_t5351 **)L_15)), (*((ByteU5BU5D_t66**)L_16)), 0);
		int32_t L_17 = V_1;
		DecoderFallbackBuffer_t5351 ** L_18 = ___buffer;
		NullCheck((*((DecoderFallbackBuffer_t5351 **)L_18)));
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.DecoderFallbackBuffer::get_Remaining() */, (*((DecoderFallbackBuffer_t5351 **)L_18)));
		V_1 = ((int32_t)((int32_t)L_17+(int32_t)L_19));
		DecoderFallbackBuffer_t5351 ** L_20 = ___buffer;
		NullCheck((*((DecoderFallbackBuffer_t5351 **)L_20)));
		VirtActionInvoker0::Invoke(7 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, (*((DecoderFallbackBuffer_t5351 **)L_20)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_22 = V_2;
		uint32_t L_23 = ___size;
		if ((((int64_t)(((int64_t)L_22))) < ((int64_t)(((uint64_t)L_23)))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_24 = V_1;
		return L_24;
	}
}
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
extern TypeInfo* DecoderFallback_t5350_il2cpp_TypeInfo_var;
extern TypeInfo* Decoder_t3563_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void UTF8Encoding_Fallback_m24263 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t5351 ** ___buffer, ByteU5BU5D_t66** ___bufferArg, uint8_t* ___bytes, int64_t ___byteIndex, uint32_t ___size, uint16_t* ___chars, int32_t* ___charIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DecoderFallback_t5350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9332);
		Decoder_t3563_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9350);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	DecoderFallback_t5350 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		DecoderFallbackBuffer_t5351 ** L_0 = ___buffer;
		if ((*((DecoderFallbackBuffer_t5351 **)L_0)))
		{
			goto IL_0025;
		}
	}
	{
		Object_t * L_1 = ___provider;
		V_0 = ((DecoderFallback_t5350 *)IsInst(L_1, DecoderFallback_t5350_il2cpp_TypeInfo_var));
		DecoderFallback_t5350 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		DecoderFallbackBuffer_t5351 ** L_3 = ___buffer;
		DecoderFallback_t5350 * L_4 = V_0;
		NullCheck(L_4);
		DecoderFallbackBuffer_t5351 * L_5 = (DecoderFallbackBuffer_t5351 *)VirtFuncInvoker0< DecoderFallbackBuffer_t5351 * >::Invoke(4 /* System.Text.DecoderFallbackBuffer System.Text.DecoderFallback::CreateFallbackBuffer() */, L_4);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0018:
	{
		DecoderFallbackBuffer_t5351 ** L_6 = ___buffer;
		Object_t * L_7 = ___provider;
		NullCheck(((Decoder_t3563 *)Castclass(L_7, Decoder_t3563_il2cpp_TypeInfo_var)));
		DecoderFallbackBuffer_t5351 * L_8 = Decoder_get_FallbackBuffer_m24073(((Decoder_t3563 *)Castclass(L_7, Decoder_t3563_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		*((Object_t **)(L_6)) = (Object_t *)L_8;
	}

IL_0025:
	{
		ByteU5BU5D_t66** L_9 = ___bufferArg;
		if ((*((ByteU5BU5D_t66**)L_9)))
		{
			goto IL_0031;
		}
	}
	{
		ByteU5BU5D_t66** L_10 = ___bufferArg;
		*((Object_t **)(L_10)) = (Object_t *)((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, 1));
	}

IL_0031:
	{
		V_1 = 0;
		goto IL_007c;
	}

IL_0035:
	{
		ByteU5BU5D_t66** L_11 = ___bufferArg;
		uint8_t* L_12 = ___bytes;
		int64_t L_13 = ___byteIndex;
		int32_t L_14 = V_1;
		NullCheck((*((ByteU5BU5D_t66**)L_11)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ByteU5BU5D_t66**)L_11)), 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema((*((ByteU5BU5D_t66**)L_11)), 0)) = (uint8_t)(*((uint8_t*)((intptr_t)((intptr_t)L_12+(intptr_t)(((intptr_t)((int64_t)((int64_t)L_13+(int64_t)(((int64_t)L_14))))))))));
		DecoderFallbackBuffer_t5351 ** L_15 = ___buffer;
		ByteU5BU5D_t66** L_16 = ___bufferArg;
		NullCheck((*((DecoderFallbackBuffer_t5351 **)L_15)));
		VirtFuncInvoker2< bool, ByteU5BU5D_t66*, int32_t >::Invoke(5 /* System.Boolean System.Text.DecoderFallbackBuffer::Fallback(System.Byte[],System.Int32) */, (*((DecoderFallbackBuffer_t5351 **)L_15)), (*((ByteU5BU5D_t66**)L_16)), 0);
		goto IL_0067;
	}

IL_004f:
	{
		uint16_t* L_17 = ___chars;
		int32_t* L_18 = ___charIndex;
		int32_t* L_19 = ___charIndex;
		int32_t L_20 = (*((int32_t*)L_19));
		V_2 = L_20;
		*((int32_t*)(L_18)) = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
		int32_t L_21 = V_2;
		DecoderFallbackBuffer_t5351 ** L_22 = ___buffer;
		NullCheck((*((DecoderFallbackBuffer_t5351 **)L_22)));
		uint16_t L_23 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(6 /* System.Char System.Text.DecoderFallbackBuffer::GetNextChar() */, (*((DecoderFallbackBuffer_t5351 **)L_22)));
		*((int16_t*)(((intptr_t)((intptr_t)L_17+(int32_t)((int32_t)((int32_t)L_21*(int32_t)2)))))) = (int16_t)L_23;
	}

IL_0067:
	{
		DecoderFallbackBuffer_t5351 ** L_24 = ___buffer;
		NullCheck((*((DecoderFallbackBuffer_t5351 **)L_24)));
		int32_t L_25 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.DecoderFallbackBuffer::get_Remaining() */, (*((DecoderFallbackBuffer_t5351 **)L_24)));
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		DecoderFallbackBuffer_t5351 ** L_26 = ___buffer;
		NullCheck((*((DecoderFallbackBuffer_t5351 **)L_26)));
		VirtActionInvoker0::Invoke(7 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, (*((DecoderFallbackBuffer_t5351 **)L_26)));
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_28 = V_1;
		uint32_t L_29 = ___size;
		if ((((int64_t)(((int64_t)L_28))) < ((int64_t)(((uint64_t)L_29)))))
		{
			goto IL_0035;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetCharCount_m24264 (UTF8Encoding_t3729 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	DecoderFallbackBuffer_t5351 * V_0 = {0};
	ByteU5BU5D_t66* V_1 = {0};
	{
		V_0 = (DecoderFallbackBuffer_t5351 *)NULL;
		V_1 = (ByteU5BU5D_t66*)NULL;
		ByteU5BU5D_t66* L_0 = ___bytes;
		int32_t L_1 = ___index;
		int32_t L_2 = ___count;
		DecoderFallback_t5350 * L_3 = Encoding_get_DecoderFallback_m24141(__this, /*hidden argument*/NULL);
		int32_t L_4 = UTF8Encoding_InternalGetCharCount_m24260(NULL /*static, unused*/, L_0, L_1, L_2, 0, 0, L_3, (&V_0), (&V_1), 1, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_InternalGetChars_m24265 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t711* ___chars, int32_t ___charIndex, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t5351 ** ___fallbackBuffer, ByteU5BU5D_t66** ___bufferArg, bool ___flush, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t* V_0 = {0};
	uint8_t* V_1 = {0};
	uintptr_t G_B19_0;
	uintptr_t G_B26_0;
	{
		ByteU5BU5D_t66* L_0 = ___bytes;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		CharU5BU5D_t711* L_2 = ___chars;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t784 * L_3 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_3, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = ___byteIndex;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = ___byteIndex;
		ByteU5BU5D_t66* L_6 = ___bytes;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_003b;
		}
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_7 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_8 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_8, (String_t*) &_stringLiteral6437, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003b:
	{
		int32_t L_9 = ___byteCount;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_10 = ___byteCount;
		ByteU5BU5D_t66* L_11 = ___bytes;
		NullCheck(L_11);
		int32_t L_12 = ___byteIndex;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_005c;
		}
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_13 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_14 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_14, (String_t*) &_stringLiteral6441, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005c:
	{
		int32_t L_15 = ___charIndex;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_16 = ___charIndex;
		CharU5BU5D_t711* L_17 = ___chars;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_18 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_19 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_19, (String_t*) &_stringLiteral6435, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_007d:
	{
		int32_t L_20 = ___charIndex;
		CharU5BU5D_t711* L_21 = ___chars;
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)(((int32_t)(((Array_t *)L_21)->max_length)))))))
		{
			goto IL_0086;
		}
	}
	{
		return 0;
	}

IL_0086:
	{
		CharU5BU5D_t711* L_22 = ___chars;
		if (!L_22)
		{
			goto IL_008e;
		}
	}
	{
		CharU5BU5D_t711* L_23 = ___chars;
		NullCheck(L_23);
		if ((((int32_t)(((Array_t *)L_23)->max_length))))
		{
			goto IL_0092;
		}
	}

IL_008e:
	{
		G_B19_0 = (((uintptr_t)0));
		goto IL_0099;
	}

IL_0092:
	{
		CharU5BU5D_t711* L_24 = ___chars;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		G_B19_0 = ((uintptr_t)(((uint16_t*)(uint16_t*)SZArrayLdElema(L_24, 0))));
	}

IL_0099:
	{
		V_0 = (uint16_t*)G_B19_0;
		int32_t L_25 = ___byteCount;
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_26 = ___byteIndex;
		ByteU5BU5D_t66* L_27 = ___bytes;
		NullCheck(L_27);
		if ((!(((uint32_t)L_26) == ((uint32_t)(((int32_t)(((Array_t *)L_27)->max_length)))))))
		{
			goto IL_00c4;
		}
	}

IL_00a3:
	{
		uint16_t* L_28 = V_0;
		int32_t L_29 = ___charIndex;
		CharU5BU5D_t711* L_30 = ___chars;
		NullCheck(L_30);
		int32_t L_31 = ___charIndex;
		uint32_t* L_32 = ___leftOverBits;
		uint32_t* L_33 = ___leftOverCount;
		Object_t * L_34 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_35 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_36 = ___bufferArg;
		bool L_37 = ___flush;
		int32_t L_38 = UTF8Encoding_InternalGetChars_m24266(NULL /*static, unused*/, (uint8_t*)(uint8_t*)(((uintptr_t)0)), 0, (uint16_t*)(uint16_t*)((intptr_t)((intptr_t)L_28+(int32_t)((int32_t)((int32_t)L_29*(int32_t)2)))), ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))-(int32_t)L_31)), L_32, L_33, L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_00c4:
	{
		ByteU5BU5D_t66* L_39 = ___bytes;
		if (!L_39)
		{
			goto IL_00cc;
		}
	}
	{
		ByteU5BU5D_t66* L_40 = ___bytes;
		NullCheck(L_40);
		if ((((int32_t)(((Array_t *)L_40)->max_length))))
		{
			goto IL_00d0;
		}
	}

IL_00cc:
	{
		G_B26_0 = (((uintptr_t)0));
		goto IL_00d7;
	}

IL_00d0:
	{
		ByteU5BU5D_t66* L_41 = ___bytes;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		G_B26_0 = ((uintptr_t)(((uint8_t*)(uint8_t*)SZArrayLdElema(L_41, 0))));
	}

IL_00d7:
	{
		V_1 = (uint8_t*)G_B26_0;
		uint8_t* L_42 = V_1;
		int32_t L_43 = ___byteIndex;
		int32_t L_44 = ___byteCount;
		uint16_t* L_45 = V_0;
		int32_t L_46 = ___charIndex;
		CharU5BU5D_t711* L_47 = ___chars;
		NullCheck(L_47);
		int32_t L_48 = ___charIndex;
		uint32_t* L_49 = ___leftOverBits;
		uint32_t* L_50 = ___leftOverCount;
		Object_t * L_51 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_52 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_53 = ___bufferArg;
		bool L_54 = ___flush;
		int32_t L_55 = UTF8Encoding_InternalGetChars_m24266(NULL /*static, unused*/, (uint8_t*)(uint8_t*)((intptr_t)((intptr_t)L_42+(int32_t)L_43)), L_44, (uint16_t*)(uint16_t*)((intptr_t)((intptr_t)L_45+(int32_t)((int32_t)((int32_t)L_46*(int32_t)2)))), ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_47)->max_length)))-(int32_t)L_48)), L_49, L_50, L_51, L_52, L_53, L_54, /*hidden argument*/NULL);
		return L_55;
	}
}
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_InternalGetChars_m24266 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t5351 ** ___fallbackBuffer, ByteU5BU5D_t66** ___bufferArg, bool ___flush, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	uint32_t V_11 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		int32_t L_0 = ___charCount;
		V_2 = L_0;
		int32_t L_1 = V_0;
		V_3 = L_1;
		uint32_t* L_2 = ___leftOverCount;
		if ((*((uint32_t*)L_2)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_3 = V_1;
		int32_t L_4 = ___byteCount;
		V_4 = ((int32_t)((int32_t)L_3+(int32_t)L_4));
		goto IL_003d;
	}

IL_0014:
	{
		uint8_t* L_5 = ___bytes;
		int32_t L_6 = V_1;
		if ((((int32_t)(*((uint8_t*)((intptr_t)((intptr_t)L_5+(int32_t)L_6))))) >= ((int32_t)((int32_t)128))))
		{
			goto IL_002c;
		}
	}
	{
		uint16_t* L_7 = ___chars;
		int32_t L_8 = V_3;
		uint8_t* L_9 = ___bytes;
		int32_t L_10 = V_1;
		*((int16_t*)(((intptr_t)((intptr_t)L_7+(int32_t)((int32_t)((int32_t)L_8*(int32_t)2)))))) = (int16_t)(((uint16_t)(*((uint8_t*)((intptr_t)((intptr_t)L_9+(int32_t)L_10))))));
		goto IL_002e;
	}

IL_002c:
	{
		goto IL_0042;
	}

IL_002e:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = ___byteCount;
		___byteCount = ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_4;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0014;
		}
	}

IL_0042:
	{
		uint32_t* L_16 = ___leftOverBits;
		V_6 = (*((uint32_t*)L_16));
		uint32_t* L_17 = ___leftOverCount;
		V_7 = ((int32_t)((int32_t)(*((uint32_t*)L_17))&(int32_t)((int32_t)15)));
		uint32_t* L_18 = ___leftOverCount;
		V_8 = ((int32_t)((int32_t)((int32_t)((uint32_t)(*((uint32_t*)L_18))>>4))&(int32_t)((int32_t)15)));
		int32_t L_19 = V_1;
		int32_t L_20 = ___byteCount;
		V_9 = ((int32_t)((int32_t)L_19+(int32_t)L_20));
		goto IL_0306;
	}

IL_0063:
	{
		uint8_t* L_21 = ___bytes;
		int32_t L_22 = V_1;
		V_5 = (*((uint8_t*)((intptr_t)((intptr_t)L_21+(int32_t)L_22))));
		uint32_t L_23 = V_8;
		if (L_23)
		{
			goto IL_0151;
		}
	}
	{
		uint32_t L_24 = V_5;
		if ((!(((uint32_t)L_24) < ((uint32_t)((int32_t)128)))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0092;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_27 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6438, /*hidden argument*/NULL);
		ArgumentException_t725 * L_28 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3862(L_28, L_27, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_0092:
	{
		uint16_t* L_29 = ___chars;
		int32_t L_30 = V_3;
		int32_t L_31 = L_30;
		V_3 = ((int32_t)((int32_t)L_31+(int32_t)1));
		uint32_t L_32 = V_5;
		*((int16_t*)(((intptr_t)((intptr_t)L_29+(int32_t)((int32_t)((int32_t)L_31*(int32_t)2)))))) = (int16_t)(((uint16_t)L_32));
		goto IL_014c;
	}

IL_00a4:
	{
		uint32_t L_33 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)224)))) == ((uint32_t)((int32_t)192)))))
		{
			goto IL_00c5;
		}
	}
	{
		uint32_t L_34 = V_5;
		V_6 = ((int32_t)((int32_t)L_34&(int32_t)((int32_t)31)));
		V_7 = 1;
		V_8 = 2;
		goto IL_014c;
	}

IL_00c5:
	{
		uint32_t L_35 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_35&(int32_t)((int32_t)240)))) == ((uint32_t)((int32_t)224)))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t L_36 = V_5;
		V_6 = ((int32_t)((int32_t)L_36&(int32_t)((int32_t)15)));
		V_7 = 1;
		V_8 = 3;
		goto IL_014c;
	}

IL_00e3:
	{
		uint32_t L_37 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)248)))) == ((uint32_t)((int32_t)240)))))
		{
			goto IL_0100;
		}
	}
	{
		uint32_t L_38 = V_5;
		V_6 = ((int32_t)((int32_t)L_38&(int32_t)7));
		V_7 = 1;
		V_8 = 4;
		goto IL_014c;
	}

IL_0100:
	{
		uint32_t L_39 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)252)))) == ((uint32_t)((int32_t)248)))))
		{
			goto IL_011d;
		}
	}
	{
		uint32_t L_40 = V_5;
		V_6 = ((int32_t)((int32_t)L_40&(int32_t)3));
		V_7 = 1;
		V_8 = 5;
		goto IL_014c;
	}

IL_011d:
	{
		uint32_t L_41 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_41&(int32_t)((int32_t)254)))) == ((uint32_t)((int32_t)252)))))
		{
			goto IL_013a;
		}
	}
	{
		uint32_t L_42 = V_5;
		V_6 = ((int32_t)((int32_t)L_42&(int32_t)3));
		V_7 = 1;
		V_8 = 6;
		goto IL_014c;
	}

IL_013a:
	{
		Object_t * L_43 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_44 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_45 = ___bufferArg;
		uint8_t* L_46 = ___bytes;
		int32_t L_47 = V_1;
		uint16_t* L_48 = ___chars;
		UTF8Encoding_Fallback_m24263(NULL /*static, unused*/, L_43, L_44, L_45, (uint8_t*)(uint8_t*)L_46, (((int64_t)L_47)), 1, (uint16_t*)(uint16_t*)L_48, (&V_3), /*hidden argument*/NULL);
	}

IL_014c:
	{
		goto IL_0302;
	}

IL_0151:
	{
		uint32_t L_49 = V_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_49&(int32_t)((int32_t)192)))) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_02e4;
		}
	}
	{
		uint32_t L_50 = V_6;
		uint32_t L_51 = V_5;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_50<<(int32_t)6))|(int32_t)((int32_t)((int32_t)L_51&(int32_t)((int32_t)63)))));
		uint32_t L_52 = V_7;
		int32_t L_53 = ((int32_t)((int32_t)L_52+(int32_t)1));
		V_7 = L_53;
		uint32_t L_54 = V_8;
		if ((!(((uint32_t)L_53) >= ((uint32_t)L_54))))
		{
			goto IL_02e2;
		}
	}
	{
		uint32_t L_55 = V_6;
		if ((!(((uint32_t)L_55) < ((uint32_t)((int32_t)65536)))))
		{
			goto IL_0269;
		}
	}
	{
		V_10 = 0;
		uint32_t L_56 = V_8;
		V_11 = L_56;
		uint32_t L_57 = V_11;
		if (((int32_t)((int32_t)L_57-(int32_t)2)) == 0)
		{
			goto IL_01af;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)2)) == 1)
		{
			goto IL_01bc;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)2)) == 2)
		{
			goto IL_01cc;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)2)) == 3)
		{
			goto IL_01dc;
		}
		if (((int32_t)((int32_t)L_57-(int32_t)2)) == 4)
		{
			goto IL_01ec;
		}
	}
	{
		goto IL_01fc;
	}

IL_01af:
	{
		uint32_t L_58 = V_6;
		V_10 = ((((int32_t)((!(((uint32_t)L_58) <= ((uint32_t)((int32_t)127))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01fc;
	}

IL_01bc:
	{
		uint32_t L_59 = V_6;
		V_10 = ((((int32_t)((!(((uint32_t)L_59) <= ((uint32_t)((int32_t)2047))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t L_60 = V_6;
		V_10 = ((((int32_t)((!(((uint32_t)L_60) <= ((uint32_t)((int32_t)65535))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01fc;
	}

IL_01dc:
	{
		uint32_t L_61 = V_6;
		V_10 = ((((int32_t)((!(((uint32_t)L_61) <= ((uint32_t)((int32_t)2097151))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01fc;
	}

IL_01ec:
	{
		uint32_t L_62 = V_6;
		V_10 = ((((int32_t)((!(((uint32_t)L_62) <= ((uint32_t)((int32_t)67108863))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01fc;
	}

IL_01fc:
	{
		bool L_63 = V_10;
		if (!L_63)
		{
			goto IL_0219;
		}
	}
	{
		Object_t * L_64 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_65 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_66 = ___bufferArg;
		uint8_t* L_67 = ___bytes;
		int32_t L_68 = V_1;
		uint32_t L_69 = V_7;
		uint32_t L_70 = V_7;
		uint16_t* L_71 = ___chars;
		UTF8Encoding_Fallback_m24263(NULL /*static, unused*/, L_64, L_65, L_66, (uint8_t*)(uint8_t*)L_67, ((int64_t)((int64_t)(((int64_t)L_68))-(int64_t)(((uint64_t)L_69)))), L_70, (uint16_t*)(uint16_t*)L_71, (&V_3), /*hidden argument*/NULL);
		goto IL_0267;
	}

IL_0219:
	{
		uint32_t L_72 = V_6;
		if ((!(((uint32_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)63488)))) == ((uint32_t)((int32_t)55296)))))
		{
			goto IL_0241;
		}
	}
	{
		Object_t * L_73 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_74 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_75 = ___bufferArg;
		uint8_t* L_76 = ___bytes;
		int32_t L_77 = V_1;
		uint32_t L_78 = V_7;
		uint32_t L_79 = V_7;
		uint16_t* L_80 = ___chars;
		UTF8Encoding_Fallback_m24263(NULL /*static, unused*/, L_73, L_74, L_75, (uint8_t*)(uint8_t*)L_76, ((int64_t)((int64_t)(((int64_t)L_77))-(int64_t)(((uint64_t)L_78)))), L_79, (uint16_t*)(uint16_t*)L_80, (&V_3), /*hidden argument*/NULL);
		goto IL_0267;
	}

IL_0241:
	{
		int32_t L_81 = V_3;
		int32_t L_82 = V_2;
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_025a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_83 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6438, /*hidden argument*/NULL);
		ArgumentException_t725 * L_84 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3862(L_84, L_83, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_84);
	}

IL_025a:
	{
		uint16_t* L_85 = ___chars;
		int32_t L_86 = V_3;
		int32_t L_87 = L_86;
		V_3 = ((int32_t)((int32_t)L_87+(int32_t)1));
		uint32_t L_88 = V_6;
		*((int16_t*)(((intptr_t)((intptr_t)L_85+(int32_t)((int32_t)((int32_t)L_87*(int32_t)2)))))) = (int16_t)(((uint16_t)L_88));
	}

IL_0267:
	{
		goto IL_02df;
	}

IL_0269:
	{
		uint32_t L_89 = V_6;
		if ((!(((uint32_t)L_89) < ((uint32_t)((int32_t)1114112)))))
		{
			goto IL_02c8;
		}
	}
	{
		int32_t L_90 = V_3;
		int32_t L_91 = V_2;
		if ((((int32_t)((int32_t)((int32_t)L_90+(int32_t)2))) <= ((int32_t)L_91)))
		{
			goto IL_028d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_92 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6438, /*hidden argument*/NULL);
		ArgumentException_t725 * L_93 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3862(L_93, L_92, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_93);
	}

IL_028d:
	{
		uint32_t L_94 = V_6;
		V_6 = ((int32_t)((int32_t)L_94-(int32_t)((int32_t)65536)));
		uint16_t* L_95 = ___chars;
		int32_t L_96 = V_3;
		int32_t L_97 = L_96;
		V_3 = ((int32_t)((int32_t)L_97+(int32_t)1));
		uint32_t L_98 = V_6;
		*((int16_t*)(((intptr_t)((intptr_t)L_95+(int32_t)((int32_t)((int32_t)L_97*(int32_t)2)))))) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_98>>((int32_t)10)))+(int32_t)((int32_t)55296)))));
		uint16_t* L_99 = ___chars;
		int32_t L_100 = V_3;
		int32_t L_101 = L_100;
		V_3 = ((int32_t)((int32_t)L_101+(int32_t)1));
		uint32_t L_102 = V_6;
		*((int16_t*)(((intptr_t)((intptr_t)L_99+(int32_t)((int32_t)((int32_t)L_101*(int32_t)2)))))) = (int16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_102&(int32_t)((int32_t)1023)))+(int32_t)((int32_t)56320)))));
		goto IL_02df;
	}

IL_02c8:
	{
		Object_t * L_103 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_104 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_105 = ___bufferArg;
		uint8_t* L_106 = ___bytes;
		int32_t L_107 = V_1;
		uint32_t L_108 = V_7;
		uint32_t L_109 = V_7;
		uint16_t* L_110 = ___chars;
		UTF8Encoding_Fallback_m24263(NULL /*static, unused*/, L_103, L_104, L_105, (uint8_t*)(uint8_t*)L_106, ((int64_t)((int64_t)(((int64_t)L_107))-(int64_t)(((uint64_t)L_108)))), L_109, (uint16_t*)(uint16_t*)L_110, (&V_3), /*hidden argument*/NULL);
	}

IL_02df:
	{
		V_8 = 0;
	}

IL_02e2:
	{
		goto IL_0302;
	}

IL_02e4:
	{
		Object_t * L_111 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_112 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_113 = ___bufferArg;
		uint8_t* L_114 = ___bytes;
		int32_t L_115 = V_1;
		uint32_t L_116 = V_7;
		uint32_t L_117 = V_7;
		uint16_t* L_118 = ___chars;
		UTF8Encoding_Fallback_m24263(NULL /*static, unused*/, L_111, L_112, L_113, (uint8_t*)(uint8_t*)L_114, ((int64_t)((int64_t)(((int64_t)L_115))-(int64_t)(((uint64_t)L_116)))), L_117, (uint16_t*)(uint16_t*)L_118, (&V_3), /*hidden argument*/NULL);
		V_8 = 0;
		int32_t L_119 = V_1;
		V_1 = ((int32_t)((int32_t)L_119-(int32_t)1));
	}

IL_0302:
	{
		int32_t L_120 = V_1;
		V_1 = ((int32_t)((int32_t)L_120+(int32_t)1));
	}

IL_0306:
	{
		int32_t L_121 = V_1;
		int32_t L_122 = V_9;
		if ((((int32_t)L_121) < ((int32_t)L_122)))
		{
			goto IL_0063;
		}
	}
	{
		bool L_123 = ___flush;
		if (!L_123)
		{
			goto IL_032d;
		}
	}
	{
		uint32_t L_124 = V_8;
		if (!L_124)
		{
			goto IL_032d;
		}
	}
	{
		Object_t * L_125 = ___provider;
		DecoderFallbackBuffer_t5351 ** L_126 = ___fallbackBuffer;
		ByteU5BU5D_t66** L_127 = ___bufferArg;
		uint8_t* L_128 = ___bytes;
		int32_t L_129 = V_1;
		uint32_t L_130 = V_7;
		uint32_t L_131 = V_7;
		uint16_t* L_132 = ___chars;
		UTF8Encoding_Fallback_m24263(NULL /*static, unused*/, L_125, L_126, L_127, (uint8_t*)(uint8_t*)L_128, ((int64_t)((int64_t)(((int64_t)L_129))-(int64_t)(((uint64_t)L_130)))), L_131, (uint16_t*)(uint16_t*)L_132, (&V_3), /*hidden argument*/NULL);
	}

IL_032d:
	{
		uint32_t* L_133 = ___leftOverBits;
		uint32_t L_134 = V_6;
		*((int32_t*)(L_133)) = (int32_t)L_134;
		uint32_t* L_135 = ___leftOverCount;
		uint32_t L_136 = V_7;
		uint32_t L_137 = V_8;
		*((int32_t*)(L_135)) = (int32_t)((int32_t)((int32_t)L_136|(int32_t)((int32_t)((int32_t)L_137<<(int32_t)4))));
		int32_t L_138 = V_3;
		int32_t L_139 = V_0;
		return ((int32_t)((int32_t)L_138-(int32_t)L_139));
	}
}
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Encoding_GetChars_m24267 (UTF8Encoding_t3729 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t711* ___chars, int32_t ___charIndex, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	DecoderFallbackBuffer_t5351 * V_2 = {0};
	ByteU5BU5D_t66* V_3 = {0};
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = (DecoderFallbackBuffer_t5351 *)NULL;
		V_3 = (ByteU5BU5D_t66*)NULL;
		ByteU5BU5D_t66* L_0 = ___bytes;
		int32_t L_1 = ___byteIndex;
		int32_t L_2 = ___byteCount;
		CharU5BU5D_t711* L_3 = ___chars;
		int32_t L_4 = ___charIndex;
		DecoderFallback_t5350 * L_5 = Encoding_get_DecoderFallback_m24141(__this, /*hidden argument*/NULL);
		int32_t L_6 = UTF8Encoding_InternalGetChars_m24265(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (&V_0), (&V_1), L_5, (&V_2), (&V_3), 1, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_GetMaxByteCount_m24268 (UTF8Encoding_t3729 * __this, int32_t ___charCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___charCount;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_1 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6442, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_2 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_2, (String_t*) &_stringLiteral6436, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = ___charCount;
		return ((int32_t)((int32_t)L_3*(int32_t)4));
	}
}
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF8Encoding_GetMaxCharCount_m24269 (UTF8Encoding_t3729 * __this, int32_t ___byteCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___byteCount;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_1 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6442, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_2 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_2, (String_t*) &_stringLiteral6441, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount;
		return L_3;
	}
}
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
extern TypeInfo* UTF8Decoder_t5371_il2cpp_TypeInfo_var;
extern "C" Decoder_t3563 * UTF8Encoding_GetDecoder_m24270 (UTF8Encoding_t3729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UTF8Decoder_t5371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9351);
		s_Il2CppMethodIntialized = true;
	}
	{
		DecoderFallback_t5350 * L_0 = Encoding_get_DecoderFallback_m24141(__this, /*hidden argument*/NULL);
		UTF8Decoder_t5371 * L_1 = (UTF8Decoder_t5371 *)il2cpp_codegen_object_new (UTF8Decoder_t5371_il2cpp_TypeInfo_var);
		UTF8Decoder__ctor_m24247(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t66* UTF8Encoding_GetPreamble_m24271 (UTF8Encoding_t3729 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t66* V_0 = {0};
	{
		bool L_0 = (__this->___emitIdentifier_28);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		V_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, 3));
		ByteU5BU5D_t66* L_1 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0)) = (uint8_t)((int32_t)239);
		ByteU5BU5D_t66* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 1)) = (uint8_t)((int32_t)187);
		ByteU5BU5D_t66* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 2)) = (uint8_t)((int32_t)191);
		ByteU5BU5D_t66* L_4 = V_0;
		return L_4;
	}

IL_0029:
	{
		return ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, 0));
	}
}
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
extern TypeInfo* UTF8Encoding_t3729_il2cpp_TypeInfo_var;
extern "C" bool UTF8Encoding_Equals_m24272 (UTF8Encoding_t3729 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UTF8Encoding_t3729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6189);
		s_Il2CppMethodIntialized = true;
	}
	UTF8Encoding_t3729 * V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((UTF8Encoding_t3729 *)IsInst(L_0, UTF8Encoding_t3729_il2cpp_TypeInfo_var));
		UTF8Encoding_t3729 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_2 = (((Encoding_t753 *)__this)->___codePage_0);
		UTF8Encoding_t3729 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (((Encoding_t753 *)L_3)->___codePage_0);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = (__this->___emitIdentifier_28);
		UTF8Encoding_t3729 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (L_6->___emitIdentifier_28);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		DecoderFallback_t5350 * L_8 = Encoding_get_DecoderFallback_m24141(__this, /*hidden argument*/NULL);
		UTF8Encoding_t3729 * L_9 = V_0;
		NullCheck(L_9);
		DecoderFallback_t5350 * L_10 = Encoding_get_DecoderFallback_m24141(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_8, L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		EncoderFallback_t5358 * L_12 = Encoding_get_EncoderFallback_m24143(__this, /*hidden argument*/NULL);
		UTF8Encoding_t3729 * L_13 = V_0;
		NullCheck(L_13);
		EncoderFallback_t5358 * L_14 = Encoding_get_EncoderFallback_m24143(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_12, L_14);
		G_B6_0 = ((int32_t)(L_15));
		goto IL_004d;
	}

IL_004c:
	{
		G_B6_0 = 0;
	}

IL_004d:
	{
		return G_B6_0;
	}

IL_004e:
	{
		return 0;
	}
}
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
extern "C" int32_t UTF8Encoding_GetHashCode_m24273 (UTF8Encoding_t3729 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Encoding_GetHashCode_m24157(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
extern "C" int32_t UTF8Encoding_GetByteCount_m24274 (UTF8Encoding_t3729 * __this, String_t* ___chars, const MethodInfo* method)
{
	{
		String_t* L_0 = ___chars;
		int32_t L_1 = Encoding_GetByteCount_m24146(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF8Encoding_GetString_m24275 (UTF8Encoding_t3729 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		ByteU5BU5D_t66* L_0 = ___bytes;
		int32_t L_1 = ___index;
		int32_t L_2 = ___count;
		String_t* L_3 = Encoding_GetString_m24159(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Text.UTF32Encoding/UTF32Decoder
#include "mscorlib_System_Text_UTF32Encoding_UTF32Decoder.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.UTF32Encoding/UTF32Decoder
#include "mscorlib_System_Text_UTF32Encoding_UTF32DecoderMethodDeclarations.h"



// System.Void System.Text.UTF32Encoding/UTF32Decoder::.ctor(System.Boolean)
extern "C" void UTF32Decoder__ctor_m24276 (UTF32Decoder_t5372 * __this, bool ___bigEndian, const MethodInfo* method)
{
	{
		Decoder__ctor_m24071(__this, /*hidden argument*/NULL);
		bool L_0 = ___bigEndian;
		__this->___bigEndian_2 = L_0;
		__this->___leftOverByte_3 = (-1);
		return;
	}
}
// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Decoder_GetChars_m24277 (UTF32Decoder_t5372 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t711* ___chars, int32_t ___charIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		ByteU5BU5D_t66* L_0 = ___bytes;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		CharU5BU5D_t711* L_2 = ___chars;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t784 * L_3 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_3, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___byteIndex;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___byteIndex;
		ByteU5BU5D_t66* L_6 = ___bytes;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_7 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_8 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_8, (String_t*) &_stringLiteral6437, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003c:
	{
		int32_t L_9 = ___byteCount;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___byteCount;
		ByteU5BU5D_t66* L_11 = ___bytes;
		NullCheck(L_11);
		int32_t L_12 = ___byteIndex;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_13 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_14 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_14, (String_t*) &_stringLiteral6441, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005d:
	{
		int32_t L_15 = ___charIndex;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___charIndex;
		CharU5BU5D_t711* L_17 = ___chars;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_18 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_19 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_19, (String_t*) &_stringLiteral6435, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_007f:
	{
		int32_t L_20 = ___charIndex;
		V_0 = L_20;
		int32_t L_21 = (__this->___leftOverByte_3);
		V_1 = L_21;
		CharU5BU5D_t711* L_22 = ___chars;
		NullCheck(L_22);
		V_2 = (((int32_t)(((Array_t *)L_22)->max_length)));
		int32_t L_23 = (__this->___leftOverLength_4);
		V_4 = ((int32_t)((int32_t)4-(int32_t)L_23));
		int32_t L_24 = (__this->___leftOverLength_4);
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_25 = ___byteCount;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_0189;
		}
	}
	{
		bool L_27 = (__this->___bigEndian_2);
		if (!L_27)
		{
			goto IL_00e5;
		}
	}
	{
		V_5 = 0;
		goto IL_00dd;
	}

IL_00b9:
	{
		int32_t L_28 = V_1;
		ByteU5BU5D_t66* L_29 = ___bytes;
		int32_t L_30 = ___byteIndex;
		int32_t L_31 = L_30;
		___byteIndex = ((int32_t)((int32_t)L_31+(int32_t)1));
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_31);
		int32_t L_32 = L_31;
		int32_t L_33 = ___byteCount;
		int32_t L_34 = L_33;
		___byteCount = ((int32_t)((int32_t)L_34-(int32_t)1));
		V_1 = ((int32_t)((int32_t)L_28+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_32))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)4-(int32_t)L_34))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		int32_t L_35 = V_5;
		V_5 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_00dd:
	{
		int32_t L_36 = V_5;
		int32_t L_37 = V_4;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00b9;
		}
	}
	{
		goto IL_0112;
	}

IL_00e5:
	{
		V_6 = 0;
		goto IL_010c;
	}

IL_00ea:
	{
		int32_t L_38 = V_1;
		ByteU5BU5D_t66* L_39 = ___bytes;
		int32_t L_40 = ___byteIndex;
		int32_t L_41 = L_40;
		___byteIndex = ((int32_t)((int32_t)L_41+(int32_t)1));
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_41);
		int32_t L_42 = L_41;
		int32_t L_43 = ___byteCount;
		int32_t L_44 = L_43;
		___byteCount = ((int32_t)((int32_t)L_44-(int32_t)1));
		V_1 = ((int32_t)((int32_t)L_38+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_42))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_44&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		int32_t L_45 = V_6;
		V_6 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_010c:
	{
		int32_t L_46 = V_6;
		int32_t L_47 = V_4;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00ea;
		}
	}

IL_0112:
	{
		int32_t L_48 = V_1;
		if ((((int32_t)L_48) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_49 = V_0;
		int32_t L_50 = V_2;
		if ((((int32_t)((int32_t)((int32_t)L_49+(int32_t)1))) < ((int32_t)L_50)))
		{
			goto IL_0124;
		}
	}

IL_0120:
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_2;
		if ((((int32_t)L_51) >= ((int32_t)L_52)))
		{
			goto IL_0134;
		}
	}

IL_0124:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_53 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6438, /*hidden argument*/NULL);
		ArgumentException_t725 * L_54 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4217(L_54, L_53, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_54);
	}

IL_0134:
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0176;
		}
	}
	{
		CharU5BU5D_t711* L_56 = ___chars;
		int32_t L_57 = V_0;
		int32_t L_58 = L_57;
		V_0 = ((int32_t)((int32_t)L_58+(int32_t)1));
		int32_t L_59 = V_1;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_58);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_56, L_58)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_59-(int32_t)((int32_t)10000)))/(int32_t)((int32_t)1024)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t711* L_60 = ___chars;
		int32_t L_61 = V_0;
		int32_t L_62 = L_61;
		V_0 = ((int32_t)((int32_t)L_62+(int32_t)1));
		int32_t L_63 = V_1;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_62);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_63-(int32_t)((int32_t)10000)))%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		goto IL_0180;
	}

IL_0176:
	{
		CharU5BU5D_t711* L_64 = ___chars;
		int32_t L_65 = V_0;
		int32_t L_66 = L_65;
		V_0 = ((int32_t)((int32_t)L_66+(int32_t)1));
		int32_t L_67 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_66);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_64, L_66)) = (uint16_t)(((uint16_t)L_67));
	}

IL_0180:
	{
		V_1 = (-1);
		__this->___leftOverLength_4 = 0;
	}

IL_0189:
	{
		goto IL_0228;
	}

IL_018e:
	{
		bool L_68 = (__this->___bigEndian_2);
		if (!L_68)
		{
			goto IL_01cd;
		}
	}
	{
		ByteU5BU5D_t66* L_69 = ___bytes;
		int32_t L_70 = ___byteIndex;
		int32_t L_71 = L_70;
		___byteIndex = ((int32_t)((int32_t)L_71+(int32_t)1));
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_71);
		int32_t L_72 = L_71;
		ByteU5BU5D_t66* L_73 = ___bytes;
		int32_t L_74 = ___byteIndex;
		int32_t L_75 = L_74;
		___byteIndex = ((int32_t)((int32_t)L_75+(int32_t)1));
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, L_75);
		int32_t L_76 = L_75;
		ByteU5BU5D_t66* L_77 = ___bytes;
		int32_t L_78 = ___byteIndex;
		int32_t L_79 = L_78;
		___byteIndex = ((int32_t)((int32_t)L_79+(int32_t)1));
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, L_79);
		int32_t L_80 = L_79;
		ByteU5BU5D_t66* L_81 = ___bytes;
		int32_t L_82 = ___byteIndex;
		int32_t L_83 = L_82;
		___byteIndex = ((int32_t)((int32_t)L_83+(int32_t)1));
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, L_83);
		int32_t L_84 = L_83;
		V_3 = (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_69, L_72))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_73, L_76))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_80))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_84))))));
		goto IL_0202;
	}

IL_01cd:
	{
		ByteU5BU5D_t66* L_85 = ___bytes;
		int32_t L_86 = ___byteIndex;
		int32_t L_87 = L_86;
		___byteIndex = ((int32_t)((int32_t)L_87+(int32_t)1));
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, L_87);
		int32_t L_88 = L_87;
		ByteU5BU5D_t66* L_89 = ___bytes;
		int32_t L_90 = ___byteIndex;
		int32_t L_91 = L_90;
		___byteIndex = ((int32_t)((int32_t)L_91+(int32_t)1));
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, L_91);
		int32_t L_92 = L_91;
		ByteU5BU5D_t66* L_93 = ___bytes;
		int32_t L_94 = ___byteIndex;
		int32_t L_95 = L_94;
		___byteIndex = ((int32_t)((int32_t)L_95+(int32_t)1));
		NullCheck(L_93);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_93, L_95);
		int32_t L_96 = L_95;
		ByteU5BU5D_t66* L_97 = ___bytes;
		int32_t L_98 = ___byteIndex;
		int32_t L_99 = L_98;
		___byteIndex = ((int32_t)((int32_t)L_99+(int32_t)1));
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, L_99);
		int32_t L_100 = L_99;
		V_3 = (((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_85, L_88))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_89, L_92))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_93, L_96))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_97, L_100))<<(int32_t)((int32_t)24)))))));
	}

IL_0202:
	{
		int32_t L_101 = ___byteCount;
		___byteCount = ((int32_t)((int32_t)L_101-(int32_t)4));
		int32_t L_102 = V_0;
		int32_t L_103 = V_2;
		if ((((int32_t)L_102) >= ((int32_t)L_103)))
		{
			goto IL_0218;
		}
	}
	{
		CharU5BU5D_t711* L_104 = ___chars;
		int32_t L_105 = V_0;
		int32_t L_106 = L_105;
		V_0 = ((int32_t)((int32_t)L_106+(int32_t)1));
		uint16_t L_107 = V_3;
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, L_106);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_104, L_106)) = (uint16_t)L_107;
		goto IL_0228;
	}

IL_0218:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_108 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6438, /*hidden argument*/NULL);
		ArgumentException_t725 * L_109 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4217(L_109, L_108, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_109);
	}

IL_0228:
	{
		int32_t L_110 = ___byteCount;
		if ((((int32_t)L_110) > ((int32_t)3)))
		{
			goto IL_018e;
		}
	}
	{
		int32_t L_111 = ___byteCount;
		if ((((int32_t)L_111) <= ((int32_t)0)))
		{
			goto IL_02aa;
		}
	}
	{
		int32_t L_112 = ___byteCount;
		__this->___leftOverLength_4 = L_112;
		V_1 = 0;
		bool L_113 = (__this->___bigEndian_2);
		if (!L_113)
		{
			goto IL_0277;
		}
	}
	{
		V_7 = 0;
		goto IL_0270;
	}

IL_024c:
	{
		int32_t L_114 = V_1;
		ByteU5BU5D_t66* L_115 = ___bytes;
		int32_t L_116 = ___byteIndex;
		int32_t L_117 = L_116;
		___byteIndex = ((int32_t)((int32_t)L_117+(int32_t)1));
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, L_117);
		int32_t L_118 = L_117;
		int32_t L_119 = ___byteCount;
		int32_t L_120 = L_119;
		___byteCount = ((int32_t)((int32_t)L_120-(int32_t)1));
		V_1 = ((int32_t)((int32_t)L_114+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_115, L_118))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)4-(int32_t)L_120))&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		int32_t L_121 = V_7;
		V_7 = ((int32_t)((int32_t)L_121+(int32_t)1));
	}

IL_0270:
	{
		int32_t L_122 = V_7;
		int32_t L_123 = ___byteCount;
		if ((((int32_t)L_122) < ((int32_t)L_123)))
		{
			goto IL_024c;
		}
	}
	{
		goto IL_02a3;
	}

IL_0277:
	{
		V_8 = 0;
		goto IL_029e;
	}

IL_027c:
	{
		int32_t L_124 = V_1;
		ByteU5BU5D_t66* L_125 = ___bytes;
		int32_t L_126 = ___byteIndex;
		int32_t L_127 = L_126;
		___byteIndex = ((int32_t)((int32_t)L_127+(int32_t)1));
		NullCheck(L_125);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_125, L_127);
		int32_t L_128 = L_127;
		int32_t L_129 = ___byteCount;
		int32_t L_130 = L_129;
		___byteCount = ((int32_t)((int32_t)L_130-(int32_t)1));
		V_1 = ((int32_t)((int32_t)L_124+(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_125, L_128))<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_130&(int32_t)((int32_t)31)))&(int32_t)((int32_t)31)))))));
		int32_t L_131 = V_8;
		V_8 = ((int32_t)((int32_t)L_131+(int32_t)1));
	}

IL_029e:
	{
		int32_t L_132 = V_8;
		int32_t L_133 = ___byteCount;
		if ((((int32_t)L_132) < ((int32_t)L_133)))
		{
			goto IL_027c;
		}
	}

IL_02a3:
	{
		int32_t L_134 = V_1;
		__this->___leftOverByte_3 = L_134;
	}

IL_02aa:
	{
		int32_t L_135 = V_0;
		int32_t L_136 = ___charIndex;
		return ((int32_t)((int32_t)L_135-(int32_t)L_136));
	}
}
// System.Text.UTF32Encoding
#include "mscorlib_System_Text_UTF32Encoding.h"
#ifndef _MSC_VER
#else
#endif
// System.Text.UTF32Encoding
#include "mscorlib_System_Text_UTF32EncodingMethodDeclarations.h"

// System.Text.EncoderReplacementFallback
#include "mscorlib_System_Text_EncoderReplacementFallback.h"
// System.Text.DecoderReplacementFallback
#include "mscorlib_System_Text_DecoderReplacementFallback.h"
// System.Text.EncoderFallback
#include "mscorlib_System_Text_EncoderFallbackMethodDeclarations.h"
// System.Text.EncoderReplacementFallback
#include "mscorlib_System_Text_EncoderReplacementFallbackMethodDeclarations.h"
// System.Text.DecoderReplacementFallback
#include "mscorlib_System_Text_DecoderReplacementFallbackMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"


// System.Void System.Text.UTF32Encoding::.ctor()
extern "C" void UTF32Encoding__ctor_m24278 (UTF32Encoding_t5373 * __this, const MethodInfo* method)
{
	{
		UTF32Encoding__ctor_m24280(__this, 0, 1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF32Encoding__ctor_m24279 (UTF32Encoding_t5373 * __this, bool ___bigEndian, bool ___byteOrderMark, const MethodInfo* method)
{
	{
		bool L_0 = ___bigEndian;
		bool L_1 = ___byteOrderMark;
		UTF32Encoding__ctor_m24280(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* EncoderFallback_t5358_il2cpp_TypeInfo_var;
extern TypeInfo* DecoderFallback_t5350_il2cpp_TypeInfo_var;
extern TypeInfo* EncoderReplacementFallback_t5362_il2cpp_TypeInfo_var;
extern TypeInfo* DecoderReplacementFallback_t5355_il2cpp_TypeInfo_var;
extern "C" void UTF32Encoding__ctor_m24280 (UTF32Encoding_t5373 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidCharacters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		EncoderFallback_t5358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9337);
		DecoderFallback_t5350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9332);
		EncoderReplacementFallback_t5362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9341);
		DecoderReplacementFallback_t5355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9331);
		s_Il2CppMethodIntialized = true;
	}
	UTF32Encoding_t5373 * G_B2_0 = {0};
	UTF32Encoding_t5373 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	UTF32Encoding_t5373 * G_B3_1 = {0};
	{
		bool L_0 = ___bigEndian;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((int32_t)12001);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)12000);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding__ctor_m24137(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		bool L_1 = ___bigEndian;
		__this->___bigEndian_28 = L_1;
		bool L_2 = ___byteOrderMark;
		__this->___byteOrderMark_29 = L_2;
		bool L_3 = ___throwOnInvalidCharacters;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EncoderFallback_t5358_il2cpp_TypeInfo_var);
		EncoderFallback_t5358 * L_4 = EncoderFallback_get_ExceptionFallback_m24114(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DecoderFallback_t5350_il2cpp_TypeInfo_var);
		DecoderFallback_t5350 * L_5 = DecoderFallback_get_ExceptionFallback_m24084(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_SetFallbackInternal_m24144(__this, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_0038:
	{
		EncoderReplacementFallback_t5362 * L_6 = (EncoderReplacementFallback_t5362 *)il2cpp_codegen_object_new (EncoderReplacementFallback_t5362_il2cpp_TypeInfo_var);
		EncoderReplacementFallback__ctor_m24123(L_6, (String_t*) &_stringLiteral6444, /*hidden argument*/NULL);
		DecoderReplacementFallback_t5355 * L_7 = (DecoderReplacementFallback_t5355 *)il2cpp_codegen_object_new (DecoderReplacementFallback_t5355_il2cpp_TypeInfo_var);
		DecoderReplacementFallback__ctor_m24093(L_7, (String_t*) &_stringLiteral6444, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		Encoding_SetFallbackInternal_m24144(__this, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0052:
	{
		bool L_8 = ___bigEndian;
		if (!L_8)
		{
			goto IL_0083;
		}
	}
	{
		((Encoding_t753 *)__this)->___body_name_8 = (String_t*) &_stringLiteral6520;
		((Encoding_t753 *)__this)->___encoding_name_9 = (String_t*) &_stringLiteral6521;
		((Encoding_t753 *)__this)->___header_name_10 = (String_t*) &_stringLiteral6520;
		((Encoding_t753 *)__this)->___web_name_15 = (String_t*) &_stringLiteral6520;
		goto IL_00af;
	}

IL_0083:
	{
		((Encoding_t753 *)__this)->___body_name_8 = (String_t*) &_stringLiteral6522;
		((Encoding_t753 *)__this)->___encoding_name_9 = (String_t*) &_stringLiteral6523;
		((Encoding_t753 *)__this)->___header_name_10 = (String_t*) &_stringLiteral6522;
		((Encoding_t753 *)__this)->___web_name_15 = (String_t*) &_stringLiteral6522;
	}

IL_00af:
	{
		((Encoding_t753 *)__this)->___windows_code_page_1 = ((int32_t)12000);
		return;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetByteCount_m24281 (UTF32Encoding_t5373 * __this, CharU5BU5D_t711* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		CharU5BU5D_t711* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		CharU5BU5D_t711* L_4 = ___chars;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_5 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_6 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_6, (String_t*) &_stringLiteral3023, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count;
		CharU5BU5D_t711* L_9 = ___chars;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_11 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_12 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_12, (String_t*) &_stringLiteral632, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		V_0 = 0;
		int32_t L_13 = ___index;
		V_1 = L_13;
		goto IL_0086;
	}

IL_0054:
	{
		CharU5BU5D_t711* L_14 = ___chars;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_17 = Char_IsSurrogate_m18778(NULL /*static, unused*/, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_18 = V_1;
		CharU5BU5D_t711* L_19 = ___chars;
		NullCheck(L_19);
		if ((((int32_t)((int32_t)((int32_t)L_18+(int32_t)1))) >= ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_0078;
		}
	}
	{
		CharU5BU5D_t711* L_20 = ___chars;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)L_21+(int32_t)1)));
		int32_t L_22 = ((int32_t)((int32_t)L_21+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_23 = Char_IsSurrogate_m18778(NULL /*static, unused*/, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_20, L_22)), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24+(int32_t)4));
		goto IL_007c;
	}

IL_0078:
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)4));
	}

IL_007c:
	{
		goto IL_0082;
	}

IL_007e:
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)((int32_t)L_26+(int32_t)4));
	}

IL_0082:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0086:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = ___index;
		int32_t L_30 = ___count;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)L_29+(int32_t)L_30)))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_31 = V_0;
		return L_31;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetBytes_m24282 (UTF32Encoding_t5373 * __this, CharU5BU5D_t711* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		CharU5BU5D_t711* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ByteU5BU5D_t66* L_2 = ___bytes;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t784 * L_3 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_3, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___charIndex;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___charIndex;
		CharU5BU5D_t711* L_6 = ___chars;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_7 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_8 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_8, (String_t*) &_stringLiteral6435, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003c:
	{
		int32_t L_9 = ___charCount;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___charCount;
		CharU5BU5D_t711* L_11 = ___chars;
		NullCheck(L_11);
		int32_t L_12 = ___charIndex;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_13 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_14 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_14, (String_t*) &_stringLiteral6436, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005d:
	{
		int32_t L_15 = ___byteIndex;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___byteIndex;
		ByteU5BU5D_t66* L_17 = ___bytes;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_18 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_19 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_19, (String_t*) &_stringLiteral6437, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_007f:
	{
		ByteU5BU5D_t66* L_20 = ___bytes;
		NullCheck(L_20);
		int32_t L_21 = ___byteIndex;
		int32_t L_22 = ___charCount;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_20)->max_length)))-(int32_t)L_21))) >= ((int32_t)((int32_t)((int32_t)L_22*(int32_t)4)))))
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_23 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6438, /*hidden argument*/NULL);
		ArgumentException_t725 * L_24 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4217(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_009b:
	{
		int32_t L_25 = ___byteIndex;
		V_0 = L_25;
		goto IL_01f0;
	}

IL_00a3:
	{
		CharU5BU5D_t711* L_26 = ___chars;
		int32_t L_27 = ___charIndex;
		int32_t L_28 = L_27;
		___charIndex = ((int32_t)((int32_t)L_28+(int32_t)1));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		int32_t L_29 = L_28;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_26, L_29));
		uint16_t L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t60_il2cpp_TypeInfo_var);
		bool L_31 = Char_IsSurrogate_m18778(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0196;
		}
	}
	{
		int32_t L_32 = ___charCount;
		int32_t L_33 = L_32;
		___charCount = ((int32_t)((int32_t)L_33-(int32_t)1));
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0140;
		}
	}
	{
		uint16_t L_34 = V_1;
		CharU5BU5D_t711* L_35 = ___chars;
		int32_t L_36 = ___charIndex;
		int32_t L_37 = L_36;
		___charIndex = ((int32_t)((int32_t)L_37+(int32_t)1));
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_37);
		int32_t L_38 = L_37;
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)1024)*(int32_t)((int32_t)((int32_t)L_34-(int32_t)((int32_t)55296)))))+(int32_t)((int32_t)65536)))+(int32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_35, L_38))))-(int32_t)((int32_t)56320)));
		bool L_39 = (__this->___bigEndian_28);
		if (!L_39)
		{
			goto IL_011a;
		}
	}
	{
		V_3 = 0;
		goto IL_0110;
	}

IL_00f8:
	{
		ByteU5BU5D_t66* L_40 = ___bytes;
		int32_t L_41 = V_0;
		int32_t L_42 = V_3;
		int32_t L_43 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)((int32_t)((int32_t)((int32_t)L_41+(int32_t)3))-(int32_t)L_42)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_40, ((int32_t)((int32_t)((int32_t)((int32_t)L_41+(int32_t)3))-(int32_t)L_42)))) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_43%(int32_t)((int32_t)256)))));
		int32_t L_44 = V_2;
		V_2 = ((int32_t)((int32_t)L_44>>(int32_t)8));
		int32_t L_45 = V_3;
		V_3 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_0110:
	{
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_47 = V_0;
		V_0 = ((int32_t)((int32_t)L_47+(int32_t)4));
		goto IL_013e;
	}

IL_011a:
	{
		V_4 = 0;
		goto IL_0139;
	}

IL_011f:
	{
		ByteU5BU5D_t66* L_48 = ___bytes;
		int32_t L_49 = V_0;
		int32_t L_50 = L_49;
		V_0 = ((int32_t)((int32_t)L_50+(int32_t)1));
		int32_t L_51 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_50);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, L_50)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_51%(int32_t)((int32_t)256)))));
		int32_t L_52 = V_2;
		V_2 = ((int32_t)((int32_t)L_52>>(int32_t)8));
		int32_t L_53 = V_4;
		V_4 = ((int32_t)((int32_t)L_53+(int32_t)1));
	}

IL_0139:
	{
		int32_t L_54 = V_4;
		if ((((int32_t)L_54) < ((int32_t)4)))
		{
			goto IL_011f;
		}
	}

IL_013e:
	{
		goto IL_0194;
	}

IL_0140:
	{
		bool L_55 = (__this->___bigEndian_28);
		if (!L_55)
		{
			goto IL_016f;
		}
	}
	{
		ByteU5BU5D_t66* L_56 = ___bytes;
		int32_t L_57 = V_0;
		int32_t L_58 = L_57;
		V_0 = ((int32_t)((int32_t)L_58+(int32_t)1));
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, L_58);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_56, L_58)) = (uint8_t)0;
		ByteU5BU5D_t66* L_59 = ___bytes;
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		V_0 = ((int32_t)((int32_t)L_61+(int32_t)1));
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_61);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_59, L_61)) = (uint8_t)0;
		ByteU5BU5D_t66* L_62 = ___bytes;
		int32_t L_63 = V_0;
		int32_t L_64 = L_63;
		V_0 = ((int32_t)((int32_t)L_64+(int32_t)1));
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_64);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_62, L_64)) = (uint8_t)0;
		ByteU5BU5D_t66* L_65 = ___bytes;
		int32_t L_66 = V_0;
		int32_t L_67 = L_66;
		V_0 = ((int32_t)((int32_t)L_67+(int32_t)1));
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_67);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_65, L_67)) = (uint8_t)((int32_t)63);
		goto IL_0194;
	}

IL_016f:
	{
		ByteU5BU5D_t66* L_68 = ___bytes;
		int32_t L_69 = V_0;
		int32_t L_70 = L_69;
		V_0 = ((int32_t)((int32_t)L_70+(int32_t)1));
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_70);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, L_70)) = (uint8_t)((int32_t)63);
		ByteU5BU5D_t66* L_71 = ___bytes;
		int32_t L_72 = V_0;
		int32_t L_73 = L_72;
		V_0 = ((int32_t)((int32_t)L_73+(int32_t)1));
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_73);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, L_73)) = (uint8_t)0;
		ByteU5BU5D_t66* L_74 = ___bytes;
		int32_t L_75 = V_0;
		int32_t L_76 = L_75;
		V_0 = ((int32_t)((int32_t)L_76+(int32_t)1));
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, L_76);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_74, L_76)) = (uint8_t)0;
		ByteU5BU5D_t66* L_77 = ___bytes;
		int32_t L_78 = V_0;
		int32_t L_79 = L_78;
		V_0 = ((int32_t)((int32_t)L_79+(int32_t)1));
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, L_79);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_77, L_79)) = (uint8_t)0;
	}

IL_0194:
	{
		goto IL_01f0;
	}

IL_0196:
	{
		bool L_80 = (__this->___bigEndian_28);
		if (!L_80)
		{
			goto IL_01c8;
		}
	}
	{
		ByteU5BU5D_t66* L_81 = ___bytes;
		int32_t L_82 = V_0;
		int32_t L_83 = L_82;
		V_0 = ((int32_t)((int32_t)L_83+(int32_t)1));
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, L_83);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_81, L_83)) = (uint8_t)0;
		ByteU5BU5D_t66* L_84 = ___bytes;
		int32_t L_85 = V_0;
		int32_t L_86 = L_85;
		V_0 = ((int32_t)((int32_t)L_86+(int32_t)1));
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, L_86);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_84, L_86)) = (uint8_t)0;
		ByteU5BU5D_t66* L_87 = ___bytes;
		int32_t L_88 = V_0;
		int32_t L_89 = L_88;
		V_0 = ((int32_t)((int32_t)L_89+(int32_t)1));
		uint16_t L_90 = V_1;
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, L_89);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_87, L_89)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_90>>(int32_t)8))));
		ByteU5BU5D_t66* L_91 = ___bytes;
		int32_t L_92 = V_0;
		int32_t L_93 = L_92;
		V_0 = ((int32_t)((int32_t)L_93+(int32_t)1));
		uint16_t L_94 = V_1;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, L_93);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_91, L_93)) = (uint8_t)(((uint8_t)L_94));
		goto IL_01f0;
	}

IL_01c8:
	{
		ByteU5BU5D_t66* L_95 = ___bytes;
		int32_t L_96 = V_0;
		int32_t L_97 = L_96;
		V_0 = ((int32_t)((int32_t)L_97+(int32_t)1));
		uint16_t L_98 = V_1;
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, L_97);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_95, L_97)) = (uint8_t)(((uint8_t)L_98));
		ByteU5BU5D_t66* L_99 = ___bytes;
		int32_t L_100 = V_0;
		int32_t L_101 = L_100;
		V_0 = ((int32_t)((int32_t)L_101+(int32_t)1));
		uint16_t L_102 = V_1;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, L_101);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_99, L_101)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_102>>(int32_t)8))));
		ByteU5BU5D_t66* L_103 = ___bytes;
		int32_t L_104 = V_0;
		int32_t L_105 = L_104;
		V_0 = ((int32_t)((int32_t)L_105+(int32_t)1));
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_105);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_103, L_105)) = (uint8_t)0;
		ByteU5BU5D_t66* L_106 = ___bytes;
		int32_t L_107 = V_0;
		int32_t L_108 = L_107;
		V_0 = ((int32_t)((int32_t)L_108+(int32_t)1));
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, L_108);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_106, L_108)) = (uint8_t)0;
	}

IL_01f0:
	{
		int32_t L_109 = ___charCount;
		int32_t L_110 = L_109;
		___charCount = ((int32_t)((int32_t)L_110-(int32_t)1));
		if ((((int32_t)L_110) > ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_111 = V_0;
		int32_t L_112 = ___byteIndex;
		return ((int32_t)((int32_t)L_111-(int32_t)L_112));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetCharCount_m24283 (UTF32Encoding_t5373 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t66* L_0 = ___bytes;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		ByteU5BU5D_t66* L_4 = ___bytes;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002d;
		}
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_5 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_6 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_6, (String_t*) &_stringLiteral3023, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___count;
		ByteU5BU5D_t66* L_9 = ___bytes;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_004e;
		}
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_11 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_12 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_12, (String_t*) &_stringLiteral632, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004e:
	{
		int32_t L_13 = ___count;
		return ((int32_t)((int32_t)L_13/(int32_t)4));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetChars_m24284 (UTF32Encoding_t5373 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t711* ___chars, int32_t ___charIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t66* L_0 = ___bytes;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		CharU5BU5D_t711* L_2 = ___chars;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t784 * L_3 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_3, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___byteIndex;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = ___byteIndex;
		ByteU5BU5D_t66* L_6 = ___bytes;
		NullCheck(L_6);
		if ((((int32_t)L_5) <= ((int32_t)(((int32_t)(((Array_t *)L_6)->max_length))))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_7 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_8 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_8, (String_t*) &_stringLiteral6437, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_003c:
	{
		int32_t L_9 = ___byteCount;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = ___byteCount;
		ByteU5BU5D_t66* L_11 = ___bytes;
		NullCheck(L_11);
		int32_t L_12 = ___byteIndex;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_11)->max_length)))-(int32_t)L_12)))))
		{
			goto IL_005d;
		}
	}

IL_0048:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_13 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_14 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_14, (String_t*) &_stringLiteral6441, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005d:
	{
		int32_t L_15 = ___charIndex;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_16 = ___charIndex;
		CharU5BU5D_t711* L_17 = ___chars;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_007f;
		}
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_18 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6433, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_19 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_19, (String_t*) &_stringLiteral6435, L_18, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_007f:
	{
		CharU5BU5D_t711* L_20 = ___chars;
		NullCheck(L_20);
		int32_t L_21 = ___charIndex;
		int32_t L_22 = ___byteCount;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_20)->max_length)))-(int32_t)L_21))) >= ((int32_t)((int32_t)((int32_t)L_22/(int32_t)4)))))
		{
			goto IL_009b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_23 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6438, /*hidden argument*/NULL);
		ArgumentException_t725 * L_24 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4217(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_009b:
	{
		int32_t L_25 = ___charIndex;
		V_0 = L_25;
		bool L_26 = (__this->___bigEndian_28);
		if (!L_26)
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_00dc;
	}

IL_00a8:
	{
		CharU5BU5D_t711* L_27 = ___chars;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
		ByteU5BU5D_t66* L_30 = ___bytes;
		int32_t L_31 = ___byteIndex;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		ByteU5BU5D_t66* L_33 = ___bytes;
		int32_t L_34 = ___byteIndex;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)((int32_t)L_34+(int32_t)1)));
		int32_t L_35 = ((int32_t)((int32_t)L_34+(int32_t)1));
		ByteU5BU5D_t66* L_36 = ___bytes;
		int32_t L_37 = ___byteIndex;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)((int32_t)L_37+(int32_t)2)));
		int32_t L_38 = ((int32_t)((int32_t)L_37+(int32_t)2));
		ByteU5BU5D_t66* L_39 = ___bytes;
		int32_t L_40 = ___byteIndex;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)L_40+(int32_t)3)));
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)3));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_29);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_32))<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_35))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_38))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_41))))));
		int32_t L_42 = ___byteIndex;
		___byteIndex = ((int32_t)((int32_t)L_42+(int32_t)4));
		int32_t L_43 = ___byteCount;
		___byteCount = ((int32_t)((int32_t)L_43-(int32_t)4));
	}

IL_00dc:
	{
		int32_t L_44 = ___byteCount;
		if ((((int32_t)L_44) >= ((int32_t)4)))
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_011c;
	}

IL_00e2:
	{
		goto IL_0118;
	}

IL_00e4:
	{
		CharU5BU5D_t711* L_45 = ___chars;
		int32_t L_46 = V_0;
		int32_t L_47 = L_46;
		V_0 = ((int32_t)((int32_t)L_47+(int32_t)1));
		ByteU5BU5D_t66* L_48 = ___bytes;
		int32_t L_49 = ___byteIndex;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		int32_t L_50 = L_49;
		ByteU5BU5D_t66* L_51 = ___bytes;
		int32_t L_52 = ___byteIndex;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, ((int32_t)((int32_t)L_52+(int32_t)1)));
		int32_t L_53 = ((int32_t)((int32_t)L_52+(int32_t)1));
		ByteU5BU5D_t66* L_54 = ___bytes;
		int32_t L_55 = ___byteIndex;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)L_55+(int32_t)2)));
		int32_t L_56 = ((int32_t)((int32_t)L_55+(int32_t)2));
		ByteU5BU5D_t66* L_57 = ___bytes;
		int32_t L_58 = ___byteIndex;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)L_58+(int32_t)3)));
		int32_t L_59 = ((int32_t)((int32_t)L_58+(int32_t)3));
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_47);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_48, L_50))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_51, L_53))<<(int32_t)8))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_56))<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_57, L_59))<<(int32_t)((int32_t)24)))))));
		int32_t L_60 = ___byteIndex;
		___byteIndex = ((int32_t)((int32_t)L_60+(int32_t)4));
		int32_t L_61 = ___byteCount;
		___byteCount = ((int32_t)((int32_t)L_61-(int32_t)4));
	}

IL_0118:
	{
		int32_t L_62 = ___byteCount;
		if ((((int32_t)L_62) >= ((int32_t)4)))
		{
			goto IL_00e4;
		}
	}

IL_011c:
	{
		int32_t L_63 = V_0;
		int32_t L_64 = ___charIndex;
		return ((int32_t)((int32_t)L_63-(int32_t)L_64));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetMaxByteCount(System.Int32)
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetMaxByteCount_m24285 (UTF32Encoding_t5373 * __this, int32_t ___charCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___charCount;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_1 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6442, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_2 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_2, (String_t*) &_stringLiteral6436, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = ___charCount;
		return ((int32_t)((int32_t)L_3*(int32_t)4));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetMaxCharCount(System.Int32)
extern TypeInfo* Encoding_t753_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetMaxCharCount_m24286 (UTF32Encoding_t5373 * __this, int32_t ___byteCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Encoding_t753_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___byteCount;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t753_il2cpp_TypeInfo_var);
		String_t* L_1 = Encoding___m24139(NULL /*static, unused*/, (String_t*) &_stringLiteral6442, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t1490 * L_2 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_2, (String_t*) &_stringLiteral6441, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0019:
	{
		int32_t L_3 = ___byteCount;
		return ((int32_t)((int32_t)L_3/(int32_t)4));
	}
}
// System.Text.Decoder System.Text.UTF32Encoding::GetDecoder()
extern TypeInfo* UTF32Decoder_t5372_il2cpp_TypeInfo_var;
extern "C" Decoder_t3563 * UTF32Encoding_GetDecoder_m24287 (UTF32Encoding_t5373 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UTF32Decoder_t5372_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9352);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___bigEndian_28);
		UTF32Decoder_t5372 * L_1 = (UTF32Decoder_t5372 *)il2cpp_codegen_object_new (UTF32Decoder_t5372_il2cpp_TypeInfo_var);
		UTF32Decoder__ctor_m24276(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] System.Text.UTF32Encoding::GetPreamble()
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t66* UTF32Encoding_GetPreamble_m24288 (UTF32Encoding_t5373 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t66* V_0 = {0};
	{
		bool L_0 = (__this->___byteOrderMark_29);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		V_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, 4));
		bool L_1 = (__this->___bigEndian_28);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_t66* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, 2)) = (uint8_t)((int32_t)254);
		ByteU5BU5D_t66* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 3)) = (uint8_t)((int32_t)255);
		goto IL_0039;
	}

IL_0029:
	{
		ByteU5BU5D_t66* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 0)) = (uint8_t)((int32_t)255);
		ByteU5BU5D_t66* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 1)) = (uint8_t)((int32_t)254);
	}

IL_0039:
	{
		ByteU5BU5D_t66* L_6 = V_0;
		return L_6;
	}

IL_003b:
	{
		return ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, 0));
	}
}
// System.Boolean System.Text.UTF32Encoding::Equals(System.Object)
extern TypeInfo* UTF32Encoding_t5373_il2cpp_TypeInfo_var;
extern "C" bool UTF32Encoding_Equals_m24289 (UTF32Encoding_t5373 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UTF32Encoding_t5373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9347);
		s_Il2CppMethodIntialized = true;
	}
	UTF32Encoding_t5373 * V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___value;
		V_0 = ((UTF32Encoding_t5373 *)IsInst(L_0, UTF32Encoding_t5373_il2cpp_TypeInfo_var));
		UTF32Encoding_t5373 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2 = (((Encoding_t753 *)__this)->___codePage_0);
		UTF32Encoding_t5373 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = (((Encoding_t753 *)L_3)->___codePage_0);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_003d;
		}
	}
	{
		bool L_5 = (__this->___bigEndian_28);
		UTF32Encoding_t5373 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (L_6->___bigEndian_28);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_003d;
		}
	}
	{
		bool L_8 = (__this->___byteOrderMark_29);
		UTF32Encoding_t5373 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = (L_9->___byteOrderMark_29);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_003d;
		}
	}
	{
		Object_t * L_11 = ___value;
		bool L_12 = Encoding_Equals_m24145(__this, L_11, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_12));
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

IL_003f:
	{
		return 0;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetHashCode()
extern "C" int32_t UTF32Encoding_GetHashCode_m24290 (UTF32Encoding_t5373 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Encoding_GetHashCode_m24157(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = (__this->___bigEndian_28);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2^(int32_t)((int32_t)31)));
	}

IL_0014:
	{
		bool L_3 = (__this->___byteOrderMark_29);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)((int32_t)63)));
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.Char*,System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern "C" int32_t UTF32Encoding_GetByteCount_m24291 (UTF32Encoding_t5373 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint16_t* L_0 = ___chars;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5394, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___count;
		return ((int32_t)((int32_t)L_2*(int32_t)4));
	}
}
// System.Int32 System.Text.UTF32Encoding::GetByteCount(System.String)
extern "C" int32_t UTF32Encoding_GetByteCount_m24292 (UTF32Encoding_t5373 * __this, String_t* ___s, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		int32_t L_1 = Encoding_GetByteCount_m24146(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m24293 (UTF32Encoding_t5373 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method)
{
	{
		uint16_t* L_0 = ___chars;
		int32_t L_1 = ___charCount;
		uint8_t* L_2 = ___bytes;
		int32_t L_3 = ___byteCount;
		int32_t L_4 = Encoding_GetBytes_m24170(__this, (uint16_t*)(uint16_t*)L_0, L_1, (uint8_t*)(uint8_t*)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Text.UTF32Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF32Encoding_GetBytes_m24294 (UTF32Encoding_t5373 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t66* ___bytes, int32_t ___byteIndex, const MethodInfo* method)
{
	{
		String_t* L_0 = ___s;
		int32_t L_1 = ___charIndex;
		int32_t L_2 = ___charCount;
		ByteU5BU5D_t66* L_3 = ___bytes;
		int32_t L_4 = ___byteIndex;
		int32_t L_5 = Encoding_GetBytes_m24148(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Text.UTF32Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF32Encoding_GetString_m24295 (UTF32Encoding_t5373 * __this, ByteU5BU5D_t66* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method)
{
	{
		ByteU5BU5D_t66* L_0 = ___bytes;
		int32_t L_1 = ___index;
		int32_t L_2 = ___count;
		String_t* L_3 = Encoding_GetString_m24159(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Threading.AutoResetEvent
#include "mscorlib_System_Threading_AutoResetEvent.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.AutoResetEvent
#include "mscorlib_System_Threading_AutoResetEventMethodDeclarations.h"

// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetMode.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"


// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
extern "C" void AutoResetEvent__ctor_m15185 (AutoResetEvent_t3804 * __this, bool ___initialState, const MethodInfo* method)
{
	{
		bool L_0 = ___initialState;
		EventWaitHandle__ctor_m24302(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.CompressedStack
#include "mscorlib_System_Threading_CompressedStack.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.CompressedStack
#include "mscorlib_System_Threading_CompressedStackMethodDeclarations.h"

// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Security.SecurityFrame
#include "mscorlib_System_Security_SecurityFrameMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"


// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern TypeInfo* ArrayList_t712_il2cpp_TypeInfo_var;
extern "C" void CompressedStack__ctor_m24296 (CompressedStack_t5233 * __this, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___length;
		ArrayList_t712 * L_2 = (ArrayList_t712 *)il2cpp_codegen_object_new (ArrayList_t712_il2cpp_TypeInfo_var);
		ArrayList__ctor_m18074(L_2, L_1, /*hidden argument*/NULL);
		__this->____list_0 = L_2;
	}

IL_0016:
	{
		return;
	}
}
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern TypeInfo* ArrayList_t712_il2cpp_TypeInfo_var;
extern "C" void CompressedStack__ctor_m24297 (CompressedStack_t5233 * __this, CompressedStack_t5233 * ___cs, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		CompressedStack_t5233 * L_0 = ___cs;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		CompressedStack_t5233 * L_1 = ___cs;
		NullCheck(L_1);
		ArrayList_t712 * L_2 = (L_1->____list_0);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		CompressedStack_t5233 * L_3 = ___cs;
		NullCheck(L_3);
		ArrayList_t712 * L_4 = (L_3->____list_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(49 /* System.Object System.Collections.ArrayList::Clone() */, L_4);
		__this->____list_0 = ((ArrayList_t712 *)Castclass(L_5, ArrayList_t712_il2cpp_TypeInfo_var));
	}

IL_0027:
	{
		return;
	}
}
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern TypeInfo* CompressedStack_t5233_il2cpp_TypeInfo_var;
extern "C" CompressedStack_t5233 * CompressedStack_CreateCopy_m24298 (CompressedStack_t5233 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompressedStack_t5233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9353);
		s_Il2CppMethodIntialized = true;
	}
	{
		CompressedStack_t5233 * L_0 = (CompressedStack_t5233 *)il2cpp_codegen_object_new (CompressedStack_t5233_il2cpp_TypeInfo_var);
		CompressedStack__ctor_m24297(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern TypeInfo* CompressedStack_t5233_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" CompressedStack_t5233 * CompressedStack_Capture_m24299 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompressedStack_t5233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9353);
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	CompressedStack_t5233 * V_0 = {0};
	CompressedStack_t5233 * V_1 = {0};
	int32_t V_2 = 0;
	{
		CompressedStack_t5233 * L_0 = (CompressedStack_t5233 *)il2cpp_codegen_object_new (CompressedStack_t5233_il2cpp_TypeInfo_var);
		CompressedStack__ctor_m24296(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		CompressedStack_t5233 * L_1 = V_0;
		ArrayList_t712 * L_2 = SecurityFrame_GetStack_m23227(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->____list_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_t1478 * L_3 = Thread_get_CurrentThread_m7605(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		CompressedStack_t5233 * L_4 = Thread_GetCompressedStack_m24366(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		CompressedStack_t5233 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		V_2 = 0;
		goto IL_0041;
	}

IL_0025:
	{
		CompressedStack_t5233 * L_6 = V_0;
		NullCheck(L_6);
		ArrayList_t712 * L_7 = (L_6->____list_0);
		CompressedStack_t5233 * L_8 = V_1;
		NullCheck(L_8);
		ArrayList_t712 * L_9 = (L_8->____list_0);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_9, L_10);
		NullCheck(L_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_7, L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_2;
		CompressedStack_t5233 * L_14 = V_1;
		NullCheck(L_14);
		ArrayList_t712 * L_15 = (L_14->____list_0);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_15);
		if ((((int32_t)L_13) < ((int32_t)L_16)))
		{
			goto IL_0025;
		}
	}

IL_004f:
	{
		CompressedStack_t5233 * L_17 = V_0;
		return L_17;
	}
}
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern "C" void CompressedStack_GetObjectData_m24300 (CompressedStack_t5233 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2936 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral3791, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C" bool CompressedStack_IsEmpty_m24301 (CompressedStack_t5233 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		ArrayList_t712 * L_0 = (__this->____list_0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ArrayList_t712 * L_1 = (__this->____list_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetModeMethodDeclarations.h"



// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandle.h"
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.NativeEventCalls
#include "mscorlib_System_Threading_NativeEventCallsMethodDeclarations.h"


// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
extern TypeInfo* WaitHandle_t3252_il2cpp_TypeInfo_var;
extern "C" void EventWaitHandle__ctor_m24302 (EventWaitHandle_t3783 * __this, bool ___initialState, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t3252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5686);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t3252_il2cpp_TypeInfo_var);
		WaitHandle__ctor_m24391(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___mode;
		bool L_1 = EventWaitHandle_IsManualReset_m24303(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		bool L_3 = ___initialState;
		IntPtr_t L_4 = NativeEventCalls_CreateEvent_internal_m24326(NULL /*static, unused*/, L_2, L_3, (String_t*)NULL, (&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< IntPtr_t >::Invoke(8 /* System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr) */, __this, L_4);
		return;
	}
}
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" bool EventWaitHandle_IsManualReset_m24303 (EventWaitHandle_t3783 * __this, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___mode;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___mode;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0013;
		}
	}

IL_0008:
	{
		ArgumentException_t725 * L_2 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4217(L_2, (String_t*) &_stringLiteral3880, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		int32_t L_3 = ___mode;
		return ((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C" bool EventWaitHandle_Reset_m11549 (EventWaitHandle_t3783 * __this, const MethodInfo* method)
{
	{
		WaitHandle_CheckDisposed_m24403(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, __this);
		bool L_1 = NativeEventCalls_ResetEvent_internal_m24328(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" bool EventWaitHandle_Set_m11548 (EventWaitHandle_t3783 * __this, const MethodInfo* method)
{
	{
		WaitHandle_CheckDisposed_m24403(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, __this);
		bool L_1 = NativeEventCalls_SetEvent_internal_m24327(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.ExecutionContext
#include "mscorlib_System_Threading_ExecutionContext.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ExecutionContext
#include "mscorlib_System_Threading_ExecutionContextMethodDeclarations.h"

// System.Security.SecurityContext
#include "mscorlib_System_Security_SecurityContext.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Security.SecurityContext
#include "mscorlib_System_Security_SecurityContextMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Security.SecurityManager
#include "mscorlib_System_Security_SecurityManagerMethodDeclarations.h"


// System.Void System.Threading.ExecutionContext::.ctor()
extern "C" void ExecutionContext__ctor_m24304 (ExecutionContext_t5152 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern TypeInfo* SecurityContext_t5234_il2cpp_TypeInfo_var;
extern "C" void ExecutionContext__ctor_m24305 (ExecutionContext_t5152 * __this, ExecutionContext_t5152 * ___ec, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityContext_t5234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9242);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ExecutionContext_t5152 * L_0 = ___ec;
		NullCheck(L_0);
		SecurityContext_t5234 * L_1 = (L_0->____sc_0);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		ExecutionContext_t5152 * L_2 = ___ec;
		NullCheck(L_2);
		SecurityContext_t5234 * L_3 = (L_2->____sc_0);
		SecurityContext_t5234 * L_4 = (SecurityContext_t5234 *)il2cpp_codegen_object_new (SecurityContext_t5234_il2cpp_TypeInfo_var);
		SecurityContext__ctor_m23193(L_4, L_3, /*hidden argument*/NULL);
		__this->____sc_0 = L_4;
	}

IL_001f:
	{
		ExecutionContext_t5152 * L_5 = ___ec;
		NullCheck(L_5);
		bool L_6 = (L_5->____suppressFlow_1);
		__this->____suppressFlow_1 = L_6;
		__this->____capture_2 = 1;
		return;
	}
}
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t1457_il2cpp_TypeInfo_var;
extern "C" void ExecutionContext__ctor_m24306 (ExecutionContext_t5152 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2540);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		NotImplementedException_t1457 * L_0 = (NotImplementedException_t1457 *)il2cpp_codegen_object_new (NotImplementedException_t1457_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7534(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern TypeInfo* ExecutionContext_t5152_il2cpp_TypeInfo_var;
extern TypeInfo* SecurityManager_t5243_il2cpp_TypeInfo_var;
extern "C" ExecutionContext_t5152 * ExecutionContext_Capture_m24307 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		ExecutionContext_t5152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9354);
		SecurityManager_t5243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8981);
		s_Il2CppMethodIntialized = true;
	}
	ExecutionContext_t5152 * V_0 = {0};
	ExecutionContext_t5152 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_t1478 * L_0 = Thread_get_CurrentThread_m7605(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExecutionContext_t5152 * L_1 = Thread_get_ExecutionContext_m24364(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ExecutionContext_t5152 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = ExecutionContext_get_FlowSuppressed_m24311(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (ExecutionContext_t5152 *)NULL;
	}

IL_0015:
	{
		ExecutionContext_t5152 * L_4 = V_0;
		ExecutionContext_t5152 * L_5 = (ExecutionContext_t5152 *)il2cpp_codegen_object_new (ExecutionContext_t5152_il2cpp_TypeInfo_var);
		ExecutionContext__ctor_m24305(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(SecurityManager_t5243_il2cpp_TypeInfo_var);
		bool L_6 = SecurityManager_get_SecurityEnabled_m23240(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ExecutionContext_t5152 * L_7 = V_1;
		SecurityContext_t5234 * L_8 = SecurityContext_Capture_m23194(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ExecutionContext_set_SecurityContext_m24310(L_7, L_8, /*hidden argument*/NULL);
	}

IL_002e:
	{
		ExecutionContext_t5152 * L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* NotImplementedException_t1457_il2cpp_TypeInfo_var;
extern "C" void ExecutionContext_GetObjectData_m24308 (ExecutionContext_t5152 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		NotImplementedException_t1457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2540);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2936 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral3791, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		NotImplementedException_t1457 * L_2 = (NotImplementedException_t1457 *)il2cpp_codegen_object_new (NotImplementedException_t1457_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7534(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern TypeInfo* SecurityContext_t5234_il2cpp_TypeInfo_var;
extern "C" SecurityContext_t5234 * ExecutionContext_get_SecurityContext_m24309 (ExecutionContext_t5152 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityContext_t5234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9242);
		s_Il2CppMethodIntialized = true;
	}
	{
		SecurityContext_t5234 * L_0 = (__this->____sc_0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SecurityContext_t5234 * L_1 = (SecurityContext_t5234 *)il2cpp_codegen_object_new (SecurityContext_t5234_il2cpp_TypeInfo_var);
		SecurityContext__ctor_m23192(L_1, /*hidden argument*/NULL);
		__this->____sc_0 = L_1;
	}

IL_0013:
	{
		SecurityContext_t5234 * L_2 = (__this->____sc_0);
		return L_2;
	}
}
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C" void ExecutionContext_set_SecurityContext_m24310 (ExecutionContext_t5152 * __this, SecurityContext_t5234 * ___value, const MethodInfo* method)
{
	{
		SecurityContext_t5234 * L_0 = ___value;
		__this->____sc_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C" bool ExecutionContext_get_FlowSuppressed_m24311 (ExecutionContext_t5152 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____suppressFlow_1);
		return L_0;
	}
}
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" bool ExecutionContext_IsFlowSuppressed_m24312 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_t1478 * L_0 = Thread_get_CurrentThread_m7605(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ExecutionContext_t5152 * L_1 = Thread_get_ExecutionContext_m24364(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = ExecutionContext_get_FlowSuppressed_m24311(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Interlocked
#include "mscorlib_System_Threading_Interlocked.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"



// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C" int32_t Interlocked_CompareExchange_m396 (Object_t * __this /* static, unused */, int32_t* ___location1, int32_t ___value, int32_t ___comparand, const MethodInfo* method)
{
	typedef int32_t (*Interlocked_CompareExchange_m396_ftn) (int32_t*, int32_t, int32_t);
	static Interlocked_CompareExchange_m396_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Interlocked_CompareExchange_m396_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)");
	return _il2cpp_icall_func(___location1, ___value, ___comparand);
}
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
extern "C" Object_t * Interlocked_CompareExchange_m18070 (Object_t * __this /* static, unused */, Object_t ** ___location1, Object_t * ___value, Object_t * ___comparand, const MethodInfo* method)
{
	typedef Object_t * (*Interlocked_CompareExchange_m18070_ftn) (Object_t **, Object_t *, Object_t *);
	static Interlocked_CompareExchange_m18070_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Interlocked_CompareExchange_m18070_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)");
	return _il2cpp_icall_func(___location1, ___value, ___comparand);
}
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
extern "C" int32_t Interlocked_Decrement_m7989 (Object_t * __this /* static, unused */, int32_t* ___location, const MethodInfo* method)
{
	typedef int32_t (*Interlocked_Decrement_m7989_ftn) (int32_t*);
	static Interlocked_Decrement_m7989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Interlocked_Decrement_m7989_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Interlocked::Decrement(System.Int32&)");
	return _il2cpp_icall_func(___location);
}
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
extern "C" int32_t Interlocked_Increment_m24313 (Object_t * __this /* static, unused */, int32_t* ___location, const MethodInfo* method)
{
	typedef int32_t (*Interlocked_Increment_m24313_ftn) (int32_t*);
	static Interlocked_Increment_m24313_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Interlocked_Increment_m24313_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Interlocked::Increment(System.Int32&)");
	return _il2cpp_icall_func(___location);
}
// System.Int64 System.Threading.Interlocked::Increment(System.Int64&)
extern "C" int64_t Interlocked_Increment_m24314 (Object_t * __this /* static, unused */, int64_t* ___location, const MethodInfo* method)
{
	typedef int64_t (*Interlocked_Increment_m24314_ftn) (int64_t*);
	static Interlocked_Increment_m24314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Interlocked_Increment_m24314_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Interlocked::Increment(System.Int64&)");
	return _il2cpp_icall_func(___location);
}
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"



// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C" void ManualResetEvent__ctor_m11547 (ManualResetEvent_t3201 * __this, bool ___initialState, const MethodInfo* method)
{
	{
		bool L_0 = ___initialState;
		EventWaitHandle__ctor_m24302(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Monitor
#include "mscorlib_System_Threading_Monitor.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"

// System.Threading.SynchronizationLockException
#include "mscorlib_System_Threading_SynchronizationLockException.h"
// System.Threading.SynchronizationLockException
#include "mscorlib_System_Threading_SynchronizationLockExceptionMethodDeclarations.h"


// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" void Monitor_Enter_m7520 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef void (*Monitor_Enter_m7520_ftn) (Object_t *);
	static Monitor_Enter_m7520_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Enter_m7520_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Enter(System.Object)");
	_il2cpp_icall_func(___obj);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" void Monitor_Exit_m7521 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef void (*Monitor_Exit_m7521_ftn) (Object_t *);
	static Monitor_Exit_m7521_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Exit_m7521_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Exit(System.Object)");
	_il2cpp_icall_func(___obj);
}
// System.Void System.Threading.Monitor::Monitor_pulse(System.Object)
extern "C" void Monitor_Monitor_pulse_m24315 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef void (*Monitor_Monitor_pulse_m24315_ftn) (Object_t *);
	static Monitor_Monitor_pulse_m24315_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Monitor_pulse_m24315_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Monitor_pulse(System.Object)");
	_il2cpp_icall_func(___obj);
}
// System.Boolean System.Threading.Monitor::Monitor_test_synchronised(System.Object)
extern "C" bool Monitor_Monitor_test_synchronised_m24316 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef bool (*Monitor_Monitor_test_synchronised_m24316_ftn) (Object_t *);
	static Monitor_Monitor_test_synchronised_m24316_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Monitor_test_synchronised_m24316_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Monitor_test_synchronised(System.Object)");
	return _il2cpp_icall_func(___obj);
}
// System.Void System.Threading.Monitor::Pulse(System.Object)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationLockException_t3802_il2cpp_TypeInfo_var;
extern "C" void Monitor_Pulse_m24317 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		SynchronizationLockException_t3802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7026);
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
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5081, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___obj;
		bool L_3 = Monitor_Monitor_test_synchronised_m24316(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		SynchronizationLockException_t3802 * L_4 = (SynchronizationLockException_t3802 *)il2cpp_codegen_object_new (SynchronizationLockException_t3802_il2cpp_TypeInfo_var);
		SynchronizationLockException__ctor_m15181(L_4, (String_t*) &_stringLiteral6524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		Object_t * L_5 = ___obj;
		Monitor_Monitor_pulse_m24315(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Monitor::Monitor_pulse_all(System.Object)
extern "C" void Monitor_Monitor_pulse_all_m24318 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	typedef void (*Monitor_Monitor_pulse_all_m24318_ftn) (Object_t *);
	static Monitor_Monitor_pulse_all_m24318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Monitor_pulse_all_m24318_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Monitor_pulse_all(System.Object)");
	_il2cpp_icall_func(___obj);
}
// System.Void System.Threading.Monitor::PulseAll(System.Object)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationLockException_t3802_il2cpp_TypeInfo_var;
extern "C" void Monitor_PulseAll_m24319 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		SynchronizationLockException_t3802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7026);
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
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5081, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___obj;
		bool L_3 = Monitor_Monitor_test_synchronised_m24316(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		SynchronizationLockException_t3802 * L_4 = (SynchronizationLockException_t3802 *)il2cpp_codegen_object_new (SynchronizationLockException_t3802_il2cpp_TypeInfo_var);
		SynchronizationLockException__ctor_m15181(L_4, (String_t*) &_stringLiteral6524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		Object_t * L_5 = ___obj;
		Monitor_Monitor_pulse_all_m24318(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)
extern "C" bool Monitor_Monitor_wait_m24320 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___ms, const MethodInfo* method)
{
	typedef bool (*Monitor_Monitor_wait_m24320_ftn) (Object_t *, int32_t);
	static Monitor_Monitor_wait_m24320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Monitor_Monitor_wait_m24320_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)");
	return _il2cpp_icall_func(___obj, ___ms);
}
// System.Boolean System.Threading.Monitor::Wait(System.Object)
extern "C" bool Monitor_Wait_m7970 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		bool L_1 = Monitor_Wait_m24321(NULL /*static, unused*/, L_0, (-1), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationLockException_t3802_il2cpp_TypeInfo_var;
extern "C" bool Monitor_Wait_m24321 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___millisecondsTimeout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		SynchronizationLockException_t3802_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7026);
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
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral5081, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___millisecondsTimeout;
		if ((((int32_t)L_2) >= ((int32_t)(-1))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_3 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_3, (String_t*) &_stringLiteral3759, (String_t*) &_stringLiteral6525, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		Object_t * L_4 = ___obj;
		bool L_5 = Monitor_Monitor_test_synchronised_m24316(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		SynchronizationLockException_t3802 * L_6 = (SynchronizationLockException_t3802 *)il2cpp_codegen_object_new (SynchronizationLockException_t3802_il2cpp_TypeInfo_var);
		SynchronizationLockException__ctor_m15181(L_6, (String_t*) &_stringLiteral6524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0035:
	{
		Object_t * L_7 = ___obj;
		int32_t L_8 = ___millisecondsTimeout;
		bool L_9 = Monitor_Monitor_wait_m24320(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"

// System.ApplicationException
#include "mscorlib_System_ApplicationException.h"
// System.ApplicationException
#include "mscorlib_System_ApplicationExceptionMethodDeclarations.h"


// System.Void System.Threading.Mutex::.ctor(System.Boolean)
extern TypeInfo* WaitHandle_t3252_il2cpp_TypeInfo_var;
extern "C" void Mutex__ctor_m24322 (Mutex_t5143 * __this, bool ___initiallyOwned, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t3252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5686);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t3252_il2cpp_TypeInfo_var);
		WaitHandle__ctor_m24391(__this, /*hidden argument*/NULL);
		bool L_0 = ___initiallyOwned;
		IntPtr_t L_1 = Mutex_CreateMutex_internal_m24323(NULL /*static, unused*/, L_0, (String_t*)NULL, (&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< IntPtr_t >::Invoke(8 /* System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr) */, __this, L_1);
		return;
	}
}
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
extern "C" IntPtr_t Mutex_CreateMutex_internal_m24323 (Object_t * __this /* static, unused */, bool ___initiallyOwned, String_t* ___name, bool* ___created, const MethodInfo* method)
{
	typedef IntPtr_t (*Mutex_CreateMutex_internal_m24323_ftn) (bool, String_t*, bool*);
	static Mutex_CreateMutex_internal_m24323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mutex_CreateMutex_internal_m24323_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)");
	return _il2cpp_icall_func(___initiallyOwned, ___name, ___created);
}
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
extern "C" bool Mutex_ReleaseMutex_internal_m24324 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef bool (*Mutex_ReleaseMutex_internal_m24324_ftn) (IntPtr_t);
	static Mutex_ReleaseMutex_internal_m24324_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Mutex_ReleaseMutex_internal_m24324_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)");
	return _il2cpp_icall_func(___handle);
}
// System.Void System.Threading.Mutex::ReleaseMutex()
extern TypeInfo* ApplicationException_t3803_il2cpp_TypeInfo_var;
extern "C" void Mutex_ReleaseMutex_m24325 (Mutex_t5143 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ApplicationException_t3803_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7027);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		IntPtr_t L_0 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, __this);
		bool L_1 = Mutex_ReleaseMutex_internal_m24324(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		ApplicationException_t3803 * L_3 = (ApplicationException_t3803 *)il2cpp_codegen_object_new (ApplicationException_t3803_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m15182(L_3, (String_t*) &_stringLiteral6526, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		return;
	}
}
// System.Threading.NativeEventCalls
#include "mscorlib_System_Threading_NativeEventCalls.h"
#ifndef _MSC_VER
#else
#endif



// System.IntPtr System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Boolean&)
extern "C" IntPtr_t NativeEventCalls_CreateEvent_internal_m24326 (Object_t * __this /* static, unused */, bool ___manual, bool ___initial, String_t* ___name, bool* ___created, const MethodInfo* method)
{
	typedef IntPtr_t (*NativeEventCalls_CreateEvent_internal_m24326_ftn) (bool, bool, String_t*, bool*);
	static NativeEventCalls_CreateEvent_internal_m24326_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeEventCalls_CreateEvent_internal_m24326_ftn)il2cpp_codegen_resolve_icall ("System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Boolean&)");
	return _il2cpp_icall_func(___manual, ___initial, ___name, ___created);
}
// System.Boolean System.Threading.NativeEventCalls::SetEvent_internal(System.IntPtr)
extern "C" bool NativeEventCalls_SetEvent_internal_m24327 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef bool (*NativeEventCalls_SetEvent_internal_m24327_ftn) (IntPtr_t);
	static NativeEventCalls_SetEvent_internal_m24327_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeEventCalls_SetEvent_internal_m24327_ftn)il2cpp_codegen_resolve_icall ("System.Threading.NativeEventCalls::SetEvent_internal(System.IntPtr)");
	return _il2cpp_icall_func(___handle);
}
// System.Boolean System.Threading.NativeEventCalls::ResetEvent_internal(System.IntPtr)
extern "C" bool NativeEventCalls_ResetEvent_internal_m24328 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef bool (*NativeEventCalls_ResetEvent_internal_m24328_ftn) (IntPtr_t);
	static NativeEventCalls_ResetEvent_internal_m24328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeEventCalls_ResetEvent_internal_m24328_ftn)il2cpp_codegen_resolve_icall ("System.Threading.NativeEventCalls::ResetEvent_internal(System.IntPtr)");
	return _il2cpp_icall_func(___handle);
}
// System.Void System.Threading.NativeEventCalls::CloseEvent_internal(System.IntPtr)
extern "C" void NativeEventCalls_CloseEvent_internal_m24329 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef void (*NativeEventCalls_CloseEvent_internal_m24329_ftn) (IntPtr_t);
	static NativeEventCalls_CloseEvent_internal_m24329_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeEventCalls_CloseEvent_internal_m24329_ftn)il2cpp_codegen_resolve_icall ("System.Threading.NativeEventCalls::CloseEvent_internal(System.IntPtr)");
	_il2cpp_icall_func(___handle);
}
// System.Threading.RegisteredWaitHandle
#include "mscorlib_System_Threading_RegisteredWaitHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.RegisteredWaitHandle
#include "mscorlib_System_Threading_RegisteredWaitHandleMethodDeclarations.h"

// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallback.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallback.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.Threading.WaitCallback
#include "mscorlib_System_Threading_WaitCallbackMethodDeclarations.h"
// System.Threading.ThreadPool
#include "mscorlib_System_Threading_ThreadPoolMethodDeclarations.h"
// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallbackMethodDeclarations.h"


// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern TypeInfo* ManualResetEvent_t3201_il2cpp_TypeInfo_var;
extern "C" void RegisteredWaitHandle__ctor_m24330 (RegisteredWaitHandle_t5378 * __this, WaitHandle_t3252 * ___waitObject, WaitOrTimerCallback_t5377 * ___callback, Object_t * ___state, TimeSpan_t334  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t3201_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5486);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject__ctor_m18076(__this, /*hidden argument*/NULL);
		WaitHandle_t3252 * L_0 = ___waitObject;
		__this->____waitObject_1 = L_0;
		WaitOrTimerCallback_t5377 * L_1 = ___callback;
		__this->____callback_2 = L_1;
		Object_t * L_2 = ___state;
		__this->____state_4 = L_2;
		TimeSpan_t334  L_3 = ___timeout;
		__this->____timeout_3 = L_3;
		bool L_4 = ___executeOnlyOnce;
		__this->____executeOnlyOnce_5 = L_4;
		__this->____finalEvent_6 = (WaitHandle_t3252 *)NULL;
		ManualResetEvent_t3201 * L_5 = (ManualResetEvent_t3201 *)il2cpp_codegen_object_new (ManualResetEvent_t3201_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m11547(L_5, 0, /*hidden argument*/NULL);
		__this->____cancelEvent_7 = L_5;
		__this->____callsInProcess_8 = 0;
		__this->____unregistered_9 = 0;
		return;
	}
}
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern TypeInfo* WaitHandleU5BU5D_t5431_il2cpp_TypeInfo_var;
extern TypeInfo* WaitHandle_t3252_il2cpp_TypeInfo_var;
extern TypeInfo* WaitCallback_t2162_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* RegisteredWaitHandle_DoCallBack_m24332_MethodInfo_var;
extern "C" void RegisteredWaitHandle_Wait_m24331 (RegisteredWaitHandle_t5378 * __this, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandleU5BU5D_t5431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9355);
		WaitHandle_t3252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5686);
		WaitCallback_t2162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3407);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		RegisteredWaitHandle_DoCallBack_m24332_MethodInfo_var = il2cpp_codegen_method_info_from_index(1638);
		s_Il2CppMethodIntialized = true;
	}
	RegisteredWaitHandle_t5378 * V_0 = {0};
	WaitHandleU5BU5D_t5431* V_1 = {0};
	int32_t V_2 = 0;
	RegisteredWaitHandle_t5378 * V_3 = {0};
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
			WaitHandleU5BU5D_t5431* L_0 = ((WaitHandleU5BU5D_t5431*)SZArrayNew(WaitHandleU5BU5D_t5431_il2cpp_TypeInfo_var, 2));
			WaitHandle_t3252 * L_1 = (__this->____waitObject_1);
			NullCheck(L_0);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
			ArrayElementTypeCheck (L_0, L_1);
			*((WaitHandle_t3252 **)(WaitHandle_t3252 **)SZArrayLdElema(L_0, 0)) = (WaitHandle_t3252 *)L_1;
			WaitHandleU5BU5D_t5431* L_2 = L_0;
			ManualResetEvent_t3201 * L_3 = (__this->____cancelEvent_7);
			NullCheck(L_2);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
			ArrayElementTypeCheck (L_2, L_3);
			*((WaitHandle_t3252 **)(WaitHandle_t3252 **)SZArrayLdElema(L_2, 1)) = (WaitHandle_t3252 *)L_3;
			V_1 = L_2;
		}

IL_0019:
		{
			WaitHandleU5BU5D_t5431* L_4 = V_1;
			TimeSpan_t334  L_5 = (__this->____timeout_3);
			IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t3252_il2cpp_TypeInfo_var);
			int32_t L_6 = WaitHandle_WaitAny_m24396(NULL /*static, unused*/, L_4, L_5, 0, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7 = (__this->____unregistered_9);
			if (L_7)
			{
				goto IL_006d;
			}
		}

IL_002f:
		{
			V_3 = __this;
			RegisteredWaitHandle_t5378 * L_8 = V_3;
			Monitor_Enter_m7520(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		}

IL_0037:
		try
		{ // begin try (depth: 2)
			int32_t L_9 = (__this->____callsInProcess_8);
			__this->____callsInProcess_8 = ((int32_t)((int32_t)L_9+(int32_t)1));
			IL2CPP_LEAVE(0x4E, FINALLY_0047);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0047;
		}

FINALLY_0047:
		{ // begin finally (depth: 2)
			RegisteredWaitHandle_t5378 * L_10 = V_3;
			Monitor_Exit_m7521(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(71)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(71)
		{
			IL2CPP_JUMP_TBL(0x4E, IL_004e)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_004e:
		{
			IntPtr_t L_11 = { (void*)RegisteredWaitHandle_DoCallBack_m24332_MethodInfo_var };
			WaitCallback_t2162 * L_12 = (WaitCallback_t2162 *)il2cpp_codegen_object_new (WaitCallback_t2162_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m7942(L_12, __this, L_11, /*hidden argument*/NULL);
			int32_t L_13 = V_2;
			bool L_14 = ((((int32_t)L_13) == ((int32_t)((int32_t)258)))? 1 : 0);
			Object_t * L_15 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_14);
			ThreadPool_QueueUserWorkItem_m18117(NULL /*static, unused*/, L_12, L_15, /*hidden argument*/NULL);
		}

IL_006d:
		{
			bool L_16 = (__this->____unregistered_9);
			if (L_16)
			{
				goto IL_007d;
			}
		}

IL_0075:
		{
			bool L_17 = (__this->____executeOnlyOnce_5);
			if (!L_17)
			{
				goto IL_0019;
			}
		}

IL_007d:
		{
			goto IL_0082;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_007f;
		throw e;
	}

CATCH_007f:
	{ // begin catch(System.Object)
		goto IL_0082;
	} // end catch (depth: 1)

IL_0082:
	{
		V_0 = __this;
		RegisteredWaitHandle_t5378 * L_18 = V_0;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			__this->____unregistered_9 = 1;
			int32_t L_19 = (__this->____callsInProcess_8);
			if (L_19)
			{
				goto IL_00b2;
			}
		}

IL_0099:
		{
			WaitHandle_t3252 * L_20 = (__this->____finalEvent_6);
			if (!L_20)
			{
				goto IL_00b2;
			}
		}

IL_00a1:
		{
			WaitHandle_t3252 * L_21 = (__this->____finalEvent_6);
			NullCheck(L_21);
			IntPtr_t L_22 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, L_21);
			NativeEventCalls_SetEvent_internal_m24327(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		}

IL_00b2:
		{
			IL2CPP_LEAVE(0xBB, FINALLY_00b4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00b4;
	}

FINALLY_00b4:
	{ // begin finally (depth: 1)
		RegisteredWaitHandle_t5378 * L_23 = V_0;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(180)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(180)
	{
		IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00bb:
	{
		return;
	}
}
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" void RegisteredWaitHandle_DoCallBack_m24332 (RegisteredWaitHandle_t5378 * __this, Object_t * ___timedOut, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	RegisteredWaitHandle_t5378 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WaitOrTimerCallback_t5377 * L_0 = (__this->____callback_2);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		WaitOrTimerCallback_t5377 * L_1 = (__this->____callback_2);
		Object_t * L_2 = (__this->____state_4);
		Object_t * L_3 = ___timedOut;
		NullCheck(L_1);
		VirtActionInvoker2< Object_t *, bool >::Invoke(12 /* System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean) */, L_1, L_2, ((*(bool*)((bool*)UnBox (L_3, Boolean_t59_il2cpp_TypeInfo_var)))));
	}

IL_001f:
	{
		V_0 = __this;
		RegisteredWaitHandle_t5378 * L_4 = V_0;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_5 = (__this->____callsInProcess_8);
			__this->____callsInProcess_8 = ((int32_t)((int32_t)L_5-(int32_t)1));
			bool L_6 = (__this->____unregistered_9);
			if (!L_6)
			{
				goto IL_005e;
			}
		}

IL_003d:
		{
			int32_t L_7 = (__this->____callsInProcess_8);
			if (L_7)
			{
				goto IL_005e;
			}
		}

IL_0045:
		{
			WaitHandle_t3252 * L_8 = (__this->____finalEvent_6);
			if (!L_8)
			{
				goto IL_005e;
			}
		}

IL_004d:
		{
			WaitHandle_t3252 * L_9 = (__this->____finalEvent_6);
			NullCheck(L_9);
			IntPtr_t L_10 = (IntPtr_t)VirtFuncInvoker0< IntPtr_t >::Invoke(7 /* System.IntPtr System.Threading.WaitHandle::get_Handle() */, L_9);
			NativeEventCalls_SetEvent_internal_m24327(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		RegisteredWaitHandle_t5378 * L_11 = V_0;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0067:
	{
		return;
	}
}
// System.Threading.SynchronizationContext
#include "mscorlib_System_Threading_SynchronizationContext.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.SynchronizationContext
#include "mscorlib_System_Threading_SynchronizationContextMethodDeclarations.h"

// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallback.h"
// System.Threading.SendOrPostCallback
#include "mscorlib_System_Threading_SendOrPostCallbackMethodDeclarations.h"


// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C" void SynchronizationContext__ctor_m7999 (SynchronizationContext_t1385 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern TypeInfo* SynchronizationContext_t1385_il2cpp_TypeInfo_var;
extern "C" SynchronizationContext_t1385 * SynchronizationContext_get_Current_m7998 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationContext_t1385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3445);
		s_Il2CppMethodIntialized = true;
	}
	{
		SynchronizationContext_t1385 * L_0 = ((SynchronizationContext_t1385_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SynchronizationContext_t1385_il2cpp_TypeInfo_var))->___currentContext_0;
		return L_0;
	}
}
// System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern TypeInfo* WaitCallback_t2162_il2cpp_TypeInfo_var;
extern const MethodInfo* SendOrPostCallback_Invoke_m24449_MethodInfo_var;
extern "C" void SynchronizationContext_Post_m24333 (SynchronizationContext_t1385 * __this, SendOrPostCallback_t2178 * ___d, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitCallback_t2162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3407);
		SendOrPostCallback_Invoke_m24449_MethodInfo_var = il2cpp_codegen_method_info_from_index(1639);
		s_Il2CppMethodIntialized = true;
	}
	{
		SendOrPostCallback_t2178 * L_0 = ___d;
		IntPtr_t L_1 = { (void*)SendOrPostCallback_Invoke_m24449_MethodInfo_var };
		WaitCallback_t2162 * L_2 = (WaitCallback_t2162 *)il2cpp_codegen_object_new (WaitCallback_t2162_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m7942(L_2, L_0, L_1, /*hidden argument*/NULL);
		Object_t * L_3 = ___state;
		ThreadPool_QueueUserWorkItem_m18117(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Threading.SynchronizationLockException::.ctor()
extern "C" void SynchronizationLockException__ctor_m24334 (SynchronizationLockException_t3802 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m12108(__this, (String_t*) &_stringLiteral6527, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.SynchronizationLockException::.ctor(System.String)
extern "C" void SynchronizationLockException__ctor_m15181 (SynchronizationLockException_t3802 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m12108(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.SynchronizationLockException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SynchronizationLockException__ctor_m24335 (SynchronizationLockException_t3802 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___info;
		StreamingContext_t2937  L_1 = ___context;
		SystemException__ctor_m14759(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadState.h"
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStart.h"
// System.MulticastDelegate
#include "mscorlib_System_MulticastDelegate.h"
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStart.h"
// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.NumberFormatter
#include "mscorlib_System_NumberFormatterMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern "C" void Thread__ctor_m18098 (Thread_t1478 * __this, ThreadStart_t4575 * ___start, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___state_7 = 8;
		__this->___apartment_state_32 = 2;
		CriticalFinalizerObject__ctor_m22530(__this, /*hidden argument*/NULL);
		ThreadStart_t4575 * L_0 = ___start;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6528, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0022:
	{
		ThreadStart_t4575 * L_2 = ___start;
		__this->___threadstart_45 = L_2;
		Thread_Thread_init_m24344(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern "C" void Thread__ctor_m7940 (Thread_t1478 * __this, ParameterizedThreadStart_t2161 * ___start, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___state_7 = 8;
		__this->___apartment_state_32 = 2;
		CriticalFinalizerObject__ctor_m22530(__this, /*hidden argument*/NULL);
		ParameterizedThreadStart_t2161 * L_0 = ___start;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6529, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0022:
	{
		ParameterizedThreadStart_t2161 * L_2 = ___start;
		__this->___threadstart_45 = L_2;
		Thread_Thread_init_m24344(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Thread::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" void Thread__cctor_m24336 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_0, /*hidden argument*/NULL);
		((Thread_t1478_StaticFields*)Thread_t1478_il2cpp_TypeInfo_var->static_fields)->___datastore_lock_49 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_1, /*hidden argument*/NULL);
		((Thread_t1478_StaticFields*)Thread_t1478_il2cpp_TypeInfo_var->static_fields)->___culture_lock_51 = L_1;
		return;
	}
}
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C" Context_t5122 * Thread_get_CurrentContext_m24337 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t5122 * L_0 = AppDomain_InternalGetContext_m19951(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C" Thread_t1478 * Thread_CurrentThread_internal_m24338 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef Thread_t1478 * (*Thread_CurrentThread_internal_m24338_ftn) ();
	static Thread_CurrentThread_internal_m24338_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_CurrentThread_internal_m24338_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::CurrentThread_internal()");
	return _il2cpp_icall_func();
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" Thread_t1478 * Thread_get_CurrentThread_m7605 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_t1478 * L_0 = Thread_CurrentThread_internal_m24338(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.AppDomain System.Threading.Thread::GetDomain()
extern "C" AppDomain_t2163 * Thread_GetDomain_m24339 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		AppDomain_t2163 * L_0 = AppDomain_get_CurrentDomain_m7944(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C" int32_t Thread_GetDomainID_m24340 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Thread_GetDomainID_m24340_ftn) ();
	static Thread_GetDomainID_m24340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetDomainID_m24340_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetDomainID()");
	return _il2cpp_icall_func();
}
// System.Void System.Threading.Thread::ResetAbort_internal()
extern "C" void Thread_ResetAbort_internal_m24341 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Thread_ResetAbort_internal_m24341_ftn) ();
	static Thread_ResetAbort_internal_m24341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_ResetAbort_internal_m24341_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::ResetAbort_internal()");
	_il2cpp_icall_func();
}
// System.Void System.Threading.Thread::ResetAbort()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" void Thread_ResetAbort_m18120 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_ResetAbort_internal_m24341(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Thread::Sleep_internal(System.Int32)
extern "C" void Thread_Sleep_internal_m24342 (Object_t * __this /* static, unused */, int32_t ___ms, const MethodInfo* method)
{
	typedef void (*Thread_Sleep_internal_m24342_ftn) (int32_t);
	static Thread_Sleep_internal_m24342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Sleep_internal_m24342_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Sleep_internal(System.Int32)");
	_il2cpp_icall_func(___ms);
}
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" void Thread_Sleep_m15184 (Object_t * __this /* static, unused */, int32_t ___millisecondsTimeout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___millisecondsTimeout;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_1 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_1, (String_t*) &_stringLiteral3759, (String_t*) &_stringLiteral6530, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		int32_t L_2 = ___millisecondsTimeout;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_Sleep_internal_m24342(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C" IntPtr_t Thread_Thread_internal_m24343 (Thread_t1478 * __this, MulticastDelegate_t388 * ___start, const MethodInfo* method)
{
	typedef IntPtr_t (*Thread_Thread_internal_m24343_ftn) (Thread_t1478 *, MulticastDelegate_t388 *);
	static Thread_Thread_internal_m24343_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Thread_internal_m24343_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Thread_internal(System.MulticastDelegate)");
	return _il2cpp_icall_func(__this, ___start);
}
// System.Void System.Threading.Thread::Thread_init()
extern "C" void Thread_Thread_init_m24344 (Thread_t1478 * __this, const MethodInfo* method)
{
	typedef void (*Thread_Thread_init_m24344_ftn) (Thread_t1478 *);
	static Thread_Thread_init_m24344_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Thread_init_m24344_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Thread_init()");
	_il2cpp_icall_func(__this);
}
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C" CultureInfo_t782 * Thread_GetCachedCurrentCulture_m24345 (Thread_t1478 * __this, const MethodInfo* method)
{
	typedef CultureInfo_t782 * (*Thread_GetCachedCurrentCulture_m24345_ftn) (Thread_t1478 *);
	static Thread_GetCachedCurrentCulture_m24345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetCachedCurrentCulture_m24345_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetCachedCurrentCulture()");
	return _il2cpp_icall_func(__this);
}
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C" ByteU5BU5D_t66* Thread_GetSerializedCurrentCulture_m24346 (Thread_t1478 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t66* (*Thread_GetSerializedCurrentCulture_m24346_ftn) (Thread_t1478 *);
	static Thread_GetSerializedCurrentCulture_m24346_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetSerializedCurrentCulture_m24346_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetSerializedCurrentCulture()");
	return _il2cpp_icall_func(__this);
}
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentCulture_m24347 (Thread_t1478 * __this, CultureInfo_t782 * ___culture, const MethodInfo* method)
{
	typedef void (*Thread_SetCachedCurrentCulture_m24347_ftn) (Thread_t1478 *, CultureInfo_t782 *);
	static Thread_SetCachedCurrentCulture_m24347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SetCachedCurrentCulture_m24347_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)");
	_il2cpp_icall_func(__this, ___culture);
}
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C" CultureInfo_t782 * Thread_GetCachedCurrentUICulture_m24348 (Thread_t1478 * __this, const MethodInfo* method)
{
	typedef CultureInfo_t782 * (*Thread_GetCachedCurrentUICulture_m24348_ftn) (Thread_t1478 *);
	static Thread_GetCachedCurrentUICulture_m24348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetCachedCurrentUICulture_m24348_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetCachedCurrentUICulture()");
	return _il2cpp_icall_func(__this);
}
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C" ByteU5BU5D_t66* Thread_GetSerializedCurrentUICulture_m24349 (Thread_t1478 * __this, const MethodInfo* method)
{
	typedef ByteU5BU5D_t66* (*Thread_GetSerializedCurrentUICulture_m24349_ftn) (Thread_t1478 *);
	static Thread_GetSerializedCurrentUICulture_m24349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetSerializedCurrentUICulture_m24349_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetSerializedCurrentUICulture()");
	return _il2cpp_icall_func(__this);
}
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentUICulture_m24350 (Thread_t1478 * __this, CultureInfo_t782 * ___culture, const MethodInfo* method)
{
	typedef void (*Thread_SetCachedCurrentUICulture_m24350_ftn) (Thread_t1478 *, CultureInfo_t782 *);
	static Thread_SetCachedCurrentUICulture_m24350_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SetCachedCurrentUICulture_m24350_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)");
	_il2cpp_icall_func(__this, ___culture);
}
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern TypeInfo* CultureInfo_t782_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern TypeInfo* NumberFormatter_t4902_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t5120_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t65_il2cpp_TypeInfo_var;
extern "C" CultureInfo_t782 * Thread_get_CurrentCulture_m24351 (Thread_t1478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		NumberFormatter_t4902_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8845);
		BinaryFormatter_t5120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9122);
		MemoryStream_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t782 * V_0 = {0};
	ByteU5BU5D_t66* V_1 = {0};
	Object_t * V_2 = {0};
	BinaryFormatter_t5120 * V_3 = {0};
	MemoryStream_t65 * V_4 = {0};
	CultureInfo_t782 * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___in_currentculture_50);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
		CultureInfo_t782 * L_1 = CultureInfo_get_InvariantCulture_m4210(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		CultureInfo_t782 * L_2 = Thread_GetCachedCurrentCulture_m24345(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		CultureInfo_t782 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		CultureInfo_t782 * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		ByteU5BU5D_t66* L_5 = Thread_GetSerializedCurrentCulture_m24346(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		ByteU5BU5D_t66* L_6 = V_1;
		if (L_6)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((Thread_t1478_StaticFields*)Thread_t1478_il2cpp_TypeInfo_var->static_fields)->___culture_lock_51;
		V_2 = L_7;
		Object_t * L_8 = V_2;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			__this->___in_currentculture_50 = 1;
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
			CultureInfo_t782 * L_9 = CultureInfo_ConstructCurrentCulture_m21271(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_0 = L_9;
			CultureInfo_t782 * L_10 = V_0;
			Thread_SetCachedCurrentCulture_m24347(__this, L_10, /*hidden argument*/NULL);
			__this->___in_currentculture_50 = 0;
			CultureInfo_t782 * L_11 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4902_il2cpp_TypeInfo_var);
			NumberFormatter_SetThreadCurrentCulture_m20619(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			CultureInfo_t782 * L_12 = V_0;
			V_5 = L_12;
			IL2CPP_LEAVE(0x9B, FINALLY_0058);
		}

IL_0056:
		{
			IL2CPP_LEAVE(0x5F, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		Object_t * L_13 = V_2;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x9B, IL_009b)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005f:
	{
		__this->___in_currentculture_50 = 1;
	}

IL_0066:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t5120 * L_14 = (BinaryFormatter_t5120 *)il2cpp_codegen_object_new (BinaryFormatter_t5120_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m23017(L_14, /*hidden argument*/NULL);
		V_3 = L_14;
		ByteU5BU5D_t66* L_15 = V_1;
		MemoryStream_t65 * L_16 = (MemoryStream_t65 *)il2cpp_codegen_object_new (MemoryStream_t65_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m430(L_16, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		BinaryFormatter_t5120 * L_17 = V_3;
		MemoryStream_t65 * L_18 = V_4;
		NullCheck(L_17);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, Stream_t51 * >::Invoke(7 /* System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream) */, L_17, L_18);
		V_0 = ((CultureInfo_t782 *)Castclass(L_19, CultureInfo_t782_il2cpp_TypeInfo_var));
		CultureInfo_t782 * L_20 = V_0;
		Thread_SetCachedCurrentCulture_m24347(__this, L_20, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x93, FINALLY_008b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		__this->___in_currentculture_50 = 0;
		IL2CPP_END_FINALLY(139)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0093:
	{
		CultureInfo_t782 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t4902_il2cpp_TypeInfo_var);
		NumberFormatter_SetThreadCurrentCulture_m20619(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		CultureInfo_t782 * L_22 = V_0;
		return L_22;
	}

IL_009b:
	{
		CultureInfo_t782 * L_23 = V_5;
		return L_23;
	}
}
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern TypeInfo* CultureInfo_t782_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t5120_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t65_il2cpp_TypeInfo_var;
extern "C" CultureInfo_t782 * Thread_get_CurrentUICulture_m24352 (Thread_t1478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		BinaryFormatter_t5120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9122);
		MemoryStream_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		s_Il2CppMethodIntialized = true;
	}
	CultureInfo_t782 * V_0 = {0};
	ByteU5BU5D_t66* V_1 = {0};
	Object_t * V_2 = {0};
	BinaryFormatter_t5120 * V_3 = {0};
	MemoryStream_t65 * V_4 = {0};
	CultureInfo_t782 * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___in_currentculture_50);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
		CultureInfo_t782 * L_1 = CultureInfo_get_InvariantCulture_m4210(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		CultureInfo_t782 * L_2 = Thread_GetCachedCurrentUICulture_m24348(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		CultureInfo_t782 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		CultureInfo_t782 * L_4 = V_0;
		return L_4;
	}

IL_001a:
	{
		ByteU5BU5D_t66* L_5 = Thread_GetSerializedCurrentUICulture_m24349(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		ByteU5BU5D_t66* L_6 = V_1;
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((Thread_t1478_StaticFields*)Thread_t1478_il2cpp_TypeInfo_var->static_fields)->___culture_lock_51;
		V_2 = L_7;
		Object_t * L_8 = V_2;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			__this->___in_currentculture_50 = 1;
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t782_il2cpp_TypeInfo_var);
			CultureInfo_t782 * L_9 = CultureInfo_ConstructCurrentUICulture_m21272(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_0 = L_9;
			CultureInfo_t782 * L_10 = V_0;
			Thread_SetCachedCurrentUICulture_m24350(__this, L_10, /*hidden argument*/NULL);
			__this->___in_currentculture_50 = 0;
			CultureInfo_t782 * L_11 = V_0;
			V_5 = L_11;
			IL2CPP_LEAVE(0x8F, FINALLY_0052);
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Object_t * L_12 = V_2;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0059:
	{
		__this->___in_currentculture_50 = 1;
	}

IL_0060:
	try
	{ // begin try (depth: 1)
		BinaryFormatter_t5120 * L_13 = (BinaryFormatter_t5120 *)il2cpp_codegen_object_new (BinaryFormatter_t5120_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m23017(L_13, /*hidden argument*/NULL);
		V_3 = L_13;
		ByteU5BU5D_t66* L_14 = V_1;
		MemoryStream_t65 * L_15 = (MemoryStream_t65 *)il2cpp_codegen_object_new (MemoryStream_t65_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m430(L_15, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		BinaryFormatter_t5120 * L_16 = V_3;
		MemoryStream_t65 * L_17 = V_4;
		NullCheck(L_16);
		Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, Stream_t51 * >::Invoke(7 /* System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream) */, L_16, L_17);
		V_0 = ((CultureInfo_t782 *)Castclass(L_18, CultureInfo_t782_il2cpp_TypeInfo_var));
		CultureInfo_t782 * L_19 = V_0;
		Thread_SetCachedCurrentUICulture_m24350(__this, L_19, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x8D, FINALLY_0085);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		__this->___in_currentculture_50 = 0;
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_JUMP_TBL(0x8D, IL_008d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_008d:
	{
		CultureInfo_t782 * L_20 = V_0;
		return L_20;
	}

IL_008f:
	{
		CultureInfo_t782 * L_21 = V_5;
		return L_21;
	}
}
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C" void Thread_set_IsBackground_m24353 (Thread_t1478 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		Thread_SetState_m24360(__this, 4, /*hidden argument*/NULL);
		goto IL_0013;
	}

IL_000c:
	{
		Thread_ClrState_m24361(__this, 4, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Threading.Thread::SetName_internal(System.String)
extern "C" void Thread_SetName_internal_m24354 (Thread_t1478 * __this, String_t* ___name, const MethodInfo* method)
{
	typedef void (*Thread_SetName_internal_m24354_ftn) (Thread_t1478 *, String_t*);
	static Thread_SetName_internal_m24354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SetName_internal_m24354_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SetName_internal(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C" void Thread_set_Name_m24355 (Thread_t1478 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		Thread_SetName_internal_m24354(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Thread::Abort_internal(System.Object)
extern "C" void Thread_Abort_internal_m24356 (Thread_t1478 * __this, Object_t * ___stateInfo, const MethodInfo* method)
{
	typedef void (*Thread_Abort_internal_m24356_ftn) (Thread_t1478 *, Object_t *);
	static Thread_Abort_internal_m24356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Abort_internal_m24356_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Abort_internal(System.Object)");
	_il2cpp_icall_func(__this, ___stateInfo);
}
// System.Void System.Threading.Thread::Abort()
extern "C" void Thread_Abort_m18125 (Thread_t1478 * __this, const MethodInfo* method)
{
	{
		Thread_Abort_internal_m24356(__this, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Thread::MemoryBarrier()
extern "C" void Thread_MemoryBarrier_m18069 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Thread_MemoryBarrier_m18069_ftn) ();
	static Thread_MemoryBarrier_m18069_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_MemoryBarrier_m18069_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::MemoryBarrier()");
	_il2cpp_icall_func();
}
// System.Void System.Threading.Thread::SpinWait_nop()
extern "C" void Thread_SpinWait_nop_m24357 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (*Thread_SpinWait_nop_m24357_ftn) ();
	static Thread_SpinWait_nop_m24357_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SpinWait_nop_m24357_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SpinWait_nop()");
	_il2cpp_icall_func();
}
// System.Void System.Threading.Thread::SpinWait(System.Int32)
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" void Thread_SpinWait_m15183 (Object_t * __this /* static, unused */, int32_t ___iterations, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___iterations;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		goto IL_000c;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_SpinWait_nop_m24357(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_000c:
	{
		int32_t L_1 = ___iterations;
		int32_t L_2 = L_1;
		___iterations = ((int32_t)((int32_t)L_2-(int32_t)1));
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Threading.Thread::Start()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern TypeInfo* SystemException_t3383_il2cpp_TypeInfo_var;
extern "C" void Thread_Start_m7941 (Thread_t1478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		SystemException_t3383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5836);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ExecutionContext_IsFlowSuppressed_m24312(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ExecutionContext_t5152 * L_1 = ExecutionContext_Capture_m24307(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___ec_to_set_37 = L_1;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_t1478 * L_2 = Thread_get_CurrentThread_m7605(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (L_2->____principal_47);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_t1478 * L_4 = Thread_get_CurrentThread_m7605(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_5 = (L_4->____principal_47);
		__this->____principal_47 = L_5;
	}

IL_002e:
	{
		MulticastDelegate_t388 * L_6 = (__this->___threadstart_45);
		IntPtr_t L_7 = Thread_Thread_internal_m24343(__this, L_6, /*hidden argument*/NULL);
		IntPtr_t L_8 = IntPtr_op_Explicit_m18119(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		bool L_9 = IntPtr_op_Equality_m10338(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		SystemException_t3383 * L_10 = (SystemException_t3383 *)il2cpp_codegen_object_new (SystemException_t3383_il2cpp_TypeInfo_var);
		SystemException__ctor_m12108(L_10, (String_t*) &_stringLiteral6531, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0052:
	{
		return;
	}
}
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C" void Thread_Thread_free_internal_m24358 (Thread_t1478 * __this, IntPtr_t ___handle, const MethodInfo* method)
{
	typedef void (*Thread_Thread_free_internal_m24358_ftn) (Thread_t1478 *, IntPtr_t);
	static Thread_Thread_free_internal_m24358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_Thread_free_internal_m24358_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::Thread_free_internal(System.IntPtr)");
	_il2cpp_icall_func(__this, ___handle);
}
// System.Void System.Threading.Thread::Finalize()
extern "C" void Thread_Finalize_m24359 (Thread_t1478 * __this, const MethodInfo* method)
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
		IntPtr_t L_0 = (__this->___system_thread_handle_1);
		Thread_Thread_free_internal_m24358(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x15, FINALLY_000e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_000e;
	}

FINALLY_000e:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m22531(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(14)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(14)
	{
		IL2CPP_JUMP_TBL(0x15, IL_0015)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
extern "C" void Thread_SetState_m24360 (Thread_t1478 * __this, int32_t ___set, const MethodInfo* method)
{
	typedef void (*Thread_SetState_m24360_ftn) (Thread_t1478 *, int32_t);
	static Thread_SetState_m24360_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_SetState_m24360_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::SetState(System.Threading.ThreadState)");
	_il2cpp_icall_func(__this, ___set);
}
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
extern "C" void Thread_ClrState_m24361 (Thread_t1478 * __this, int32_t ___clr, const MethodInfo* method)
{
	typedef void (*Thread_ClrState_m24361_ftn) (Thread_t1478 *, int32_t);
	static Thread_ClrState_m24361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_ClrState_m24361_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::ClrState(System.Threading.ThreadState)");
	_il2cpp_icall_func(__this, ___clr);
}
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" int32_t Thread_GetNewManagedId_m24362 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetNewManagedId_internal_m24363(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C" int32_t Thread_GetNewManagedId_internal_m24363 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Thread_GetNewManagedId_internal_m24363_ftn) ();
	static Thread_GetNewManagedId_internal_m24363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Thread_GetNewManagedId_internal_m24363_ftn)il2cpp_codegen_resolve_icall ("System.Threading.Thread::GetNewManagedId_internal()");
	return _il2cpp_icall_func();
}
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern TypeInfo* ExecutionContext_t5152_il2cpp_TypeInfo_var;
extern "C" ExecutionContext_t5152 * Thread_get_ExecutionContext_m24364 (Thread_t1478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		ExecutionContext_t5152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9354);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		ExecutionContext_t5152 * L_0 = ((Thread_t1478_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Thread_t1478_il2cpp_TypeInfo_var))->____ec_44;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ExecutionContext_t5152 * L_1 = (ExecutionContext_t5152 *)il2cpp_codegen_object_new (ExecutionContext_t5152_il2cpp_TypeInfo_var);
		ExecutionContext__ctor_m24304(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		((Thread_t1478_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Thread_t1478_il2cpp_TypeInfo_var))->____ec_44 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		ExecutionContext_t5152 * L_2 = ((Thread_t1478_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(Thread_t1478_il2cpp_TypeInfo_var))->____ec_44;
		return L_2;
	}
}
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern "C" int32_t Thread_get_ManagedThreadId_m7606 (Thread_t1478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___managed_id_46);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		int32_t L_1 = Thread_GetNewManagedId_m24362(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t* L_2 = &(__this->___managed_id_46);
		int32_t L_3 = V_0;
		Interlocked_CompareExchange_m396(NULL /*static, unused*/, L_2, L_3, 0, /*hidden argument*/NULL);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___managed_id_46);
		return L_4;
	}
}
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C" int32_t Thread_GetHashCode_m24365 (Thread_t1478 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Thread_get_ManagedThreadId_m7606(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C" CompressedStack_t5233 * Thread_GetCompressedStack_m24366 (Thread_t1478 * __this, const MethodInfo* method)
{
	CompressedStack_t5233 * V_0 = {0};
	CompressedStack_t5233 * G_B4_0 = {0};
	{
		ExecutionContext_t5152 * L_0 = Thread_get_ExecutionContext_m24364(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SecurityContext_t5234 * L_1 = ExecutionContext_get_SecurityContext_m24309(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		CompressedStack_t5233 * L_2 = SecurityContext_get_CompressedStack_m23196(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CompressedStack_t5233 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		CompressedStack_t5233 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = CompressedStack_IsEmpty_m24301(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}

IL_001c:
	{
		G_B4_0 = ((CompressedStack_t5233 *)(NULL));
		goto IL_0025;
	}

IL_001f:
	{
		CompressedStack_t5233 * L_6 = V_0;
		NullCheck(L_6);
		CompressedStack_t5233 * L_7 = CompressedStack_CreateCopy_m24298(L_6, /*hidden argument*/NULL);
		G_B4_0 = L_7;
	}

IL_0025:
	{
		return G_B4_0;
	}
}
// System.Threading.ThreadAbortException
#include "mscorlib_System_Threading_ThreadAbortException.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadAbortException
#include "mscorlib_System_Threading_ThreadAbortExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void System.Threading.ThreadAbortException::.ctor()
extern "C" void ThreadAbortException__ctor_m24367 (ThreadAbortException_t4579 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m12108(__this, (String_t*) &_stringLiteral6532, /*hidden argument*/NULL);
		Exception_set_HResult_m10335(__this, ((int32_t)-2146233040), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ThreadAbortException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ThreadAbortException__ctor_m24368 (ThreadAbortException_t4579 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___sc, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___info;
		StreamingContext_t2937  L_1 = ___sc;
		SystemException__ctor_m14759(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.ThreadInterruptedException
#include "mscorlib_System_Threading_ThreadInterruptedException.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadInterruptedException
#include "mscorlib_System_Threading_ThreadInterruptedExceptionMethodDeclarations.h"



// System.Void System.Threading.ThreadInterruptedException::.ctor()
extern "C" void ThreadInterruptedException__ctor_m24369 (ThreadInterruptedException_t5379 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m12108(__this, (String_t*) &_stringLiteral6533, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ThreadInterruptedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ThreadInterruptedException__ctor_m24370 (ThreadInterruptedException_t5379 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___info;
		StreamingContext_t2937  L_1 = ___context;
		SystemException__ctor_m14759(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.ThreadPool
#include "mscorlib_System_Threading_ThreadPool.h"
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"


// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
extern "C" bool ThreadPool_QueueUserWorkItem_m7943 (Object_t * __this /* static, unused */, WaitCallback_t2162 * ___callBack, const MethodInfo* method)
{
	{
		WaitCallback_t2162 * L_0 = ___callBack;
		bool L_1 = ThreadPool_QueueUserWorkItem_m18117(NULL /*static, unused*/, L_0, NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern "C" bool ThreadPool_QueueUserWorkItem_m18117 (Object_t * __this /* static, unused */, WaitCallback_t2162 * ___callBack, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		WaitCallback_t2162 * L_0 = ___callBack;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6534, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		WaitCallback_t2162 * L_2 = ___callBack;
		Object_t * L_3 = ___state;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t386 *, Object_t * >::Invoke(13 /* System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object) */, L_2, L_3, (AsyncCallback_t386 *)NULL, NULL);
		V_0 = L_4;
		Object_t * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		return 1;
	}
}
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* RegisteredWaitHandle_t5378_il2cpp_TypeInfo_var;
extern TypeInfo* WaitCallback_t2162_il2cpp_TypeInfo_var;
extern const MethodInfo* RegisteredWaitHandle_Wait_m24331_MethodInfo_var;
extern "C" RegisteredWaitHandle_t5378 * ThreadPool_RegisterWaitForSingleObject_m24371 (Object_t * __this /* static, unused */, WaitHandle_t3252 * ___waitObject, WaitOrTimerCallback_t5377 * ___callBack, Object_t * ___state, int64_t ___millisecondsTimeOutInterval, bool ___executeOnlyOnce, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		RegisteredWaitHandle_t5378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9356);
		WaitCallback_t2162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3407);
		RegisteredWaitHandle_Wait_m24331_MethodInfo_var = il2cpp_codegen_method_info_from_index(1640);
		s_Il2CppMethodIntialized = true;
	}
	TimeSpan_t334  V_0 = {0};
	RegisteredWaitHandle_t5378 * V_1 = {0};
	{
		int64_t L_0 = ___millisecondsTimeOutInterval;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_1 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7658(L_1, (String_t*) &_stringLiteral3998, (String_t*) &_stringLiteral6535, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___millisecondsTimeOutInterval;
		if ((((int64_t)L_2) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0029;
		}
	}
	{
		NotSupportedException_t56 * L_3 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11464(L_3, (String_t*) &_stringLiteral6536, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		int64_t L_4 = ___millisecondsTimeOutInterval;
		TimeSpan__ctor_m20765((&V_0), 0, 0, 0, 0, (((int32_t)L_4)), /*hidden argument*/NULL);
		WaitHandle_t3252 * L_5 = ___waitObject;
		WaitOrTimerCallback_t5377 * L_6 = ___callBack;
		Object_t * L_7 = ___state;
		TimeSpan_t334  L_8 = V_0;
		bool L_9 = ___executeOnlyOnce;
		RegisteredWaitHandle_t5378 * L_10 = (RegisteredWaitHandle_t5378 *)il2cpp_codegen_object_new (RegisteredWaitHandle_t5378_il2cpp_TypeInfo_var);
		RegisteredWaitHandle__ctor_m24330(L_10, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		RegisteredWaitHandle_t5378 * L_11 = V_1;
		IntPtr_t L_12 = { (void*)RegisteredWaitHandle_Wait_m24331_MethodInfo_var };
		WaitCallback_t2162 * L_13 = (WaitCallback_t2162 *)il2cpp_codegen_object_new (WaitCallback_t2162_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m7942(L_13, L_11, L_12, /*hidden argument*/NULL);
		ThreadPool_QueueUserWorkItem_m18117(NULL /*static, unused*/, L_13, NULL, /*hidden argument*/NULL);
		RegisteredWaitHandle_t5378 * L_14 = V_1;
		return L_14;
	}
}
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C" RegisteredWaitHandle_t5378 * ThreadPool_RegisterWaitForSingleObject_m24372 (Object_t * __this /* static, unused */, WaitHandle_t3252 * ___waitObject, WaitOrTimerCallback_t5377 * ___callBack, Object_t * ___state, TimeSpan_t334  ___timeout, bool ___executeOnlyOnce, const MethodInfo* method)
{
	{
		WaitHandle_t3252 * L_0 = ___waitObject;
		WaitOrTimerCallback_t5377 * L_1 = ___callBack;
		Object_t * L_2 = ___state;
		double L_3 = TimeSpan_get_TotalMilliseconds_m20775((&___timeout), /*hidden argument*/NULL);
		bool L_4 = ___executeOnlyOnce;
		RegisteredWaitHandle_t5378 * L_5 = ThreadPool_RegisterWaitForSingleObject_m24371(NULL /*static, unused*/, L_0, L_1, L_2, (((int64_t)L_3)), L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadStateMethodDeclarations.h"



// System.Threading.ThreadStateException
#include "mscorlib_System_Threading_ThreadStateException.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.ThreadStateException
#include "mscorlib_System_Threading_ThreadStateExceptionMethodDeclarations.h"



// System.Void System.Threading.ThreadStateException::.ctor()
extern "C" void ThreadStateException__ctor_m24373 (ThreadStateException_t5382 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m12108(__this, (String_t*) &_stringLiteral6537, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.ThreadStateException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ThreadStateException__ctor_m24374 (ThreadStateException_t5382 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___info;
		StreamingContext_t2937  L_1 = ___context;
		SystemException__ctor_m14759(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Timer/TimerComparer
#include "mscorlib_System_Threading_Timer_TimerComparer.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Timer/TimerComparer
#include "mscorlib_System_Threading_Timer_TimerComparerMethodDeclarations.h"

// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"


// System.Void System.Threading.Timer/TimerComparer::.ctor()
extern "C" void TimerComparer__ctor_m24375 (TimerComparer_t5383 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Threading.Timer/TimerComparer::Compare(System.Object,System.Object)
extern TypeInfo* Timer_t2174_il2cpp_TypeInfo_var;
extern "C" int32_t TimerComparer_Compare_m24376 (TimerComparer_t5383 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Timer_t2174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3431);
		s_Il2CppMethodIntialized = true;
	}
	Timer_t2174 * V_0 = {0};
	Timer_t2174 * V_1 = {0};
	int64_t V_2 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Object_t * L_0 = ___x;
		V_0 = ((Timer_t2174 *)IsInst(L_0, Timer_t2174_il2cpp_TypeInfo_var));
		Timer_t2174 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		Object_t * L_2 = ___y;
		V_1 = ((Timer_t2174 *)IsInst(L_2, Timer_t2174_il2cpp_TypeInfo_var));
		Timer_t2174 * L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Timer_t2174 * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = (L_4->___next_run_6);
		Timer_t2174 * L_6 = V_1;
		NullCheck(L_6);
		int64_t L_7 = (L_6->___next_run_6);
		V_2 = ((int64_t)((int64_t)L_5-(int64_t)L_7));
		int64_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		Object_t * L_9 = ___x;
		Object_t * L_10 = ___y;
		if ((!(((Object_t*)(Object_t *)L_9) == ((Object_t*)(Object_t *)L_10))))
		{
			goto IL_0030;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B8_0 = (-1);
	}

IL_0031:
	{
		return G_B8_0;
	}

IL_0032:
	{
		int64_t L_11 = V_2;
		if ((((int64_t)L_11) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_003a;
		}
	}
	{
		G_B12_0 = 1;
		goto IL_003b;
	}

IL_003a:
	{
		G_B12_0 = (-1);
	}

IL_003b:
	{
		return G_B12_0;
	}
}
// System.Threading.Timer/Scheduler
#include "mscorlib_System_Threading_Timer_Scheduler.h"
#ifndef _MSC_VER
#else
#endif
// System.Threading.Timer/Scheduler
#include "mscorlib_System_Threading_Timer_SchedulerMethodDeclarations.h"

// System.Collections.SortedList
#include "mscorlib_System_Collections_SortedList.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallback.h"
// System.Collections.SortedList
#include "mscorlib_System_Collections_SortedListMethodDeclarations.h"
// System.Threading.ThreadStart
#include "mscorlib_System_Threading_ThreadStartMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"


// System.Void System.Threading.Timer/Scheduler::.ctor()
extern TypeInfo* TimerComparer_t5383_il2cpp_TypeInfo_var;
extern TypeInfo* SortedList_t4578_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadStart_t4575_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern const MethodInfo* Scheduler_SchedulerThread_m24384_MethodInfo_var;
extern "C" void Scheduler__ctor_m24377 (Scheduler_t5384 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerComparer_t5383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9357);
		SortedList_t4578_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7836);
		ThreadStart_t4575_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7805);
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		Scheduler_SchedulerThread_m24384_MethodInfo_var = il2cpp_codegen_method_info_from_index(1641);
		s_Il2CppMethodIntialized = true;
	}
	Thread_t1478 * V_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		TimerComparer_t5383 * L_0 = (TimerComparer_t5383 *)il2cpp_codegen_object_new (TimerComparer_t5383_il2cpp_TypeInfo_var);
		TimerComparer__ctor_m24375(L_0, /*hidden argument*/NULL);
		SortedList_t4578 * L_1 = (SortedList_t4578 *)il2cpp_codegen_object_new (SortedList_t4578_il2cpp_TypeInfo_var);
		SortedList__ctor_m21150(L_1, L_0, ((int32_t)1024), /*hidden argument*/NULL);
		__this->___list_1 = L_1;
		IntPtr_t L_2 = { (void*)Scheduler_SchedulerThread_m24384_MethodInfo_var };
		ThreadStart_t4575 * L_3 = (ThreadStart_t4575 *)il2cpp_codegen_object_new (ThreadStart_t4575_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m18097(L_3, __this, L_2, /*hidden argument*/NULL);
		Thread_t1478 * L_4 = (Thread_t1478 *)il2cpp_codegen_object_new (Thread_t1478_il2cpp_TypeInfo_var);
		Thread__ctor_m18098(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Thread_t1478 * L_5 = V_0;
		NullCheck(L_5);
		Thread_set_IsBackground_m24353(L_5, 1, /*hidden argument*/NULL);
		Thread_t1478 * L_6 = V_0;
		NullCheck(L_6);
		Thread_Start_m7941(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::.cctor()
extern TypeInfo* Scheduler_t5384_il2cpp_TypeInfo_var;
extern "C" void Scheduler__cctor_m24378 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Scheduler_t5384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9358);
		s_Il2CppMethodIntialized = true;
	}
	{
		Scheduler_t5384 * L_0 = (Scheduler_t5384 *)il2cpp_codegen_object_new (Scheduler_t5384_il2cpp_TypeInfo_var);
		Scheduler__ctor_m24377(L_0, /*hidden argument*/NULL);
		((Scheduler_t5384_StaticFields*)Scheduler_t5384_il2cpp_TypeInfo_var->static_fields)->___instance_0 = L_0;
		return;
	}
}
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
extern TypeInfo* Scheduler_t5384_il2cpp_TypeInfo_var;
extern "C" Scheduler_t5384 * Scheduler_get_Instance_m24379 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Scheduler_t5384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9358);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Scheduler_t5384_il2cpp_TypeInfo_var);
		Scheduler_t5384 * L_0 = ((Scheduler_t5384_StaticFields*)Scheduler_t5384_il2cpp_TypeInfo_var->static_fields)->___instance_0;
		return L_0;
	}
}
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
extern "C" void Scheduler_Remove_m24380 (Scheduler_t5384 * __this, Timer_t2174 * ___timer, const MethodInfo* method)
{
	Scheduler_t5384 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Timer_t2174 * L_0 = ___timer;
		NullCheck(L_0);
		int64_t L_1 = (L_0->___next_run_6);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Timer_t2174 * L_2 = ___timer;
		NullCheck(L_2);
		int64_t L_3 = (L_2->___next_run_6);
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		return;
	}

IL_001a:
	{
		V_0 = __this;
		Scheduler_t5384 * L_4 = V_0;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		Timer_t2174 * L_5 = ___timer;
		Scheduler_InternalRemove_m24383(__this, L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x33, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Scheduler_t5384 * L_6 = V_0;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
extern "C" void Scheduler_Change_m24381 (Scheduler_t5384 * __this, Timer_t2174 * ___timer, int64_t ___new_next_run, const MethodInfo* method)
{
	Scheduler_t5384 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		Scheduler_t5384 * L_0 = V_0;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			Timer_t2174 * L_1 = ___timer;
			Scheduler_InternalRemove_m24383(__this, L_1, /*hidden argument*/NULL);
			int64_t L_2 = ___new_next_run;
			if ((!(((uint64_t)L_2) == ((uint64_t)((int64_t)std::numeric_limits<int64_t>::max())))))
			{
				goto IL_0025;
			}
		}

IL_001c:
		{
			Timer_t2174 * L_3 = ___timer;
			int64_t L_4 = ___new_next_run;
			NullCheck(L_3);
			L_3->___next_run_6 = L_4;
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}

IL_0025:
		{
			Timer_t2174 * L_5 = ___timer;
			NullCheck(L_5);
			bool L_6 = (L_5->___disposed_7);
			if (L_6)
			{
				goto IL_0050;
			}
		}

IL_002d:
		{
			Timer_t2174 * L_7 = ___timer;
			int64_t L_8 = ___new_next_run;
			NullCheck(L_7);
			L_7->___next_run_6 = L_8;
			Timer_t2174 * L_9 = ___timer;
			Scheduler_Add_m24382(__this, L_9, /*hidden argument*/NULL);
			SortedList_t4578 * L_10 = (__this->___list_1);
			NullCheck(L_10);
			Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(42 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_10, 0);
			Timer_t2174 * L_12 = ___timer;
			if ((!(((Object_t*)(Object_t *)L_11) == ((Object_t*)(Timer_t2174 *)L_12))))
			{
				goto IL_0050;
			}
		}

IL_004a:
		{
			Monitor_Pulse_m24317(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x59, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Scheduler_t5384 * L_13 = V_0;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0059:
	{
		return;
	}
}
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
extern TypeInfo* Timer_t2174_il2cpp_TypeInfo_var;
extern "C" void Scheduler_Add_m24382 (Scheduler_t5384 * __this, Timer_t2174 * ___timer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Timer_t2174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3431);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Timer_t2174 * V_2 = {0};
	int32_t G_B4_0 = 0;
	{
		SortedList_t4578 * L_0 = (__this->___list_1);
		Timer_t2174 * L_1 = ___timer;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(38 /* System.Int32 System.Collections.SortedList::IndexOfKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_008c;
		}
	}
	{
		Timer_t2174 * L_4 = ___timer;
		NullCheck(L_4);
		int64_t L_5 = (L_4->___next_run_6);
		if ((((int64_t)((int64_t)((int64_t)((int64_t)std::numeric_limits<int64_t>::max())-(int64_t)L_5))) <= ((int64_t)(((int64_t)((int32_t)20000))))))
		{
			goto IL_002f;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 0;
	}

IL_0030:
	{
		V_1 = G_B4_0;
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Timer_t2174 * L_8 = ___timer;
		Timer_t2174 * L_9 = L_8;
		NullCheck(L_9);
		int64_t L_10 = (L_9->___next_run_6);
		NullCheck(L_9);
		L_9->___next_run_6 = ((int64_t)((int64_t)L_10+(int64_t)(((int64_t)1))));
		goto IL_0058;
	}

IL_0049:
	{
		Timer_t2174 * L_11 = ___timer;
		Timer_t2174 * L_12 = L_11;
		NullCheck(L_12);
		int64_t L_13 = (L_12->___next_run_6);
		NullCheck(L_12);
		L_12->___next_run_6 = ((int64_t)((int64_t)L_13-(int64_t)(((int64_t)1))));
	}

IL_0058:
	{
		int32_t L_14 = V_0;
		SortedList_t4578 * L_15 = (__this->___list_1);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.SortedList::get_Count() */, L_15);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_008c;
	}

IL_0068:
	{
		SortedList_t4578 * L_17 = (__this->___list_1);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		Object_t * L_19 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(42 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_17, L_18);
		V_2 = ((Timer_t2174 *)Castclass(L_19, Timer_t2174_il2cpp_TypeInfo_var));
		Timer_t2174 * L_20 = V_2;
		NullCheck(L_20);
		int64_t L_21 = (L_20->___next_run_6);
		Timer_t2174 * L_22 = ___timer;
		NullCheck(L_22);
		int64_t L_23 = (L_22->___next_run_6);
		if ((((int64_t)L_21) == ((int64_t)L_23)))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_008c;
	}

IL_008a:
	{
		goto IL_0031;
	}

IL_008c:
	{
		SortedList_t4578 * L_24 = (__this->___list_1);
		Timer_t2174 * L_25 = ___timer;
		Timer_t2174 * L_26 = ___timer;
		NullCheck(L_24);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(30 /* System.Void System.Collections.SortedList::Add(System.Object,System.Object) */, L_24, L_25, L_26);
		return;
	}
}
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
extern "C" int32_t Scheduler_InternalRemove_m24383 (Scheduler_t5384 * __this, Timer_t2174 * ___timer, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SortedList_t4578 * L_0 = (__this->___list_1);
		Timer_t2174 * L_1 = ___timer;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(38 /* System.Int32 System.Collections.SortedList::IndexOfKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		SortedList_t4578 * L_4 = (__this->___list_1);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(37 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_4, L_5);
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
extern TypeInfo* Thread_t1478_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t712_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2174_il2cpp_TypeInfo_var;
extern TypeInfo* WaitCallback_t2162_il2cpp_TypeInfo_var;
extern const MethodInfo* TimerCallback_Invoke_m24455_MethodInfo_var;
extern "C" void Scheduler_SchedulerThread_m24384 (Scheduler_t5384 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2585);
		ArrayList_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Timer_t2174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3431);
		WaitCallback_t2162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3407);
		TimerCallback_Invoke_m24455_MethodInfo_var = il2cpp_codegen_method_info_from_index(1642);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t712 * V_0 = {0};
	int64_t V_1 = 0;
	Scheduler_t5384 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Timer_t2174 * V_5 = {0};
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	bool V_8 = false;
	Timer_t2174 * V_9 = {0};
	int32_t V_10 = 0;
	int64_t V_11 = 0;
	int32_t V_12 = 0;
	int64_t V_13 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1478_il2cpp_TypeInfo_var);
		Thread_t1478 * L_0 = Thread_get_CurrentThread_m7605(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Thread_set_Name_m24355(L_0, (String_t*) &_stringLiteral6543, /*hidden argument*/NULL);
		ArrayList_t712 * L_1 = (ArrayList_t712 *)il2cpp_codegen_object_new (ArrayList_t712_il2cpp_TypeInfo_var);
		ArrayList__ctor_m18074(L_1, ((int32_t)512), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		int64_t L_2 = DateTime_GetTimeMonotonic_m20286(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = __this;
		Scheduler_t5384 * L_3 = V_2;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			SortedList_t4578 * L_4 = (__this->___list_1);
			NullCheck(L_4);
			int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.SortedList::get_Count() */, L_4);
			V_4 = L_5;
			V_3 = 0;
			goto IL_0104;
		}

IL_003c:
		{
			SortedList_t4578 * L_6 = (__this->___list_1);
			int32_t L_7 = V_3;
			NullCheck(L_6);
			Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(42 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_6, L_7);
			V_5 = ((Timer_t2174 *)Castclass(L_8, Timer_t2174_il2cpp_TypeInfo_var));
			Timer_t2174 * L_9 = V_5;
			NullCheck(L_9);
			int64_t L_10 = (L_9->___next_run_6);
			int64_t L_11 = V_1;
			if ((((int64_t)L_10) <= ((int64_t)L_11)))
			{
				goto IL_005e;
			}
		}

IL_0059:
		{
			goto IL_010c;
		}

IL_005e:
		{
			SortedList_t4578 * L_12 = (__this->___list_1);
			int32_t L_13 = V_3;
			NullCheck(L_12);
			VirtActionInvoker1< int32_t >::Invoke(37 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_12, L_13);
			int32_t L_14 = V_4;
			V_4 = ((int32_t)((int32_t)L_14-(int32_t)1));
			int32_t L_15 = V_3;
			V_3 = ((int32_t)((int32_t)L_15-(int32_t)1));
			Timer_t2174 * L_16 = V_5;
			NullCheck(L_16);
			TimerCallback_t2175 * L_17 = (L_16->___callback_2);
			IntPtr_t L_18 = { (void*)TimerCallback_Invoke_m24455_MethodInfo_var };
			WaitCallback_t2162 * L_19 = (WaitCallback_t2162 *)il2cpp_codegen_object_new (WaitCallback_t2162_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m7942(L_19, L_17, L_18, /*hidden argument*/NULL);
			Timer_t2174 * L_20 = V_5;
			NullCheck(L_20);
			Object_t * L_21 = (L_20->___state_3);
			ThreadPool_QueueUserWorkItem_m18117(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
			Timer_t2174 * L_22 = V_5;
			NullCheck(L_22);
			int64_t L_23 = (L_22->___period_ms_5);
			V_6 = L_23;
			Timer_t2174 * L_24 = V_5;
			NullCheck(L_24);
			int64_t L_25 = (L_24->___due_time_ms_4);
			V_7 = L_25;
			int64_t L_26 = V_6;
			if ((((int64_t)L_26) == ((int64_t)(((int64_t)(-1))))))
			{
				goto IL_00c3;
			}
		}

IL_00ab:
		{
			int64_t L_27 = V_6;
			if (!L_27)
			{
				goto IL_00b5;
			}
		}

IL_00af:
		{
			int64_t L_28 = V_6;
			if ((!(((uint64_t)L_28) == ((uint64_t)(((int64_t)(-1)))))))
			{
				goto IL_00c0;
			}
		}

IL_00b5:
		{
			int64_t L_29 = V_7;
			G_B10_0 = ((((int32_t)((((int64_t)L_29) == ((int64_t)(((int64_t)(-1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00c1;
		}

IL_00c0:
		{
			G_B10_0 = 0;
		}

IL_00c1:
		{
			G_B12_0 = G_B10_0;
			goto IL_00c4;
		}

IL_00c3:
		{
			G_B12_0 = 1;
		}

IL_00c4:
		{
			V_8 = G_B12_0;
			bool L_30 = V_8;
			if (!L_30)
			{
				goto IL_00dc;
			}
		}

IL_00ca:
		{
			Timer_t2174 * L_31 = V_5;
			NullCheck(L_31);
			L_31->___next_run_6 = ((int64_t)std::numeric_limits<int64_t>::max());
			goto IL_0100;
		}

IL_00dc:
		{
			Timer_t2174 * L_32 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
			int64_t L_33 = DateTime_GetTimeMonotonic_m20286(NULL /*static, unused*/, /*hidden argument*/NULL);
			Timer_t2174 * L_34 = V_5;
			NullCheck(L_34);
			int64_t L_35 = (L_34->___period_ms_5);
			NullCheck(L_32);
			L_32->___next_run_6 = ((int64_t)((int64_t)L_33+(int64_t)((int64_t)((int64_t)(((int64_t)((int32_t)10000)))*(int64_t)L_35))));
			ArrayList_t712 * L_36 = V_0;
			Timer_t2174 * L_37 = V_5;
			NullCheck(L_36);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_36, L_37);
		}

IL_0100:
		{
			int32_t L_38 = V_3;
			V_3 = ((int32_t)((int32_t)L_38+(int32_t)1));
		}

IL_0104:
		{
			int32_t L_39 = V_3;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_003c;
			}
		}

IL_010c:
		{
			ArrayList_t712 * L_41 = V_0;
			NullCheck(L_41);
			int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_41);
			V_4 = L_42;
			V_3 = 0;
			goto IL_0132;
		}

IL_0118:
		{
			ArrayList_t712 * L_43 = V_0;
			int32_t L_44 = V_3;
			NullCheck(L_43);
			Object_t * L_45 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_43, L_44);
			V_9 = ((Timer_t2174 *)Castclass(L_45, Timer_t2174_il2cpp_TypeInfo_var));
			Timer_t2174 * L_46 = V_9;
			Scheduler_Add_m24382(__this, L_46, /*hidden argument*/NULL);
			int32_t L_47 = V_3;
			V_3 = ((int32_t)((int32_t)L_47+(int32_t)1));
		}

IL_0132:
		{
			int32_t L_48 = V_3;
			int32_t L_49 = V_4;
			if ((((int32_t)L_48) < ((int32_t)L_49)))
			{
				goto IL_0118;
			}
		}

IL_0137:
		{
			ArrayList_t712 * L_50 = V_0;
			NullCheck(L_50);
			VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_50);
			ArrayList_t712 * L_51 = V_0;
			Scheduler_ShrinkIfNeeded_m24385(__this, L_51, ((int32_t)512), /*hidden argument*/NULL);
			SortedList_t4578 * L_52 = (__this->___list_1);
			NullCheck(L_52);
			int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 System.Collections.SortedList::get_Capacity() */, L_52);
			V_10 = L_53;
			SortedList_t4578 * L_54 = (__this->___list_1);
			NullCheck(L_54);
			int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.SortedList::get_Count() */, L_54);
			V_4 = L_55;
			int32_t L_56 = V_10;
			if ((((int32_t)L_56) <= ((int32_t)((int32_t)1024))))
			{
				goto IL_0188;
			}
		}

IL_016c:
		{
			int32_t L_57 = V_4;
			if ((((int32_t)L_57) <= ((int32_t)0)))
			{
				goto IL_0188;
			}
		}

IL_0171:
		{
			int32_t L_58 = V_10;
			int32_t L_59 = V_4;
			if ((((int32_t)((int32_t)((int32_t)L_58/(int32_t)L_59))) <= ((int32_t)3)))
			{
				goto IL_0188;
			}
		}

IL_0179:
		{
			SortedList_t4578 * L_60 = (__this->___list_1);
			int32_t L_61 = V_4;
			NullCheck(L_60);
			VirtActionInvoker1< int32_t >::Invoke(29 /* System.Void System.Collections.SortedList::set_Capacity(System.Int32) */, L_60, ((int32_t)((int32_t)L_61*(int32_t)2)));
		}

IL_0188:
		{
			V_11 = ((int64_t)std::numeric_limits<int64_t>::max());
			SortedList_t4578 * L_62 = (__this->___list_1);
			NullCheck(L_62);
			int32_t L_63 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 System.Collections.SortedList::get_Count() */, L_62);
			if ((((int32_t)L_63) <= ((int32_t)0)))
			{
				goto IL_01b9;
			}
		}

IL_01a1:
		{
			SortedList_t4578 * L_64 = (__this->___list_1);
			NullCheck(L_64);
			Object_t * L_65 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(42 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_64, 0);
			NullCheck(((Timer_t2174 *)Castclass(L_65, Timer_t2174_il2cpp_TypeInfo_var)));
			int64_t L_66 = (((Timer_t2174 *)Castclass(L_65, Timer_t2174_il2cpp_TypeInfo_var))->___next_run_6);
			V_11 = L_66;
		}

IL_01b9:
		{
			V_12 = (-1);
			int64_t L_67 = V_11;
			if ((((int64_t)L_67) == ((int64_t)((int64_t)std::numeric_limits<int64_t>::max()))))
			{
				goto IL_01e7;
			}
		}

IL_01c9:
		{
			int64_t L_68 = V_11;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
			int64_t L_69 = DateTime_GetTimeMonotonic_m20286(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_13 = ((int64_t)((int64_t)L_68-(int64_t)L_69));
			int64_t L_70 = V_13;
			V_12 = (((int32_t)((int64_t)((int64_t)L_70/(int64_t)(((int64_t)((int32_t)10000)))))));
			int32_t L_71 = V_12;
			if ((((int32_t)L_71) >= ((int32_t)0)))
			{
				goto IL_01e7;
			}
		}

IL_01e4:
		{
			V_12 = 0;
		}

IL_01e7:
		{
			int32_t L_72 = V_12;
			Monitor_Wait_m24321(NULL /*static, unused*/, __this, L_72, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x1F9, FINALLY_01f2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_01f2;
	}

FINALLY_01f2:
	{ // begin finally (depth: 1)
		Scheduler_t5384 * L_73 = V_2;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(498)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(498)
	{
		IL2CPP_JUMP_TBL(0x1F9, IL_01f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_01f9:
	{
		goto IL_001a;
	}
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
extern "C" void Scheduler_ShrinkIfNeeded_m24385 (Scheduler_t5384 * __this, ArrayList_t712 * ___list, int32_t ___initial, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ArrayList_t712 * L_0 = ___list;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Collections.ArrayList::get_Capacity() */, L_0);
		V_0 = L_1;
		ArrayList_t712 * L_2 = ___list;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		V_1 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___initial;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_7/(int32_t)L_8))) <= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t712 * L_9 = ___list;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		VirtActionInvoker1< int32_t >::Invoke(25 /* System.Void System.Collections.ArrayList::set_Capacity(System.Int32) */, L_9, ((int32_t)((int32_t)L_10*(int32_t)2)));
	}

IL_0025:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"



// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
extern "C" void Timer__ctor_m24386 (Timer_t2174 * __this, TimerCallback_t2175 * ___callback, Object_t * ___state, TimeSpan_t334  ___dueTime, TimeSpan_t334  ___period, const MethodInfo* method)
{
	{
		MarshalByRefObject__ctor_m18076(__this, /*hidden argument*/NULL);
		TimerCallback_t2175 * L_0 = ___callback;
		Object_t * L_1 = ___state;
		double L_2 = TimeSpan_get_TotalMilliseconds_m20775((&___dueTime), /*hidden argument*/NULL);
		double L_3 = TimeSpan_get_TotalMilliseconds_m20775((&___period), /*hidden argument*/NULL);
		Timer_Init_m24388(__this, L_0, L_1, (((int64_t)L_2)), (((int64_t)L_3)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback)
extern "C" void Timer__ctor_m7977 (Timer_t2174 * __this, TimerCallback_t2175 * ___callback, const MethodInfo* method)
{
	{
		MarshalByRefObject__ctor_m18076(__this, /*hidden argument*/NULL);
		TimerCallback_t2175 * L_0 = ___callback;
		Timer_Init_m24388(__this, L_0, __this, (((int64_t)(-1))), (((int64_t)(-1))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer::.cctor()
extern TypeInfo* Scheduler_t5384_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2174_il2cpp_TypeInfo_var;
extern "C" void Timer__cctor_m24387 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Scheduler_t5384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9358);
		Timer_t2174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3431);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Scheduler_t5384_il2cpp_TypeInfo_var);
		Scheduler_t5384 * L_0 = Scheduler_get_Instance_m24379(NULL /*static, unused*/, /*hidden argument*/NULL);
		((Timer_t2174_StaticFields*)Timer_t2174_il2cpp_TypeInfo_var->static_fields)->___scheduler_1 = L_0;
		return;
	}
}
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern "C" void Timer_Init_m24388 (Timer_t2174 * __this, TimerCallback_t2175 * ___callback, Object_t * ___state, int64_t ___dueTime, int64_t ___period, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		TimerCallback_t2175 * L_0 = ___callback;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6538, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TimerCallback_t2175 * L_2 = ___callback;
		__this->___callback_2 = L_2;
		Object_t * L_3 = ___state;
		__this->___state_3 = L_3;
		int64_t L_4 = ___dueTime;
		int64_t L_5 = ___period;
		Timer_Change_m24390(__this, L_4, L_5, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C" bool Timer_Change_m7979 (Timer_t2174 * __this, TimeSpan_t334  ___dueTime, TimeSpan_t334  ___period, const MethodInfo* method)
{
	{
		double L_0 = TimeSpan_get_TotalMilliseconds_m20775((&___dueTime), /*hidden argument*/NULL);
		double L_1 = TimeSpan_get_TotalMilliseconds_m20775((&___period), /*hidden argument*/NULL);
		bool L_2 = Timer_Change_m24390(__this, (((int64_t)L_0)), (((int64_t)L_1)), 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Threading.Timer::Dispose()
extern TypeInfo* Timer_t2174_il2cpp_TypeInfo_var;
extern "C" void Timer_Dispose_m24389 (Timer_t2174 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Timer_t2174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3431);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___disposed_7);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->___disposed_7 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Timer_t2174_il2cpp_TypeInfo_var);
		Scheduler_t5384 * L_1 = ((Timer_t2174_StaticFields*)Timer_t2174_il2cpp_TypeInfo_var->static_fields)->___scheduler_1;
		NullCheck(L_1);
		Scheduler_Remove_m24380(L_1, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2174_il2cpp_TypeInfo_var;
extern "C" bool Timer_Change_m24390 (Timer_t2174 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Timer_t2174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3431);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		int64_t L_0 = ___dueTime;
		if ((((int64_t)L_0) <= ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2))))))))
		{
			goto IL_0011;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_1 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_1, (String_t*) &_stringLiteral6539, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int64_t L_2 = ___period;
		if ((((int64_t)L_2) <= ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2))))))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_3 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_3, (String_t*) &_stringLiteral6540, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int64_t L_4 = ___dueTime;
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_5 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_5, (String_t*) &_stringLiteral6541, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		int64_t L_6 = ___period;
		if ((((int64_t)L_6) >= ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_0042;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_7 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_7, (String_t*) &_stringLiteral6542, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0042:
	{
		bool L_8 = (__this->___disposed_7);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		return 0;
	}

IL_004c:
	{
		int64_t L_9 = ___dueTime;
		__this->___due_time_ms_4 = L_9;
		int64_t L_10 = ___period;
		__this->___period_ms_5 = L_10;
		int64_t L_11 = ___dueTime;
		if (L_11)
		{
			goto IL_0062;
		}
	}
	{
		V_0 = (((int64_t)0));
		goto IL_008e;
	}

IL_0062:
	{
		int64_t L_12 = ___dueTime;
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)0)))))
		{
			goto IL_007f;
		}
	}
	{
		V_0 = ((int64_t)std::numeric_limits<int64_t>::max());
		bool L_13 = ___first;
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		int64_t L_14 = V_0;
		__this->___next_run_6 = L_14;
		return 1;
	}

IL_007d:
	{
		goto IL_008e;
	}

IL_007f:
	{
		int64_t L_15 = ___dueTime;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		int64_t L_16 = DateTime_GetTimeMonotonic_m20286(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_15*(int64_t)(((int64_t)((int32_t)10000)))))+(int64_t)L_16));
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Timer_t2174_il2cpp_TypeInfo_var);
		Scheduler_t5384 * L_17 = ((Timer_t2174_StaticFields*)Timer_t2174_il2cpp_TypeInfo_var->static_fields)->___scheduler_1;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		Scheduler_Change_m24381(L_17, __this, L_18, /*hidden argument*/NULL);
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// Microsoft.Win32.SafeHandles.SafeWaitHandle
#include "mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandle.h"
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"
// Microsoft.Win32.SafeHandles.SafeWaitHandle
#include "mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandleMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"


// System.Void System.Threading.WaitHandle::.ctor()
extern "C" void WaitHandle__ctor_m24391 (WaitHandle_t3252 * __this, const MethodInfo* method)
{
	{
		MarshalByRefObject__ctor_m18076(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.WaitHandle::.cctor()
extern TypeInfo* WaitHandle_t3252_il2cpp_TypeInfo_var;
extern "C" void WaitHandle__cctor_m24392 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t3252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5686);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = IntPtr_op_Explicit_m18119(NULL /*static, unused*/, (-1), /*hidden argument*/NULL);
		((WaitHandle_t3252_StaticFields*)WaitHandle_t3252_il2cpp_TypeInfo_var->static_fields)->___InvalidHandle_3 = L_0;
		return;
	}
}
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C" void WaitHandle_System_IDisposable_Dispose_m24393 (WaitHandle_t3252 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void System.Threading.WaitHandle::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m11476(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.WaitHandle::CheckArray(System.Threading.WaitHandle[],System.Boolean)
extern TypeInfo* ArgumentNullException_t784_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t725_il2cpp_TypeInfo_var;
extern "C" void WaitHandle_CheckArray_m24394 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t5431* ___handles, bool ___waitAll, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		ArgumentException_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	WaitHandle_t3252 * V_1 = {0};
	WaitHandleU5BU5D_t5431* V_2 = {0};
	int32_t V_3 = 0;
	{
		WaitHandleU5BU5D_t5431* L_0 = ___handles;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t784 * L_1 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4212(L_1, (String_t*) &_stringLiteral6544, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		WaitHandleU5BU5D_t5431* L_2 = ___handles;
		NullCheck(L_2);
		V_0 = (((int32_t)(((Array_t *)L_2)->max_length)));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)64))))
		{
			goto IL_0022;
		}
	}
	{
		NotSupportedException_t56 * L_4 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11464(L_4, (String_t*) &_stringLiteral6545, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0022:
	{
		WaitHandleU5BU5D_t5431* L_5 = ___handles;
		V_2 = L_5;
		V_3 = 0;
		goto IL_005b;
	}

IL_0028:
	{
		WaitHandleU5BU5D_t5431* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(WaitHandle_t3252 **)(WaitHandle_t3252 **)SZArrayLdElema(L_6, L_8));
		WaitHandle_t3252 * L_9 = V_1;
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		ArgumentNullException_t784 * L_10 = (ArgumentNullException_t784 *)il2cpp_codegen_object_new (ArgumentNullException_t784_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4218(L_10, (String_t*) &_stringLiteral6544, (String_t*) &_stringLiteral6546, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003f:
	{
		WaitHandle_t3252 * L_11 = V_1;
		NullCheck(L_11);
		SafeWaitHandle_t4749 * L_12 = (L_11->___safe_wait_handle_2);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		ArgumentException_t725 * L_13 = (ArgumentException_t725 *)il2cpp_codegen_object_new (ArgumentException_t725_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3862(L_13, (String_t*) &_stringLiteral6547, (String_t*) &_stringLiteral6548, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0057:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005b:
	{
		int32_t L_15 = V_3;
		WaitHandleU5BU5D_t5431* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0028;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)
extern "C" int32_t WaitHandle_WaitAny_internal_m24395 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t5431* ___handles, int32_t ___ms, bool ___exitContext, const MethodInfo* method)
{
	typedef int32_t (*WaitHandle_WaitAny_internal_m24395_ftn) (WaitHandleU5BU5D_t5431*, int32_t, bool);
	static WaitHandle_WaitAny_internal_m24395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WaitHandle_WaitAny_internal_m24395_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)");
	return _il2cpp_icall_func(___handles, ___ms, ___exitContext);
}
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan,System.Boolean)
extern TypeInfo* WaitHandle_t3252_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" int32_t WaitHandle_WaitAny_m24396 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t5431* ___waitHandles, TimeSpan_t334  ___timeout, bool ___exitContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t3252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5686);
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WaitHandleU5BU5D_t5431* L_0 = ___waitHandles;
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t3252_il2cpp_TypeInfo_var);
		WaitHandle_CheckArray_m24394(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		double L_1 = TimeSpan_get_TotalMilliseconds_m20775((&___timeout), /*hidden argument*/NULL);
		V_0 = (((int64_t)L_1));
		int64_t L_2 = V_0;
		if ((((int64_t)L_2) < ((int64_t)(((int64_t)(-1))))))
		{
			goto IL_001e;
		}
	}
	{
		int64_t L_3 = V_0;
		if ((((int64_t)L_3) <= ((int64_t)(((int64_t)((int32_t)2147483647))))))
		{
			goto IL_0029;
		}
	}

IL_001e:
	{
		ArgumentOutOfRangeException_t1490 * L_4 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_4, (String_t*) &_stringLiteral3998, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			bool L_5 = ___exitContext;
			if (!L_5)
			{
				goto IL_0031;
			}
		}

IL_002c:
		{
			SynchronizationAttribute_ExitContext_m22704(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_0031:
		{
			WaitHandleU5BU5D_t5431* L_6 = ___waitHandles;
			int64_t L_7 = V_0;
			bool L_8 = ___exitContext;
			IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t3252_il2cpp_TypeInfo_var);
			int32_t L_9 = WaitHandle_WaitAny_internal_m24395(NULL /*static, unused*/, L_6, (((int32_t)L_7)), L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			IL2CPP_LEAVE(0x48, FINALLY_003f);
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x48, FINALLY_003f);
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
			bool L_10 = ___exitContext;
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0042:
		{
			SynchronizationAttribute_EnterContext_m22705(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_0047:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0048:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C" IntPtr_t WaitHandle_get_Handle_m24397 (WaitHandle_t3252 * __this, const MethodInfo* method)
{
	{
		SafeWaitHandle_t4749 * L_0 = (__this->___safe_wait_handle_2);
		NullCheck(L_0);
		IntPtr_t L_1 = SafeHandle_DangerousGetHandle_m22560(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern TypeInfo* WaitHandle_t3252_il2cpp_TypeInfo_var;
extern TypeInfo* SafeWaitHandle_t4749_il2cpp_TypeInfo_var;
extern "C" void WaitHandle_set_Handle_m24398 (WaitHandle_t3252 * __this, IntPtr_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitHandle_t3252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5686);
		SafeWaitHandle_t4749_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9359);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t3252_il2cpp_TypeInfo_var);
		IntPtr_t L_1 = ((WaitHandle_t3252_StaticFields*)WaitHandle_t3252_il2cpp_TypeInfo_var->static_fields)->___InvalidHandle_3;
		bool L_2 = IntPtr_op_Equality_m10338(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WaitHandle_t3252_il2cpp_TypeInfo_var);
		IntPtr_t L_3 = ((WaitHandle_t3252_StaticFields*)WaitHandle_t3252_il2cpp_TypeInfo_var->static_fields)->___InvalidHandle_3;
		SafeWaitHandle_t4749 * L_4 = (SafeWaitHandle_t4749 *)il2cpp_codegen_object_new (SafeWaitHandle_t4749_il2cpp_TypeInfo_var);
		SafeWaitHandle__ctor_m19291(L_4, L_3, 0, /*hidden argument*/NULL);
		__this->___safe_wait_handle_2 = L_4;
		goto IL_002d;
	}

IL_0020:
	{
		IntPtr_t L_5 = ___value;
		SafeWaitHandle_t4749 * L_6 = (SafeWaitHandle_t4749 *)il2cpp_codegen_object_new (SafeWaitHandle_t4749_il2cpp_TypeInfo_var);
		SafeWaitHandle__ctor_m19291(L_6, L_5, 1, /*hidden argument*/NULL);
		__this->___safe_wait_handle_2 = L_6;
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_internal_m24399 (WaitHandle_t3252 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, const MethodInfo* method)
{
	typedef bool (*WaitHandle_WaitOne_internal_m24399_ftn) (WaitHandle_t3252 *, IntPtr_t, int32_t, bool);
	static WaitHandle_WaitOne_internal_m24399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WaitHandle_WaitOne_internal_m24399_ftn)il2cpp_codegen_resolve_icall ("System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)");
	return _il2cpp_icall_func(__this, ___handle, ___ms, ___exitContext);
}
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C" void WaitHandle_Dispose_m24400 (WaitHandle_t3252 * __this, bool ___explicitDisposing, const MethodInfo* method)
{
	WaitHandle_t3252 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___disposed_4);
		if (L_0)
		{
			goto IL_003c;
		}
	}
	{
		__this->___disposed_4 = 1;
		SafeWaitHandle_t4749 * L_1 = (__this->___safe_wait_handle_2);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		V_0 = __this;
		WaitHandle_t3252 * L_2 = V_0;
		Monitor_Enter_m7520(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			SafeWaitHandle_t4749 * L_3 = (__this->___safe_wait_handle_2);
			if (!L_3)
			{
				goto IL_0033;
			}
		}

IL_0028:
		{
			SafeWaitHandle_t4749 * L_4 = (__this->___safe_wait_handle_2);
			NullCheck(L_4);
			VirtActionInvoker0::Invoke(4 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose() */, L_4);
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		WaitHandle_t3252 * L_5 = V_0;
		Monitor_Exit_m7521(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003c:
	{
		return;
	}
}
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C" bool WaitHandle_WaitOne_m24401 (WaitHandle_t3252 * __this, const MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WaitHandle_CheckDisposed_m24403(__this, /*hidden argument*/NULL);
		V_0 = 0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			SafeWaitHandle_t4749 * L_0 = (__this->___safe_wait_handle_2);
			NullCheck(L_0);
			SafeHandle_DangerousAddRef_m22559(L_0, (&V_0), /*hidden argument*/NULL);
			SafeWaitHandle_t4749 * L_1 = (__this->___safe_wait_handle_2);
			NullCheck(L_1);
			IntPtr_t L_2 = SafeHandle_DangerousGetHandle_m22560(L_1, /*hidden argument*/NULL);
			bool L_3 = WaitHandle_WaitOne_internal_m24399(__this, L_2, (-1), 0, /*hidden argument*/NULL);
			V_1 = L_3;
			IL2CPP_LEAVE(0x3C, FINALLY_002d);
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_0;
			if (!L_4)
			{
				goto IL_003b;
			}
		}

IL_0030:
		{
			SafeWaitHandle_t4749 * L_5 = (__this->___safe_wait_handle_2);
			NullCheck(L_5);
			SafeHandle_DangerousRelease_m22561(L_5, /*hidden argument*/NULL);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003c:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern TypeInfo* ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var;
extern "C" bool WaitHandle_WaitOne_m24402 (WaitHandle_t3252 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2622);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		WaitHandle_CheckDisposed_m24403(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___millisecondsTimeout;
		if ((((int32_t)L_0) >= ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1490 * L_1 = (ArgumentOutOfRangeException_t1490 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1490_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m11463(L_1, (String_t*) &_stringLiteral3759, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		V_0 = 0;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = ___exitContext;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_001a:
		{
			SynchronizationAttribute_ExitContext_m22704(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_001f:
		{
			SafeWaitHandle_t4749 * L_3 = (__this->___safe_wait_handle_2);
			NullCheck(L_3);
			SafeHandle_DangerousAddRef_m22559(L_3, (&V_0), /*hidden argument*/NULL);
			SafeWaitHandle_t4749 * L_4 = (__this->___safe_wait_handle_2);
			NullCheck(L_4);
			IntPtr_t L_5 = SafeHandle_DangerousGetHandle_m22560(L_4, /*hidden argument*/NULL);
			int32_t L_6 = ___millisecondsTimeout;
			bool L_7 = ___exitContext;
			bool L_8 = WaitHandle_WaitOne_internal_m24399(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
			V_1 = L_8;
			IL2CPP_LEAVE(0x5B, FINALLY_0044);
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0044);
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
			bool L_9 = ___exitContext;
			if (!L_9)
			{
				goto IL_004c;
			}
		}

IL_0047:
		{
			SynchronizationAttribute_EnterContext_m22705(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_004c:
		{
			bool L_10 = V_0;
			if (!L_10)
			{
				goto IL_005a;
			}
		}

IL_004f:
		{
			SafeWaitHandle_t4749 * L_11 = (__this->___safe_wait_handle_2);
			NullCheck(L_11);
			SafeHandle_DangerousRelease_m22561(L_11, /*hidden argument*/NULL);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005b:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern TypeInfo* ObjectDisposedException_t3260_il2cpp_TypeInfo_var;
extern "C" void WaitHandle_CheckDisposed_m24403 (WaitHandle_t3252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5417);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___disposed_4);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		SafeWaitHandle_t4749 * L_1 = (__this->___safe_wait_handle_2);
		if (L_1)
		{
			goto IL_0021;
		}
	}

IL_0010:
	{
		Type_t * L_2 = Object_GetType_m4208(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_2);
		ObjectDisposedException_t3260 * L_4 = (ObjectDisposedException_t3260 *)il2cpp_codegen_object_new (ObjectDisposedException_t3260_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11493(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Threading.WaitHandle::Finalize()
extern "C" void WaitHandle_Finalize_m24404 (WaitHandle_t3252 * __this, const MethodInfo* method)
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
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void System.Threading.WaitHandle::Dispose(System.Boolean) */, __this, 0);
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
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_LinkMethodDeclarations.h"



// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"



// System.Void System.Collections.Generic.KeyNotFoundException::.ctor()
extern "C" void KeyNotFoundException__ctor_m24405 (KeyNotFoundException_t5386 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m12108(__this, (String_t*) &_stringLiteral6555, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void KeyNotFoundException__ctor_m24406 (KeyNotFoundException_t5386 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2936 * L_0 = ___info;
		StreamingContext_t2937  L_1 = ___context;
		SystemException__ctor_m14759(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
// Mono.Math.Prime.PrimalityTest
#include "mscorlib_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C" void PrimalityTest__ctor_m24407 (PrimalityTest_t5387 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTest_Invoke_m24408 (PrimalityTest_t5387 * __this, BigInteger_t4772 * ___bi, int32_t ___confidence, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m24408((PrimalityTest_t5387 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t4772 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t4772 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t5387(Il2CppObject* delegate, BigInteger_t4772 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t4772 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern TypeInfo* ConfidenceFactor_t4775_il2cpp_TypeInfo_var;
extern "C" Object_t * PrimalityTest_BeginInvoke_m24409 (PrimalityTest_t5387 * __this, BigInteger_t4772 * ___bi, int32_t ___confidence, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfidenceFactor_t4775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9360);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(ConfidenceFactor_t4775_il2cpp_TypeInfo_var, &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C" bool PrimalityTest_EndInvoke_m24410 (PrimalityTest_t5387 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializer.h"
#ifndef _MSC_VER
#else
#endif
// System.AppDomainInitializer
#include "mscorlib_System_AppDomainInitializerMethodDeclarations.h"



// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m24411 (AppDomainInitializer_t4841 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m24412 (AppDomainInitializer_t4841 * __this, StringU5BU5D_t75* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AppDomainInitializer_Invoke_m24412((AppDomainInitializer_t4841 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, StringU5BU5D_t75* ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, StringU5BU5D_t75* ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t4841(Il2CppObject* delegate, StringU5BU5D_t75* ___args)
{
	typedef void (STDCALL *native_function_ptr_type)(char**);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	char** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_string_array(___args);

	// Native function invocation
	_il2cpp_pinvoke_func(____args_marshaled);

	// Marshaling cleanup of parameter '___args' native representation
	if (___args != NULL) il2cpp_codegen_marshal_free_string_array((void**)____args_marshaled, ((Il2CppCodeGenArray*)___args)->max_length);
	____args_marshaled = NULL;

}
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m24413 (AppDomainInitializer_t4841 * __this, StringU5BU5D_t75* ___args, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m24414 (AppDomainInitializer_t4841 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.AssemblyLoadEventHandler
#include "mscorlib_System_AssemblyLoadEventHandlerMethodDeclarations.h"

// System.AssemblyLoadEventArgs
#include "mscorlib_System_AssemblyLoadEventArgs.h"


// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AssemblyLoadEventHandler__ctor_m24415 (AssemblyLoadEventHandler_t4837 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
extern "C" void AssemblyLoadEventHandler_Invoke_m24416 (AssemblyLoadEventHandler_t4837 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t4844 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AssemblyLoadEventHandler_Invoke_m24416((AssemblyLoadEventHandler_t4837 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t4844 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, AssemblyLoadEventArgs_t4844 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, AssemblyLoadEventArgs_t4844 * ___args, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AssemblyLoadEventHandler_t4837(Il2CppObject* delegate, Object_t * ___sender, AssemblyLoadEventArgs_t4844 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * AssemblyLoadEventHandler_BeginInvoke_m24417 (AssemblyLoadEventHandler_t4837 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t4844 * ___args, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void AssemblyLoadEventHandler_EndInvoke_m24418 (AssemblyLoadEventHandler_t4837 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ConsoleCancelEventHandler
#include "mscorlib_System_ConsoleCancelEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.ConsoleCancelEventHandler
#include "mscorlib_System_ConsoleCancelEventHandlerMethodDeclarations.h"

// System.ConsoleCancelEventArgs
#include "mscorlib_System_ConsoleCancelEventArgs.h"


// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ConsoleCancelEventHandler__ctor_m24419 (ConsoleCancelEventHandler_t4853 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C" void ConsoleCancelEventHandler_Invoke_m24420 (ConsoleCancelEventHandler_t4853 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t4854 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConsoleCancelEventHandler_Invoke_m24420((ConsoleCancelEventHandler_t4853 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ConsoleCancelEventArgs_t4854 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ConsoleCancelEventArgs_t4854 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, ConsoleCancelEventArgs_t4854 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ConsoleCancelEventHandler_t4853(Il2CppObject* delegate, Object_t * ___sender, ConsoleCancelEventArgs_t4854 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ConsoleCancelEventHandler_BeginInvoke_m24421 (ConsoleCancelEventHandler_t4853 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t4854 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ConsoleCancelEventHandler_EndInvoke_m24422 (ConsoleCancelEventHandler_t4853 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.EventHandler
#include "mscorlib_System_EventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.EventHandler
#include "mscorlib_System_EventHandlerMethodDeclarations.h"

// System.EventArgs
#include "mscorlib_System_EventArgs.h"


// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandler__ctor_m18058 (EventHandler_t4260 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void EventHandler_Invoke_m24423 (EventHandler_t4260 * __this, Object_t * ___sender, EventArgs_t1314 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		EventHandler_Invoke_m24423((EventHandler_t4260 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, EventArgs_t1314 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, EventArgs_t1314 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, EventArgs_t1314 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_EventHandler_t4260(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t1314 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.EventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandler_BeginInvoke_m24424 (EventHandler_t4260 * __this, Object_t * ___sender, EventArgs_t1314 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.EventHandler::EndInvoke(System.IAsyncResult)
extern "C" void EventHandler_EndInvoke_m24425 (EventHandler_t4260 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.ResolveEventHandler
#include "mscorlib_System_ResolveEventHandlerMethodDeclarations.h"

// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.ResolveEventArgs
#include "mscorlib_System_ResolveEventArgs.h"


// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m24426 (ResolveEventHandler_t4838 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t783 * ResolveEventHandler_Invoke_m24427 (ResolveEventHandler_t4838 * __this, Object_t * ___sender, ResolveEventArgs_t4906 * ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ResolveEventHandler_Invoke_m24427((ResolveEventHandler_t4838 *)__this->___prev_9,___sender, ___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Assembly_t783 * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, ResolveEventArgs_t4906 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Assembly_t783 * (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, ResolveEventArgs_t4906 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Assembly_t783 * (*FunctionPointerType) (Object_t * __this, ResolveEventArgs_t4906 * ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___sender, ___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Assembly_t783 * pinvoke_delegate_wrapper_ResolveEventHandler_t4838(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t4906 * ___args)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m24428 (ResolveEventHandler_t4838 * __this, Object_t * ___sender, ResolveEventArgs_t4906 * ___args, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t783 * ResolveEventHandler_EndInvoke_m24429 (ResolveEventHandler_t4838 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Assembly_t783 *)__result;
}
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.UnhandledExceptionEventHandler
#include "mscorlib_System_UnhandledExceptionEventHandlerMethodDeclarations.h"

// System.UnhandledExceptionEventArgs
#include "mscorlib_System_UnhandledExceptionEventArgs.h"


// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UnhandledExceptionEventHandler__ctor_m24430 (UnhandledExceptionEventHandler_t4839 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C" void UnhandledExceptionEventHandler_Invoke_m24431 (UnhandledExceptionEventHandler_t4839 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t4926 * ___e, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m24431((UnhandledExceptionEventHandler_t4839 *)__this->___prev_9,___sender, ___e, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t4926 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t4926 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, UnhandledExceptionEventArgs_t4926 * ___e, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___sender, ___e,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnhandledExceptionEventHandler_t4839(Il2CppObject* delegate, Object_t * ___sender, UnhandledExceptionEventArgs_t4926 * ___e)
{
	// Marshaling of parameter '___sender' to native representation
	Object_t * ____sender_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UnhandledExceptionEventHandler_BeginInvoke_m24432 (UnhandledExceptionEventHandler_t4839 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t4926 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender;
	__d_args[1] = ___e;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UnhandledExceptionEventHandler_EndInvoke_m24433 (UnhandledExceptionEventHandler_t4839 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberFilter
#include "mscorlib_System_Reflection_MemberFilterMethodDeclarations.h"

// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"


// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C" void MemberFilter__ctor_m24434 (MemberFilter_t4728 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C" bool MemberFilter_Invoke_m24435 (MemberFilter_t4728 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		MemberFilter_Invoke_m24435((MemberFilter_t4728 *)__this->___prev_9,___m, ___filterCriteria, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_MemberFilter_t4728(Il2CppObject* delegate, MemberInfo_t * ___m, Object_t * ___filterCriteria)
{
	// Marshaling of parameter '___m' to native representation
	MemberInfo_t * ____m_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Reflection.MemberInfo'."));
}
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * MemberFilter_BeginInvoke_m24436 (MemberFilter_t4728 * __this, MemberInfo_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___m;
	__d_args[1] = ___filterCriteria;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern "C" bool MemberFilter_EndInvoke_m24437 (MemberFilter_t4728 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"



// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
extern "C" void TypeFilter__ctor_m24438 (TypeFilter_t5022 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
extern "C" bool TypeFilter_Invoke_m24439 (TypeFilter_t5022 * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TypeFilter_Invoke_m24439((TypeFilter_t5022 *)__this->___prev_9,___m, ___filterCriteria, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___filterCriteria, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___m, ___filterCriteria,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_TypeFilter_t5022(Il2CppObject* delegate, Type_t * ___m, Object_t * ___filterCriteria)
{
	// Marshaling of parameter '___m' to native representation
	Type_t * ____m_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Type'."));
}
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * TypeFilter_BeginInvoke_m24440 (TypeFilter_t5022 * __this, Type_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___m;
	__d_args[1] = ___filterCriteria;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
extern "C" bool TypeFilter_EndInvoke_m24441 (TypeFilter_t5022 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"


// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern "C" void HeaderHandler__ctor_m24442 (HeaderHandler_t5389 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern "C" Object_t * HeaderHandler_Invoke_m24443 (HeaderHandler_t5389 * __this, HeaderU5BU5D_t5388* ___headers, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		HeaderHandler_Invoke_m24443((HeaderHandler_t5389 *)__this->___prev_9,___headers, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, HeaderU5BU5D_t5388* ___headers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, HeaderU5BU5D_t5388* ___headers, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___headers,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_HeaderHandler_t5389(Il2CppObject* delegate, HeaderU5BU5D_t5388* ___headers)
{
	// Marshaling of parameter '___headers' to native representation
	HeaderU5BU5D_t5388* ____headers_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Messaging.Header[]'."));
}
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern "C" Object_t * HeaderHandler_BeginInvoke_m24444 (HeaderHandler_t5389 * __this, HeaderU5BU5D_t5388* ___headers, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___headers;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern "C" Object_t * HeaderHandler_EndInvoke_m24445 (HeaderHandler_t5389 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// System.Threading.ParameterizedThreadStart
#include "mscorlib_System_Threading_ParameterizedThreadStartMethodDeclarations.h"



// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ParameterizedThreadStart__ctor_m7939 (ParameterizedThreadStart_t2161 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
extern "C" void ParameterizedThreadStart_Invoke_m24446 (ParameterizedThreadStart_t2161 * __this, Object_t * ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ParameterizedThreadStart_Invoke_m24446((ParameterizedThreadStart_t2161 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_ParameterizedThreadStart_t2161(Il2CppObject* delegate, Object_t * ___obj)
{
	// Marshaling of parameter '___obj' to native representation
	Object_t * ____obj_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * ParameterizedThreadStart_BeginInvoke_m24447 (ParameterizedThreadStart_t2161 * __this, Object_t * ___obj, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ParameterizedThreadStart_EndInvoke_m24448 (ParameterizedThreadStart_t2161 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern "C" void SendOrPostCallback__ctor_m7997 (SendOrPostCallback_t2178 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C" void SendOrPostCallback_Invoke_m24449 (SendOrPostCallback_t2178 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SendOrPostCallback_Invoke_m24449((SendOrPostCallback_t2178 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SendOrPostCallback_t2178(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SendOrPostCallback_BeginInvoke_m24450 (SendOrPostCallback_t2178 * __this, Object_t * ___state, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern "C" void SendOrPostCallback_EndInvoke_m24451 (SendOrPostCallback_t2178 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadStart__ctor_m18097 (ThreadStart_t4575 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.ThreadStart::Invoke()
extern "C" void ThreadStart_Invoke_m24452 (ThreadStart_t4575 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ThreadStart_Invoke_m24452((ThreadStart_t4575 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_ThreadStart_t4575(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadStart_BeginInvoke_m24453 (ThreadStart_t4575 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ThreadStart_EndInvoke_m24454 (ThreadStart_t4575 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.TimerCallback::.ctor(System.Object,System.IntPtr)
extern "C" void TimerCallback__ctor_m7976 (TimerCallback_t2175 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
extern "C" void TimerCallback_Invoke_m24455 (TimerCallback_t2175 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TimerCallback_Invoke_m24455((TimerCallback_t2175 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_TimerCallback_t2175(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.TimerCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * TimerCallback_BeginInvoke_m24456 (TimerCallback_t2175 * __this, Object_t * ___state, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.TimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void TimerCallback_EndInvoke_m24457 (TimerCallback_t2175 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitCallback__ctor_m7942 (WaitCallback_t2162 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern "C" void WaitCallback_Invoke_m24458 (WaitCallback_t2162 * __this, Object_t * ___state, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WaitCallback_Invoke_m24458((WaitCallback_t2162 *)__this->___prev_9,___state, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WaitCallback_t2162(Il2CppObject* delegate, Object_t * ___state)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * WaitCallback_BeginInvoke_m24459 (WaitCallback_t2162 * __this, Object_t * ___state, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___state;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitCallback_EndInvoke_m24460 (WaitCallback_t2162 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Threading.WaitOrTimerCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitOrTimerCallback__ctor_m24461 (WaitOrTimerCallback_t5377 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
extern "C" void WaitOrTimerCallback_Invoke_m24462 (WaitOrTimerCallback_t5377 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WaitOrTimerCallback_Invoke_m24462((WaitOrTimerCallback_t5377 *)__this->___prev_9,___state, ___timedOut, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___state, ___timedOut,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___state, ___timedOut,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___timedOut, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___state, ___timedOut,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WaitOrTimerCallback_t5377(Il2CppObject* delegate, Object_t * ___state, bool ___timedOut)
{
	// Marshaling of parameter '___state' to native representation
	Object_t * ____state_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Threading.WaitOrTimerCallback::BeginInvoke(System.Object,System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" Object_t * WaitOrTimerCallback_BeginInvoke_m24463 (WaitOrTimerCallback_t5377 * __this, Object_t * ___state, bool ___timedOut, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___state;
	__d_args[1] = Box(Boolean_t59_il2cpp_TypeInfo_var, &___timedOut);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Threading.WaitOrTimerCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitOrTimerCallback_EndInvoke_m24464 (WaitOrTimerCallback_t5377 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$52
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void U24ArrayTypeU2452_t5390_marshal(const U24ArrayTypeU2452_t5390& unmarshaled, U24ArrayTypeU2452_t5390_marshaled& marshaled)
{
}
void U24ArrayTypeU2452_t5390_marshal_back(const U24ArrayTypeU2452_t5390_marshaled& marshaled, U24ArrayTypeU2452_t5390& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$52
void U24ArrayTypeU2452_t5390_marshal_cleanup(U24ArrayTypeU2452_t5390_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$24
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void U24ArrayTypeU2424_t5391_marshal(const U24ArrayTypeU2424_t5391& unmarshaled, U24ArrayTypeU2424_t5391_marshaled& marshaled)
{
}
void U24ArrayTypeU2424_t5391_marshal_back(const U24ArrayTypeU2424_t5391_marshaled& marshaled, U24ArrayTypeU2424_t5391& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$24
void U24ArrayTypeU2424_t5391_marshal_cleanup(U24ArrayTypeU2424_t5391_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$16
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t5392_marshal(const U24ArrayTypeU2416_t5392& unmarshaled, U24ArrayTypeU2416_t5392_marshaled& marshaled)
{
}
void U24ArrayTypeU2416_t5392_marshal_back(const U24ArrayTypeU2416_t5392_marshaled& marshaled, U24ArrayTypeU2416_t5392& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void U24ArrayTypeU2416_t5392_marshal_cleanup(U24ArrayTypeU2416_t5392_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$120
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void U24ArrayTypeU24120_t5393_marshal(const U24ArrayTypeU24120_t5393& unmarshaled, U24ArrayTypeU24120_t5393_marshaled& marshaled)
{
}
void U24ArrayTypeU24120_t5393_marshal_back(const U24ArrayTypeU24120_t5393_marshaled& marshaled, U24ArrayTypeU24120_t5393& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$120
void U24ArrayTypeU24120_t5393_marshal_cleanup(U24ArrayTypeU24120_t5393_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$3132
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void U24ArrayTypeU243132_t5394_marshal(const U24ArrayTypeU243132_t5394& unmarshaled, U24ArrayTypeU243132_t5394_marshaled& marshaled)
{
}
void U24ArrayTypeU243132_t5394_marshal_back(const U24ArrayTypeU243132_t5394_marshaled& marshaled, U24ArrayTypeU243132_t5394& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void U24ArrayTypeU243132_t5394_marshal_cleanup(U24ArrayTypeU243132_t5394_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void U24ArrayTypeU2420_t5395_marshal(const U24ArrayTypeU2420_t5395& unmarshaled, U24ArrayTypeU2420_t5395_marshaled& marshaled)
{
}
void U24ArrayTypeU2420_t5395_marshal_back(const U24ArrayTypeU2420_t5395_marshaled& marshaled, U24ArrayTypeU2420_t5395& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void U24ArrayTypeU2420_t5395_marshal_cleanup(U24ArrayTypeU2420_t5395_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$32
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU243_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void U24ArrayTypeU2432_t5396_marshal(const U24ArrayTypeU2432_t5396& unmarshaled, U24ArrayTypeU2432_t5396_marshaled& marshaled)
{
}
void U24ArrayTypeU2432_t5396_marshal_back(const U24ArrayTypeU2432_t5396_marshaled& marshaled, U24ArrayTypeU2432_t5396& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void U24ArrayTypeU2432_t5396_marshal_cleanup(U24ArrayTypeU2432_t5396_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$48
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU244MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void U24ArrayTypeU2448_t5397_marshal(const U24ArrayTypeU2448_t5397& unmarshaled, U24ArrayTypeU2448_t5397_marshaled& marshaled)
{
}
void U24ArrayTypeU2448_t5397_marshal_back(const U24ArrayTypeU2448_t5397_marshaled& marshaled, U24ArrayTypeU2448_t5397& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void U24ArrayTypeU2448_t5397_marshal_cleanup(U24ArrayTypeU2448_t5397_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$64
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void U24ArrayTypeU2464_t5398_marshal(const U24ArrayTypeU2464_t5398& unmarshaled, U24ArrayTypeU2464_t5398_marshaled& marshaled)
{
}
void U24ArrayTypeU2464_t5398_marshal_back(const U24ArrayTypeU2464_t5398_marshaled& marshaled, U24ArrayTypeU2464_t5398& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void U24ArrayTypeU2464_t5398_marshal_cleanup(U24ArrayTypeU2464_t5398_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$12
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t5399_marshal(const U24ArrayTypeU2412_t5399& unmarshaled, U24ArrayTypeU2412_t5399_marshaled& marshaled)
{
}
void U24ArrayTypeU2412_t5399_marshal_back(const U24ArrayTypeU2412_t5399_marshaled& marshaled, U24ArrayTypeU2412_t5399& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void U24ArrayTypeU2412_t5399_marshal_cleanup(U24ArrayTypeU2412_t5399_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1668
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1668
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1668
void U24ArrayTypeU241668_t5400_marshal(const U24ArrayTypeU241668_t5400& unmarshaled, U24ArrayTypeU241668_t5400_marshaled& marshaled)
{
}
void U24ArrayTypeU241668_t5400_marshal_back(const U24ArrayTypeU241668_t5400_marshaled& marshaled, U24ArrayTypeU241668_t5400& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1668
void U24ArrayTypeU241668_t5400_marshal_cleanup(U24ArrayTypeU241668_t5400_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$2100
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$2100
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2100
void U24ArrayTypeU242100_t5401_marshal(const U24ArrayTypeU242100_t5401& unmarshaled, U24ArrayTypeU242100_t5401_marshaled& marshaled)
{
}
void U24ArrayTypeU242100_t5401_marshal_back(const U24ArrayTypeU242100_t5401_marshaled& marshaled, U24ArrayTypeU242100_t5401& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2100
void U24ArrayTypeU242100_t5401_marshal_cleanup(U24ArrayTypeU242100_t5401_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1452
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1452
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1452
void U24ArrayTypeU241452_t5402_marshal(const U24ArrayTypeU241452_t5402& unmarshaled, U24ArrayTypeU241452_t5402_marshaled& marshaled)
{
}
void U24ArrayTypeU241452_t5402_marshal_back(const U24ArrayTypeU241452_t5402_marshaled& marshaled, U24ArrayTypeU241452_t5402& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1452
void U24ArrayTypeU241452_t5402_marshal_cleanup(U24ArrayTypeU241452_t5402_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$136
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void U24ArrayTypeU24136_t5403_marshal(const U24ArrayTypeU24136_t5403& unmarshaled, U24ArrayTypeU24136_t5403_marshaled& marshaled)
{
}
void U24ArrayTypeU24136_t5403_marshal_back(const U24ArrayTypeU24136_t5403_marshaled& marshaled, U24ArrayTypeU24136_t5403& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void U24ArrayTypeU24136_t5403_marshal_cleanup(U24ArrayTypeU24136_t5403_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$84
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$84
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU248MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$84
void U24ArrayTypeU2484_t5404_marshal(const U24ArrayTypeU2484_t5404& unmarshaled, U24ArrayTypeU2484_t5404_marshaled& marshaled)
{
}
void U24ArrayTypeU2484_t5404_marshal_back(const U24ArrayTypeU2484_t5404_marshaled& marshaled, U24ArrayTypeU2484_t5404& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$84
void U24ArrayTypeU2484_t5404_marshal_cleanup(U24ArrayTypeU2484_t5404_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU247MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void U24ArrayTypeU2472_t5405_marshal(const U24ArrayTypeU2472_t5405& unmarshaled, U24ArrayTypeU2472_t5405_marshaled& marshaled)
{
}
void U24ArrayTypeU2472_t5405_marshal_back(const U24ArrayTypeU2472_t5405_marshaled& marshaled, U24ArrayTypeU2472_t5405& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$72
void U24ArrayTypeU2472_t5405_marshal_cleanup(U24ArrayTypeU2472_t5405_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$124
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void U24ArrayTypeU24124_t5406_marshal(const U24ArrayTypeU24124_t5406& unmarshaled, U24ArrayTypeU24124_t5406_marshaled& marshaled)
{
}
void U24ArrayTypeU24124_t5406_marshal_back(const U24ArrayTypeU24124_t5406_marshaled& marshaled, U24ArrayTypeU24124_t5406& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$124
void U24ArrayTypeU24124_t5406_marshal_cleanup(U24ArrayTypeU24124_t5406_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$96
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU249MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void U24ArrayTypeU2496_t5407_marshal(const U24ArrayTypeU2496_t5407& unmarshaled, U24ArrayTypeU2496_t5407_marshaled& marshaled)
{
}
void U24ArrayTypeU2496_t5407_marshal_back(const U24ArrayTypeU2496_t5407_marshaled& marshaled, U24ArrayTypeU2496_t5407& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$96
void U24ArrayTypeU2496_t5407_marshal_cleanup(U24ArrayTypeU2496_t5407_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$2048
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void U24ArrayTypeU242048_t5408_marshal(const U24ArrayTypeU242048_t5408& unmarshaled, U24ArrayTypeU242048_t5408_marshaled& marshaled)
{
}
void U24ArrayTypeU242048_t5408_marshal_back(const U24ArrayTypeU242048_t5408_marshaled& marshaled, U24ArrayTypeU242048_t5408& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$2048
void U24ArrayTypeU242048_t5408_marshal_cleanup(U24ArrayTypeU242048_t5408_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$56
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU245_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void U24ArrayTypeU2456_t5409_marshal(const U24ArrayTypeU2456_t5409& unmarshaled, U24ArrayTypeU2456_t5409_marshaled& marshaled)
{
}
void U24ArrayTypeU2456_t5409_marshal_back(const U24ArrayTypeU2456_t5409_marshaled& marshaled, U24ArrayTypeU2456_t5409& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$56
void U24ArrayTypeU2456_t5409_marshal_cleanup(U24ArrayTypeU2456_t5409_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_3.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$256
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t5410_marshal(const U24ArrayTypeU24256_t5410& unmarshaled, U24ArrayTypeU24256_t5410_marshaled& marshaled)
{
}
void U24ArrayTypeU24256_t5410_marshal_back(const U24ArrayTypeU24256_t5410_marshaled& marshaled, U24ArrayTypeU24256_t5410& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void U24ArrayTypeU24256_t5410_marshal_cleanup(U24ArrayTypeU24256_t5410_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_6.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$1024
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void U24ArrayTypeU241024_t5411_marshal(const U24ArrayTypeU241024_t5411& unmarshaled, U24ArrayTypeU241024_t5411_marshaled& marshaled)
{
}
void U24ArrayTypeU241024_t5411_marshal_back(const U24ArrayTypeU241024_t5411_marshaled& marshaled, U24ArrayTypeU241024_t5411& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$1024
void U24ArrayTypeU241024_t5411_marshal_cleanup(U24ArrayTypeU241024_t5411_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$640
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU246_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void U24ArrayTypeU24640_t5412_marshal(const U24ArrayTypeU24640_t5412& unmarshaled, U24ArrayTypeU24640_t5412_marshaled& marshaled)
{
}
void U24ArrayTypeU24640_t5412_marshal_back(const U24ArrayTypeU24640_t5412_marshaled& marshaled, U24ArrayTypeU24640_t5412& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$640
void U24ArrayTypeU24640_t5412_marshal_cleanup(U24ArrayTypeU24640_t5412_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$160
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_7.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$160
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$160
void U24ArrayTypeU24160_t5413_marshal(const U24ArrayTypeU24160_t5413& unmarshaled, U24ArrayTypeU24160_t5413_marshaled& marshaled)
{
}
void U24ArrayTypeU24160_t5413_marshal_back(const U24ArrayTypeU24160_t5413_marshaled& marshaled, U24ArrayTypeU24160_t5413& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$160
void U24ArrayTypeU24160_t5413_marshal_cleanup(U24ArrayTypeU24160_t5413_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_8.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>/$ArrayType$128
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU241_8MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void U24ArrayTypeU24128_t5414_marshal(const U24ArrayTypeU24128_t5414& unmarshaled, U24ArrayTypeU24128_t5414_marshaled& marshaled)
{
}
void U24ArrayTypeU24128_t5414_marshal_back(const U24ArrayTypeU24128_t5414_marshaled& marshaled, U24ArrayTypeU24128_t5414& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$128
void U24ArrayTypeU24128_t5414_marshal_cleanup(U24ArrayTypeU24128_t5414_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
