﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.ParameterInfo
struct ParameterInfo_t1384;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String
struct String_t;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t4520;
// System.Object[]
struct ObjectU5BU5D_t683;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"

// System.Void System.Reflection.ParameterInfo::.ctor()
extern "C" void ParameterInfo__ctor_m18117 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern "C" void ParameterInfo__ctor_m18118 (ParameterInfo_t1384 * __this, ParameterBuilder_t4520 * ___pb, Type_t * ___type, MemberInfo_t * ___member, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" void ParameterInfo__ctor_m18119 (ParameterInfo_t1384 * __this, ParameterInfo_t1384 * ___pinfo, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::ToString()
extern "C" String_t* ParameterInfo_ToString_m18120 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C" Type_t * ParameterInfo_get_ParameterType_m18121 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C" int32_t ParameterInfo_get_Attributes_m18122 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C" bool ParameterInfo_get_IsIn_m18123 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C" bool ParameterInfo_get_IsOptional_m18124 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C" bool ParameterInfo_get_IsOut_m18125 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C" bool ParameterInfo_get_IsRetval_m18126 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern "C" MemberInfo_t * ParameterInfo_get_Member_m18127 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C" String_t* ParameterInfo_get_Name_m18128 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C" int32_t ParameterInfo_get_Position_m18129 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t683* ParameterInfo_GetCustomAttributes_m18130 (ParameterInfo_t1384 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern "C" bool ParameterInfo_IsDefined_m18131 (ParameterInfo_t1384 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern "C" ObjectU5BU5D_t683* ParameterInfo_GetPseudoCustomAttributes_m18132 (ParameterInfo_t1384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
