#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentType
struct XmlDocumentType_t3518;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3447;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t3507;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t695;
// System.Xml.XmlNode
struct XmlNode_t735;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m12975 (XmlDocumentType_t3518 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t695 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m12976 (XmlDocumentType_t3518 * __this, DTDObjectModel_t3447 * ___dtd, XmlDocument_t695 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C" void XmlDocumentType_ImportFromDTD_m12977 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C" DTDObjectModel_t3447 * XmlDocumentType_get_DTD_m12978 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C" XmlNamedNodeMap_t3507 * XmlDocumentType_get_Entities_m12979 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C" String_t* XmlDocumentType_get_InternalSubset_m12980 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C" bool XmlDocumentType_get_IsReadOnly_m12981 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C" String_t* XmlDocumentType_get_LocalName_m12982 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C" String_t* XmlDocumentType_get_Name_m12983 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C" int32_t XmlDocumentType_get_NodeType_m12984 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C" String_t* XmlDocumentType_get_PublicId_m12985 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C" String_t* XmlDocumentType_get_SystemId_m12986 (XmlDocumentType_t3518 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C" XmlNode_t735 * XmlDocumentType_CloneNode_m12987 (XmlDocumentType_t3518 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
