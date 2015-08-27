#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Module
struct Module_t4519;
// System.Reflection.Assembly
struct Assembly_t770;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.Module::.ctor()
extern "C" void Module__ctor_m17986 (Module_t4519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::.cctor()
extern "C" void Module__cctor_m17987 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" Assembly_t770 * Module_get_Assembly_m17988 (Module_t4519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
extern "C" String_t* Module_get_ScopeName_m17989 (Module_t4519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t683* Module_GetCustomAttributes_m17990 (Module_t4519 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Module_GetObjectData_m17991 (Module_t4519 * __this, SerializationInfo_t2920 * ___info, StreamingContext_t2921  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern "C" bool Module_IsDefined_m17992 (Module_t4519 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsResource()
extern "C" bool Module_IsResource_m17993 (Module_t4519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::ToString()
extern "C" String_t* Module_ToString_m17994 (Module_t4519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_m17995 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_ignore_case_m17996 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
