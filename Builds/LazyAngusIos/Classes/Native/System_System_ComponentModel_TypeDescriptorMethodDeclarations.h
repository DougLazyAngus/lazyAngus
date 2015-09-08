#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.TypeDescriptor
struct TypeDescriptor_t3379;
// System.Collections.ArrayList
struct ArrayList_t713;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4223;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3328;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4251;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t4248;
// System.EventArgs
struct EventArgs_t1315;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t4264;
// System.ComponentModel.IComponent
struct IComponent_t4263;
// System.ComponentModel.TypeInfo
struct TypeInfo_t4265;
// System.String
struct String_t;

// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C" void TypeDescriptor__cctor_m15984 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C" AttributeCollection_t4223 * TypeDescriptor_GetAttributes_m15985 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C" ArrayList_t713 * TypeDescriptor_get_DefaultConverters_m15986 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C" TypeConverter_t3328 * TypeDescriptor_GetConverter_m12102 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C" Type_t * TypeDescriptor_FindDefaultConverterType_m15987 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t4251 * TypeDescriptor_GetProperties_m15988 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t4248* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C" PropertyDescriptorCollection_t4251 * TypeDescriptor_GetProperties_m15989 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t4248* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C" void TypeDescriptor_OnComponentDisposed_m15990 (Object_t * __this /* static, unused */, Object_t * ___sender, EventArgs_t1315 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C" ComponentInfo_t4264 * TypeDescriptor_GetComponentInfo_m15991 (Object_t * __this /* static, unused */, Object_t * ___com, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C" TypeInfo_t4265 * TypeDescriptor_GetTypeInfo_m15992 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C" Type_t * TypeDescriptor_GetTypeFromName_m15993 (Object_t * __this /* static, unused */, Object_t * ___component, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
