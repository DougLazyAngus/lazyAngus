#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleContentRestriction
struct XmlSchemaSimpleContentRestriction_t3686;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3419;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3637;
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

// System.Void System.Xml.Schema.XmlSchemaSimpleContentRestriction::.ctor()
extern "C" void XmlSchemaSimpleContentRestriction__ctor_m14503 (XmlSchemaSimpleContentRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_BaseTypeName()
extern "C" XmlQualifiedName_t3419 * XmlSchemaSimpleContentRestriction_get_BaseTypeName_m14504 (XmlSchemaSimpleContentRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_BaseType()
extern "C" XmlSchemaSimpleType_t3637 * XmlSchemaSimpleContentRestriction_get_BaseType_m14505 (XmlSchemaSimpleContentRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_Attributes()
extern "C" XmlSchemaObjectCollection_t3627 * XmlSchemaSimpleContentRestriction_get_Attributes_m14506 (XmlSchemaSimpleContentRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_AnyAttribute()
extern "C" XmlSchemaAnyAttribute_t3634 * XmlSchemaSimpleContentRestriction_get_AnyAttribute_m14507 (XmlSchemaSimpleContentRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentRestriction::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C" void XmlSchemaSimpleContentRestriction_set_AnyAttribute_m14508 (XmlSchemaSimpleContentRestriction_t3686 * __this, XmlSchemaAnyAttribute_t3634 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_IsExtension()
extern "C" bool XmlSchemaSimpleContentRestriction_get_IsExtension_m14509 (XmlSchemaSimpleContentRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleContentRestriction_SetParent_m14510 (XmlSchemaSimpleContentRestriction_t3686 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContentRestriction_Compile_m14511 (XmlSchemaSimpleContentRestriction_t3686 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentRestriction::GetBaseTypeName()
extern "C" XmlQualifiedName_t3419 * XmlSchemaSimpleContentRestriction_GetBaseTypeName_m14512 (XmlSchemaSimpleContentRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContentRestriction_Validate_m14513 (XmlSchemaSimpleContentRestriction_t3686 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentRestriction System.Xml.Schema.XmlSchemaSimpleContentRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleContentRestriction_t3686 * XmlSchemaSimpleContentRestriction_Read_m14514 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
