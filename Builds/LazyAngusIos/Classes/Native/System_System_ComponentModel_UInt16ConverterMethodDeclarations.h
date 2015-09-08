#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.UInt16Converter
struct UInt16Converter_t4269;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t452;

// System.Boolean System.ComponentModel.UInt16Converter::get_SupportHex()
extern "C" bool UInt16Converter_get_SupportHex_m16004 (UInt16Converter_t4269 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* UInt16Converter_ConvertToString_m16005 (UInt16Converter_t4269 * __this, Object_t * ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * UInt16Converter_ConvertFromString_m16006 (UInt16Converter_t4269 * __this, String_t* ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * UInt16Converter_ConvertFromString_m16007 (UInt16Converter_t4269 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
