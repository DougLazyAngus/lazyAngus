#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t3668;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3636;
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

// System.Void System.Xml.Schema.XmlSchemaGroup::.ctor()
extern "C" void XmlSchemaGroup__ctor_m14318 (XmlSchemaGroup_t3668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaGroup::get_Name()
extern "C" String_t* XmlSchemaGroup_get_Name_m14319 (XmlSchemaGroup_t3668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::get_Particle()
extern "C" XmlSchemaGroupBase_t3636 * XmlSchemaGroup_get_Particle_m14320 (XmlSchemaGroup_t3668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::set_Particle(System.Xml.Schema.XmlSchemaGroupBase)
extern "C" void XmlSchemaGroup_set_Particle_m14321 (XmlSchemaGroup_t3668 * __this, XmlSchemaGroupBase_t3636 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::get_QualifiedName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaGroup_get_QualifiedName_m14322 (XmlSchemaGroup_t3668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroup::get_IsCircularDefinition()
extern "C" bool XmlSchemaGroup_get_IsCircularDefinition_m14323 (XmlSchemaGroup_t3668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroup::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaGroup_SetParent_m14324 (XmlSchemaGroup_t3668 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaGroup_Compile_m14325 (XmlSchemaGroup_t3668 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroup::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaGroup_Validate_m14326 (XmlSchemaGroup_t3668 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroup::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaGroup_t3668 * XmlSchemaGroup_Read_m14327 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
