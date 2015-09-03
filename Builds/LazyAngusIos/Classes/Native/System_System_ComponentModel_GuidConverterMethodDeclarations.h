#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.GuidConverter
struct GuidConverter_t4243;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4548;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t782;

// System.Boolean System.ComponentModel.GuidConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool GuidConverter_CanConvertFrom_m15826 (GuidConverter_t4243 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.GuidConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool GuidConverter_CanConvertTo_m15827 (GuidConverter_t4243 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.GuidConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * GuidConverter_ConvertFrom_m15828 (GuidConverter_t4243 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.GuidConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * GuidConverter_ConvertTo_m15829 (GuidConverter_t4243 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
