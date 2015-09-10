#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocument
struct XmlDocument_t702;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3510;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t703;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t3525;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t3522;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.XmlResolver
struct XmlResolver_t3444;
// System.Xml.XmlNode
struct XmlNode_t742;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3513;
// System.Xml.XmlImplementation
struct XmlImplementation_t3521;
// System.Xml.XmlAttribute
struct XmlAttribute_t746;
// System.Xml.XmlCDataSection
struct XmlCDataSection_t3515;
// System.Xml.XmlComment
struct XmlComment_t3518;
// System.Xml.XmlDocumentFragment
struct XmlDocumentFragment_t3524;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// System.Xml.XmlEntityReference
struct XmlEntityReference_t3526;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t3543;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t3548;
// System.Xml.XmlText
struct XmlText_t3550;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t3565;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t3520;
// System.IO.TextReader
struct TextReader_t3383;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlDocument::.ctor()
extern "C" void XmlDocument__ctor_m12168 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation)
extern "C" void XmlDocument__ctor_m12963 (XmlDocument_t702 * __this, XmlImplementation_t3521 * ___imp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor(System.Xml.XmlImplementation,System.Xml.XmlNameTable)
extern "C" void XmlDocument__ctor_m12964 (XmlDocument_t702 * __this, XmlImplementation_t3521 * ___impl, XmlNameTable_t3469 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.cctor()
extern "C" void XmlDocument__cctor_m12965 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3510 * XmlDocument_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m12966 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlDocument_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m12967 (XmlDocument_t702 * __this, XmlLinkedNode_t3510 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_BaseURI()
extern "C" String_t* XmlDocument_get_BaseURI_m12968 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C" XmlElement_t703 * XmlDocument_get_DocumentElement_m12169 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::get_DocumentType()
extern "C" XmlDocumentType_t3525 * XmlDocument_get_DocumentType_m12969 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_IsReadOnly()
extern "C" bool XmlDocument_get_IsReadOnly_m12970 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_LocalName()
extern "C" String_t* XmlDocument_get_LocalName_m12971 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_Name()
extern "C" String_t* XmlDocument_get_Name_m12972 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::get_NameCache()
extern "C" XmlNameEntryCache_t3522 * XmlDocument_get_NameCache_m12973 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlDocument::get_NameTable()
extern "C" XmlNameTable_t3469 * XmlDocument_get_NameTable_m12974 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocument::get_NodeType()
extern "C" int32_t XmlDocument_get_NodeType_m12975 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlDocument::get_OwnerDocument()
extern "C" XmlDocument_t702 * XmlDocument_get_OwnerDocument_m12976 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocument::get_PreserveWhitespace()
extern "C" bool XmlDocument_get_PreserveWhitespace_m12977 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlDocument::get_Resolver()
extern "C" XmlResolver_t3444 * XmlDocument_get_Resolver_m12978 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::get_XmlLang()
extern "C" String_t* XmlDocument_get_XmlLang_m12979 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlDocument::get_XmlSpace()
extern "C" int32_t XmlDocument_get_XmlSpace_m12980 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::get_ParentNode()
extern "C" XmlNode_t742 * XmlDocument_get_ParentNode_m12981 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::get_SchemaInfo()
extern "C" Object_t * XmlDocument_get_SchemaInfo_m12982 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlDocument_set_SchemaInfo_m12983 (XmlDocument_t702 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddIdenticalAttribute(System.Xml.XmlAttribute)
extern "C" void XmlDocument_AddIdenticalAttribute_m12984 (XmlDocument_t702 * __this, XmlAttribute_t746 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::CloneNode(System.Boolean)
extern "C" XmlNode_t742 * XmlDocument_CloneNode_m12985 (XmlDocument_t702 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String)
extern "C" XmlAttribute_t746 * XmlDocument_CreateAttribute_m3960 (XmlDocument_t702 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String)
extern "C" XmlAttribute_t746 * XmlDocument_CreateAttribute_m12986 (XmlDocument_t702 * __this, String_t* ___qualifiedName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String)
extern "C" XmlAttribute_t746 * XmlDocument_CreateAttribute_m12987 (XmlDocument_t702 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C" XmlAttribute_t746 * XmlDocument_CreateAttribute_m12988 (XmlDocument_t702 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlCDataSection System.Xml.XmlDocument::CreateCDataSection(System.String)
extern "C" XmlCDataSection_t3515 * XmlDocument_CreateCDataSection_m12989 (XmlDocument_t702 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlComment System.Xml.XmlDocument::CreateComment(System.String)
extern "C" XmlComment_t3518 * XmlDocument_CreateComment_m12990 (XmlDocument_t702 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentFragment System.Xml.XmlDocument::CreateDocumentFragment()
extern "C" XmlDocumentFragment_t3524 * XmlDocument_CreateDocumentFragment_m12991 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(System.String,System.String,System.String,System.String)
extern "C" XmlDocumentType_t3525 * XmlDocument_CreateDocumentType_m12992 (XmlDocument_t702 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocumentType System.Xml.XmlDocument::CreateDocumentType(Mono.Xml.DTDObjectModel)
extern "C" XmlDocumentType_t3525 * XmlDocument_CreateDocumentType_m12993 (XmlDocument_t702 * __this, DTDObjectModel_t3454 * ___dtd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String)
extern "C" XmlElement_t703 * XmlDocument_CreateElement_m3948 (XmlDocument_t702 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String)
extern "C" XmlElement_t703 * XmlDocument_CreateElement_m12994 (XmlDocument_t702 * __this, String_t* ___qualifiedName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String)
extern "C" XmlElement_t703 * XmlDocument_CreateElement_m12995 (XmlDocument_t702 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String,System.String,System.Boolean)
extern "C" XmlElement_t703 * XmlDocument_CreateElement_m12996 (XmlDocument_t702 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, bool ___nameAtomized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntityReference System.Xml.XmlDocument::CreateEntityReference(System.String)
extern "C" XmlEntityReference_t3526 * XmlDocument_CreateEntityReference_m12997 (XmlDocument_t702 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlProcessingInstruction System.Xml.XmlDocument::CreateProcessingInstruction(System.String,System.String)
extern "C" XmlProcessingInstruction_t3543 * XmlDocument_CreateProcessingInstruction_m12998 (XmlDocument_t702 * __this, String_t* ___target, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSignificantWhitespace System.Xml.XmlDocument::CreateSignificantWhitespace(System.String)
extern "C" XmlSignificantWhitespace_t3548 * XmlDocument_CreateSignificantWhitespace_m12999 (XmlDocument_t702 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String)
extern "C" XmlText_t3550 * XmlDocument_CreateTextNode_m13000 (XmlDocument_t702 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWhitespace System.Xml.XmlDocument::CreateWhitespace(System.String)
extern "C" XmlWhitespace_t3565 * XmlDocument_CreateWhitespace_m13001 (XmlDocument_t702 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDeclaration System.Xml.XmlDocument::CreateXmlDeclaration(System.String,System.String,System.String)
extern "C" XmlDeclaration_t3520 * XmlDocument_CreateXmlDeclaration_m13002 (XmlDocument_t702 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::GetIdenticalAttribute(System.String)
extern "C" XmlAttribute_t746 * XmlDocument_GetIdenticalAttribute_m13003 (XmlDocument_t702 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t742 * XmlDocument_ImportNode_m13004 (XmlDocument_t702 * __this, XmlNode_t742 * ___node, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.IO.TextReader)
extern "C" void XmlDocument_Load_m13005 (XmlDocument_t702 * __this, TextReader_t3383 * ___txtReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::Load(System.Xml.XmlReader)
extern "C" void XmlDocument_Load_m13006 (XmlDocument_t702 * __this, XmlReader_t3379 * ___xmlReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::LoadXml(System.String)
extern "C" void XmlDocument_LoadXml_m13007 (XmlDocument_t702 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanged(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanged_m13008 (XmlDocument_t702 * __this, XmlNode_t742 * ___node, XmlNode_t742 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeChanging(System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String)
extern "C" void XmlDocument_onNodeChanging_m13009 (XmlDocument_t702 * __this, XmlNode_t742 * ___node, XmlNode_t742 * ___parent, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserted(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserted_m13010 (XmlDocument_t702 * __this, XmlNode_t742 * ___node, XmlNode_t742 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeInserting(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeInserting_m13011 (XmlDocument_t702 * __this, XmlNode_t742 * ___node, XmlNode_t742 * ___newParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoved(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoved_m13012 (XmlDocument_t702 * __this, XmlNode_t742 * ___node, XmlNode_t742 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::onNodeRemoving(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlDocument_onNodeRemoving_m13013 (XmlDocument_t702 * __this, XmlNode_t742 * ___node, XmlNode_t742 * ___oldParent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ParseName(System.String,System.String&,System.String&)
extern "C" void XmlDocument_ParseName_m13014 (XmlDocument_t702 * __this, String_t* ___name, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::ReadAttributeNode(System.Xml.XmlReader)
extern "C" XmlAttribute_t746 * XmlDocument_ReadAttributeNode_m13015 (XmlDocument_t702 * __this, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::ReadAttributeNodeValue(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C" void XmlDocument_ReadAttributeNodeValue_m13016 (XmlDocument_t702 * __this, XmlReader_t3379 * ___reader, XmlAttribute_t746 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader)
extern "C" XmlNode_t742 * XmlDocument_ReadNode_m13017 (XmlDocument_t702 * __this, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocument::ReadNodeCore(System.Xml.XmlReader)
extern "C" XmlNode_t742 * XmlDocument_ReadNodeCore_m13018 (XmlDocument_t702 * __this, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocument::MakeReaderErrorMessage(System.String,System.Xml.XmlReader)
extern "C" String_t* XmlDocument_MakeReaderErrorMessage_m13019 (XmlDocument_t702 * __this, String_t* ___message, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::RemoveIdenticalAttribute(System.String)
extern "C" void XmlDocument_RemoveIdenticalAttribute_m13020 (XmlDocument_t702 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::AddDefaultNameTableKeys()
extern "C" void XmlDocument_AddDefaultNameTableKeys_m13021 (XmlDocument_t702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::CheckIdTableUpdate(System.Xml.XmlAttribute,System.String,System.String)
extern "C" void XmlDocument_CheckIdTableUpdate_m13022 (XmlDocument_t702 * __this, XmlAttribute_t746 * ___attr, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
