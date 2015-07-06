#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader
struct XmlTextReader_t2061;
// System.Xml.XmlParserContext
struct XmlParserContext_t2050;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1981;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2054;
// System.Xml.XmlResolver
struct XmlResolver_t1980;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1973;
// System.IO.TextReader
struct TextReader_t2034;
// System.IO.Stream
struct Stream_t24;
// System.Char[]
struct CharU5BU5D_t536;
// System.Xml.XmlException
struct XmlException_t2029;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t2062;
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
extern "C" void XmlTextReader__ctor_m9875 (XmlTextReader_t2061 * __this, TextReader_t2034 * ___input, XmlNameTable_t1981 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.IO.Stream,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m9876 (XmlTextReader_t2061 * __this, Stream_t24 * ___xmlFragment, int32_t ___fragType, XmlParserContext_t2050 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m9877 (XmlTextReader_t2061 * __this, String_t* ___url, Stream_t24 * ___input, XmlNameTable_t1981 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m9878 (XmlTextReader_t2061 * __this, String_t* ___url, TextReader_t2034 * ___input, XmlNameTable_t1981 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m9879 (XmlTextReader_t2061 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t2050 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m9880 (XmlTextReader_t2061 * __this, String_t* ___url, TextReader_t2034 * ___fragment, int32_t ___fragType, XmlParserContext_t2050 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t2050 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m9881 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m9882 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m9883 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m9884 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m9885 (XmlTextReader_t2061 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m9886 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m9887 (XmlTextReader_t2061 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m9888 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m9889 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m9890 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m9891 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m9892 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m9893 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m9894 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m9895 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m9896 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m9897 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t1981 * XmlTextReader_get_NameTable_m9898 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m9899 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::get_Normalization()
extern "C" bool XmlTextReader_get_Normalization_m9900 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m9901 (XmlTextReader_t2061 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m9902 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m9903 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings Mono.Xml2.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t2054 * XmlTextReader_get_Settings_m9904 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::get_Value()
extern "C" String_t* XmlTextReader_get_Value_m9905 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
extern "C" int32_t XmlTextReader_get_WhitespaceHandling_m9906 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" void XmlTextReader_set_WhitespaceHandling_m9907 (XmlTextReader_t2061 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlTextReader_set_XmlResolver_m9908 (XmlTextReader_t2061 * __this, XmlResolver_t1980 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml2.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m9909 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m9910 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::GetAttribute(System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m9911 (XmlTextReader_t2061 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::GetIndexOfQualifiedAttribute(System.String,System.String)
extern "C" int32_t XmlTextReader_GetIndexOfQualifiedAttribute_m9912 (XmlTextReader_t2061 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern "C" TextReader_t2034 * XmlTextReader_GetRemainder_m9913 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::LookupNamespace(System.String,System.Boolean)
extern "C" String_t* XmlTextReader_LookupNamespace_m9914 (XmlTextReader_t2061 * __this, String_t* ___prefix, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::MoveToAttribute(System.Int32)
extern "C" void XmlTextReader_MoveToAttribute_m9915 (XmlTextReader_t2061 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m9916 (XmlTextReader_t2061 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m9917 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m9918 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m9919 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m9920 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m9921 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChars(System.Char[],System.Int32,System.Int32)
extern "C" int32_t XmlTextReader_ReadChars_m9922 (XmlTextReader_t2061 * __this, CharU5BU5D_t536* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ResolveEntity()
extern "C" void XmlTextReader_ResolveEntity_m9923 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m9924 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::get_DTD()
extern "C" DTDObjectModel_t1973 * XmlTextReader_get_DTD_m9925 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t1980 * XmlTextReader_get_Resolver_m9926 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException Mono.Xml2.XmlTextReader::NotWFError(System.String)
extern "C" XmlException_t2029 * XmlTextReader_NotWFError_m9927 (XmlTextReader_t2061 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Init()
extern "C" void XmlTextReader_Init_m9928 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Clear()
extern "C" void XmlTextReader_Clear_m9929 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::InitializeContext(System.String,System.Xml.XmlParserContext,System.IO.TextReader,System.Xml.XmlNodeType)
extern "C" void XmlTextReader_InitializeContext_m9930 (XmlTextReader_t2061 * __this, String_t* ___url, XmlParserContext_t2050 * ___context, TextReader_t2034 * ___fragment, int32_t ___fragType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ConformanceLevel Mono.Xml2.XmlTextReader::get_Conformance()
extern "C" int32_t XmlTextReader_get_Conformance_m9931 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" void XmlTextReader_set_Conformance_m9932 (XmlTextReader_t2061 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetProperties(System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C" void XmlTextReader_SetProperties_m9933 (XmlTextReader_t2061 * __this, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetTokenProperties(Mono.Xml2.XmlTextReader/XmlTokenInfo,System.Xml.XmlNodeType,System.String,System.String,System.String,System.Boolean,System.String,System.Boolean)
extern "C" void XmlTextReader_SetTokenProperties_m9934 (XmlTextReader_t2061 * __this, XmlTokenInfo_t2062 * ___token, int32_t ___nodeType, String_t* ___name, String_t* ___prefix, String_t* ___localName, bool ___isEmptyElement, String_t* ___value, bool ___clearAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearAttributes()
extern "C" void XmlTextReader_ClearAttributes_m9935 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekSurrogate(System.Int32)
extern "C" int32_t XmlTextReader_PeekSurrogate_m9936 (XmlTextReader_t2061 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::PeekChar()
extern "C" int32_t XmlTextReader_PeekChar_m9937 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadChar()
extern "C" int32_t XmlTextReader_ReadChar_m9938 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Advance(System.Int32)
extern "C" void XmlTextReader_Advance_m9939 (XmlTextReader_t2061 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadTextReader(System.Int32)
extern "C" bool XmlTextReader_ReadTextReader_m9940 (XmlTextReader_t2061 * __this, int32_t ___remained, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadContent()
extern "C" bool XmlTextReader_ReadContent_m9941 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SetEntityReferenceProperties()
extern "C" void XmlTextReader_SetEntityReferenceProperties_m9942 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadStartTag()
extern "C" void XmlTextReader_ReadStartTag_m9943 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::PushElementName(System.String,System.String,System.String)
extern "C" void XmlTextReader_PushElementName_m9944 (XmlTextReader_t2061 * __this, String_t* ___name, String_t* ___local, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadEndTag()
extern "C" void XmlTextReader_ReadEndTag_m9945 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckCurrentStateUpdate()
extern "C" void XmlTextReader_CheckCurrentStateUpdate_m9946 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendValueChar(System.Int32)
extern "C" void XmlTextReader_AppendValueChar_m9947 (XmlTextReader_t2061 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AppendSurrogatePairValueChar(System.Int32)
extern "C" void XmlTextReader_AppendSurrogatePairValueChar_m9948 (XmlTextReader_t2061 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::CreateValueString()
extern "C" String_t* XmlTextReader_CreateValueString_m9949 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ClearValueBuffer()
extern "C" void XmlTextReader_ClearValueBuffer_m9950 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadText(System.Boolean)
extern "C" void XmlTextReader_ReadText_m9951 (XmlTextReader_t2061 * __this, bool ___notWhitespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadReference(System.Boolean)
extern "C" int32_t XmlTextReader_ReadReference_m9952 (XmlTextReader_t2061 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharacterReference()
extern "C" int32_t XmlTextReader_ReadCharacterReference_m9953 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadEntityReference(System.Boolean)
extern "C" int32_t XmlTextReader_ReadEntityReference_m9954 (XmlTextReader_t2061 * __this, bool ___ignoreEntityReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributes(System.Boolean)
extern "C" void XmlTextReader_ReadAttributes_m9955 (XmlTextReader_t2061 * __this, bool ___isXmlDecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::AddAttributeWithValue(System.String,System.String)
extern "C" void XmlTextReader_AddAttributeWithValue_m9956 (XmlTextReader_t2061 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeToken()
extern "C" void XmlTextReader_IncrementAttributeToken_m9957 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::IncrementAttributeValueToken()
extern "C" void XmlTextReader_IncrementAttributeValueToken_m9958 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadAttributeValueTokens(System.Int32)
extern "C" void XmlTextReader_ReadAttributeValueTokens_m9959 (XmlTextReader_t2061 * __this, int32_t ___dummyQuoteChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::CheckAttributeEntityReferenceWFC(System.String)
extern "C" void XmlTextReader_CheckAttributeEntityReferenceWFC_m9960 (XmlTextReader_t2061 * __this, String_t* ___entName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadProcessingInstruction()
extern "C" void XmlTextReader_ReadProcessingInstruction_m9961 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::VerifyXmlDeclaration()
extern "C" void XmlTextReader_VerifyXmlDeclaration_m9962 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespaceInString(System.String,System.Int32&)
extern "C" bool XmlTextReader_SkipWhitespaceInString_m9963 (XmlTextReader_t2061 * __this, String_t* ___text, int32_t* ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ParseAttributeFromString(System.String,System.Int32&,System.String&,System.String&)
extern "C" void XmlTextReader_ParseAttributeFromString_m9964 (XmlTextReader_t2061 * __this, String_t* ___src, int32_t* ___idx, String_t** ___name, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern "C" void XmlTextReader_SkipTextDeclaration_m9965 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDeclaration()
extern "C" void XmlTextReader_ReadDeclaration_m9966 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadComment()
extern "C" void XmlTextReader_ReadComment_m9967 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadCDATA()
extern "C" void XmlTextReader_ReadCDATA_m9968 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadDoctypeDecl()
extern "C" void XmlTextReader_ReadDoctypeDecl_m9969 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String)
extern "C" DTDObjectModel_t1973 * XmlTextReader_GenerateDTDObjectModel_m9970 (XmlTextReader_t2061 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml2.XmlTextReader::GenerateDTDObjectModel(System.String,System.String,System.String,System.String,System.Int32,System.Int32)
extern "C" DTDObjectModel_t1973 * XmlTextReader_GenerateDTDObjectModel_m9971 (XmlTextReader_t2061 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, int32_t ___intSubsetStartLine, int32_t ___intSubsetStartColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader::get_State()
extern "C" int32_t XmlTextReader_get_State_m9972 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadValueChar()
extern "C" int32_t XmlTextReader_ReadValueChar_m9973 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAndAppend(System.String)
extern "C" void XmlTextReader_ExpectAndAppend_m9974 (XmlTextReader_t2061 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ReadInternalSubset()
extern "C" void XmlTextReader_ReadInternalSubset_m9975 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadSystemLiteral(System.Boolean)
extern "C" String_t* XmlTextReader_ReadSystemLiteral_m9976 (XmlTextReader_t2061 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadPubidLiteral()
extern "C" String_t* XmlTextReader_ReadPubidLiteral_m9977 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName()
extern "C" String_t* XmlTextReader_ReadName_m9978 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml2.XmlTextReader::ReadName(System.String&,System.String&)
extern "C" String_t* XmlTextReader_ReadName_m9979 (XmlTextReader_t2061 * __this, String_t** ___prefix, String_t** ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.Int32)
extern "C" void XmlTextReader_Expect_m9980 (XmlTextReader_t2061 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::Expect(System.String)
extern "C" void XmlTextReader_Expect_m9981 (XmlTextReader_t2061 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader::ExpectAfterWhitespace(System.Char)
extern "C" void XmlTextReader_ExpectAfterWhitespace_m9982 (XmlTextReader_t2061 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::SkipWhitespace()
extern "C" bool XmlTextReader_SkipWhitespace_m9983 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadWhitespace()
extern "C" bool XmlTextReader_ReadWhitespace_m9984 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml2.XmlTextReader::ReadCharsInternal(System.Char[],System.Int32,System.Int32)
extern "C" int32_t XmlTextReader_ReadCharsInternal_m9985 (XmlTextReader_t2061 * __this, CharU5BU5D_t536* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml2.XmlTextReader::ReadUntilEndTag()
extern "C" bool XmlTextReader_ReadUntilEndTag_m9986 (XmlTextReader_t2061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
