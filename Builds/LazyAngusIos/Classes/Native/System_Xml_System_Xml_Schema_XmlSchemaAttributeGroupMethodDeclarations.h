#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3646;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3633;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3641;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;

// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::.ctor()
extern "C" void XmlSchemaAttributeGroup__ctor_m14119 (XmlSchemaAttributeGroup_t3646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttributeGroup::get_Name()
extern "C" String_t* XmlSchemaAttributeGroup_get_Name_m14120 (XmlSchemaAttributeGroup_t3646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::get_Attributes()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchemaAttributeGroup_get_Attributes_m14121 (XmlSchemaAttributeGroup_t3646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::get_AttributeUses()
extern "C" XmlSchemaObjectTable_t3633 * XmlSchemaAttributeGroup_get_AttributeUses_m14122 (XmlSchemaAttributeGroup_t3646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttributeUse()
extern "C" XmlSchemaAnyAttribute_t3641 * XmlSchemaAttributeGroup_get_AnyAttributeUse_m14123 (XmlSchemaAttributeGroup_t3646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::get_AnyAttribute()
extern "C" XmlSchemaAnyAttribute_t3641 * XmlSchemaAttributeGroup_get_AnyAttribute_m14124 (XmlSchemaAttributeGroup_t3646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C" void XmlSchemaAttributeGroup_set_AnyAttribute_m14125 (XmlSchemaAttributeGroup_t3646 * __this, XmlSchemaAnyAttribute_t3641 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::get_QualifiedName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaAttributeGroup_get_QualifiedName_m14126 (XmlSchemaAttributeGroup_t3646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttributeGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaAttributeGroup_SetParent_m14127 (XmlSchemaAttributeGroup_t3646 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttributeGroup_Compile_m14128 (XmlSchemaAttributeGroup_t3646 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttributeGroup_Validate_m14129 (XmlSchemaAttributeGroup_t3646 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAttributeGroup_t3646 * XmlSchemaAttributeGroup_Read_m14130 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
