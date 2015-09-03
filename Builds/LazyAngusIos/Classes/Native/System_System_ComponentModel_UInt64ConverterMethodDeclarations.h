#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.UInt64Converter
struct UInt64Converter_t4267;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t452;

// System.Boolean System.ComponentModel.UInt64Converter::get_SupportHex()
extern "C" bool UInt64Converter_get_SupportHex_m15999 (UInt64Converter_t4267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt64Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* UInt64Converter_ConvertToString_m16000 (UInt64Converter_t4267 * __this, Object_t * ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt64Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * UInt64Converter_ConvertFromString_m16001 (UInt64Converter_t4267 * __this, String_t* ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt64Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * UInt64Converter_ConvertFromString_m16002 (UInt64Converter_t4267 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
