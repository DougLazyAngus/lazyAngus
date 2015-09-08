#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t5058;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t5055;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t5027;
// System.Type[]
struct TypeU5BU5D_t1224;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t5057;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1479;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2974;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Globalization.CultureInfo
struct CultureInfo_t786;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t4556;
// System.Exception
struct Exception_t57;
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodToken.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" void ConstructorBuilder__ctor_m22148 (ConstructorBuilder_t5058 * __this, TypeBuilder_t5055 * ___tb, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1224* ___parameterTypes, TypeU5BU5DU5BU5D_t5057* ___paramModReq, TypeU5BU5DU5BU5D_t5057* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m22149 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t5055 * ConstructorBuilder_get_TypeBuilder_m22150 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.ConstructorBuilder::GetMethodImplementationFlags()
extern "C" int32_t ConstructorBuilder_GetMethodImplementationFlags_m22151 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t1479* ConstructorBuilder_GetParameters_m22152 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C" ParameterInfoU5BU5D_t1479* ConstructorBuilder_GetParametersInternal_m22153 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C" int32_t ConstructorBuilder_GetParameterCount_m22154 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m22155 (ConstructorBuilder_t5058 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2974 * ___binder, ObjectU5BU5D_t700* ___parameters, CultureInfo_t786 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m22156 (ConstructorBuilder_t5058 * __this, int32_t ___invokeAttr, Binder_t2974 * ___binder, ObjectU5BU5D_t700* ___parameters, CultureInfo_t786 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4911  ConstructorBuilder_get_MethodHandle_m22157 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m22158 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m22159 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m22160 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C" String_t* ConstructorBuilder_get_Name_m22161 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m22162 (ConstructorBuilder_t5058 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t700* ConstructorBuilder_GetCustomAttributes_m22163 (ConstructorBuilder_t5058 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t700* ConstructorBuilder_GetCustomAttributes_m22164 (ConstructorBuilder_t5058 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C" ILGenerator_t4556 * ConstructorBuilder_GetILGenerator_m22165 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C" ILGenerator_t4556 * ConstructorBuilder_GetILGenerator_m22166 (ConstructorBuilder_t5058 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C" MethodToken_t5076  ConstructorBuilder_GetToken_m22167 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t5027 * ConstructorBuilder_get_Module_m22168 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C" String_t* ConstructorBuilder_ToString_m22169 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ConstructorBuilder_get_next_table_index_m22170 (ConstructorBuilder_t5058 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m22171 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t57 * ConstructorBuilder_not_supported_m22172 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t57 * ConstructorBuilder_not_created_m22173 (ConstructorBuilder_t5058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
