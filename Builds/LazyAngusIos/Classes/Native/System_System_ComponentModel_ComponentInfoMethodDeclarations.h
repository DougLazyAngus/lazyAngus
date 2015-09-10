#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ComponentInfo
struct ComponentInfo_t4274;
// System.ComponentModel.IComponent
struct IComponent_t4273;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4233;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4261;

// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C" void ComponentInfo__ctor_m16055 (ComponentInfo_t4274 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C" AttributeCollection_t4233 * ComponentInfo_GetAttributes_m16056 (ComponentInfo_t4274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t4261 * ComponentInfo_GetProperties_m16057 (ComponentInfo_t4274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
