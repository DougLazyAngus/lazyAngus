#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.DerivedType
struct DerivedType_t5066;
// System.Reflection.Assembly
struct Assembly_t794;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t5034;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1231;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t2978;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t2981;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2982;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2170;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1483;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1409;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1484;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Globalization.CultureInfo
struct CultureInfo_t793;
// System.String[]
struct StringU5BU5D_t75;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"

// System.Void System.Reflection.Emit.DerivedType::.ctor(System.Type)
extern "C" void DerivedType__ctor_m22231 (DerivedType_t5066 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DerivedType::create_unmanaged_type(System.Type)
extern "C" void DerivedType_create_unmanaged_type_m22232 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::FormatName(System.String)
// System.Type[] System.Reflection.Emit.DerivedType::GetInterfaces()
extern "C" TypeU5BU5D_t1231* DerivedType_GetInterfaces_m22233 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::GetElementType()
extern "C" Type_t * DerivedType_GetElementType_m22234 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.DerivedType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * DerivedType_GetEvent_m22235 (DerivedType_t5066 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.DerivedType::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * DerivedType_GetField_m22236 (DerivedType_t5066 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.DerivedType::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t2978* DerivedType_GetFields_m22237 (DerivedType_t5066 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DerivedType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * DerivedType_GetMethodImpl_m22238 (DerivedType_t5066 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.DerivedType::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2170* DerivedType_GetMethods_m22239 (DerivedType_t5066 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.DerivedType::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1483* DerivedType_GetProperties_m22240 (DerivedType_t5066 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.DerivedType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * DerivedType_GetPropertyImpl_m22241 (DerivedType_t5066 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.DerivedType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1409 * DerivedType_GetConstructorImpl_m22242 (DerivedType_t5066 * __this, int32_t ___bindingAttr, Binder_t2981 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.DerivedType::GetAttributeFlagsImpl()
extern "C" int32_t DerivedType_GetAttributeFlagsImpl_m22243 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::HasElementTypeImpl()
extern "C" bool DerivedType_HasElementTypeImpl_m22244 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsArrayImpl()
extern "C" bool DerivedType_IsArrayImpl_m22245 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsByRefImpl()
extern "C" bool DerivedType_IsByRefImpl_m22246 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPointerImpl()
extern "C" bool DerivedType_IsPointerImpl_m22247 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPrimitiveImpl()
extern "C" bool DerivedType_IsPrimitiveImpl_m22248 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.DerivedType::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1484* DerivedType_GetConstructors_m22249 (DerivedType_t5066 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DerivedType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * DerivedType_InvokeMember_m22250 (DerivedType_t5066 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2981 * ___binder, Object_t * ___target, ObjectU5BU5D_t707* ___args, ParameterModifierU5BU5D_t2982* ___modifiers, CultureInfo_t793 * ___culture, StringU5BU5D_t75* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsInstanceOfType(System.Object)
extern "C" bool DerivedType_IsInstanceOfType_m22251 (DerivedType_t5066 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsAssignableFrom(System.Type)
extern "C" bool DerivedType_IsAssignableFrom_m22252 (DerivedType_t5066 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::get_ContainsGenericParameters()
extern "C" bool DerivedType_get_ContainsGenericParameters_m22253 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeGenericType(System.Type[])
extern "C" Type_t * DerivedType_MakeGenericType_m22254 (DerivedType_t5066 * __this, TypeU5BU5D_t1231* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeByRefType()
extern "C" Type_t * DerivedType_MakeByRefType_m22255 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::ToString()
extern "C" String_t* DerivedType_ToString_m22256 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.DerivedType::get_Assembly()
extern "C" Assembly_t794 * DerivedType_get_Assembly_m22257 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_AssemblyQualifiedName()
extern "C" String_t* DerivedType_get_AssemblyQualifiedName_m22258 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_FullName()
extern "C" String_t* DerivedType_get_FullName_m22259 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Name()
extern "C" String_t* DerivedType_get_Name_m22260 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DerivedType::get_Module()
extern "C" Module_t5034 * DerivedType_get_Module_m22261 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Namespace()
extern "C" String_t* DerivedType_get_Namespace_m22262 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.DerivedType::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4740  DerivedType_get_TypeHandle_m22263 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::get_UnderlyingSystemType()
extern "C" Type_t * DerivedType_get_UnderlyingSystemType_m22264 (DerivedType_t5066 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsDefined(System.Type,System.Boolean)
extern "C" bool DerivedType_IsDefined_m22265 (DerivedType_t5066 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t707* DerivedType_GetCustomAttributes_m22266 (DerivedType_t5066 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t707* DerivedType_GetCustomAttributes_m22267 (DerivedType_t5066 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
