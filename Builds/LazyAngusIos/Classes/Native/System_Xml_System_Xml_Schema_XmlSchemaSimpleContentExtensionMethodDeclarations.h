#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct XmlSchemaSimpleContentExtension_t3681;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3630;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;

// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::.ctor()
extern "C" void XmlSchemaSimpleContentExtension__ctor_m14479 (XmlSchemaSimpleContentExtension_t3681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::get_BaseTypeName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaSimpleContentExtension_get_BaseTypeName_m14480 (XmlSchemaSimpleContentExtension_t3681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::get_Attributes()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchemaSimpleContentExtension_get_Attributes_m14481 (XmlSchemaSimpleContentExtension_t3681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::get_AnyAttribute()
extern "C" XmlSchemaAnyAttribute_t3630 * XmlSchemaSimpleContentExtension_get_AnyAttribute_m14482 (XmlSchemaSimpleContentExtension_t3681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C" void XmlSchemaSimpleContentExtension_set_AnyAttribute_m14483 (XmlSchemaSimpleContentExtension_t3681 * __this, XmlSchemaAnyAttribute_t3630 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentExtension::get_IsExtension()
extern "C" bool XmlSchemaSimpleContentExtension_get_IsExtension_m14484 (XmlSchemaSimpleContentExtension_t3681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleContentExtension_SetParent_m14485 (XmlSchemaSimpleContentExtension_t3681 * __this, XmlSchemaObject_t3439 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContentExtension_Compile_m14486 (XmlSchemaSimpleContentExtension_t3681 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::GetBaseTypeName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaSimpleContentExtension_GetBaseTypeName_m14487 (XmlSchemaSimpleContentExtension_t3681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContentExtension_Validate_m14488 (XmlSchemaSimpleContentExtension_t3681 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentExtension System.Xml.Schema.XmlSchemaSimpleContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleContentExtension_t3681 * XmlSchemaSimpleContentExtension_Read_m14489 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
