#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3540;
// System.Xml.XmlParserContext
struct XmlParserContext_t3487;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t3534;
// System.Xml.XmlResolver
struct XmlResolver_t3433;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// System.IO.TextReader
struct TextReader_t3372;
// System.IO.Stream
struct Stream_t51;
// System.Char[]
struct CharU5BU5D_t711;
// System.Xml.XmlException
struct XmlException_t3516;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t3541;
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState.h"

// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13334 (XmlTextReader_t3540 * __this, TextReader_t3372 * ___input, XmlNameTable_t3458 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m13335 (XmlTextReader_t3540 * __this, Stream_t51 * ___xmlFragment, int32_t ___fragType, XmlParserContext_t3487 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13336 (XmlTextReader_t3540 * __this, String_t* ___url, Stream_t51 * ___input, XmlNameTable_t3458 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13337 (XmlTextReader_t3540 * __this, String_t* ___url, TextReader_t3372 * ___input, XmlNameTable_t3458 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m13338 (XmlTextReader_t3540 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t3487 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m13339 (XmlTextReader_t3540 * __this, String_t* ___url, TextReader_t3372 * ___fragment, int32_t ___fragType, XmlParserContext_t3487 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t3487 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m13340 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m13341 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m13342 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m13343 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m13344 (XmlTextReader_t3540 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m13345 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m13346 (XmlTextReader_t3540 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m13347 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m13348 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m13349 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_HasValue()
extern "C" bool XmlTextReader_get_HasValue_m13350 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m13351 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m13352 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m13353 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m13354 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m13355 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m13356 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Namespaces()
extern "C" bool XmlTextReader_get_Namespaces_m13357 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m13358 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t3458 * XmlTextReader_get_NameTable_m13359 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m13360 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
extern "C" bool XmlTextReader_get_Normalization_m13361 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m13362 (XmlTextReader_t3540 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m13363 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m13364 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t3534 * XmlTextReader_get_Settings_m13365 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Value()
extern "C" String_t* XmlTextReader_get_Value_m13366 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
extern "C" int32_t XmlTextReader_get_WhitespaceHandling_m13367 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" void XmlTextReader_set_WhitespaceHandling_m13368 (XmlTextReader_t3540 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_XmlLang()
extern "C" String_t* XmlTextReader_get_XmlLang_m13369 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlTextReader_set_XmlResolver_m13370 (XmlTextReader_t3540 * __this, XmlResolver_t3433 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m13371 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m13372 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m13373 (XmlTextReader_t3540 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::GetIndexOfQualifiedAttribute(System.String,System.String)
extern "C" int32_t XmlTextReader_GetIndexOfQualifiedAttribute_m13374 (XmlTextReader_t3540 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m13375 (XmlTextReader_t3540 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern "C" TextReader_t3372 * XmlTextReader_GetRemainder_m13376 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::HasLineInfo()
extern "C" bool XmlTextReader_HasLineInfo_m13377 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String)
extern "C" String_t* XmlTextReader_LookupNamespace_m13378 (XmlTextReader_t3540 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String,System.Boolean)
extern "C" String_t* XmlTextReader_LookupNamespace_m13379 (XmlTextReader_t3540 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32)
extern "C" void XmlTextReader_MoveToAttribute_m13380 (XmlTextReader_t3540 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m13381 (XmlTextReader_t3540 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m13382 (XmlTextReader_t3540 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m13383 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m13384 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m13385 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m13386 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m13387 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChars(System.Char[],System.Int32,System.Int32)
extern "C" int32_t XmlTextReader_ReadChars_m13388 (XmlTextReader_t3540 * __this, CharU5BU5D_t711* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ResolveEntity()
extern "C" void XmlTextReader_ResolveEntity_m13389 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m13390 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::get_DTD()
extern "C" DTDObjectModel_t3443 * XmlTextReader_get_DTD_m13391 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t3433 * XmlTextReader_get_Resolver_m13392 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml2.XmlTextReader::NotWFError(System.String)
extern "C" XmlException_t3516 * XmlTextReader_NotWFError_m13393 (XmlTextReader_t3540 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Init()
extern "C" void XmlTextReader_Init_m13394 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Clear()
extern "C" void XmlTextReader_Clear_m13395 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::InitializeContext(System.String,System.Xml.XmlParserContext,System.IO.TextReader,System.Xml.XmlNodeType)
extern "C" void XmlTextReader_InitializeContext_m13396 (XmlTextReader_t3540 * __this, String_t* ___url, XmlParserContext_t3487 * ___context, TextReader_t3372 * ___fragment, int32_t ___fragType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel Mono.Xml2.XmlTextReader::get_Conformance()
extern "C" int32_t XmlTextReader_get_Conformance_m13397 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" void XmlTextReader_set_Conformance_m13398 (XmlTextReader_t3540 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetProperties(System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C" void XmlTextReader_SetProperties_m13399 (XmlTextReader_t3540 * __this, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetTokenProperties(Mono.Xml2.XmlTextReader/XmlTokenInfo,System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C" void XmlTextReader_SetTokenProperties_m13400 (XmlTextReader_t3540 * __this, XmlTokenInfo_t3541 * ___token, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearAttributes()
extern "C" void XmlTextReader_ClearAttributes_m13401 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekSurrogate(System.Int32)
extern "C" int32_t XmlTextReader_PeekSurrogate_m13402 (XmlTextReader_t3540 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekChar()
extern "C" int32_t XmlTextReader_PeekChar_m13403 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChar()
extern "C" int32_t XmlTextReader_ReadChar_m13404 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Advance(System.Int32)
extern "C" void XmlTextReader_Advance_m13405 (XmlTextReader_t3540 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadTextReader(System.Int32)
extern "C" bool XmlTextReader_ReadTextReader_m13406 (XmlTextReader_t3540 * __this, int32_t ___remained, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadContent()
extern "C" bool XmlTextReader_ReadContent_m13407 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetEntityReferenceProperties()
extern "C" void XmlTextReader_SetEntityReferenceProperties_m13408 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadStartTag()
extern "C" void XmlTextReader_ReadStartTag_m13409 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::PushElementName(System.String,System.String,System.String)
extern "C" void XmlTextReader_PushElementName_m13410 (XmlTextReader_t3540 * __this, String_t* ___name, String_t* ___local, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadEndTag()
extern "C" void XmlTextReader_ReadEndTag_m13411 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckCurrentStateUpdate()
extern "C" void XmlTextReader_CheckCurrentStateUpdate_m13412 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendValueChar(System.Int32)
extern "C" void XmlTextReader_AppendValueChar_m13413 (XmlTextReader_t3540 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendSurrogatePairValueChar(System.Int32)
extern "C" void XmlTextReader_AppendSurrogatePairValueChar_m13414 (XmlTextReader_t3540 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::CreateValueString()
extern "C" String_t* XmlTextReader_CreateValueString_m13415 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearValueBuffer()
extern "C" void XmlTextReader_ClearValueBuffer_m13416 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadText(System.Boolean)
extern "C" void XmlTextReader_ReadText_m13417 (XmlTextReader_t3540 * __this, bool ___notWhitespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadReference(System.Boolean)
extern "C" int32_t XmlTextReader_ReadReference_m13418 (XmlTextReader_t3540 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharacterReference()
extern "C" int32_t XmlTextReader_ReadCharacterReference_m13419 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadEntityReference(System.Boolean)
extern "C" int32_t XmlTextReader_ReadEntityReference_m13420 (XmlTextReader_t3540 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributes(System.Boolean)
extern "C" void XmlTextReader_ReadAttributes_m13421 (XmlTextReader_t3540 * __this, bool ___isXmlDecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AddAttributeWithValue(System.String,System.String)
extern "C" void XmlTextReader_AddAttributeWithValue_m13422 (XmlTextReader_t3540 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeToken()
extern "C" void XmlTextReader_IncrementAttributeToken_m13423 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeValueToken()
extern "C" void XmlTextReader_IncrementAttributeValueToken_m13424 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributeValueTokens(System.Int32)
extern "C" void XmlTextReader_ReadAttributeValueTokens_m13425 (XmlTextReader_t3540 * __this, int32_t ___dummyQuoteChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckAttributeEntityReferenceWFC(System.String)
extern "C" void XmlTextReader_CheckAttributeEntityReferenceWFC_m13426 (XmlTextReader_t3540 * __this, String_t* ___entName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadProcessingInstruction()
extern "C" void XmlTextReader_ReadProcessingInstruction_m13427 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::VerifyXmlDeclaration()
extern "C" void XmlTextReader_VerifyXmlDeclaration_m13428 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespaceInString(System.String,System.Int32&)
extern "C" bool XmlTextReader_SkipWhitespaceInString_m13429 (XmlTextReader_t3540 * __this, String_t* ___text, int32_t* ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ParseAttributeFromString(System.String,System.Int32&,System.String&,System.String&)
extern "C" void XmlTextReader_ParseAttributeFromString_m13430 (XmlTextReader_t3540 * __this, String_t* ___src, int32_t* ___idx, String_t** ___name, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern "C" void XmlTextReader_SkipTextDeclaration_m13431 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDeclaration()
extern "C" void XmlTextReader_ReadDeclaration_m13432 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadComment()
extern "C" void XmlTextReader_ReadComment_m13433 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadCDATA()
extern "C" void XmlTextReader_ReadCDATA_m13434 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDoctypeDecl()
extern "C" void XmlTextReader_ReadDoctypeDecl_m13435 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
extern "C" DTDObjectModel_t3443 * XmlTextReader_GenerateDTDObjectModel_m13436 (XmlTextReader_t3540 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String,System.Int32,System.Int32)
extern "C" DTDObjectModel_t3443 * XmlTextReader_GenerateDTDObjectModel_m13437 (XmlTextReader_t3540 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, int32_t ___intSubsetStartLine, int32_t ___intSubsetStartColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader::get_State()
extern "C" int32_t XmlTextReader_get_State_m13438 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadValueChar()
extern "C" int32_t XmlTextReader_ReadValueChar_m13439 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAndAppend(System.String)
extern "C" void XmlTextReader_ExpectAndAppend_m13440 (XmlTextReader_t3540 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadInternalSubset()
extern "C" void XmlTextReader_ReadInternalSubset_m13441 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadSystemLiteral(System.Boolean)
extern "C" String_t* XmlTextReader_ReadSystemLiteral_m13442 (XmlTextReader_t3540 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadPubidLiteral()
extern "C" String_t* XmlTextReader_ReadPubidLiteral_m13443 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName()
extern "C" String_t* XmlTextReader_ReadName_m13444 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName(System.String&,System.String&)
extern "C" String_t* XmlTextReader_ReadName_m13445 (XmlTextReader_t3540 * __this, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.Int32)
extern "C" void XmlTextReader_Expect_m13446 (XmlTextReader_t3540 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.String)
extern "C" void XmlTextReader_Expect_m13447 (XmlTextReader_t3540 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAfterWhitespace(System.Char)
extern "C" void XmlTextReader_ExpectAfterWhitespace_m13448 (XmlTextReader_t3540 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespace()
extern "C" bool XmlTextReader_SkipWhitespace_m13449 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadWhitespace()
extern "C" bool XmlTextReader_ReadWhitespace_m13450 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharsInternal(System.Char[],System.Int32,System.Int32)
extern "C" int32_t XmlTextReader_ReadCharsInternal_m13451 (XmlTextReader_t3540 * __this, CharU5BU5D_t711* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadUntilEndTag()
extern "C" bool XmlTextReader_ReadUntilEndTag_m13452 (XmlTextReader_t3540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
