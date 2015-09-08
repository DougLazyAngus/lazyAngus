#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t3661;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3629;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3419;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3443;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;

// System.Void System.Xml.Schema.XmlSchemaGroup::.ctor()
extern "C" void XmlSchemaGroup__ctor_m14261 (XmlSchemaGroup_t3661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaGroup::get_Name()
extern "C" String_t* XmlSchemaGroup_get_Name_m14262 (XmlSchemaGroup_t3661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::get_Particle()
extern "C" XmlSchemaGroupBase_t3629 * XmlSchemaGroup_get_Particle_m14263 (XmlSchemaGroup_t3661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::set_Particle(System.Xml.Schema.XmlSchemaGroupBase)
extern "C" void XmlSchemaGroup_set_Particle_m14264 (XmlSchemaGroup_t3661 * __this, XmlSchemaGroupBase_t3629 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::get_QualifiedName()
extern "C" XmlQualifiedName_t3419 * XmlSchemaGroup_get_QualifiedName_m14265 (XmlSchemaGroup_t3661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroup::get_IsCircularDefinition()
extern "C" bool XmlSchemaGroup_get_IsCircularDefinition_m14266 (XmlSchemaGroup_t3661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaGroup_SetParent_m14267 (XmlSchemaGroup_t3661 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaGroup_Compile_m14268 (XmlSchemaGroup_t3661 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaGroup_Validate_m14269 (XmlSchemaGroup_t3661 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaGroup_t3661 * XmlSchemaGroup_Read_m14270 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
