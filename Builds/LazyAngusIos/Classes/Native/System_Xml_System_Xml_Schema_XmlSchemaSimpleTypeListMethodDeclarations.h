#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeList
struct XmlSchemaSimpleTypeList_t3688;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3419;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3637;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3443;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::.ctor()
extern "C" void XmlSchemaSimpleTypeList__ctor_m14532 (XmlSchemaSimpleTypeList_t3688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemTypeName()
extern "C" XmlQualifiedName_t3419 * XmlSchemaSimpleTypeList_get_ItemTypeName_m14533 (XmlSchemaSimpleTypeList_t3688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemTypeName(System.Xml.XmlQualifiedName)
extern "C" void XmlSchemaSimpleTypeList_set_ItemTypeName_m14534 (XmlSchemaSimpleTypeList_t3688 * __this, XmlQualifiedName_t3419 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeList::get_ItemType()
extern "C" XmlSchemaSimpleType_t3637 * XmlSchemaSimpleTypeList_get_ItemType_m14535 (XmlSchemaSimpleTypeList_t3688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::set_ItemType(System.Xml.Schema.XmlSchemaSimpleType)
extern "C" void XmlSchemaSimpleTypeList_set_ItemType_m14536 (XmlSchemaSimpleTypeList_t3688 * __this, XmlSchemaSimpleType_t3637 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeList::get_ValidatedListItemType()
extern "C" Object_t * XmlSchemaSimpleTypeList_get_ValidatedListItemType_m14537 (XmlSchemaSimpleTypeList_t3688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeList::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleTypeList_SetParent_m14538 (XmlSchemaSimpleTypeList_t3688 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeList_Compile_m14539 (XmlSchemaSimpleTypeList_t3688 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeList::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeList_Validate_m14540 (XmlSchemaSimpleTypeList_t3688 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeList System.Xml.Schema.XmlSchemaSimpleTypeList::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleTypeList_t3688 * XmlSchemaSimpleTypeList_Read_m14541 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
