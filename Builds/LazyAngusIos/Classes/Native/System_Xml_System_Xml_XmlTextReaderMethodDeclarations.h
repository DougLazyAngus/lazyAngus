#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextReader
struct XmlTextReader_t3355;
// System.Xml.XmlParserContext
struct XmlParserContext_t3498;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t3545;
// System.Xml.XmlResolver
struct XmlResolver_t3444;
// System.IO.Stream
struct Stream_t51;
// System.IO.TextReader
struct TextReader_t3383;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3551;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"

// System.Void System.Xml.XmlTextReader::.ctor(System.IO.Stream)
extern "C" void XmlTextReader__ctor_m12179 (XmlTextReader_t3355 * __this, Stream_t51 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern "C" void XmlTextReader__ctor_m12180 (XmlTextReader_t3355 * __this, TextReader_t3383 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13523 (XmlTextReader_t3355 * __this, TextReader_t3383 * ___input, XmlNameTable_t3469 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13524 (XmlTextReader_t3355 * __this, String_t* ___url, Stream_t51 * ___input, XmlNameTable_t3469 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13525 (XmlTextReader_t3355 * __this, String_t* ___url, TextReader_t3383 * ___input, XmlNameTable_t3469 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m13526 (XmlTextReader_t3355 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t3498 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C" void XmlTextReader__ctor_m13527 (XmlTextReader_t3355 * __this, XmlTextReader_t3551 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t3498 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m12283 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C" XmlReader_t3379 * XmlTextReader_get_Current_m13528 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m12240 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m12241 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C" bool XmlTextReader_get_CanResolveEntity_m12242 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m12243 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m12244 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_HasValue()
extern "C" bool XmlTextReader_get_HasValue_m12246 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m12248 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m12247 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m12251 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m12252 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m12253 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t3469 * XmlTextReader_get_NameTable_m12254 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m12255 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C" XmlParserContext_t3498 * XmlTextReader_get_ParserContext_m13529 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m12256 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m12257 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t3545 * XmlTextReader_get_Settings_m12259 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Value()
extern "C" String_t* XmlTextReader_get_Value_m12260 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_XmlLang()
extern "C" String_t* XmlTextReader_get_XmlLang_m12261 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m12262 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m13530 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m13531 (XmlTextReader_t3355 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m13532 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m13533 (XmlTextReader_t3355 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" void XmlTextReader_set_Conformance_m13534 (XmlTextReader_t3355 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t3444 * XmlTextReader_get_Resolver_m13535 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C" void XmlTextReader_CopyProperties_m13536 (XmlTextReader_t3355 * __this, XmlTextReader_t3355 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m13537 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m12284 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m12285 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
extern "C" bool XmlTextReader_get_Namespaces_m13538 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Normalization()
extern "C" bool XmlTextReader_get_Normalization_m13539 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m13540 (XmlTextReader_t3355 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C" int32_t XmlTextReader_get_WhitespaceHandling_m13541 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" void XmlTextReader_set_WhitespaceHandling_m13542 (XmlTextReader_t3355 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlTextReader_set_XmlResolver_m13543 (XmlTextReader_t3355 * __this, XmlResolver_t3444 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C" void XmlTextReader_SkipTextDeclaration_m13544 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m12263 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m12265 (XmlTextReader_t3355 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m12266 (XmlTextReader_t3355 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C" String_t* XmlTextReader_LookupNamespace_m12267 (XmlTextReader_t3355 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C" void XmlTextReader_MoveToAttribute_m12268 (XmlTextReader_t3355 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m12269 (XmlTextReader_t3355 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m12270 (XmlTextReader_t3355 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m12272 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m12273 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m12274 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m12275 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m12276 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C" void XmlTextReader_ResolveEntity_m12281 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C" void XmlTextReader_CloseEntity_m13545 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m12282 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C" TextReader_t3383 * XmlTextReader_GetRemainder_m13546 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::HasLineInfo()
extern "C" bool XmlTextReader_HasLineInfo_m12286 (XmlTextReader_t3355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
