#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentType
struct XmlDocumentType_t3169;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3116;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t3157;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t622;
// System.Xml.XmlNode
struct XmlNode_t660;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m10559 (XmlDocumentType_t3169 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t622 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m10560 (XmlDocumentType_t3169 * __this, DTDObjectModel_t3116 * ___dtd, XmlDocument_t622 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C" void XmlDocumentType_ImportFromDTD_m10561 (XmlDocumentType_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C" DTDObjectModel_t3116 * XmlDocumentType_get_DTD_m10562 (XmlDocumentType_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C" XmlNamedNodeMap_t3157 * XmlDocumentType_get_Entities_m10563 (XmlDocumentType_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C" bool XmlDocumentType_get_IsReadOnly_m10564 (XmlDocumentType_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C" String_t* XmlDocumentType_get_LocalName_m10565 (XmlDocumentType_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C" String_t* XmlDocumentType_get_Name_m10566 (XmlDocumentType_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C" int32_t XmlDocumentType_get_NodeType_m10567 (XmlDocumentType_t3169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C" XmlNode_t660 * XmlDocumentType_CloneNode_m10568 (XmlDocumentType_t3169 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
