﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaInclude
struct XmlSchemaInclude_t3661;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t3626;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;

// System.Void System.Xml.Schema.XmlSchemaInclude::.ctor()
extern "C" void XmlSchemaInclude__ctor_m14292 (XmlSchemaInclude_t3661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaInclude::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C" void XmlSchemaInclude_set_Annotation_m14293 (XmlSchemaInclude_t3661 * __this, XmlSchemaAnnotation_t3626 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaInclude System.Xml.Schema.XmlSchemaInclude::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaInclude_t3661 * XmlSchemaInclude_Read_m14294 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;