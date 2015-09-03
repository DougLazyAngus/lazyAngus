#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.TypeData
struct TypeData_t3704;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t3678;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.InvalidOperationException
struct InvalidOperationException_t1446;
// System.Xml.Serialization.SchemaTypes
#include "System_Xml_System_Xml_Serialization_SchemaTypes.h"

// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean)
extern "C" void TypeData__ctor_m14681 (TypeData_t3704 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.ctor(System.Type,System.String,System.Boolean,System.Xml.Serialization.TypeData,System.Xml.Schema.XmlSchemaPatternFacet)
extern "C" void TypeData__ctor_m14682 (TypeData_t3704 * __this, Type_t * ___type, String_t* ___elementName, bool ___isPrimitive, TypeData_t3704 * ___mappedType, XmlSchemaPatternFacet_t3678 * ___facet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::.cctor()
extern "C" void TypeData__cctor_m14683 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.TypeData::get_XmlType()
extern "C" String_t* TypeData_get_XmlType_m14684 (TypeData_t3704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_Type()
extern "C" Type_t * TypeData_get_Type_m14685 (TypeData_t3704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::get_SchemaType()
extern "C" int32_t TypeData_get_SchemaType_m14686 (TypeData_t3704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.TypeData::get_IsListType()
extern "C" bool TypeData_get_IsListType_m14687 (TypeData_t3704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.TypeData::set_IsNullable(System.Boolean)
extern "C" void TypeData_set_IsNullable_m14688 (TypeData_t3704 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::get_ListItemTypeData()
extern "C" TypeData_t3704 * TypeData_get_ListItemTypeData_m14689 (TypeData_t3704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::get_ListItemType()
extern "C" Type_t * TypeData_get_ListItemType_m14690 (TypeData_t3704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Xml.Serialization.TypeData::GetIndexerProperty(System.Type)
extern "C" PropertyInfo_t * TypeData_GetIndexerProperty_m14691 (Object_t * __this /* static, unused */, Type_t * ___collectionType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.InvalidOperationException System.Xml.Serialization.TypeData::CreateMissingAddMethodException(System.Type,System.String,System.Type)
extern "C" InvalidOperationException_t1446 * TypeData_CreateMissingAddMethodException_m14692 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___inheritFrom, Type_t * ___argumentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Xml.Serialization.TypeData::GetGenericListItemType(System.Type)
extern "C" Type_t * TypeData_GetGenericListItemType_m14693 (TypeData_t3704 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
