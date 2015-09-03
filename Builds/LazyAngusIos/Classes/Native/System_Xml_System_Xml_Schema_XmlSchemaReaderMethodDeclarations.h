﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Object
struct Object_t;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.Schema.XmlSchemaReader::.ctor(System.Xml.XmlReader,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaReader__ctor_m14627 (XmlSchemaReader_t3699 * __this, XmlReader_t3368 * ___reader, ValidationEventHandler_t3437 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_FullName()
extern "C" String_t* XmlSchemaReader_get_FullName_m14628 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::get_Reader()
extern "C" XmlReader_t3368 * XmlSchemaReader_get_Reader_m14629 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::RaiseInvalidElementError()
extern "C" void XmlSchemaReader_RaiseInvalidElementError_m14630 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadNextElement()
extern "C" bool XmlSchemaReader_ReadNextElement_m14631 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::SkipToEnd()
extern "C" void XmlSchemaReader_SkipToEnd_m14632 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::HasLineInfo()
extern "C" bool XmlSchemaReader_HasLineInfo_m14633 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LineNumber()
extern "C" int32_t XmlSchemaReader_get_LineNumber_m14634 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_LinePosition()
extern "C" int32_t XmlSchemaReader_get_LinePosition_m14635 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_AttributeCount()
extern "C" int32_t XmlSchemaReader_get_AttributeCount_m14636 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_BaseURI()
extern "C" String_t* XmlSchemaReader_get_BaseURI_m14637 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_CanResolveEntity()
extern "C" bool XmlSchemaReader_get_CanResolveEntity_m14638 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::get_Depth()
extern "C" int32_t XmlSchemaReader_get_Depth_m14639 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_EOF()
extern "C" bool XmlSchemaReader_get_EOF_m14640 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasAttributes()
extern "C" bool XmlSchemaReader_get_HasAttributes_m14641 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_HasValue()
extern "C" bool XmlSchemaReader_get_HasValue_m14642 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsDefault()
extern "C" bool XmlSchemaReader_get_IsDefault_m14643 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::get_IsEmptyElement()
extern "C" bool XmlSchemaReader_get_IsEmptyElement_m14644 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String)
extern "C" String_t* XmlSchemaReader_get_Item_m14645 (XmlSchemaReader_t3699 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Item(System.String,System.String)
extern "C" String_t* XmlSchemaReader_get_Item_m14646 (XmlSchemaReader_t3699 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_LocalName()
extern "C" String_t* XmlSchemaReader_get_LocalName_m14647 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Name()
extern "C" String_t* XmlSchemaReader_get_Name_m14648 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_NamespaceURI()
extern "C" String_t* XmlSchemaReader_get_NamespaceURI_m14649 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaReader::get_NameTable()
extern "C" XmlNameTable_t3458 * XmlSchemaReader_get_NameTable_m14650 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::get_NodeType()
extern "C" int32_t XmlSchemaReader_get_NodeType_m14651 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Prefix()
extern "C" String_t* XmlSchemaReader_get_Prefix_m14652 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.Schema.XmlSchemaReader::get_ReadState()
extern "C" int32_t XmlSchemaReader_get_ReadState_m14653 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_Value()
extern "C" String_t* XmlSchemaReader_get_Value_m14654 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::get_XmlLang()
extern "C" String_t* XmlSchemaReader_get_XmlLang_m14655 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.Schema.XmlSchemaReader::get_XmlSpace()
extern "C" int32_t XmlSchemaReader_get_XmlSpace_m14656 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Close()
extern "C" void XmlSchemaReader_Close_m14657 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Equals(System.Object)
extern "C" bool XmlSchemaReader_Equals_m14658 (XmlSchemaReader_t3699 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String)
extern "C" String_t* XmlSchemaReader_GetAttribute_m14659 (XmlSchemaReader_t3699 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlSchemaReader_GetAttribute_m14660 (XmlSchemaReader_t3699 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaReader::GetHashCode()
extern "C" int32_t XmlSchemaReader_GetHashCode_m14661 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::LookupNamespace(System.String)
extern "C" String_t* XmlSchemaReader_LookupNamespace_m14662 (XmlSchemaReader_t3699 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.Int32)
extern "C" void XmlSchemaReader_MoveToAttribute_m14663 (XmlSchemaReader_t3699 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String)
extern "C" bool XmlSchemaReader_MoveToAttribute_m14664 (XmlSchemaReader_t3699 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlSchemaReader_MoveToAttribute_m14665 (XmlSchemaReader_t3699 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.Schema.XmlSchemaReader::MoveToContent()
extern "C" int32_t XmlSchemaReader_MoveToContent_m14666 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToElement()
extern "C" bool XmlSchemaReader_MoveToElement_m14667 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToFirstAttribute()
extern "C" bool XmlSchemaReader_MoveToFirstAttribute_m14668 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::MoveToNextAttribute()
extern "C" bool XmlSchemaReader_MoveToNextAttribute_m14669 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::Read()
extern "C" bool XmlSchemaReader_Read_m14670 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaReader::ReadAttributeValue()
extern "C" bool XmlSchemaReader_ReadAttributeValue_m14671 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadEndElement()
extern "C" void XmlSchemaReader_ReadEndElement_m14672 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadInnerXml()
extern "C" String_t* XmlSchemaReader_ReadInnerXml_m14673 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ReadOuterXml()
extern "C" String_t* XmlSchemaReader_ReadOuterXml_m14674 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ReadStartElement()
extern "C" void XmlSchemaReader_ReadStartElement_m14675 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::ResolveEntity()
extern "C" void XmlSchemaReader_ResolveEntity_m14676 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaReader::Skip()
extern "C" void XmlSchemaReader_Skip_m14677 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaReader::ToString()
extern "C" String_t* XmlSchemaReader_ToString_m14678 (XmlSchemaReader_t3699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;