#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t4227;
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

// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
extern "C" void BaseNumberConverter__ctor_m15754 (BaseNumberConverter_t4227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BaseNumberConverter::get_SupportHex()
// System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool BaseNumberConverter_CanConvertFrom_m15755 (BaseNumberConverter_t4227 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BaseNumberConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool BaseNumberConverter_CanConvertTo_m15756 (BaseNumberConverter_t4227 * __this, Object_t * ___context, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * BaseNumberConverter_ConvertFrom_m15757 (BaseNumberConverter_t4227 * __this, Object_t * ___context, CultureInfo_t786 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.BaseNumberConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * BaseNumberConverter_ConvertTo_m15758 (BaseNumberConverter_t4227 * __this, Object_t * ___context, CultureInfo_t786 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.BaseNumberConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
// System.Object System.ComponentModel.BaseNumberConverter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * BaseNumberConverter_ConvertFromString_m15759 (BaseNumberConverter_t4227 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
