#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ComponentConverter
struct ComponentConverter_t4232;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4254;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t4552;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t4251;

// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t4254 * ComponentConverter_GetProperties_m15778 (ComponentConverter_t4232 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t4251* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ComponentConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ComponentConverter_GetPropertiesSupported_m15779 (ComponentConverter_t4232 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
