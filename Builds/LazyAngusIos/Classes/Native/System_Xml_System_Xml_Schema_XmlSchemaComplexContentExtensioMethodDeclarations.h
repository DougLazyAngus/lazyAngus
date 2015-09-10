#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaComplexContentExtension
struct XmlSchemaComplexContentExtension_t3653;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3640;
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

// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::.ctor()
extern "C" void XmlSchemaComplexContentExtension__ctor_m14172 (XmlSchemaComplexContentExtension_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::get_BaseTypeName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaComplexContentExtension_get_BaseTypeName_m14173 (XmlSchemaComplexContentExtension_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentExtension::get_Particle()
extern "C" XmlSchemaParticle_t3640 * XmlSchemaComplexContentExtension_get_Particle_m14174 (XmlSchemaComplexContentExtension_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentExtension::get_Attributes()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchemaComplexContentExtension_get_Attributes_m14175 (XmlSchemaComplexContentExtension_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentExtension::get_AnyAttribute()
extern "C" XmlSchemaAnyAttribute_t3641 * XmlSchemaComplexContentExtension_get_AnyAttribute_m14176 (XmlSchemaComplexContentExtension_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C" void XmlSchemaComplexContentExtension_set_AnyAttribute_m14177 (XmlSchemaComplexContentExtension_t3653 * __this, XmlSchemaAnyAttribute_t3641 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaComplexContentExtension::get_IsExtension()
extern "C" bool XmlSchemaComplexContentExtension_get_IsExtension_m14178 (XmlSchemaComplexContentExtension_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaComplexContentExtension_SetParent_m14179 (XmlSchemaComplexContentExtension_t3653 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaComplexContentExtension_Compile_m14180 (XmlSchemaComplexContentExtension_t3653 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::GetBaseTypeName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaComplexContentExtension_GetBaseTypeName_m14181 (XmlSchemaComplexContentExtension_t3653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaComplexContentExtension_Validate_m14182 (XmlSchemaComplexContentExtension_t3653 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexContentExtension System.Xml.Schema.XmlSchemaComplexContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaComplexContentExtension_t3653 * XmlSchemaComplexContentExtension_Read_m14183 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
