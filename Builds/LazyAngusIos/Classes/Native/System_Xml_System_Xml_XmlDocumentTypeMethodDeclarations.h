#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentType
struct XmlDocumentType_t2026;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1973;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t2014;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t505;
// System.Xml.XmlNode
struct XmlNode_t543;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m9549 (XmlDocumentType_t2026 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t505 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m9550 (XmlDocumentType_t2026 * __this, DTDObjectModel_t1973 * ___dtd, XmlDocument_t505 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C" void XmlDocumentType_ImportFromDTD_m9551 (XmlDocumentType_t2026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C" DTDObjectModel_t1973 * XmlDocumentType_get_DTD_m9552 (XmlDocumentType_t2026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C" XmlNamedNodeMap_t2014 * XmlDocumentType_get_Entities_m9553 (XmlDocumentType_t2026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C" bool XmlDocumentType_get_IsReadOnly_m9554 (XmlDocumentType_t2026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C" String_t* XmlDocumentType_get_LocalName_m9555 (XmlDocumentType_t2026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C" String_t* XmlDocumentType_get_Name_m9556 (XmlDocumentType_t2026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C" int32_t XmlDocumentType_get_NodeType_m9557 (XmlDocumentType_t2026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C" XmlNode_t543 * XmlDocumentType_CloneNode_m9558 (XmlDocumentType_t2026 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
