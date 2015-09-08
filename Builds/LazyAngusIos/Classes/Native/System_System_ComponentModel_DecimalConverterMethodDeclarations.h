#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.DecimalConverter
struct DecimalConverter_t4238;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4552;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t786;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t452;

// System.Boolean System.ComponentModel.DecimalConverter::get_SupportHex()
extern "C" bool DecimalConverter_get_SupportHex_m15793 (DecimalConverter_t4238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DecimalConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool DecimalConverter_CanConvertTo_m15794 (DecimalConverter_t4238 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * DecimalConverter_ConvertTo_m15795 (DecimalConverter_t4238 * __this, Object_t * ___context, CultureInfo_t786 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DecimalConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* DecimalConverter_ConvertToString_m15796 (DecimalConverter_t4238 * __this, Object_t * ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * DecimalConverter_ConvertFromString_m15797 (DecimalConverter_t4238 * __this, String_t* ___value, NumberFormatInfo_t452 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
