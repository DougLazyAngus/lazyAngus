﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t698;
// System.IFormatProvider
struct IFormatProvider_t4503;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t3301;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.String[]
struct StringU5BU5D_t75;
// System.Globalization.CultureInfo
struct CultureInfo_t769;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.Text.Encoding
struct Encoding_t740;
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
extern "C" void String__ctor_m15804 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
extern "C" void String__ctor_m15805 (String_t* __this, CharU5BU5D_t698* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
extern "C" void String__ctor_m15806 (String_t* __this, CharU5BU5D_t698* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
extern "C" void String__ctor_m15807 (String_t* __this, uint16_t ___c, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
extern "C" void String__cctor_m15808 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool String_System_IConvertible_ToBoolean_m15809 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t String_System_IConvertible_ToByte_m15810 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t String_System_IConvertible_ToChar_m15811 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t287  String_System_IConvertible_ToDateTime_m15812 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t746  String_System_IConvertible_ToDecimal_m15813 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double String_System_IConvertible_ToDouble_m15814 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t String_System_IConvertible_ToInt16_m15815 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t String_System_IConvertible_ToInt32_m15816 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t String_System_IConvertible_ToInt64_m15817 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t String_System_IConvertible_ToSByte_m15818 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float String_System_IConvertible_ToSingle_m15819 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * String_System_IConvertible_ToType_m15820 (String_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t String_System_IConvertible_ToUInt16_m15821 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t String_System_IConvertible_ToUInt32_m15822 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t String_System_IConvertible_ToUInt64_m15823 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
extern "C" Object_t* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m15824 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * String_System_Collections_IEnumerable_GetEnumerator_m15825 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
extern "C" bool String_Equals_m15826 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
extern "C" bool String_Equals_m15827 (String_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C" bool String_Equals_m15828 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C" uint16_t String_get_Chars_m407 (String_t* __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" void String_CopyTo_m11502 (String_t* __this, int32_t ___sourceIndex, CharU5BU5D_t698* ___destination, int32_t ___destinationIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C" CharU5BU5D_t698* String_ToCharArray_m3864 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
extern "C" CharU5BU5D_t698* String_ToCharArray_m15829 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C" StringU5BU5D_t75* String_Split_m3727 (String_t* __this, CharU5BU5D_t698* ___separator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
extern "C" StringU5BU5D_t75* String_Split_m7498 (String_t* __this, CharU5BU5D_t698* ___separator, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
extern "C" StringU5BU5D_t75* String_Split_m15830 (String_t* __this, CharU5BU5D_t698* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.Int32,System.StringSplitOptions)
extern "C" StringU5BU5D_t75* String_Split_m15831 (String_t* __this, StringU5BU5D_t75* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C" StringU5BU5D_t75* String_Split_m15178 (String_t* __this, StringU5BU5D_t75* ___separator, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C" String_t* String_Substring_m4137 (String_t* __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" String_t* String_Substring_m418 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
extern "C" String_t* String_SubstringUnchecked_m15832 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C" String_t* String_Trim_m413 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C" String_t* String_Trim_m10130 (String_t* __this, CharU5BU5D_t698* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
extern "C" String_t* String_TrimStart_m15206 (String_t* __this, CharU5BU5D_t698* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C" String_t* String_TrimEnd_m15176 (String_t* __this, CharU5BU5D_t698* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
extern "C" int32_t String_FindNotWhiteSpace_m15833 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
extern "C" int32_t String_FindNotInTable_m15834 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, CharU5BU5D_t698* ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
extern "C" int32_t String_Compare_m15835 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
extern "C" int32_t String_Compare_m15150 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C" int32_t String_Compare_m11478 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, CultureInfo_t769 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C" int32_t String_Compare_m13238 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, bool ___ignoreCase, CultureInfo_t769 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
extern "C" int32_t String_CompareTo_m15836 (String_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
extern "C" int32_t String_CompareTo_m15837 (String_t* __this, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinal_m15203 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinalUnchecked_m15838 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m15839 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
extern "C" bool String_EndsWith_m10200 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C" int32_t String_IndexOfAny_m11516 (String_t* __this, CharU5BU5D_t698* ___anyOf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C" int32_t String_IndexOfAny_m6059 (String_t* __this, CharU5BU5D_t698* ___anyOf, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_IndexOfAny_m13183 (String_t* __this, CharU5BU5D_t698* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_IndexOfAnyUnchecked_m15840 (String_t* __this, CharU5BU5D_t698* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" int32_t String_IndexOf_m10128 (String_t* __this, String_t* ___value, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
extern "C" int32_t String_IndexOf_m15841 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t String_IndexOfOrdinal_m15842 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfOrdinalUnchecked_m15843 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m15844 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C" int32_t String_IndexOf_m3858 (String_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C" int32_t String_IndexOf_m10129 (String_t* __this, uint16_t ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_IndexOf_m15207 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfUnchecked_m15845 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
extern "C" int32_t String_IndexOf_m4136 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C" int32_t String_IndexOf_m10201 (String_t* __this, String_t* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOf_m11479 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
extern "C" int32_t String_LastIndexOfAny_m15846 (String_t* __this, CharU5BU5D_t698* ___anyOf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[],System.Int32)
extern "C" int32_t String_LastIndexOfAny_m6061 (String_t* __this, CharU5BU5D_t698* ___anyOf, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOfAnyUnchecked_m15847 (String_t* __this, CharU5BU5D_t698* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" int32_t String_LastIndexOf_m15139 (String_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
extern "C" int32_t String_LastIndexOf_m15204 (String_t* __this, uint16_t ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOf_m15208 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOfUnchecked_m15848 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C" int32_t String_LastIndexOf_m10202 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOf_m15849 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C" bool String_Contains_m3757 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" bool String_IsNullOrEmpty_m387 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadLeft(System.Int32,System.Char)
extern "C" String_t* String_PadLeft_m3867 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
extern "C" String_t* String_PadRight_m10110 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C" bool String_StartsWith_m4069 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
extern "C" bool String_StartsWith_m15143 (String_t* __this, String_t* ___value, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
extern "C" String_t* String_Replace_m4145 (String_t* __this, uint16_t ___oldChar, uint16_t ___newChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C" String_t* String_Replace_m3758 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
extern "C" String_t* String_ReplaceUnchecked_m15850 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
extern "C" String_t* String_ReplaceFallback_m15851 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___testedCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C" String_t* String_Remove_m6062 (String_t* __this, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C" String_t* String_ToLower_m3863 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C" String_t* String_ToLower_m11511 (String_t* __this, CultureInfo_t769 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
extern "C" String_t* String_ToLowerInvariant_m15852 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper()
extern "C" String_t* String_ToUpper_m10132 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
extern "C" String_t* String_ToUpper_m15853 (String_t* __this, CultureInfo_t769 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpperInvariant()
extern "C" String_t* String_ToUpperInvariant_m15854 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
extern "C" String_t* String_ToString_m15855 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
extern "C" String_t* String_ToString_m15856 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C" String_t* String_Format_m4125 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" String_t* String_Format_m4074 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" String_t* String_Format_m4208 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C" String_t* String_Format_m3694 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t683* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" String_t* String_Format_m11475 (Object_t * __this /* static, unused */, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t683* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
extern "C" StringBuilder_t261 * String_FormatHelper_m15857 (Object_t * __this /* static, unused */, StringBuilder_t261 * ___result, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t683* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Copy(System.String)
extern "C" String_t* String_Copy_m4068 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C" String_t* String_Concat_m409 (Object_t * __this /* static, unused */, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" String_t* String_Concat_m3888 (Object_t * __this /* static, unused */, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C" String_t* String_Concat_m408 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" String_t* String_Concat_m455 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" String_t* String_Concat_m384 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, String_t* ___str3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C" String_t* String_Concat_m3889 (Object_t * __this /* static, unused */, ObjectU5BU5D_t683* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C" String_t* String_Concat_m450 (Object_t * __this /* static, unused */, StringU5BU5D_t75* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
extern "C" String_t* String_ConcatInternal_m15858 (Object_t * __this /* static, unused */, StringU5BU5D_t75* ___values, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
extern "C" String_t* String_Insert_m6063 (String_t* __this, int32_t ___startIndex, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C" String_t* String_Join_m3802 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t75* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
extern "C" String_t* String_Join_m15142 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t75* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
extern "C" String_t* String_JoinUnchecked_m15859 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t75* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C" int32_t String_get_Length_m410 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
extern "C" void String_ParseFormatSpecifier_m15860 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t* ___n, int32_t* ___width, bool* ___left_align, String_t** ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
extern "C" int32_t String_ParseDecimal_m15861 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
extern "C" void String_InternalSetChar_m15862 (String_t* __this, int32_t ___idx, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
extern "C" void String_InternalSetLength_m15863 (String_t* __this, int32_t ___newLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C" int32_t String_GetHashCode_m15864 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
extern "C" int32_t String_GetCaseInsensitiveHashCode_m15865 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
extern "C" String_t* String_CreateString_m15866 (String_t* __this, int8_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m15867 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
extern "C" String_t* String_CreateString_m15868 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, Encoding_t740 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
extern "C" String_t* String_CreateString_m15869 (String_t* __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m15870 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m10163 (String_t* __this, CharU5BU5D_t698* ___val, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C" String_t* String_CreateString_m3997 (String_t* __this, CharU5BU5D_t698* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" String_t* String_CreateString_m3998 (String_t* __this, uint16_t ___c, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy4_m15871 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy2_m15872 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy1_m15873 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy_m15874 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
extern "C" void String_CharCopy_m15875 (Object_t * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
extern "C" void String_CharCopyReverse_m15876 (Object_t * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" void String_CharCopy_m15877 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" void String_CharCopy_m15878 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, CharU5BU5D_t698* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" void String_CharCopyReverse_m15879 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
extern "C" StringU5BU5D_t75* String_InternalSplit_m15880 (String_t* __this, CharU5BU5D_t698* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
extern "C" String_t* String_InternalAllocateStr_m15881 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" bool String_op_Equality_m456 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" bool String_op_Inequality_m415 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
