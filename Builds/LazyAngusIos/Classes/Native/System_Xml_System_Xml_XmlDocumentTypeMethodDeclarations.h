#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentType
struct XmlDocumentType_t3525;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t3514;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t702;
// System.Xml.XmlNode
struct XmlNode_t742;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m13032 (XmlDocumentType_t3525 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t702 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m13033 (XmlDocumentType_t3525 * __this, DTDObjectModel_t3454 * ___dtd, XmlDocument_t702 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C" void XmlDocumentType_ImportFromDTD_m13034 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C" DTDObjectModel_t3454 * XmlDocumentType_get_DTD_m13035 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C" XmlNamedNodeMap_t3514 * XmlDocumentType_get_Entities_m13036 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C" String_t* XmlDocumentType_get_InternalSubset_m13037 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C" bool XmlDocumentType_get_IsReadOnly_m13038 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C" String_t* XmlDocumentType_get_LocalName_m13039 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C" String_t* XmlDocumentType_get_Name_m13040 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C" int32_t XmlDocumentType_get_NodeType_m13041 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C" String_t* XmlDocumentType_get_PublicId_m13042 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C" String_t* XmlDocumentType_get_SystemId_m13043 (XmlDocumentType_t3525 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C" XmlNode_t742 * XmlDocumentType_CloneNode_m13044 (XmlDocumentType_t3525 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
