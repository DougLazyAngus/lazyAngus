#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeList
struct XmlSchemaSimpleTypeList_t3684;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3633;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::.ctor()
extern "C" void XmlSchemaSimpleTypeList__ctor_m14519 (XmlSchemaSimpleTypeList_t3684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemTypeName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaSimpleTypeList_get_ItemTypeName_m14520 (XmlSchemaSimpleTypeList_t3684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemTypeName(System.Xml.XmlQualifiedName)
extern "C" void XmlSchemaSimpleTypeList_set_ItemTypeName_m14521 (XmlSchemaSimpleTypeList_t3684 * __this, XmlQualifiedName_t3415 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemType()
extern "C" XmlSchemaSimpleType_t3633 * XmlSchemaSimpleTypeList_get_ItemType_m14522 (XmlSchemaSimpleTypeList_t3684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemType(System.Xml.Schema.XmlSchemaSimpleType)
extern "C" void XmlSchemaSimpleTypeList_set_ItemType_m14523 (XmlSchemaSimpleTypeList_t3684 * __this, XmlSchemaSimpleType_t3633 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeList::get_ValidatedListItemType()
extern "C" Object_t * XmlSchemaSimpleTypeList_get_ValidatedListItemType_m14524 (XmlSchemaSimpleTypeList_t3684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleTypeList_SetParent_m14525 (XmlSchemaSimpleTypeList_t3684 * __this, XmlSchemaObject_t3439 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeList_Compile_m14526 (XmlSchemaSimpleTypeList_t3684 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeList_Validate_m14527 (XmlSchemaSimpleTypeList_t3684 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeList System.Xml.Schema.XmlSchemaSimpleTypeList::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleTypeList_t3684 * XmlSchemaSimpleTypeList_Read_m14528 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
