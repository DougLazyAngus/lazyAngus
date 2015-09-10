#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ReflectionPropertyDescriptor
struct ReflectionPropertyDescriptor_t4263;
// System.Type
struct Type_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Collections.IList
struct IList_t711;

// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C" void ReflectionPropertyDescriptor__ctor_m15989 (ReflectionPropertyDescriptor_t4263 * __this, PropertyInfo_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern "C" PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m15990 (ReflectionPropertyDescriptor_t4263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_ComponentType_m15991 (ReflectionPropertyDescriptor_t4263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_PropertyType_m15992 (ReflectionPropertyDescriptor_t4263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C" void ReflectionPropertyDescriptor_FillAttributes_m15993 (ReflectionPropertyDescriptor_t4263 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
