#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleContentExtension
struct XmlSchemaSimpleContentExtension_t3685;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3419;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3627;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3634;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3443;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;

// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::.ctor()
extern "C" void XmlSchemaSimpleContentExtension__ctor_m14492 (XmlSchemaSimpleContentExtension_t3685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::get_BaseTypeName()
extern "C" XmlQualifiedName_t3419 * XmlSchemaSimpleContentExtension_get_BaseTypeName_m14493 (XmlSchemaSimpleContentExtension_t3685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentExtension::get_Attributes()
extern "C" XmlSchemaObjectCollection_t3627 * XmlSchemaSimpleContentExtension_get_Attributes_m14494 (XmlSchemaSimpleContentExtension_t3685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentExtension::get_AnyAttribute()
extern "C" XmlSchemaAnyAttribute_t3634 * XmlSchemaSimpleContentExtension_get_AnyAttribute_m14495 (XmlSchemaSimpleContentExtension_t3685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C" void XmlSchemaSimpleContentExtension_set_AnyAttribute_m14496 (XmlSchemaSimpleContentExtension_t3685 * __this, XmlSchemaAnyAttribute_t3634 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentExtension::get_IsExtension()
extern "C" bool XmlSchemaSimpleContentExtension_get_IsExtension_m14497 (XmlSchemaSimpleContentExtension_t3685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleContentExtension_SetParent_m14498 (XmlSchemaSimpleContentExtension_t3685 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContentExtension_Compile_m14499 (XmlSchemaSimpleContentExtension_t3685 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentExtension::GetBaseTypeName()
extern "C" XmlQualifiedName_t3419 * XmlSchemaSimpleContentExtension_GetBaseTypeName_m14500 (XmlSchemaSimpleContentExtension_t3685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContentExtension_Validate_m14501 (XmlSchemaSimpleContentExtension_t3685 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentExtension System.Xml.Schema.XmlSchemaSimpleContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleContentExtension_t3685 * XmlSchemaSimpleContentExtension_Read_m14502 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
