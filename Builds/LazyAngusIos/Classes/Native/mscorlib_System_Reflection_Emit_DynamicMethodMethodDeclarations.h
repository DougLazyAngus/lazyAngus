#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.DynamicMethod
struct DynamicMethod_t4557;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t5027;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1224;
// System.Delegate
struct Delegate_t742;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t700;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t4556;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1479;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t2974;
// System.Globalization.CultureInfo
struct CultureInfo_t786;
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type,System.Boolean)
extern "C" void DynamicMethod__ctor_m18168 (DynamicMethod_t4557 * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t1224* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Boolean)
extern "C" void DynamicMethod__ctor_m22217 (DynamicMethod_t4557 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1224* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Reflection.Module,System.Boolean,System.Boolean)
extern "C" void DynamicMethod__ctor_m22218 (DynamicMethod_t4557 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1224* ___parameterTypes, Type_t * ___owner, Module_t5027 * ___m, bool ___skipVisibility, bool ___anonHosted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_create_dynamic_method_m22219 (DynamicMethod_t4557 * __this, DynamicMethod_t4557 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_destroy_dynamic_method_m22220 (DynamicMethod_t4557 * __this, DynamicMethod_t4557 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::CreateDynMethod()
extern "C" void DynamicMethod_CreateDynMethod_m22221 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DynamicMethod::Finalize()
extern "C" void DynamicMethod_Finalize_m22222 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Reflection.Emit.DynamicMethod::CreateDelegate(System.Type)
extern "C" Delegate_t742 * DynamicMethod_CreateDelegate_m18167 (DynamicMethod_t4557 * __this, Type_t * ___delegateType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
extern "C" MethodInfo_t * DynamicMethod_GetBaseDefinition_m22223 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t700* DynamicMethod_GetCustomAttributes_m22224 (DynamicMethod_t4557 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t700* DynamicMethod_GetCustomAttributes_m22225 (DynamicMethod_t4557 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator()
extern "C" ILGenerator_t4556 * DynamicMethod_GetILGenerator_m18169 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator(System.Int32)
extern "C" ILGenerator_t4556 * DynamicMethod_GetILGenerator_m22226 (DynamicMethod_t4557 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags()
extern "C" int32_t DynamicMethod_GetMethodImplementationFlags_m22227 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t1479* DynamicMethod_GetParameters_m22228 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * DynamicMethod_Invoke_m22229 (DynamicMethod_t4557 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2974 * ___binder, ObjectU5BU5D_t700* ___parameters, CultureInfo_t786 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool DynamicMethod_IsDefined_m22230 (DynamicMethod_t4557 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::ToString()
extern "C" String_t* DynamicMethod_ToString_m22231 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
extern "C" int32_t DynamicMethod_get_Attributes_m22232 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::get_CallingConvention()
extern "C" int32_t DynamicMethod_get_CallingConvention_m22233 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
extern "C" Type_t * DynamicMethod_get_DeclaringType_m22234 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4911  DynamicMethod_get_MethodHandle_m22235 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module()
extern "C" Module_t5027 * DynamicMethod_get_Module_m22236 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
extern "C" String_t* DynamicMethod_get_Name_m22237 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
extern "C" Type_t * DynamicMethod_get_ReflectedType_m22238 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType()
extern "C" Type_t * DynamicMethod_get_ReturnType_m22239 (DynamicMethod_t4557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.DynamicMethod::AddRef(System.Object)
extern "C" int32_t DynamicMethod_AddRef_m22240 (DynamicMethod_t4557 * __this, Object_t * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
