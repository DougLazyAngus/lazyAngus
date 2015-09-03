#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TypeDelegator
struct TypeDelegator_t5042;
// System.Reflection.Assembly
struct Assembly_t783;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t5023;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1398;
// System.Reflection.Binder
struct Binder_t2970;
// System.Type[]
struct TypeU5BU5D_t1220;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2971;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1473;
// System.Object[]
struct ObjectU5BU5D_t696;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t2967;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2159;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1472;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t782;
// System.String[]
struct StringU5BU5D_t75;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.TypeDelegator::.ctor()
extern "C" void TypeDelegator__ctor_m22086 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.TypeDelegator::get_Assembly()
extern "C" Assembly_t783 * TypeDelegator_get_Assembly_m22087 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_AssemblyQualifiedName()
extern "C" String_t* TypeDelegator_get_AssemblyQualifiedName_m22088 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_BaseType()
extern "C" Type_t * TypeDelegator_get_BaseType_m22089 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_FullName()
extern "C" String_t* TypeDelegator_get_FullName_m22090 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.TypeDelegator::get_Module()
extern "C" Module_t5023 * TypeDelegator_get_Module_m22091 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Name()
extern "C" String_t* TypeDelegator_get_Name_m22092 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Namespace()
extern "C" String_t* TypeDelegator_get_Namespace_m22093 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.TypeDelegator::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4729  TypeDelegator_get_TypeHandle_m22094 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_UnderlyingSystemType()
extern "C" Type_t * TypeDelegator_get_UnderlyingSystemType_m22095 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.TypeDelegator::GetAttributeFlagsImpl()
extern "C" int32_t TypeDelegator_GetAttributeFlagsImpl_m22096 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.TypeDelegator::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1398 * TypeDelegator_GetConstructorImpl_m22097 (TypeDelegator_t5042 * __this, int32_t ___bindingAttr, Binder_t2970 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1220* ___types, ParameterModifierU5BU5D_t2971* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.TypeDelegator::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1473* TypeDelegator_GetConstructors_m22098 (TypeDelegator_t5042 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t696* TypeDelegator_GetCustomAttributes_m22099 (TypeDelegator_t5042 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t696* TypeDelegator_GetCustomAttributes_m22100 (TypeDelegator_t5042 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::GetElementType()
extern "C" Type_t * TypeDelegator_GetElementType_m22101 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.TypeDelegator::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeDelegator_GetEvent_m22102 (TypeDelegator_t5042 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.TypeDelegator::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeDelegator_GetField_m22103 (TypeDelegator_t5042 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.TypeDelegator::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t2967* TypeDelegator_GetFields_m22104 (TypeDelegator_t5042 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.TypeDelegator::GetInterfaces()
extern "C" TypeU5BU5D_t1220* TypeDelegator_GetInterfaces_m22105 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.TypeDelegator::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeDelegator_GetMethodImpl_m22106 (TypeDelegator_t5042 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2970 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1220* ___types, ParameterModifierU5BU5D_t2971* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.TypeDelegator::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2159* TypeDelegator_GetMethods_m22107 (TypeDelegator_t5042 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.TypeDelegator::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1472* TypeDelegator_GetProperties_m22108 (TypeDelegator_t5042 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.TypeDelegator::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeDelegator_GetPropertyImpl_m22109 (TypeDelegator_t5042 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2970 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1220* ___types, ParameterModifierU5BU5D_t2971* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::HasElementTypeImpl()
extern "C" bool TypeDelegator_HasElementTypeImpl_m22110 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.TypeDelegator::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeDelegator_InvokeMember_m22111 (TypeDelegator_t5042 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2970 * ___binder, Object_t * ___target, ObjectU5BU5D_t696* ___args, ParameterModifierU5BU5D_t2971* ___modifiers, CultureInfo_t782 * ___culture, StringU5BU5D_t75* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsArrayImpl()
extern "C" bool TypeDelegator_IsArrayImpl_m22112 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsByRefImpl()
extern "C" bool TypeDelegator_IsByRefImpl_m22113 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeDelegator_IsDefined_m22114 (TypeDelegator_t5042 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPointerImpl()
extern "C" bool TypeDelegator_IsPointerImpl_m22115 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPrimitiveImpl()
extern "C" bool TypeDelegator_IsPrimitiveImpl_m22116 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsValueTypeImpl()
extern "C" bool TypeDelegator_IsValueTypeImpl_m22117 (TypeDelegator_t5042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
