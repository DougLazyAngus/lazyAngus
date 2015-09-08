#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNodeReader
struct XmlNodeReader_t3381;
// System.Xml.XmlParserContext
struct XmlParserContext_t3488;
// System.Xml.XmlReader
struct XmlReader_t3369;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3459;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3503;
// System.Xml.XmlNode
struct XmlNode_t732;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t3530;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNode)
extern "C" void XmlNodeReader__ctor_m12113 (XmlNodeReader_t3381 * __this, XmlNode_t732 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNodeReaderImpl,System.Boolean)
extern "C" void XmlNodeReader__ctor_m13168 (XmlNodeReader_t3381 * __this, XmlNodeReaderImpl_t3530 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t3488 * XmlNodeReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m13169 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlNodeReader::get_Current()
extern "C" XmlReader_t3369 * XmlNodeReader_get_Current_m13170 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_AttributeCount()
extern "C" int32_t XmlNodeReader_get_AttributeCount_m13171 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_BaseURI()
extern "C" String_t* XmlNodeReader_get_BaseURI_m13172 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_CanResolveEntity()
extern "C" bool XmlNodeReader_get_CanResolveEntity_m13173 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_Depth()
extern "C" int32_t XmlNodeReader_get_Depth_m13174 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_EOF()
extern "C" bool XmlNodeReader_get_EOF_m13175 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasAttributes()
extern "C" bool XmlNodeReader_get_HasAttributes_m13176 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasValue()
extern "C" bool XmlNodeReader_get_HasValue_m13177 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsDefault()
extern "C" bool XmlNodeReader_get_IsDefault_m13178 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsEmptyElement()
extern "C" bool XmlNodeReader_get_IsEmptyElement_m13179 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_LocalName()
extern "C" String_t* XmlNodeReader_get_LocalName_m13180 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Name()
extern "C" String_t* XmlNodeReader_get_Name_m13181 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_NamespaceURI()
extern "C" String_t* XmlNodeReader_get_NamespaceURI_m13182 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReader::get_NameTable()
extern "C" XmlNameTable_t3459 * XmlNodeReader_get_NameTable_m13183 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReader::get_NodeType()
extern "C" int32_t XmlNodeReader_get_NodeType_m13184 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Prefix()
extern "C" String_t* XmlNodeReader_get_Prefix_m13185 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReader::get_ReadState()
extern "C" int32_t XmlNodeReader_get_ReadState_m13186 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReader::get_SchemaInfo()
extern "C" Object_t * XmlNodeReader_get_SchemaInfo_m13187 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Value()
extern "C" String_t* XmlNodeReader_get_Value_m13188 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_XmlLang()
extern "C" String_t* XmlNodeReader_get_XmlLang_m13189 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReader::get_XmlSpace()
extern "C" int32_t XmlNodeReader_get_XmlSpace_m13190 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Close()
extern "C" void XmlNodeReader_Close_m13191 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String)
extern "C" String_t* XmlNodeReader_GetAttribute_m13192 (XmlNodeReader_t3381 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlNodeReader_GetAttribute_m13193 (XmlNodeReader_t3381 * __this, String_t* ___name, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::LookupNamespace(System.String)
extern "C" String_t* XmlNodeReader_LookupNamespace_m13194 (XmlNodeReader_t3381 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::MoveToAttribute(System.Int32)
extern "C" void XmlNodeReader_MoveToAttribute_m13195 (XmlNodeReader_t3381 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String)
extern "C" bool XmlNodeReader_MoveToAttribute_m13196 (XmlNodeReader_t3381 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlNodeReader_MoveToAttribute_m13197 (XmlNodeReader_t3381 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToElement()
extern "C" bool XmlNodeReader_MoveToElement_m13198 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToFirstAttribute()
extern "C" bool XmlNodeReader_MoveToFirstAttribute_m13199 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToNextAttribute()
extern "C" bool XmlNodeReader_MoveToNextAttribute_m13200 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::Read()
extern "C" bool XmlNodeReader_Read_m13201 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::ReadAttributeValue()
extern "C" bool XmlNodeReader_ReadAttributeValue_m13202 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::ResolveEntity()
extern "C" void XmlNodeReader_ResolveEntity_m13203 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Skip()
extern "C" void XmlNodeReader_Skip_m13204 (XmlNodeReader_t3381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
