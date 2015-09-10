#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t5062;
// System.Reflection.Assembly
struct Assembly_t794;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t5034;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t5059;
// System.Type[]
struct TypeU5BU5D_t1231;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1409;
// System.Reflection.Binder
struct Binder_t2981;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2982;
// System.Object[]
struct ObjectU5BU5D_t707;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t5065;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t5064;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t5072;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1484;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t2978;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2170;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1483;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t793;
// System.String[]
struct StringU5BU5D_t75;
// System.Exception
struct Exception_t57;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.Emit.PackingSize
#include "mscorlib_System_Reflection_Emit_PackingSize.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"

// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.Reflection.TypeAttributes,System.Int32)
extern "C" void TypeBuilder__ctor_m22534 (TypeBuilder_t5062 * __this, ModuleBuilder_t5059 * ___mb, int32_t ___attr, int32_t ___table_idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32,System.Type)
extern "C" void TypeBuilder__ctor_m22535 (TypeBuilder_t5062 * __this, ModuleBuilder_t5059 * ___mb, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t1231* ___interfaces, int32_t ___packing_size, int32_t ___type_size, Type_t * ___nesting_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m22536 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C" void TypeBuilder_setup_internal_class_m22537 (TypeBuilder_t5062 * __this, TypeBuilder_t5062 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t794 * TypeBuilder_get_Assembly_m22538 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m22539 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m22540 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m22541 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m22542 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::GetFullName()
extern "C" String_t* TypeBuilder_GetFullName_m22543 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m22544 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t5034 * TypeBuilder_get_Module_m22545 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m22546 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m22547 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m22548 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1409 * TypeBuilder_GetConstructorImpl_m22549 (TypeBuilder_t5062 * __this, int32_t ___bindingAttr, Binder_t2981 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m22550 (TypeBuilder_t5062 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t707* TypeBuilder_GetCustomAttributes_m22551 (TypeBuilder_t5062 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t707* TypeBuilder_GetCustomAttributes_m22552 (TypeBuilder_t5062 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C" ConstructorBuilder_t5065 * TypeBuilder_DefineConstructor_m22553 (TypeBuilder_t5062 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1231* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" ConstructorBuilder_t5065 * TypeBuilder_DefineConstructor_m22554 (TypeBuilder_t5062 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1231* ___parameterTypes, TypeU5BU5DU5BU5D_t5064* ___requiredCustomModifiers, TypeU5BU5DU5BU5D_t5064* ___optionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::append_method(System.Reflection.Emit.MethodBuilder)
extern "C" void TypeBuilder_append_method_m22555 (TypeBuilder_t5062 * __this, MethodBuilder_t5072 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Type,System.Type[])
extern "C" MethodBuilder_t5072 * TypeBuilder_DefineMethod_m22556 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___attributes, Type_t * ___returnType, TypeU5BU5D_t1231* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[])
extern "C" MethodBuilder_t5072 * TypeBuilder_DefineMethod_m22557 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1231* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C" MethodBuilder_t5072 * TypeBuilder_DefineMethod_m22558 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1231* ___returnTypeRequiredCustomModifiers, TypeU5BU5D_t1231* ___returnTypeOptionalCustomModifiers, TypeU5BU5D_t1231* ___parameterTypes, TypeU5BU5DU5BU5D_t5064* ___parameterTypeRequiredCustomModifiers, TypeU5BU5DU5BU5D_t5064* ___parameterTypeOptionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::DefineMethodOverride(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C" void TypeBuilder_DefineMethodOverride_m22559 (TypeBuilder_t5062 * __this, MethodInfo_t * ___methodInfoBody, MethodInfo_t * ___methodInfoDeclaration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1484* TypeBuilder_GetConstructors_m22560 (TypeBuilder_t5062 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1484* TypeBuilder_GetConstructorsInternal_m22561 (TypeBuilder_t5062 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m22562 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m22563 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m22564 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t2978* TypeBuilder_GetFields_m22565 (TypeBuilder_t5062 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t1231* TypeBuilder_GetInterfaces_m22566 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t2170* TypeBuilder_GetMethodsByName_m22567 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2170* TypeBuilder_GetMethods_m22568 (TypeBuilder_t5062 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m22569 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1483* TypeBuilder_GetProperties_m22570 (TypeBuilder_t5062 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m22571 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2981 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1231* ___types, ParameterModifierU5BU5D_t2982* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m22572 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m22573 (TypeBuilder_t5062 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2981 * ___binder, Object_t * ___target, ObjectU5BU5D_t707* ___args, ParameterModifierU5BU5D_t2982* ___modifiers, CultureInfo_t793 * ___culture, StringU5BU5D_t75* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m22574 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m22575 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m22576 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m22577 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C" bool TypeBuilder_IsValueTypeImpl_m22578 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeByRefType()
extern "C" Type_t * TypeBuilder_MakeByRefType_m22579 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m22580 (TypeBuilder_t5062 * __this, TypeU5BU5D_t1231* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4740  TypeBuilder_get_TypeHandle_m22581 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t TypeBuilder_get_next_table_index_m22582 (TypeBuilder_t5062 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m22583 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m22584 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t57 * TypeBuilder_not_supported_m22585 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C" void TypeBuilder_check_not_created_m22586 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m22587 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_name(System.String,System.String)
extern "C" void TypeBuilder_check_name_m22588 (TypeBuilder_t5062 * __this, String_t* ___argName, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m22589 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m22590 (TypeBuilder_t5062 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m22591 (TypeBuilder_t5062 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C" bool TypeBuilder_IsAssignableTo_m22592 (TypeBuilder_t5062 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t1231* TypeBuilder_GetGenericArguments_m22593 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m22594 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m22595 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m22596 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m22597 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m22598 (TypeBuilder_t5062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
