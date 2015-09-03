#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ComponentInfo
struct ComponentInfo_t4263;
// System.ComponentModel.IComponent
struct IComponent_t4262;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4222;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4250;

// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C" void ComponentInfo__ctor_m15985 (ComponentInfo_t4263 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C" AttributeCollection_t4222 * ComponentInfo_GetAttributes_m15986 (ComponentInfo_t4263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t4250 * ComponentInfo_GetProperties_m15987 (ComponentInfo_t4263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
