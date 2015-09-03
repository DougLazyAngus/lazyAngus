#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_t4229;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4548;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t782;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t4231;

// System.Boolean System.ComponentModel.ReferenceConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool ReferenceConverter_CanConvertFrom_m15912 (ReferenceConverter_t4229 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReferenceConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * ReferenceConverter_ConvertFrom_m15913 (ReferenceConverter_t4229 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReferenceConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * ReferenceConverter_ConvertTo_m15914 (ReferenceConverter_t4229 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.ReferenceConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t4231 * ReferenceConverter_GetStandardValues_m15915 (ReferenceConverter_t4229 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ReferenceConverter_GetStandardValuesExclusive_m15916 (ReferenceConverter_t4229 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ReferenceConverter_GetStandardValuesSupported_m15917 (ReferenceConverter_t4229 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReferenceConverter::IsValueAllowed(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool ReferenceConverter_IsValueAllowed_m15918 (ReferenceConverter_t4229 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
