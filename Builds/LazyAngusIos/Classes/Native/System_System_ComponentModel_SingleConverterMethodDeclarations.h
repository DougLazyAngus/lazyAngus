#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.SingleConverter
struct SingleConverter_t4265;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t452;

// System.Boolean System.ComponentModel.SingleConverter::get_SupportHex()
extern "C" bool SingleConverter_get_SupportHex_m15998 (SingleConverter_t4265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SingleConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* SingleConverter_ConvertToString_m15999 (SingleConverter_t4265 * __this, Object_t * ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SingleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * SingleConverter_ConvertFromString_m16000 (SingleConverter_t4265 * __this, String_t* ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
