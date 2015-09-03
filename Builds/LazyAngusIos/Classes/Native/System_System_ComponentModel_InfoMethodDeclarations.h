#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Info
struct Info_t4261;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4222;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4250;
// System.Attribute[]
struct AttributeU5BU5D_t4247;
// System.ComponentModel.IComponent
struct IComponent_t4262;

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C" void Info__ctor_m15981 (Info_t4261 * __this, Type_t * ___infoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes()
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties()
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C" Type_t * Info_get_InfoType_m15982 (Info_t4261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t4250 * Info_GetProperties_m15983 (Info_t4261 * __this, AttributeU5BU5D_t4247* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C" AttributeCollection_t4222 * Info_GetAttributes_m15984 (Info_t4261 * __this, Object_t * ___comp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
