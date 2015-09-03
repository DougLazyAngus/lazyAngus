#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t4221;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4548;
// System.Globalization.CultureInfo
struct CultureInfo_t782;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4250;
// System.Attribute[]
struct AttributeU5BU5D_t4247;

// System.Void System.ComponentModel.CollectionConverter::.ctor()
extern "C" void CollectionConverter__ctor_m15760 (CollectionConverter_t4221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CollectionConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * CollectionConverter_ConvertTo_m15761 (CollectionConverter_t4221 * __this, Object_t * ___context, CultureInfo_t782 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CollectionConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t4250 * CollectionConverter_GetProperties_m15762 (CollectionConverter_t4221 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t4247* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.CollectionConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool CollectionConverter_GetPropertiesSupported_m15763 (CollectionConverter_t4221 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
