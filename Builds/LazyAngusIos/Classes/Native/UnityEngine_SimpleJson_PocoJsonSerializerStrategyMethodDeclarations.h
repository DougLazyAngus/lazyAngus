﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t2822;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t2829;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t2916;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t2917;
// System.Object
struct Object_t;
// System.Enum
struct Enum_t100;

// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern "C" void PocoJsonSerializerStrategy__ctor_m9832 (PocoJsonSerializerStrategy_t2822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern "C" void PocoJsonSerializerStrategy__cctor_m9833 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m9834 (PocoJsonSerializerStrategy_t2822 * __this, String_t* ___clrPropertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern "C" ConstructorDelegate_t2829 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m9835 (PocoJsonSerializerStrategy_t2822 * __this, Type_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m9836 (PocoJsonSerializerStrategy_t2822 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m9837 (PocoJsonSerializerStrategy_t2822 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9838 (PocoJsonSerializerStrategy_t2822 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m9839 (PocoJsonSerializerStrategy_t2822 * __this, Enum_t100 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9840 (PocoJsonSerializerStrategy_t2822 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9841 (PocoJsonSerializerStrategy_t2822 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
