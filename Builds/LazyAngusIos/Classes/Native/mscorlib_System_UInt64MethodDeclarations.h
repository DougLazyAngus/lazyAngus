﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UInt64
struct UInt64_t687;
// System.IFormatProvider
struct IFormatProvider_t4447;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool UInt64_System_IConvertible_ToBoolean_m15293 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t UInt64_System_IConvertible_ToByte_m15294 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t UInt64_System_IConvertible_ToChar_m15295 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t287  UInt64_System_IConvertible_ToDateTime_m15296 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t688  UInt64_System_IConvertible_ToDecimal_m15297 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double UInt64_System_IConvertible_ToDouble_m15298 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t UInt64_System_IConvertible_ToInt16_m15299 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t UInt64_System_IConvertible_ToInt32_m15300 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t UInt64_System_IConvertible_ToInt64_m15301 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t UInt64_System_IConvertible_ToSByte_m15302 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float UInt64_System_IConvertible_ToSingle_m15303 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * UInt64_System_IConvertible_ToType_m15304 (uint64_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t UInt64_System_IConvertible_ToUInt16_m15305 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t UInt64_System_IConvertible_ToUInt32_m15306 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t UInt64_System_IConvertible_ToUInt64_m15307 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C" int32_t UInt64_CompareTo_m15308 (uint64_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.Object)
extern "C" bool UInt64_Equals_m15309 (uint64_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::GetHashCode()
extern "C" int32_t UInt64_GetHashCode_m15310 (uint64_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C" int32_t UInt64_CompareTo_m15311 (uint64_t* __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C" bool UInt64_Equals_m15312 (uint64_t* __this, uint64_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
extern "C" uint64_t UInt64_Parse_m15313 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt64&,System.Exception&)
extern "C" bool UInt64_Parse_m15314 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, uint64_t* ___result, Exception_t57 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" uint64_t UInt64_Parse_m15315 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
extern "C" bool UInt64_TryParse_m9816 (Object_t * __this /* static, unused */, String_t* ___s, uint64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString()
extern "C" String_t* UInt64_ToString_m15316 (uint64_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C" String_t* UInt64_ToString_m9825 (uint64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String)
extern "C" String_t* UInt64_ToString_m15317 (uint64_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C" String_t* UInt64_ToString_m15318 (uint64_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
