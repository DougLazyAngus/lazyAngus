#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t3540;
// System.Xml.XmlParserContext
struct XmlParserContext_t3498;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3513;
// System.Xml.XmlNode
struct XmlNode_t742;
// System.Xml.XmlElement
struct XmlElement_t703;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNodeReaderImpl)
extern "C" void XmlNodeReaderImpl__ctor_m13262 (XmlNodeReaderImpl_t3540 * __this, XmlNodeReaderImpl_t3540 * ___entityContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNode)
extern "C" void XmlNodeReaderImpl__ctor_m13263 (XmlNodeReaderImpl_t3540 * __this, XmlNode_t742 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReaderImpl::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t3498 * XmlNodeReaderImpl_Mono_Xml_IHasXmlParserContext_get_ParserContext_m13264 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_AttributeCount()
extern "C" int32_t XmlNodeReaderImpl_get_AttributeCount_m13265 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_BaseURI()
extern "C" String_t* XmlNodeReaderImpl_get_BaseURI_m13266 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_CanResolveEntity()
extern "C" bool XmlNodeReaderImpl_get_CanResolveEntity_m13267 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_Depth()
extern "C" int32_t XmlNodeReaderImpl_get_Depth_m13268 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_EOF()
extern "C" bool XmlNodeReaderImpl_get_EOF_m13269 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasAttributes()
extern "C" bool XmlNodeReaderImpl_get_HasAttributes_m13270 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasValue()
extern "C" bool XmlNodeReaderImpl_get_HasValue_m13271 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsDefault()
extern "C" bool XmlNodeReaderImpl_get_IsDefault_m13272 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsEmptyElement()
extern "C" bool XmlNodeReaderImpl_get_IsEmptyElement_m13273 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_LocalName()
extern "C" String_t* XmlNodeReaderImpl_get_LocalName_m13274 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Name()
extern "C" String_t* XmlNodeReaderImpl_get_Name_m13275 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_NamespaceURI()
extern "C" String_t* XmlNodeReaderImpl_get_NamespaceURI_m13276 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReaderImpl::get_NameTable()
extern "C" XmlNameTable_t3469 * XmlNodeReaderImpl_get_NameTable_m13277 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReaderImpl::get_NodeType()
extern "C" int32_t XmlNodeReaderImpl_get_NodeType_m13278 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Prefix()
extern "C" String_t* XmlNodeReaderImpl_get_Prefix_m13279 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::get_ReadState()
extern "C" int32_t XmlNodeReaderImpl_get_ReadState_m13280 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReaderImpl::get_SchemaInfo()
extern "C" Object_t * XmlNodeReaderImpl_get_SchemaInfo_m13281 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Value()
extern "C" String_t* XmlNodeReaderImpl_get_Value_m13282 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_XmlLang()
extern "C" String_t* XmlNodeReaderImpl_get_XmlLang_m13283 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReaderImpl::get_XmlSpace()
extern "C" int32_t XmlNodeReaderImpl_get_XmlSpace_m13284 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Close()
extern "C" void XmlNodeReaderImpl_Close_m13285 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String)
extern "C" String_t* XmlNodeReaderImpl_GetAttribute_m13286 (XmlNodeReaderImpl_t3540 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String,System.String)
extern "C" String_t* XmlNodeReaderImpl_GetAttribute_m13287 (XmlNodeReaderImpl_t3540 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetXmlDeclarationAttribute(System.String)
extern "C" String_t* XmlNodeReaderImpl_GetXmlDeclarationAttribute_m13288 (XmlNodeReaderImpl_t3540 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetDocumentTypeAttribute(System.String)
extern "C" String_t* XmlNodeReaderImpl_GetDocumentTypeAttribute_m13289 (XmlNodeReaderImpl_t3540 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNodeReaderImpl::GetCurrentElement()
extern "C" XmlElement_t703 * XmlNodeReaderImpl_GetCurrentElement_m13290 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::LookupNamespace(System.String)
extern "C" String_t* XmlNodeReaderImpl_LookupNamespace_m13291 (XmlNodeReaderImpl_t3540 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.Int32)
extern "C" void XmlNodeReaderImpl_MoveToAttribute_m13292 (XmlNodeReaderImpl_t3540 * __this, int32_t ___attributeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String)
extern "C" bool XmlNodeReaderImpl_MoveToAttribute_m13293 (XmlNodeReaderImpl_t3540 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String,System.String)
extern "C" bool XmlNodeReaderImpl_MoveToAttribute_m13294 (XmlNodeReaderImpl_t3540 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToElement()
extern "C" bool XmlNodeReaderImpl_MoveToElement_m13295 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToFirstAttribute()
extern "C" bool XmlNodeReaderImpl_MoveToFirstAttribute_m13296 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToNextAttribute()
extern "C" bool XmlNodeReaderImpl_MoveToNextAttribute_m13297 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::Read()
extern "C" bool XmlNodeReaderImpl_Read_m13298 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadContent()
extern "C" bool XmlNodeReaderImpl_ReadContent_m13299 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadAttributeValue()
extern "C" bool XmlNodeReaderImpl_ReadAttributeValue_m13300 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::ResolveEntity()
extern "C" void XmlNodeReaderImpl_ResolveEntity_m13301 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Skip()
extern "C" void XmlNodeReaderImpl_Skip_m13302 (XmlNodeReaderImpl_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
