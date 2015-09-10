#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t794;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t5034;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
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
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Globalization.CultureInfo
struct CultureInfo_t793;
// System.String[]
struct StringU5BU5D_t75;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Type::.ctor()
extern "C" void Type__ctor_m19242 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
extern "C" void Type__cctor_m19243 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterName_impl_m19244 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterNameIgnoreCase_impl_m19245 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
extern "C" bool Type_FilterAttribute_impl_m19246 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Type::get_Assembly()
// System.String System.Type::get_AssemblyQualifiedName()
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C" int32_t Type_get_Attributes_m19247 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_BaseType()
// System.Type System.Type::get_DeclaringType()
extern "C" Type_t * Type_get_DeclaringType_m19248 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::get_FullName()
// System.Boolean System.Type::get_HasElementType()
extern "C" bool Type_get_HasElementType_m19249 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C" bool Type_get_IsAbstract_m19250 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C" bool Type_get_IsArray_m19251 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
extern "C" bool Type_get_IsByRef_m19252 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C" bool Type_get_IsClass_m19253 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
extern "C" bool Type_get_IsContextful_m19254 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C" bool Type_get_IsEnum_m19255 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
extern "C" bool Type_get_IsExplicitLayout_m19256 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C" bool Type_get_IsInterface_m19257 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
extern "C" bool Type_get_IsMarshalByRef_m19258 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
extern "C" bool Type_get_IsPointer_m19259 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C" bool Type_get_IsPrimitive_m19260 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C" bool Type_get_IsSealed_m19261 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
extern "C" bool Type_get_IsSerializable_m19262 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C" bool Type_get_IsValueType_m19263 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
extern "C" int32_t Type_get_MemberType_m19264 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Type::get_Module()
// System.String System.Type::get_Namespace()
// System.Type System.Type::get_ReflectedType()
extern "C" Type_t * Type_get_ReflectedType_m19265 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4740  Type_get_TypeHandle_m19266 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_UnderlyingSystemType()
// System.Boolean System.Type::Equals(System.Object)
extern "C" bool Type_Equals_m19267 (Type_t * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C" bool Type_Equals_m19268 (Type_t * __this, Type_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C" bool Type_EqualsInternal_m19269 (Type_t * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C" Type_t * Type_internal_from_handle_m19270 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Type_internal_from_name_m19271 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C" Type_t * Type_GetType_m7690 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" Type_t * Type_GetType_m10416 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C" int32_t Type_GetTypeCodeInternal_m19272 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C" int32_t Type_GetTypeCode_m12160 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" Type_t * Type_GetTypeFromHandle_m4274 (Object_t * __this /* static, unused */, RuntimeTypeHandle_t4740  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
extern "C" RuntimeTypeHandle_t4740  Type_GetTypeHandle_m19273 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C" bool Type_type_is_subtype_of_m19274 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C" bool Type_type_is_assignable_from_m19275 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType()
extern "C" Type_t * Type_GetType_m19276 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
extern "C" bool Type_IsSubclassOf_m19277 (Type_t * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetInterfaces()
// System.Boolean System.Type::IsAssignableFrom(System.Type)
extern "C" bool Type_IsAssignableFrom_m19278 (Type_t * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
extern "C" bool Type_IsInstanceOfType_m19279 (Type_t * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Type::GetArrayRank()
extern "C" int32_t Type_GetArrayRank_m19280 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetElementType()
// System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C" FieldInfo_t * Type_GetField_m19281 (Type_t * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags)
// System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags)
// System.Int32 System.Type::GetHashCode()
extern "C" int32_t Type_GetHashCode_m19282 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C" MethodInfo_t * Type_GetMethod_m19283 (Type_t * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" MethodInfo_t * Type_GetMethod_m19284 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
extern "C" MethodInfo_t * Type_GetMethod_m19285 (Type_t * __this, String_t* ___name, TypeU5BU5D_t1231* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethod_m19286 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethod_m19287 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.MethodInfo System.Type::GetMethodImplInternal(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * Type_GetMethodImplInternal_m19288 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Type::GetMethods()
extern "C" MethodInfoU5BU5D_t2170* Type_GetMethods_m19289 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
extern "C" PropertyInfoU5BU5D_t1483* Type_GetProperties_m19290 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags)
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C" PropertyInfo_t * Type_GetProperty_m7880 (Type_t * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C" PropertyInfo_t * Type_GetProperty_m19291 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
extern "C" PropertyInfo_t * Type_GetProperty_m19292 (Type_t * __this, String_t* ___name, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
extern "C" PropertyInfo_t * Type_GetProperty_m19293 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t1231* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * Type_GetProperty_m19294 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Type::GetPropertyImplInternal(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * Type_GetPropertyImplInternal_m19295 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.TypeAttributes System.Type::GetAttributeFlagsImpl()
// System.Boolean System.Type::HasElementTypeImpl()
// System.Boolean System.Type::IsArrayImpl()
// System.Boolean System.Type::IsByRefImpl()
// System.Boolean System.Type::IsPointerImpl()
// System.Boolean System.Type::IsPrimitiveImpl()
// System.Boolean System.Type::IsArrayImpl(System.Type)
extern "C" bool Type_IsArrayImpl_m19296 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
extern "C" bool Type_IsValueTypeImpl_m19297 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
extern "C" bool Type_IsContextfulImpl_m19298 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
extern "C" bool Type_IsMarshalByRefImpl_m19299 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C" ConstructorInfo_t1409 * Type_GetConstructor_m19300 (Type_t * __this, TypeU5BU5D_t1231* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1409 * Type_GetConstructor_m19301 (Type_t * __this, int32_t ___bindingAttr, Binder_t2981 * ___binder, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1409 * Type_GetConstructor_m19302 (Type_t * __this, int32_t ___bindingAttr, Binder_t2981 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
extern "C" ConstructorInfoU5BU5D_t1484* Type_GetConstructors_m19303 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags)
// System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
// System.String System.Type::ToString()
extern "C" String_t* Type_ToString_m19304 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
extern "C" bool Type_get_IsSystemType_m19305 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
extern "C" TypeU5BU5D_t1231* Type_GetGenericArguments_m19306 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
extern "C" bool Type_get_ContainsGenericParameters_m19307 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
extern "C" bool Type_get_IsGenericTypeDefinition_m19308 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
extern "C" Type_t * Type_GetGenericTypeDefinition_impl_m19309 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
extern "C" Type_t * Type_GetGenericTypeDefinition_m19310 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
extern "C" bool Type_get_IsGenericType_m19311 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C" Type_t * Type_MakeGenericType_m19312 (Object_t * __this /* static, unused */, Type_t * ___gt, TypeU5BU5D_t1231* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
extern "C" Type_t * Type_MakeGenericType_m19313 (Type_t * __this, TypeU5BU5D_t1231* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
extern "C" bool Type_get_IsGenericParameter_m19314 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
extern "C" bool Type_get_IsNested_m19315 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::make_byref_type()
extern "C" Type_t * Type_make_byref_type_m19316 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeByRefType()
extern "C" Type_t * Type_MakeByRefType_m19317 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
extern "C" ObjectU5BU5D_t707* Type_GetPseudoCustomAttributes_m19318 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsUserType()
extern "C" bool Type_get_IsUserType_m19319 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
