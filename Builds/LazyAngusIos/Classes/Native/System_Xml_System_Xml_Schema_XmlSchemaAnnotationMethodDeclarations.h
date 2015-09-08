#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t3630;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;

// System.Void System.Xml.Schema.XmlSchemaAnnotation::.ctor()
extern "C" void XmlSchemaAnnotation__ctor_m13995 (XmlSchemaAnnotation_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnnotation::set_Id(System.String)
extern "C" void XmlSchemaAnnotation_set_Id_m13996 (XmlSchemaAnnotation_t3630 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnnotation::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnnotation_Compile_m13997 (XmlSchemaAnnotation_t3630 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnnotation::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnnotation_Validate_m13998 (XmlSchemaAnnotation_t3630 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaAnnotation::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAnnotation_t3630 * XmlSchemaAnnotation_Read_m13999 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
