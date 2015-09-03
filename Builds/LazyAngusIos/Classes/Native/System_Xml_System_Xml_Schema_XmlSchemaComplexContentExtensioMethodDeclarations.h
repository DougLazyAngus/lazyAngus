#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaComplexContentExtension
struct XmlSchemaComplexContentExtension_t3642;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3629;
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

// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::.ctor()
extern "C" void XmlSchemaComplexContentExtension__ctor_m14102 (XmlSchemaComplexContentExtension_t3642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::get_BaseTypeName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaComplexContentExtension_get_BaseTypeName_m14103 (XmlSchemaComplexContentExtension_t3642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentExtension::get_Particle()
extern "C" XmlSchemaParticle_t3629 * XmlSchemaComplexContentExtension_get_Particle_m14104 (XmlSchemaComplexContentExtension_t3642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentExtension::get_Attributes()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchemaComplexContentExtension_get_Attributes_m14105 (XmlSchemaComplexContentExtension_t3642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentExtension::get_AnyAttribute()
extern "C" XmlSchemaAnyAttribute_t3630 * XmlSchemaComplexContentExtension_get_AnyAttribute_m14106 (XmlSchemaComplexContentExtension_t3642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::set_AnyAttribute(System.Xml.Schema.XmlSchemaAnyAttribute)
extern "C" void XmlSchemaComplexContentExtension_set_AnyAttribute_m14107 (XmlSchemaComplexContentExtension_t3642 * __this, XmlSchemaAnyAttribute_t3630 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaComplexContentExtension::get_IsExtension()
extern "C" bool XmlSchemaComplexContentExtension_get_IsExtension_m14108 (XmlSchemaComplexContentExtension_t3642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaComplexContentExtension::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaComplexContentExtension_SetParent_m14109 (XmlSchemaComplexContentExtension_t3642 * __this, XmlSchemaObject_t3439 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaComplexContentExtension_Compile_m14110 (XmlSchemaComplexContentExtension_t3642 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::GetBaseTypeName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaComplexContentExtension_GetBaseTypeName_m14111 (XmlSchemaComplexContentExtension_t3642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaComplexContentExtension::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaComplexContentExtension_Validate_m14112 (XmlSchemaComplexContentExtension_t3642 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaComplexContentExtension System.Xml.Schema.XmlSchemaComplexContentExtension::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaComplexContentExtension_t3642 * XmlSchemaComplexContentExtension_Read_m14113 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
