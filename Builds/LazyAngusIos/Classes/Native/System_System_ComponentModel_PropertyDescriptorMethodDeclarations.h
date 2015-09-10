#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4230;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4258;
// System.Collections.IList
struct IList_t711;
// System.Object
struct Object_t;

// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void PropertyDescriptor__ctor_m15972 (PropertyDescriptor_t4230 * __this, String_t* ___name, AttributeU5BU5D_t4258* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.PropertyDescriptor::get_ComponentType()
// System.Type System.ComponentModel.PropertyDescriptor::get_PropertyType()
// System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C" void PropertyDescriptor_FillAttributes_m15973 (PropertyDescriptor_t4230 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern "C" bool PropertyDescriptor_Equals_m15974 (PropertyDescriptor_t4230 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern "C" int32_t PropertyDescriptor_GetHashCode_m15975 (PropertyDescriptor_t4230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
