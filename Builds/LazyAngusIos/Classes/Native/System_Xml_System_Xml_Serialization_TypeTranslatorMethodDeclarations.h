#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.TypeTranslator
struct TypeTranslator_t3716;
// System.Xml.Serialization.TypeData
struct TypeData_t3715;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Xml.Serialization.TypeTranslator::.cctor()
extern "C" void TypeTranslator__cctor_m14764 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type)
extern "C" TypeData_t3715 * TypeTranslator_GetTypeData_m14765 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetTypeData(System.Type,System.String)
extern "C" TypeData_t3715 * TypeTranslator_GetTypeData_m14766 (Object_t * __this /* static, unused */, Type_t * ___runtimeType, String_t* ___xmlDataType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String)
extern "C" TypeData_t3715 * TypeTranslator_GetPrimitiveTypeData_m14767 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeTranslator::GetPrimitiveTypeData(System.String,System.Boolean)
extern "C" TypeData_t3715 * TypeTranslator_GetPrimitiveTypeData_m14768 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___nullable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeTranslator::GetArrayName(System.String)
extern "C" String_t* TypeTranslator_GetArrayName_m14769 (Object_t * __this /* static, unused */, String_t* ___elemName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeTranslator::ParseArrayType(System.String,System.String&,System.String&,System.String&)
extern "C" void TypeTranslator_ParseArrayType_m14770 (Object_t * __this /* static, unused */, String_t* ___arrayType, String_t** ___type, String_t** ___ns, String_t** ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
