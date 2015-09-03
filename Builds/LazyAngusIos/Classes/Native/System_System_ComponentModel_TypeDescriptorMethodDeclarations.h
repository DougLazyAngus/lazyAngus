#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.TypeDescriptor
struct TypeDescriptor_t3378;
// System.Collections.ArrayList
struct ArrayList_t712;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4222;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3327;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4250;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t4247;
// System.EventArgs
struct EventArgs_t1314;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t4263;
// System.ComponentModel.IComponent
struct IComponent_t4262;
// System.ComponentModel.TypeInfo
struct TypeInfo_t4264;
// System.String
struct String_t;

// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C" void TypeDescriptor__cctor_m15971 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C" AttributeCollection_t4222 * TypeDescriptor_GetAttributes_m15972 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C" ArrayList_t712 * TypeDescriptor_get_DefaultConverters_m15973 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C" TypeConverter_t3327 * TypeDescriptor_GetConverter_m12089 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C" Type_t * TypeDescriptor_FindDefaultConverterType_m15974 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t4250 * TypeDescriptor_GetProperties_m15975 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t4247* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C" PropertyDescriptorCollection_t4250 * TypeDescriptor_GetProperties_m15976 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t4247* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C" void TypeDescriptor_OnComponentDisposed_m15977 (Object_t * __this /* static, unused */, Object_t * ___sender, EventArgs_t1314 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C" ComponentInfo_t4263 * TypeDescriptor_GetComponentInfo_m15978 (Object_t * __this /* static, unused */, Object_t * ___com, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C" TypeInfo_t4264 * TypeDescriptor_GetTypeInfo_m15979 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C" Type_t * TypeDescriptor_GetTypeFromName_m15980 (Object_t * __this /* static, unused */, Object_t * ___component, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
