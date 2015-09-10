#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t5072;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t5034;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t5062;
// System.Type[]
struct TypeU5BU5D_t1231;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t5064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1486;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2981;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Globalization.CultureInfo
struct CultureInfo_t793;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t4563;
// System.Exception
struct Exception_t57;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodToken.h"
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Emit.MethodBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C" void MethodBuilder__ctor_m22431 (MethodBuilder_t5072 * __this, TypeBuilder_t5062 * ___tb, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1231* ___returnModReq, TypeU5BU5D_t1231* ___returnModOpt, TypeU5BU5D_t1231* ___parameterTypes, TypeU5BU5DU5BU5D_t5064* ___paramModReq, TypeU5BU5DU5BU5D_t5064* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern "C" bool MethodBuilder_get_ContainsGenericParameters_m22432 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4918  MethodBuilder_get_MethodHandle_m22433 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C" Type_t * MethodBuilder_get_ReturnType_m22434 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C" Type_t * MethodBuilder_get_ReflectedType_m22435 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C" Type_t * MethodBuilder_get_DeclaringType_m22436 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C" String_t* MethodBuilder_get_Name_m22437 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C" int32_t MethodBuilder_get_Attributes_m22438 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C" int32_t MethodBuilder_get_CallingConvention_m22439 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodBuilder::GetToken()
extern "C" MethodToken_t5083  MethodBuilder_GetToken_m22440 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C" MethodInfo_t * MethodBuilder_GetBaseDefinition_m22441 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::GetMethodImplementationFlags()
extern "C" int32_t MethodBuilder_GetMethodImplementationFlags_m22442 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t1486* MethodBuilder_GetParameters_m22443 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetParameterCount()
extern "C" int32_t MethodBuilder_GetParameterCount_m22444 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MethodBuilder_Invoke_m22445 (MethodBuilder_t5072 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2981 * ___binder, ObjectU5BU5D_t707* ___parameters, CultureInfo_t793 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool MethodBuilder_IsDefined_m22446 (MethodBuilder_t5072 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t707* MethodBuilder_GetCustomAttributes_m22447 (MethodBuilder_t5072 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t707* MethodBuilder_GetCustomAttributes_m22448 (MethodBuilder_t5072 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator()
extern "C" ILGenerator_t4563 * MethodBuilder_GetILGenerator_m22449 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator(System.Int32)
extern "C" ILGenerator_t4563 * MethodBuilder_GetILGenerator_m22450 (MethodBuilder_t5072 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern "C" String_t* MethodBuilder_ToString_m22451 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C" bool MethodBuilder_Equals_m22452 (MethodBuilder_t5072 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C" int32_t MethodBuilder_GetHashCode_m22453 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t MethodBuilder_get_next_table_index_m22454 (MethodBuilder_t5072 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::set_override(System.Reflection.MethodInfo)
extern "C" void MethodBuilder_set_override_m22455 (MethodBuilder_t5072 * __this, MethodInfo_t * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C" Exception_t57 * MethodBuilder_NotSupported_m22456 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodBuilder_MakeGenericMethod_m22457 (MethodBuilder_t5072 * __this, TypeU5BU5D_t1231* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C" bool MethodBuilder_get_IsGenericMethodDefinition_m22458 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C" bool MethodBuilder_get_IsGenericMethod_m22459 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetGenericMethodDefinition()
extern "C" MethodInfo_t * MethodBuilder_GetGenericMethodDefinition_m22460 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t1231* MethodBuilder_GetGenericArguments_m22461 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C" Module_t5034 * MethodBuilder_get_Module_m22462 (MethodBuilder_t5072 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
