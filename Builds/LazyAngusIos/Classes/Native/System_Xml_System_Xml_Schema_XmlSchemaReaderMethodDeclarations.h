#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Object
struct Object_t;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.Schema.XmlSchemaReader::.ctor(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaReader__ctor_m14697 (XmlSchemaReader_t3710 * __this, XmlReader_t3379 * ___reader, ValidationEventHandler_t3448 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_FullName()
extern "C" String_t* XmlSchemaReader_get_FullName_m14698 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::get_Reader()
extern "C" XmlReader_t3379 * XmlSchemaReader_get_Reader_m14699 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::RaiseInvalidElementError()
extern "C" void XmlSchemaReader_RaiseInvalidElementError_m14700 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadNextElement()
extern "C" bool XmlSchemaReader_ReadNextElement_m14701 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::SkipToEnd()
extern "C" void XmlSchemaReader_SkipToEnd_m14702 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::HasLineInfo()
extern "C" bool XmlSchemaReader_HasLineInfo_m14703 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LineNumber()
extern "C" int32_t XmlSchemaReader_get_LineNumber_m14704 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LinePosition()
extern "C" int32_t XmlSchemaReader_get_LinePosition_m14705 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_AttributeCount()
extern "C" int32_t XmlSchemaReader_get_AttributeCount_m14706 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_BaseURI()
extern "C" String_t* XmlSchemaReader_get_BaseURI_m14707 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_CanResolveEntity()
extern "C" bool XmlSchemaReader_get_CanResolveEntity_m14708 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_Depth()
extern "C" int32_t XmlSchemaReader_get_Depth_m14709 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_EOF()
extern "C" bool XmlSchemaReader_get_EOF_m14710 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasAttributes()
extern "C" bool XmlSchemaReader_get_HasAttributes_m14711 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasValue()
extern "C" bool XmlSchemaReader_get_HasValue_m14712 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsDefault()
extern "C" bool XmlSchemaReader_get_IsDefault_m14713 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsEmptyElement()
extern "C" bool XmlSchemaReader_get_IsEmptyElement_m14714 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String)
extern "C" String_t* XmlSchemaReader_get_Item_m14715 (XmlSchemaReader_t3710 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String,System.String)
extern "C" String_t* XmlSchemaReader_get_Item_m14716 (XmlSchemaReader_t3710 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_LocalName()
extern "C" String_t* XmlSchemaReader_get_LocalName_m14717 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Name()
extern "C" String_t* XmlSchemaReader_get_Name_m14718 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_NamespaceURI()
extern "C" String_t* XmlSchemaReader_get_NamespaceURI_m14719 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaReader::get_NameTable()
extern "C" XmlNameTable_t3469 * XmlSchemaReader_get_NameTable_m14720 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::get_NodeType()
extern "C" int32_t XmlSchemaReader_get_NodeType_m14721 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Prefix()
extern "C" String_t* XmlSchemaReader_get_Prefix_m14722 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.Schema.XmlSchemaReader::get_ReadState()
extern "C" int32_t XmlSchemaReader_get_ReadState_m14723 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Value()
extern "C" String_t* XmlSchemaReader_get_Value_m14724 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_XmlLang()
extern "C" String_t* XmlSchemaReader_get_XmlLang_m14725 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.Schema.XmlSchemaReader::get_XmlSpace()
extern "C" int32_t XmlSchemaReader_get_XmlSpace_m14726 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Close()
extern "C" void XmlSchemaReader_Close_m14727 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Equals(System.Object)
extern "C" bool XmlSchemaReader_Equals_m14728 (XmlSchemaReader_t3710 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String)
extern "C" String_t* XmlSchemaReader_GetAttribute_m14729 (XmlSchemaReader_t3710 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlSchemaReader_GetAttribute_m14730 (XmlSchemaReader_t3710 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::GetHashCode()
extern "C" int32_t XmlSchemaReader_GetHashCode_m14731 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::LookupNamespace(System.String)
extern "C" String_t* XmlSchemaReader_LookupNamespace_m14732 (XmlSchemaReader_t3710 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.Int32)
extern "C" void XmlSchemaReader_MoveToAttribute_m14733 (XmlSchemaReader_t3710 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String)
extern "C" bool XmlSchemaReader_MoveToAttribute_m14734 (XmlSchemaReader_t3710 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlSchemaReader_MoveToAttribute_m14735 (XmlSchemaReader_t3710 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::MoveToContent()
extern "C" int32_t XmlSchemaReader_MoveToContent_m14736 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToElement()
extern "C" bool XmlSchemaReader_MoveToElement_m14737 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToFirstAttribute()
extern "C" bool XmlSchemaReader_MoveToFirstAttribute_m14738 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToNextAttribute()
extern "C" bool XmlSchemaReader_MoveToNextAttribute_m14739 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Read()
extern "C" bool XmlSchemaReader_Read_m14740 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadAttributeValue()
extern "C" bool XmlSchemaReader_ReadAttributeValue_m14741 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadEndElement()
extern "C" void XmlSchemaReader_ReadEndElement_m14742 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadInnerXml()
extern "C" String_t* XmlSchemaReader_ReadInnerXml_m14743 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadOuterXml()
extern "C" String_t* XmlSchemaReader_ReadOuterXml_m14744 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadStartElement()
extern "C" void XmlSchemaReader_ReadStartElement_m14745 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ResolveEntity()
extern "C" void XmlSchemaReader_ResolveEntity_m14746 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Skip()
extern "C" void XmlSchemaReader_Skip_m14747 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ToString()
extern "C" String_t* XmlSchemaReader_ToString_m14748 (XmlSchemaReader_t3710 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
