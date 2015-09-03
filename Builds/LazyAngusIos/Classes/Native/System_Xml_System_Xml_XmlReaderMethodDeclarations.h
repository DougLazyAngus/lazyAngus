#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlReader
struct XmlReader_t3368;
// System.String
struct String_t;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t3533;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3502;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t3534;
// System.Xml.XmlException
struct XmlException_t3516;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C" void XmlReader__ctor_m13279 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C" void XmlReader_System_IDisposable_Dispose_m12169 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_AttributeCount()
// System.String System.Xml.XmlReader::get_BaseURI()
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C" XmlReaderBinarySupport_t3533 * XmlReader_get_Binary_m13280 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C" bool XmlReader_get_CanResolveEntity_m13281 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_Depth()
// System.Boolean System.Xml.XmlReader::get_EOF()
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C" bool XmlReader_get_HasAttributes_m12175 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_HasValue()
// System.Boolean System.Xml.XmlReader::get_IsEmptyElement()
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C" bool XmlReader_get_IsDefault_m13282 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C" String_t* XmlReader_get_Item_m12179 (XmlReader_t3368 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String,System.String)
extern "C" String_t* XmlReader_get_Item_m12180 (XmlReader_t3368 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_LocalName()
// System.String System.Xml.XmlReader::get_Name()
extern "C" String_t* XmlReader_get_Name_m13283 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_NamespaceURI()
// System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable()
// System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType()
// System.String System.Xml.XmlReader::get_Prefix()
// System.Xml.ReadState System.Xml.XmlReader::get_ReadState()
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C" Object_t * XmlReader_get_SchemaInfo_m12188 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" XmlReaderSettings_t3534 * XmlReader_get_Settings_m13284 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Value()
// System.String System.Xml.XmlReader::get_XmlLang()
extern "C" String_t* XmlReader_get_XmlLang_m13285 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C" int32_t XmlReader_get_XmlSpace_m13286 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Close()
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C" void XmlReader_Dispose_m12194 (XmlReader_t3368 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::GetAttribute(System.String)
// System.String System.Xml.XmlReader::GetAttribute(System.String,System.String)
// System.String System.Xml.XmlReader::LookupNamespace(System.String)
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C" void XmlReader_MoveToAttribute_m13287 (XmlReader_t3368 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String)
// System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String)
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C" bool XmlReader_IsContent_m13288 (XmlReader_t3368 * __this, int32_t ___nodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C" int32_t XmlReader_MoveToContent_m12201 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::MoveToElement()
// System.Boolean System.Xml.XmlReader::MoveToFirstAttribute()
// System.Boolean System.Xml.XmlReader::MoveToNextAttribute()
// System.Boolean System.Xml.XmlReader::Read()
// System.Boolean System.Xml.XmlReader::ReadAttributeValue()
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C" void XmlReader_ReadEndElement_m12207 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadInnerXml()
extern "C" String_t* XmlReader_ReadInnerXml_m12208 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C" String_t* XmlReader_ReadOuterXml_m12209 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C" void XmlReader_ReadStartElement_m12210 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ResolveEntity()
// System.Void System.Xml.XmlReader::Skip()
extern "C" void XmlReader_Skip_m13289 (XmlReader_t3368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C" XmlException_t3516 * XmlReader_XmlError_m13290 (XmlReader_t3368 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
