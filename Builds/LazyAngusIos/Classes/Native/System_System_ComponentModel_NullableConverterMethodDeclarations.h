#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.NullableConverter
struct NullableConverter_t4249;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4548;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t782;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4250;
// System.Attribute[]
struct AttributeU5BU5D_t4247;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t4231;

// System.Boolean System.ComponentModel.NullableConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool NullableConverter_CanConvertFrom_m15851 (NullableConverter_t4249 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool NullableConverter_CanConvertTo_m15852 (NullableConverter_t4249 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * NullableConverter_ConvertFrom_m15853 (NullableConverter_t4249 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.NullableConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * NullableConverter_ConvertTo_m15854 (NullableConverter_t4249 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetCreateInstanceSupported_m15855 (NullableConverter_t4249 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.NullableConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t4250 * NullableConverter_GetProperties_m15856 (NullableConverter_t4249 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t4247* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetPropertiesSupported_m15857 (NullableConverter_t4249 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.NullableConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t4231 * NullableConverter_GetStandardValues_m15858 (NullableConverter_t4249 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetStandardValuesExclusive_m15859 (NullableConverter_t4249 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool NullableConverter_GetStandardValuesSupported_m15860 (NullableConverter_t4249 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.NullableConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool NullableConverter_IsValid_m15861 (NullableConverter_t4249 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
