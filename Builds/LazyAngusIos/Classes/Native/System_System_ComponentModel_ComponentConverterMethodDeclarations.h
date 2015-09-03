#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ComponentConverter
struct ComponentConverter_t4228;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4250;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4548;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t4247;

// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t4250 * ComponentConverter_GetProperties_m15765 (ComponentConverter_t4228 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t4247* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ComponentConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ComponentConverter_GetPropertiesSupported_m15766 (ComponentConverter_t4228 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
