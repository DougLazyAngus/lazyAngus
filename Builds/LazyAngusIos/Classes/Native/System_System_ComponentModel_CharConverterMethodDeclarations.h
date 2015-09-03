#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.CharConverter
struct CharConverter_t4226;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4548;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t782;

// System.Boolean System.ComponentModel.CharConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool CharConverter_CanConvertFrom_m15757 (CharConverter_t4226 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CharConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * CharConverter_ConvertFrom_m15758 (CharConverter_t4226 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CharConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * CharConverter_ConvertTo_m15759 (CharConverter_t4226 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
