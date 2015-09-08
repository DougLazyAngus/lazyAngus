#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaInclude
struct XmlSchemaInclude_t3662;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t3627;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3700;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3438;

// System.Void System.Xml.Schema.XmlSchemaInclude::.ctor()
extern "C" void XmlSchemaInclude__ctor_m14305 (XmlSchemaInclude_t3662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaInclude::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C" void XmlSchemaInclude_set_Annotation_m14306 (XmlSchemaInclude_t3662 * __this, XmlSchemaAnnotation_t3627 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaInclude System.Xml.Schema.XmlSchemaInclude::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaInclude_t3662 * XmlSchemaInclude_Read_m14307 (Object_t * __this /* static, unused */, XmlSchemaReader_t3700 * ___reader, ValidationEventHandler_t3438 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
