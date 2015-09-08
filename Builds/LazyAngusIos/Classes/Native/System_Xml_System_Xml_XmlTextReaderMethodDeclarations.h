#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextReader
struct XmlTextReader_t3348;
// System.Xml.XmlParserContext
struct XmlParserContext_t3491;
// System.Xml.XmlReader
struct XmlReader_t3372;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3462;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t3538;
// System.Xml.XmlResolver
struct XmlResolver_t3437;
// System.IO.Stream
struct Stream_t51;
// System.IO.TextReader
struct TextReader_t3376;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3544;
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
extern "C" void XmlTextReader__ctor_m12122 (XmlTextReader_t3348 * __this, Stream_t51 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern "C" void XmlTextReader__ctor_m12123 (XmlTextReader_t3348 * __this, TextReader_t3376 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13466 (XmlTextReader_t3348 * __this, TextReader_t3376 * ___input, XmlNameTable_t3462 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13467 (XmlTextReader_t3348 * __this, String_t* ___url, Stream_t51 * ___input, XmlNameTable_t3462 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13468 (XmlTextReader_t3348 * __this, String_t* ___url, TextReader_t3376 * ___input, XmlNameTable_t3462 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m13469 (XmlTextReader_t3348 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t3491 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C" void XmlTextReader__ctor_m13470 (XmlTextReader_t3348 * __this, XmlTextReader_t3544 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t3491 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m12226 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C" XmlReader_t3372 * XmlTextReader_get_Current_m13471 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m12183 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m12184 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C" bool XmlTextReader_get_CanResolveEntity_m12185 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m12186 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m12187 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_HasValue()
extern "C" bool XmlTextReader_get_HasValue_m12189 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m12191 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m12190 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m12194 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m12195 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m12196 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t3462 * XmlTextReader_get_NameTable_m12197 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m12198 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C" XmlParserContext_t3491 * XmlTextReader_get_ParserContext_m13472 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m12199 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m12200 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t3538 * XmlTextReader_get_Settings_m12202 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Value()
extern "C" String_t* XmlTextReader_get_Value_m12203 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_XmlLang()
extern "C" String_t* XmlTextReader_get_XmlLang_m12204 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m12205 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m13473 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m13474 (XmlTextReader_t3348 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m13475 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m13476 (XmlTextReader_t3348 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" void XmlTextReader_set_Conformance_m13477 (XmlTextReader_t3348 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t3437 * XmlTextReader_get_Resolver_m13478 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C" void XmlTextReader_CopyProperties_m13479 (XmlTextReader_t3348 * __this, XmlTextReader_t3348 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m13480 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m12227 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m12228 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Namespaces()
extern "C" bool XmlTextReader_get_Namespaces_m13481 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_Normalization()
extern "C" bool XmlTextReader_get_Normalization_m13482 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m13483 (XmlTextReader_t3348 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C" int32_t XmlTextReader_get_WhitespaceHandling_m13484 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" void XmlTextReader_set_WhitespaceHandling_m13485 (XmlTextReader_t3348 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlTextReader_set_XmlResolver_m13486 (XmlTextReader_t3348 * __this, XmlResolver_t3437 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C" void XmlTextReader_SkipTextDeclaration_m13487 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m12206 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m12208 (XmlTextReader_t3348 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m12209 (XmlTextReader_t3348 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C" String_t* XmlTextReader_LookupNamespace_m12210 (XmlTextReader_t3348 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C" void XmlTextReader_MoveToAttribute_m12211 (XmlTextReader_t3348 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m12212 (XmlTextReader_t3348 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m12213 (XmlTextReader_t3348 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m12215 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m12216 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m12217 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m12218 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m12219 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C" void XmlTextReader_ResolveEntity_m12224 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C" void XmlTextReader_CloseEntity_m13488 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m12225 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C" TextReader_t3376 * XmlTextReader_GetRemainder_m13489 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::HasLineInfo()
extern "C" bool XmlTextReader_HasLineInfo_m12229 (XmlTextReader_t3348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
