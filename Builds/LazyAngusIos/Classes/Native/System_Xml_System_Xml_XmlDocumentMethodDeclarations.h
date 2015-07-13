﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocument
struct XmlDocument_t505;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2012;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t506;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t2026;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2023;
// System.Xml.XmlNameTable
struct XmlNameTable_t1981;
// System.Xml.XmlResolver
struct XmlResolver_t1980;
// System.Xml.XmlNode
struct XmlNode_t543;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2013;
// System.Xml.XmlImplementation
struct XmlImplementation_t2022;
// System.Xml.XmlAttribute
struct XmlAttribute_t547;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t2015;
// System.Xml.XmlComment
struct XmlComment_t2019;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t2025;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1973;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t2028;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t2052;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t2058;
// System.Xml.XmlText
struct XmlText_t2060;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t2081;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t2021;
// System.Xml.XmlReader
struct XmlReader_t2055;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C" void XmlDocument__ctor_m9483 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C" void XmlDocument__ctor_m9484 (XmlDocument_t505 * __this, XmlImplementation_t2022 * ___imp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C" void XmlDocument__ctor_m9485 (XmlDocument_t505 * __this, XmlImplementation_t2022 * ___impl, XmlNameTable_t1981 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C" void XmlDocument__cctor_m9486 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t2012 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m9487 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m9488 (XmlDocument_t505 * __this, XmlLinkedNode_t2012 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C" String_t* XmlDocument_get_BaseURI_m9489 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C" XmlElement_t506 * XmlDocument_get_DocumentElement_m9490 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C" XmlDocumentType_t2026 * XmlDocument_get_DocumentType_m9491 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C" bool XmlDocument_get_IsReadOnly_m9492 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C" String_t* XmlDocument_get_LocalName_m9493 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C" String_t* XmlDocument_get_Name_m9494 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C" XmlNameEntryCache_t2023 * XmlDocument_get_NameCache_m9495 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C" XmlNameTable_t1981 * XmlDocument_get_NameTable_m9496 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C" int32_t XmlDocument_get_NodeType_m9497 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C" XmlDocument_t505 * XmlDocument_get_OwnerDocument_m9498 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C" bool XmlDocument_get_PreserveWhitespace_m9499 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C" XmlResolver_t1980 * XmlDocument_get_Resolver_m9500 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C" String_t* XmlDocument_get_XmlLang_m9501 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C" int32_t XmlDocument_get_XmlSpace_m9502 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C" XmlNode_t543 * XmlDocument_get_ParentNode_m9503 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlDocument_set_SchemaInfo_m9504 (XmlDocument_t505 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C" void XmlDocument_AddIdenticalAttribute_m9505 (XmlDocument_t505 * __this, XmlAttribute_t547 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C" XmlNode_t543 * XmlDocument_CloneNode_m9506 (XmlDocument_t505 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C" XmlAttribute_t547 * XmlDocument_CreateAttribute_m2512 (XmlDocument_t505 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C" XmlAttribute_t547 * XmlDocument_CreateAttribute_m9507 (XmlDocument_t505 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C" XmlAttribute_t547 * XmlDocument_CreateAttribute_m9508 (XmlDocument_t505 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C" XmlCDataSection_t2015 * XmlDocument_CreateCDataSection_m9509 (XmlDocument_t505 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C" XmlComment_t2019 * XmlDocument_CreateComment_m9510 (XmlDocument_t505 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C" XmlDocumentFragment_t2025 * XmlDocument_CreateDocumentFragment_m9511 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C" XmlDocumentType_t2026 * XmlDocument_CreateDocumentType_m9512 (XmlDocument_t505 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C" XmlDocumentType_t2026 * XmlDocument_CreateDocumentType_m9513 (XmlDocument_t505 * __this, DTDObjectModel_t1973 * ___dtd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String)
extern "C" XmlElement_t506 * XmlDocument_CreateElement_m2500 (XmlDocument_t505 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String)
extern "C" XmlElement_t506 * XmlDocument_CreateElement_m9514 (XmlDocument_t505 * __this, String_t* ___qualifiedName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C" XmlElement_t506 * XmlDocument_CreateElement_m9515 (XmlDocument_t505 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C" XmlElement_t506 * XmlDocument_CreateElement_m9516 (XmlDocument_t505 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___nameAtomized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C" XmlEntityReference_t2028 * XmlDocument_CreateEntityReference_m9517 (XmlDocument_t505 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C" XmlProcessingInstruction_t2052 * XmlDocument_CreateProcessingInstruction_m9518 (XmlDocument_t505 * __this, String_t* ___target, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C" XmlSignificantWhitespace_t2058 * XmlDocument_CreateSignificantWhitespace_m9519 (XmlDocument_t505 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C" XmlText_t2060 * XmlDocument_CreateTextNode_m9520 (XmlDocument_t505 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C" XmlWhitespace_t2081 * XmlDocument_CreateWhitespace_m9521 (XmlDocument_t505 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C" XmlDeclaration_t2021 * XmlDocument_CreateXmlDeclaration_m9522 (XmlDocument_t505 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C" XmlAttribute_t547 * XmlDocument_GetIdenticalAttribute_m9523 (XmlDocument_t505 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t543 * XmlDocument_ImportNode_m9524 (XmlDocument_t505 * __this, XmlNode_t543 * ___node, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanged_m9525 (XmlDocument_t505 * __this, XmlNode_t543 * ___node, XmlNode_t543 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanging_m9526 (XmlDocument_t505 * __this, XmlNode_t543 * ___node, XmlNode_t543 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserted_m9527 (XmlDocument_t505 * __this, XmlNode_t543 * ___node, XmlNode_t543 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserting_m9528 (XmlDocument_t505 * __this, XmlNode_t543 * ___node, XmlNode_t543 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoved_m9529 (XmlDocument_t505 * __this, XmlNode_t543 * ___node, XmlNode_t543 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoving_m9530 (XmlDocument_t505 * __this, XmlNode_t543 * ___node, XmlNode_t543 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C" void XmlDocument_ParseName_m9531 (XmlDocument_t505 * __this, String_t* ___name, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C" XmlAttribute_t547 * XmlDocument_ReadAttributeNode_m9532 (XmlDocument_t505 * __this, XmlReader_t2055 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C" void XmlDocument_ReadAttributeNodeValue_m9533 (XmlDocument_t505 * __this, XmlReader_t2055 * ___reader, XmlAttribute_t547 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C" XmlNode_t543 * XmlDocument_ReadNode_m9534 (XmlDocument_t505 * __this, XmlReader_t2055 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C" XmlNode_t543 * XmlDocument_ReadNodeCore_m9535 (XmlDocument_t505 * __this, XmlReader_t2055 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C" String_t* XmlDocument_MakeReaderErrorMessage_m9536 (XmlDocument_t505 * __this, String_t* ___message, XmlReader_t2055 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C" void XmlDocument_RemoveIdenticalAttribute_m9537 (XmlDocument_t505 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C" void XmlDocument_AddDefaultNameTableKeys_m9538 (XmlDocument_t505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C" void XmlDocument_CheckIdTableUpdate_m9539 (XmlDocument_t505 * __this, XmlAttribute_t547 * ___attr, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;