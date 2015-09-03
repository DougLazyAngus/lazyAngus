#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAppInfo
struct XmlSchemaAppInfo_t3632;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t3631;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;

// System.Void System.Xml.Schema.XmlSchemaAppInfo::.ctor()
extern "C" void XmlSchemaAppInfo__ctor_m14025 (XmlSchemaAppInfo_t3632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaAppInfo::get_Markup()
extern "C" XmlNodeU5BU5D_t3631* XmlSchemaAppInfo_get_Markup_m14026 (XmlSchemaAppInfo_t3632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAppInfo::set_Markup(System.Xml.XmlNode[])
extern "C" void XmlSchemaAppInfo_set_Markup_m14027 (XmlSchemaAppInfo_t3632 * __this, XmlNodeU5BU5D_t3631* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAppInfo System.Xml.Schema.XmlSchemaAppInfo::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler,System.Boolean&)
extern "C" XmlSchemaAppInfo_t3632 * XmlSchemaAppInfo_Read_m14028 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, bool* ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
