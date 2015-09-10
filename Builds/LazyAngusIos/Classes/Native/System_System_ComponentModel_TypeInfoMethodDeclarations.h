#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.TypeInfo
struct TypeInfo_t4275;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4233;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4261;

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m16058 (TypeInfo_t4275 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C" AttributeCollection_t4233 * TypeInfo_GetAttributes_m16059 (TypeInfo_t4275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t4261 * TypeInfo_GetProperties_m16060 (TypeInfo_t4275 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
