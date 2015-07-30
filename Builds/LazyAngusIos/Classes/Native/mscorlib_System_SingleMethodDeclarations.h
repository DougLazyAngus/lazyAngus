#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Single
struct Single_t87;
// System.IFormatProvider
struct IFormatProvider_t4454;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Boolean System.Single::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Single_System_IConvertible_ToBoolean_m15582 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Single::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Single_System_IConvertible_ToByte_m15583 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Single::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Single_System_IConvertible_ToChar_m15584 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Single::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t287  Single_System_IConvertible_ToDateTime_m15585 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Single::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t695  Single_System_IConvertible_ToDecimal_m15586 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Single::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Single_System_IConvertible_ToDouble_m15587 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Single::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Single_System_IConvertible_ToInt16_m15588 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Single_System_IConvertible_ToInt32_m15589 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Single::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Single_System_IConvertible_ToInt64_m15590 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Single::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Single_System_IConvertible_ToSByte_m15591 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Single_System_IConvertible_ToSingle_m15592 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Single::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Single_System_IConvertible_ToType_m15593 (float* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Single::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Single_System_IConvertible_ToUInt16_m15594 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Single::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Single_System_IConvertible_ToUInt32_m15595 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Single::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Single_System_IConvertible_ToUInt64_m15596 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::CompareTo(System.Object)
extern "C" int32_t Single_CompareTo_m15597 (float* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Object)
extern "C" bool Single_Equals_m15598 (float* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::CompareTo(System.Single)
extern "C" int32_t Single_CompareTo_m5493 (float* __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Single)
extern "C" bool Single_Equals_m9827 (float* __this, float ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::GetHashCode()
extern "C" int32_t Single_GetHashCode_m9810 (float* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsInfinity(System.Single)
extern "C" bool Single_IsInfinity_m15599 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNaN(System.Single)
extern "C" bool Single_IsNaN_m15600 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNegativeInfinity(System.Single)
extern "C" bool Single_IsNegativeInfinity_m15601 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsPositiveInfinity(System.Single)
extern "C" bool Single_IsPositiveInfinity_m15602 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String)
extern "C" float Single_Parse_m4032 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
extern "C" float Single_Parse_m4067 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
extern "C" bool Single_TryParse_m15603 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, float* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
extern "C" bool Single_TryParse_m400 (Object_t * __this /* static, unused */, String_t* ___s, float* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
extern "C" String_t* Single_ToString_m401 (float* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.IFormatProvider)
extern "C" String_t* Single_ToString_m9837 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String)
extern "C" String_t* Single_ToString_m3735 (float* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Single_ToString_m15604 (float* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Single::GetTypeCode()
extern "C" int32_t Single_GetTypeCode_m15605 (float* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
