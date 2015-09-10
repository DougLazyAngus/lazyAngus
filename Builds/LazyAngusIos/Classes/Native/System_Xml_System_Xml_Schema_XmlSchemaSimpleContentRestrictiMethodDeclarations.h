#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleContentRestriction
struct XmlSchemaSimpleContentRestriction_t3693;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3644;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3641;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;

// System.Void System.Xml.Schema.XmlSchemaSimpleContentRestriction::.ctor()
extern "C" void XmlSchemaSimpleContentRestriction__ctor_m14560 (XmlSchemaSimpleContentRestriction_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_BaseTypeName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaSimpleContentRestriction_get_BaseTypeName_m14561 (XmlSchemaSimpleContentRestriction_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_BaseType()
extern "C" XmlSchemaSimpleType_t3644 * XmlSchemaSimpleContentRestriction_get_BaseType_m14562 (XmlSchemaSimpleContentRestriction_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_Attributes()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchemaSimpleContentRestriction_get_Attributes_m14563 (XmlSchemaSimpleContentRestriction_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_AnyAttribute()
extern "C" XmlSchemaAnyAttribute_t3641 * XmlSchemaSimpleContentRestriction_get_AnyAttribute_m14564 (XmlSchemaSimpleContentRestriction_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentRestriction::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C" void XmlSchemaSimpleContentRestriction_set_AnyAttribute_m14565 (XmlSchemaSimpleContentRestriction_t3693 * __this, XmlSchemaAnyAttribute_t3641 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleContentRestriction::get_IsExtension()
extern "C" bool XmlSchemaSimpleContentRestriction_get_IsExtension_m14566 (XmlSchemaSimpleContentRestriction_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleContentRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleContentRestriction_SetParent_m14567 (XmlSchemaSimpleContentRestriction_t3693 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContentRestriction_Compile_m14568 (XmlSchemaSimpleContentRestriction_t3693 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleContentRestriction::GetBaseTypeName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaSimpleContentRestriction_GetBaseTypeName_m14569 (XmlSchemaSimpleContentRestriction_t3693 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleContentRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleContentRestriction_Validate_m14570 (XmlSchemaSimpleContentRestriction_t3693 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleContentRestriction System.Xml.Schema.XmlSchemaSimpleContentRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleContentRestriction_t3693 * XmlSchemaSimpleContentRestriction_Read_m14571 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
