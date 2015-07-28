#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocument
struct XmlDocument_t621;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3154;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t622;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t3168;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3165;
// System.Xml.XmlNameTable
struct XmlNameTable_t3123;
// System.Xml.XmlResolver
struct XmlResolver_t3122;
// System.Xml.XmlNode
struct XmlNode_t659;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3155;
// System.Xml.XmlImplementation
struct XmlImplementation_t3164;
// System.Xml.XmlAttribute
struct XmlAttribute_t663;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t3157;
// System.Xml.XmlComment
struct XmlComment_t3161;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t3167;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3115;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t3170;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t3195;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t3201;
// System.Xml.XmlText
struct XmlText_t3203;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t3227;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t3163;
// System.Xml.XmlReader
struct XmlReader_t3198;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C" void XmlDocument__ctor_m10493 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C" void XmlDocument__ctor_m10494 (XmlDocument_t621 * __this, XmlImplementation_t3164 * ___imp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C" void XmlDocument__ctor_m10495 (XmlDocument_t621 * __this, XmlImplementation_t3164 * ___impl, XmlNameTable_t3123 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C" void XmlDocument__cctor_m10496 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3154 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m10497 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m10498 (XmlDocument_t621 * __this, XmlLinkedNode_t3154 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C" String_t* XmlDocument_get_BaseURI_m10499 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C" XmlElement_t622 * XmlDocument_get_DocumentElement_m10500 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C" XmlDocumentType_t3168 * XmlDocument_get_DocumentType_m10501 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C" bool XmlDocument_get_IsReadOnly_m10502 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C" String_t* XmlDocument_get_LocalName_m10503 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C" String_t* XmlDocument_get_Name_m10504 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C" XmlNameEntryCache_t3165 * XmlDocument_get_NameCache_m10505 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C" XmlNameTable_t3123 * XmlDocument_get_NameTable_m10506 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C" int32_t XmlDocument_get_NodeType_m10507 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C" XmlDocument_t621 * XmlDocument_get_OwnerDocument_m10508 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C" bool XmlDocument_get_PreserveWhitespace_m10509 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C" XmlResolver_t3122 * XmlDocument_get_Resolver_m10510 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C" String_t* XmlDocument_get_XmlLang_m10511 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C" int32_t XmlDocument_get_XmlSpace_m10512 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C" XmlNode_t659 * XmlDocument_get_ParentNode_m10513 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlDocument_set_SchemaInfo_m10514 (XmlDocument_t621 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C" void XmlDocument_AddIdenticalAttribute_m10515 (XmlDocument_t621 * __this, XmlAttribute_t663 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C" XmlNode_t659 * XmlDocument_CloneNode_m10516 (XmlDocument_t621 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C" XmlAttribute_t663 * XmlDocument_CreateAttribute_m3450 (XmlDocument_t621 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C" XmlAttribute_t663 * XmlDocument_CreateAttribute_m10517 (XmlDocument_t621 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C" XmlAttribute_t663 * XmlDocument_CreateAttribute_m10518 (XmlDocument_t621 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C" XmlCDataSection_t3157 * XmlDocument_CreateCDataSection_m10519 (XmlDocument_t621 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C" XmlComment_t3161 * XmlDocument_CreateComment_m10520 (XmlDocument_t621 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C" XmlDocumentFragment_t3167 * XmlDocument_CreateDocumentFragment_m10521 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C" XmlDocumentType_t3168 * XmlDocument_CreateDocumentType_m10522 (XmlDocument_t621 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C" XmlDocumentType_t3168 * XmlDocument_CreateDocumentType_m10523 (XmlDocument_t621 * __this, DTDObjectModel_t3115 * ___dtd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String)
extern "C" XmlElement_t622 * XmlDocument_CreateElement_m3438 (XmlDocument_t621 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String)
extern "C" XmlElement_t622 * XmlDocument_CreateElement_m10524 (XmlDocument_t621 * __this, String_t* ___qualifiedName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C" XmlElement_t622 * XmlDocument_CreateElement_m10525 (XmlDocument_t621 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C" XmlElement_t622 * XmlDocument_CreateElement_m10526 (XmlDocument_t621 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___nameAtomized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C" XmlEntityReference_t3170 * XmlDocument_CreateEntityReference_m10527 (XmlDocument_t621 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C" XmlProcessingInstruction_t3195 * XmlDocument_CreateProcessingInstruction_m10528 (XmlDocument_t621 * __this, String_t* ___target, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C" XmlSignificantWhitespace_t3201 * XmlDocument_CreateSignificantWhitespace_m10529 (XmlDocument_t621 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C" XmlText_t3203 * XmlDocument_CreateTextNode_m10530 (XmlDocument_t621 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C" XmlWhitespace_t3227 * XmlDocument_CreateWhitespace_m10531 (XmlDocument_t621 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C" XmlDeclaration_t3163 * XmlDocument_CreateXmlDeclaration_m10532 (XmlDocument_t621 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C" XmlAttribute_t663 * XmlDocument_GetIdenticalAttribute_m10533 (XmlDocument_t621 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t659 * XmlDocument_ImportNode_m10534 (XmlDocument_t621 * __this, XmlNode_t659 * ___node, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanged_m10535 (XmlDocument_t621 * __this, XmlNode_t659 * ___node, XmlNode_t659 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanging_m10536 (XmlDocument_t621 * __this, XmlNode_t659 * ___node, XmlNode_t659 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserted_m10537 (XmlDocument_t621 * __this, XmlNode_t659 * ___node, XmlNode_t659 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserting_m10538 (XmlDocument_t621 * __this, XmlNode_t659 * ___node, XmlNode_t659 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoved_m10539 (XmlDocument_t621 * __this, XmlNode_t659 * ___node, XmlNode_t659 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoving_m10540 (XmlDocument_t621 * __this, XmlNode_t659 * ___node, XmlNode_t659 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C" void XmlDocument_ParseName_m10541 (XmlDocument_t621 * __this, String_t* ___name, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C" XmlAttribute_t663 * XmlDocument_ReadAttributeNode_m10542 (XmlDocument_t621 * __this, XmlReader_t3198 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C" void XmlDocument_ReadAttributeNodeValue_m10543 (XmlDocument_t621 * __this, XmlReader_t3198 * ___reader, XmlAttribute_t663 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C" XmlNode_t659 * XmlDocument_ReadNode_m10544 (XmlDocument_t621 * __this, XmlReader_t3198 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C" XmlNode_t659 * XmlDocument_ReadNodeCore_m10545 (XmlDocument_t621 * __this, XmlReader_t3198 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C" String_t* XmlDocument_MakeReaderErrorMessage_m10546 (XmlDocument_t621 * __this, String_t* ___message, XmlReader_t3198 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C" void XmlDocument_RemoveIdenticalAttribute_m10547 (XmlDocument_t621 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C" void XmlDocument_AddDefaultNameTableKeys_m10548 (XmlDocument_t621 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C" void XmlDocument_CheckIdTableUpdate_m10549 (XmlDocument_t621 * __this, XmlAttribute_t663 * ___attr, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
