#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Info
struct Info_t4272;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4233;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4261;
// System.Attribute[]
struct AttributeU5BU5D_t4258;
// System.ComponentModel.IComponent
struct IComponent_t4273;

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C" void Info__ctor_m16051 (Info_t4272 * __this, Type_t * ___infoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes()
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties()
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C" Type_t * Info_get_InfoType_m16052 (Info_t4272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t4261 * Info_GetProperties_m16053 (Info_t4272 * __this, AttributeU5BU5D_t4258* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C" AttributeCollection_t4233 * Info_GetAttributes_m16054 (Info_t4272 * __this, Object_t * ___comp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
