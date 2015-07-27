#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t607;
// System.IFormatProvider
struct IFormatProvider_t2470;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t1701;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String[]
struct StringU5BU5D_t45;
// System.Globalization.CultureInfo
struct CultureInfo_t666;
// System.Object[]
struct ObjectU5BU5D_t581;
// System.Text.StringBuilder
struct StringBuilder_t219;
// System.Text.Encoding
struct Encoding_t637;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.String::.ctor(System.Char*,System.Int32,System.Int32)
extern "C" void String__ctor_m12158 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
extern "C" void String__ctor_m12159 (String_t* __this, CharU5BU5D_t607* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
extern "C" void String__ctor_m12160 (String_t* __this, CharU5BU5D_t607* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
extern "C" void String__ctor_m12161 (String_t* __this, uint16_t ___c, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
extern "C" void String__cctor_m12162 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool String_System_IConvertible_ToBoolean_m12163 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t String_System_IConvertible_ToByte_m12164 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t String_System_IConvertible_ToChar_m12165 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t245  String_System_IConvertible_ToDateTime_m12166 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t643  String_System_IConvertible_ToDecimal_m12167 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double String_System_IConvertible_ToDouble_m12168 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t String_System_IConvertible_ToInt16_m12169 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t String_System_IConvertible_ToInt32_m12170 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t String_System_IConvertible_ToInt64_m12171 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t String_System_IConvertible_ToSByte_m12172 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float String_System_IConvertible_ToSingle_m12173 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * String_System_IConvertible_ToType_m12174 (String_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t String_System_IConvertible_ToUInt16_m12175 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t String_System_IConvertible_ToUInt32_m12176 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t String_System_IConvertible_ToUInt64_m12177 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
extern "C" Object_t* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m12178 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * String_System_Collections_IEnumerable_GetEnumerator_m12179 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
extern "C" bool String_Equals_m12180 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
extern "C" bool String_Equals_m12181 (String_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C" bool String_Equals_m12182 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C" uint16_t String_get_Chars_m173 (String_t* __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" void String_CopyTo_m8545 (String_t* __this, int32_t ___sourceIndex, CharU5BU5D_t607* ___destination, int32_t ___destinationIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C" CharU5BU5D_t607* String_ToCharArray_m3254 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
extern "C" CharU5BU5D_t607* String_ToCharArray_m12183 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C" StringU5BU5D_t45* String_Split_m3115 (String_t* __this, CharU5BU5D_t607* ___separator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
extern "C" StringU5BU5D_t45* String_Split_m11572 (String_t* __this, CharU5BU5D_t607* ___separator, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
extern "C" StringU5BU5D_t45* String_Split_m12184 (String_t* __this, CharU5BU5D_t607* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.Int32,System.StringSplitOptions)
extern "C" StringU5BU5D_t45* String_Split_m12185 (String_t* __this, StringU5BU5D_t45* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C" StringU5BU5D_t45* String_Split_m11612 (String_t* __this, StringU5BU5D_t45* ___separator, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C" String_t* String_Substring_m3528 (String_t* __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" String_t* String_Substring_m184 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
extern "C" String_t* String_SubstringUnchecked_m12186 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C" String_t* String_Trim_m179 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C" String_t* String_Trim_m7155 (String_t* __this, CharU5BU5D_t607* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
extern "C" String_t* String_TrimStart_m11640 (String_t* __this, CharU5BU5D_t607* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C" String_t* String_TrimEnd_m11610 (String_t* __this, CharU5BU5D_t607* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
extern "C" int32_t String_FindNotWhiteSpace_m12187 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
extern "C" int32_t String_FindNotInTable_m12188 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, CharU5BU5D_t607* ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
extern "C" int32_t String_Compare_m12189 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
extern "C" int32_t String_Compare_m11581 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C" int32_t String_Compare_m8521 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, CultureInfo_t666 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C" int32_t String_Compare_m9647 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, bool ___ignoreCase, CultureInfo_t666 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
extern "C" int32_t String_CompareTo_m12190 (String_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
extern "C" int32_t String_CompareTo_m12191 (String_t* __this, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinal_m11637 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinalUnchecked_m12192 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m12193 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
extern "C" bool String_EndsWith_m7228 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C" int32_t String_IndexOfAny_m8562 (String_t* __this, CharU5BU5D_t607* ___anyOf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C" int32_t String_IndexOfAny_m5415 (String_t* __this, CharU5BU5D_t607* ___anyOf, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_IndexOfAny_m9582 (String_t* __this, CharU5BU5D_t607* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_IndexOfAnyUnchecked_m12194 (String_t* __this, CharU5BU5D_t607* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" int32_t String_IndexOf_m7153 (String_t* __this, String_t* ___value, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
extern "C" int32_t String_IndexOf_m12195 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t String_IndexOfOrdinal_m12196 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfOrdinalUnchecked_m12197 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m12198 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C" int32_t String_IndexOf_m3248 (String_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C" int32_t String_IndexOf_m7154 (String_t* __this, uint16_t ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_IndexOf_m11641 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfUnchecked_m12199 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
extern "C" int32_t String_IndexOf_m3527 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C" int32_t String_IndexOf_m7229 (String_t* __this, String_t* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOf_m8522 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
extern "C" int32_t String_LastIndexOfAny_m12200 (String_t* __this, CharU5BU5D_t607* ___anyOf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[],System.Int32)
extern "C" int32_t String_LastIndexOfAny_m5417 (String_t* __this, CharU5BU5D_t607* ___anyOf, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOfAnyUnchecked_m12201 (String_t* __this, CharU5BU5D_t607* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" int32_t String_LastIndexOf_m11569 (String_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
extern "C" int32_t String_LastIndexOf_m11638 (String_t* __this, uint16_t ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOf_m11642 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOfUnchecked_m12202 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C" int32_t String_LastIndexOf_m7231 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOf_m12203 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C" bool String_Contains_m3145 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" bool String_IsNullOrEmpty_m170 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadLeft(System.Int32,System.Char)
extern "C" String_t* String_PadLeft_m3257 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
extern "C" String_t* String_PadRight_m7134 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C" bool String_StartsWith_m3459 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
extern "C" bool String_StartsWith_m11574 (String_t* __this, String_t* ___value, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
extern "C" String_t* String_Replace_m7230 (String_t* __this, uint16_t ___oldChar, uint16_t ___newChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C" String_t* String_Replace_m3146 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
extern "C" String_t* String_ReplaceUnchecked_m12204 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
extern "C" String_t* String_ReplaceFallback_m12205 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___testedCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C" String_t* String_Remove_m5418 (String_t* __this, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C" String_t* String_ToLower_m3253 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C" String_t* String_ToLower_m8556 (String_t* __this, CultureInfo_t666 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
extern "C" String_t* String_ToLowerInvariant_m12206 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper()
extern "C" String_t* String_ToUpper_m7157 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
extern "C" String_t* String_ToUpper_m12207 (String_t* __this, CultureInfo_t666 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpperInvariant()
extern "C" String_t* String_ToUpperInvariant_m12208 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
extern "C" String_t* String_ToString_m12209 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
extern "C" String_t* String_ToString_m12210 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C" String_t* String_Format_m3516 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" String_t* String_Format_m3464 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" String_t* String_Format_m3586 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C" String_t* String_Format_m3081 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t581* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" String_t* String_Format_m8518 (Object_t * __this /* static, unused */, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t581* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
extern "C" StringBuilder_t219 * String_FormatHelper_m12211 (Object_t * __this /* static, unused */, StringBuilder_t219 * ___result, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t581* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Copy(System.String)
extern "C" String_t* String_Copy_m3458 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C" String_t* String_Concat_m175 (Object_t * __this /* static, unused */, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" String_t* String_Concat_m3278 (Object_t * __this /* static, unused */, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C" String_t* String_Concat_m174 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" String_t* String_Concat_m222 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" String_t* String_Concat_m201 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, String_t* ___str3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C" String_t* String_Concat_m3279 (Object_t * __this /* static, unused */, ObjectU5BU5D_t581* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C" String_t* String_Concat_m217 (Object_t * __this /* static, unused */, StringU5BU5D_t45* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
extern "C" String_t* String_ConcatInternal_m12212 (Object_t * __this /* static, unused */, StringU5BU5D_t45* ___values, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
extern "C" String_t* String_Insert_m5420 (String_t* __this, int32_t ___startIndex, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C" String_t* String_Join_m3192 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t45* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
extern "C" String_t* String_Join_m11573 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t45* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
extern "C" String_t* String_JoinUnchecked_m12213 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t45* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C" int32_t String_get_Length_m176 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
extern "C" void String_ParseFormatSpecifier_m12214 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t* ___n, int32_t* ___width, bool* ___left_align, String_t** ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
extern "C" int32_t String_ParseDecimal_m12215 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
extern "C" void String_InternalSetChar_m12216 (String_t* __this, int32_t ___idx, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
extern "C" void String_InternalSetLength_m12217 (String_t* __this, int32_t ___newLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C" int32_t String_GetHashCode_m12218 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
extern "C" int32_t String_GetCaseInsensitiveHashCode_m12219 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
extern "C" String_t* String_CreateString_m12220 (String_t* __this, int8_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m12221 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
extern "C" String_t* String_CreateString_m12222 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, Encoding_t637 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
extern "C" String_t* String_CreateString_m12223 (String_t* __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m12224 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m7190 (String_t* __this, CharU5BU5D_t607* ___val, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C" String_t* String_CreateString_m3387 (String_t* __this, CharU5BU5D_t607* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" String_t* String_CreateString_m3388 (String_t* __this, uint16_t ___c, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy4_m12225 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy2_m12226 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy1_m12227 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy_m12228 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
extern "C" void String_CharCopy_m12229 (Object_t * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
extern "C" void String_CharCopyReverse_m12230 (Object_t * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" void String_CharCopy_m12231 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" void String_CharCopy_m12232 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, CharU5BU5D_t607* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" void String_CharCopyReverse_m12233 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
extern "C" StringU5BU5D_t45* String_InternalSplit_m12234 (String_t* __this, CharU5BU5D_t607* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
extern "C" String_t* String_InternalAllocateStr_m12235 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" bool String_op_Equality_m223 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" bool String_op_Inequality_m181 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
