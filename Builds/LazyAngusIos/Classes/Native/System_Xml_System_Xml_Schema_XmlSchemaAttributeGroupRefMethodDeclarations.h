#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAttributeGroupRef
struct XmlSchemaAttributeGroupRef_t3637;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3416;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3438;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3625;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3700;

// System.Void System.Xml.Schema.XmlSchemaAttributeGroupRef::.ctor()
extern "C" void XmlSchemaAttributeGroupRef__ctor_m14074 (XmlSchemaAttributeGroupRef_t3637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroupRef::get_RefName()
extern "C" XmlQualifiedName_t3416 * XmlSchemaAttributeGroupRef_get_RefName_m14075 (XmlSchemaAttributeGroupRef_t3637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroupRef::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttributeGroupRef_Compile_m14076 (XmlSchemaAttributeGroupRef_t3637 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroupRef::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttributeGroupRef_Validate_m14077 (XmlSchemaAttributeGroupRef_t3637 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttributeGroupRef System.Xml.Schema.XmlSchemaAttributeGroupRef::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAttributeGroupRef_t3637 * XmlSchemaAttributeGroupRef_Read_m14078 (Object_t * __this /* static, unused */, XmlSchemaReader_t3700 * ___reader, ValidationEventHandler_t3438 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
