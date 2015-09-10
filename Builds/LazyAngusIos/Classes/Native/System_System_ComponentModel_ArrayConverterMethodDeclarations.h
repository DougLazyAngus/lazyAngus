#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ArrayConverter
struct ArrayConverter_t4231;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4559;
// System.Globalization.CultureInfo
struct CultureInfo_t793;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4261;
// System.Attribute[]
struct AttributeU5BU5D_t4258;

// System.Object System.ComponentModel.ArrayConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * ArrayConverter_ConvertTo_m15794 (ArrayConverter_t4231 * __this, Object_t * ___context, CultureInfo_t793 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ArrayConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t4261 * ArrayConverter_GetProperties_m15795 (ArrayConverter_t4231 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t4258* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ArrayConverter_GetPropertiesSupported_m15796 (ArrayConverter_t4231 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
