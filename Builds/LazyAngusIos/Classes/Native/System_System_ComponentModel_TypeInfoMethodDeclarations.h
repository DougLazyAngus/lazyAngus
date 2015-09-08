#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.TypeInfo
struct TypeInfo_t4268;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4226;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4254;

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m16001 (TypeInfo_t4268 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C" AttributeCollection_t4226 * TypeInfo_GetAttributes_m16002 (TypeInfo_t4268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t4254 * TypeInfo_GetProperties_m16003 (TypeInfo_t4268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
