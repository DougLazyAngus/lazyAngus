#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.CultureInfoConverter
struct CultureInfoConverter_t4232;
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

// System.Boolean System.ComponentModel.CultureInfoConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool CultureInfoConverter_CanConvertFrom_m15769 (CultureInfoConverter_t4232 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool CultureInfoConverter_CanConvertTo_m15770 (CultureInfoConverter_t4232 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CultureInfoConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * CultureInfoConverter_ConvertFrom_m15771 (CultureInfoConverter_t4232 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CultureInfoConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * CultureInfoConverter_ConvertTo_m15772 (CultureInfoConverter_t4232 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t4231 * CultureInfoConverter_GetStandardValues_m15773 (CultureInfoConverter_t4232 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CultureInfoConverter_GetStandardValuesExclusive_m15774 (CultureInfoConverter_t4232 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CultureInfoConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CultureInfoConverter_GetStandardValuesSupported_m15775 (CultureInfoConverter_t4232 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
