﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3621;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3620;
// System.String
struct String_t;
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"

// System.Void System.Xml.Schema.ValidationEventArgs::.ctor(System.Xml.Schema.XmlSchemaException,System.String,System.Xml.Schema.XmlSeverityType)
extern "C" void ValidationEventArgs__ctor_m13923 (ValidationEventArgs_t3621 * __this, XmlSchemaException_t3620 * ___ex, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::get_Exception()
extern "C" XmlSchemaException_t3620 * ValidationEventArgs_get_Exception_m13924 (ValidationEventArgs_t3621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::get_Severity()
extern "C" int32_t ValidationEventArgs_get_Severity_m13925 (ValidationEventArgs_t3621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;