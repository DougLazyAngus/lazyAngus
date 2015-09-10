#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.TypeData
struct TypeData_t3715;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t3689;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.InvalidOperationException
struct InvalidOperationException_t1457;
// System.Xml.Serialization.SchemaTypes
#include "System_Xml_System_Xml_Serialization_SchemaTypes.h"

// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean)
extern "C" void TypeData__ctor_m14751 (TypeData_t3715 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean,System.Xml.Serialization.TypeData,System.Xml.Schema.XmlSchemaPatternFacet)
extern "C" void TypeData__ctor_m14752 (TypeData_t3715 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, TypeData_t3715 * ___mappedType, XmlSchemaPatternFacet_t3689 * ___facet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.cctor()
extern "C" void TypeData__cctor_m14753 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_XmlType()
extern "C" String_t* TypeData_get_XmlType_m14754 (TypeData_t3715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_Type()
extern "C" Type_t * TypeData_get_Type_m14755 (TypeData_t3715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::get_SchemaType()
extern "C" int32_t TypeData_get_SchemaType_m14756 (TypeData_t3715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsListType()
extern "C" bool TypeData_get_IsListType_m14757 (TypeData_t3715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::set_IsNullable(System.Boolean)
extern "C" void TypeData_set_IsNullable_m14758 (TypeData_t3715 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::get_ListItemTypeData()
extern "C" TypeData_t3715 * TypeData_get_ListItemTypeData_m14759 (TypeData_t3715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_ListItemType()
extern "C" Type_t * TypeData_get_ListItemType_m14760 (TypeData_t3715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Xml.Serialization.TypeData::GetIndexerProperty(System.Type)
extern "C" PropertyInfo_t * TypeData_GetIndexerProperty_m14761 (Object_t * __this /* static, unused */, Type_t * ___collectionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.InvalidOperationException System.Xml.Serialization.TypeData::CreateMissingAddMethodException(System.Type,System.String,System.Type)
extern "C" InvalidOperationException_t1457 * TypeData_CreateMissingAddMethodException_m14762 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___inheritFrom, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::GetGenericListItemType(System.Type)
extern "C" Type_t * TypeData_GetGenericListItemType_m14763 (TypeData_t3715 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
