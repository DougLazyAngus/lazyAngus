#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t369;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t476;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t2392;

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
extern "C" void NumberFormatInfo__ctor_m12859 (NumberFormatInfo_t369 * __this, int32_t ___lcid, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
extern "C" void NumberFormatInfo__ctor_m12860 (NumberFormatInfo_t369 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
extern "C" void NumberFormatInfo__ctor_m12861 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
extern "C" void NumberFormatInfo__cctor_m12862 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m12863 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m12864 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m12865 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
extern "C" Int32U5BU5D_t476* NumberFormatInfo_get_RawCurrencyGroupSizes_m12866 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyNegativePattern_m12867 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyPositivePattern_m12868 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
extern "C" String_t* NumberFormatInfo_get_CurrencySymbol_m12869 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
extern "C" NumberFormatInfo_t369 * NumberFormatInfo_get_CurrentInfo_m12870 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C" NumberFormatInfo_t369 * NumberFormatInfo_get_InvariantInfo_m12871 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
extern "C" String_t* NumberFormatInfo_get_NaNSymbol_m12872 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m12873 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
extern "C" String_t* NumberFormatInfo_get_NegativeSign_m12874 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_NumberDecimalDigits_m12875 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberDecimalSeparator_m12876 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberGroupSeparator_m12877 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
extern "C" Int32U5BU5D_t476* NumberFormatInfo_get_RawNumberGroupSizes_m12878 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
extern "C" int32_t NumberFormatInfo_get_NumberNegativePattern_m12879 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
extern "C" void NumberFormatInfo_set_NumberNegativePattern_m12880 (NumberFormatInfo_t369 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_PercentDecimalDigits_m12881 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentDecimalSeparator_m12882 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentGroupSeparator_m12883 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
extern "C" Int32U5BU5D_t476* NumberFormatInfo_get_RawPercentGroupSizes_m12884 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
extern "C" int32_t NumberFormatInfo_get_PercentNegativePattern_m12885 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
extern "C" int32_t NumberFormatInfo_get_PercentPositivePattern_m12886 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
extern "C" String_t* NumberFormatInfo_get_PercentSymbol_m12887 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
extern "C" String_t* NumberFormatInfo_get_PerMilleSymbol_m12888 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m12889 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
extern "C" String_t* NumberFormatInfo_get_PositiveSign_m12890 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
extern "C" Object_t * NumberFormatInfo_GetFormat_m12891 (NumberFormatInfo_t369 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
extern "C" Object_t * NumberFormatInfo_Clone_m12892 (NumberFormatInfo_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t369 * NumberFormatInfo_GetInstance_m12893 (Object_t * __this /* static, unused */, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
