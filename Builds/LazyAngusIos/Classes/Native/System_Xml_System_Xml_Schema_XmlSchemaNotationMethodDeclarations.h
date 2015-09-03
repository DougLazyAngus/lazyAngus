#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaNotation
struct XmlSchemaNotation_t3672;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;

// System.Void System.Xml.Schema.XmlSchemaNotation::.ctor()
extern "C" void XmlSchemaNotation__ctor_m14333 (XmlSchemaNotation_t3672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaNotation::get_Name()
extern "C" String_t* XmlSchemaNotation_get_Name_m14334 (XmlSchemaNotation_t3672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaNotation::get_Public()
extern "C" String_t* XmlSchemaNotation_get_Public_m14335 (XmlSchemaNotation_t3672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaNotation::get_QualifiedName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaNotation_get_QualifiedName_m14336 (XmlSchemaNotation_t3672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaNotation::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaNotation_Compile_m14337 (XmlSchemaNotation_t3672 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaNotation::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaNotation_Validate_m14338 (XmlSchemaNotation_t3672 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaNotation System.Xml.Schema.XmlSchemaNotation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaNotation_t3672 * XmlSchemaNotation_Read_m14339 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
