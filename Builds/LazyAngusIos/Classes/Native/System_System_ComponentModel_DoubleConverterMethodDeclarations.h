#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t4239;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t452;

// System.Boolean System.ComponentModel.DoubleConverter::get_SupportHex()
extern "C" bool DoubleConverter_get_SupportHex_m15803 (DoubleConverter_t4239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DoubleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* DoubleConverter_ConvertToString_m15804 (DoubleConverter_t4239 * __this, Object_t * ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DoubleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * DoubleConverter_ConvertFromString_m15805 (DoubleConverter_t4239 * __this, String_t* ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
