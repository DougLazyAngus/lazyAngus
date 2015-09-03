#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaImport
struct XmlSchemaImport_t3660;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t3626;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;

// System.Void System.Xml.Schema.XmlSchemaImport::.ctor()
extern "C" void XmlSchemaImport__ctor_m14288 (XmlSchemaImport_t3660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaImport::get_Namespace()
extern "C" String_t* XmlSchemaImport_get_Namespace_m14289 (XmlSchemaImport_t3660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaImport::set_Annotation(System.Xml.Schema.XmlSchemaAnnotation)
extern "C" void XmlSchemaImport_set_Annotation_m14290 (XmlSchemaImport_t3660 * __this, XmlSchemaAnnotation_t3626 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaImport System.Xml.Schema.XmlSchemaImport::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaImport_t3660 * XmlSchemaImport_Read_m14291 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
