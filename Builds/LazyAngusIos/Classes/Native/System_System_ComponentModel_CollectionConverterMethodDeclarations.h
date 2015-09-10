#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t4232;
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

// System.Void System.ComponentModel.CollectionConverter::.ctor()
extern "C" void CollectionConverter__ctor_m15830 (CollectionConverter_t4232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CollectionConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * CollectionConverter_ConvertTo_m15831 (CollectionConverter_t4232 * __this, Object_t * ___context, CultureInfo_t793 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CollectionConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t4261 * CollectionConverter_GetProperties_m15832 (CollectionConverter_t4232 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t4258* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CollectionConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CollectionConverter_GetPropertiesSupported_m15833 (CollectionConverter_t4232 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
