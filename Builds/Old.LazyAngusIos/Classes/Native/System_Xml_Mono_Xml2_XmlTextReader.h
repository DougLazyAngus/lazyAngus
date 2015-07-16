#pragma once
#include <stdint.h>
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t2087;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct XmlAttributeTokenInfo_t2088;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[]
struct XmlAttributeTokenInfoU5BU5D_t2092;
// Mono.Xml2.XmlTextReader/XmlTokenInfo[]
struct XmlTokenInfoU5BU5D_t2093;
// System.Xml.XmlParserContext
struct XmlParserContext_t2075;
// System.Xml.XmlNameTable
struct XmlNameTable_t2006;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t2064;
// Mono.Xml2.XmlTextReader/TagName[]
struct TagNameU5BU5D_t2094;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t192;
// System.IO.TextReader
struct TextReader_t2059;
// System.Char[]
struct CharU5BU5D_t557;
// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t2082;
// System.Xml.XmlResolver
struct XmlResolver_t2005;
// System.Xml.NameTable
struct NameTable_t2030;
// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t2091;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t154;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// Mono.Xml2.XmlTextReader
struct  XmlTextReader_t2086  : public XmlReader_t2080
{
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::cursorToken
	XmlTokenInfo_t2087 * ___cursorToken_2;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentToken
	XmlTokenInfo_t2087 * ___currentToken_3;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo Mono.Xml2.XmlTextReader::currentAttributeToken
	XmlAttributeTokenInfo_t2088 * ___currentAttributeToken_4;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentAttributeValueToken
	XmlTokenInfo_t2087 * ___currentAttributeValueToken_5;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[] Mono.Xml2.XmlTextReader::attributeTokens
	XmlAttributeTokenInfoU5BU5D_t2092* ___attributeTokens_6;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo[] Mono.Xml2.XmlTextReader::attributeValueTokens
	XmlTokenInfoU5BU5D_t2093* ___attributeValueTokens_7;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttribute
	int32_t ___currentAttribute_8;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttributeValue
	int32_t ___currentAttributeValue_9;
	// System.Int32 Mono.Xml2.XmlTextReader::attributeCount
	int32_t ___attributeCount_10;
	// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::parserContext
	XmlParserContext_t2075 * ___parserContext_11;
	// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::nameTable
	XmlNameTable_t2006 * ___nameTable_12;
	// System.Xml.XmlNamespaceManager Mono.Xml2.XmlTextReader::nsmgr
	XmlNamespaceManager_t2064 * ___nsmgr_13;
	// System.Xml.ReadState Mono.Xml2.XmlTextReader::readState
	int32_t ___readState_14;
	// System.Boolean Mono.Xml2.XmlTextReader::disallowReset
	bool ___disallowReset_15;
	// System.Int32 Mono.Xml2.XmlTextReader::depth
	int32_t ___depth_16;
	// System.Int32 Mono.Xml2.XmlTextReader::elementDepth
	int32_t ___elementDepth_17;
	// System.Boolean Mono.Xml2.XmlTextReader::depthUp
	bool ___depthUp_18;
	// System.Boolean Mono.Xml2.XmlTextReader::popScope
	bool ___popScope_19;
	// Mono.Xml2.XmlTextReader/TagName[] Mono.Xml2.XmlTextReader::elementNames
	TagNameU5BU5D_t2094* ___elementNames_20;
	// System.Int32 Mono.Xml2.XmlTextReader::elementNameStackPos
	int32_t ___elementNameStackPos_21;
	// System.Boolean Mono.Xml2.XmlTextReader::allowMultipleRoot
	bool ___allowMultipleRoot_22;
	// System.Boolean Mono.Xml2.XmlTextReader::isStandalone
	bool ___isStandalone_23;
	// System.Boolean Mono.Xml2.XmlTextReader::returnEntityReference
	bool ___returnEntityReference_24;
	// System.String Mono.Xml2.XmlTextReader::entityReferenceName
	String_t* ___entityReferenceName_25;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader::valueBuffer
	StringBuilder_t192 * ___valueBuffer_26;
	// System.IO.TextReader Mono.Xml2.XmlTextReader::reader
	TextReader_t2059 * ___reader_27;
	// System.Char[] Mono.Xml2.XmlTextReader::peekChars
	CharU5BU5D_t557* ___peekChars_28;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsIndex
	int32_t ___peekCharsIndex_29;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsLength
	int32_t ___peekCharsLength_30;
	// System.Int32 Mono.Xml2.XmlTextReader::curNodePeekIndex
	int32_t ___curNodePeekIndex_31;
	// System.Boolean Mono.Xml2.XmlTextReader::preserveCurrentTag
	bool ___preserveCurrentTag_32;
	// System.Int32 Mono.Xml2.XmlTextReader::line
	int32_t ___line_33;
	// System.Int32 Mono.Xml2.XmlTextReader::column
	int32_t ___column_34;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber_35;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition_36;
	// System.Boolean Mono.Xml2.XmlTextReader::useProceedingLineInfo
	bool ___useProceedingLineInfo_37;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::startNodeType
	int32_t ___startNodeType_38;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::currentState
	int32_t ___currentState_39;
	// System.Int32 Mono.Xml2.XmlTextReader::nestLevel
	int32_t ___nestLevel_40;
	// System.Boolean Mono.Xml2.XmlTextReader::readCharsInProgress
	bool ___readCharsInProgress_41;
	// System.Xml.XmlReaderBinarySupport/CharGetter Mono.Xml2.XmlTextReader::binaryCharGetter
	CharGetter_t2082 * ___binaryCharGetter_42;
	// System.Boolean Mono.Xml2.XmlTextReader::namespaces
	bool ___namespaces_43;
	// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::whitespaceHandling
	int32_t ___whitespaceHandling_44;
	// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::resolver
	XmlResolver_t2005 * ___resolver_45;
	// System.Boolean Mono.Xml2.XmlTextReader::normalization
	bool ___normalization_46;
	// System.Boolean Mono.Xml2.XmlTextReader::checkCharacters
	bool ___checkCharacters_47;
	// System.Boolean Mono.Xml2.XmlTextReader::prohibitDtd
	bool ___prohibitDtd_48;
	// System.Boolean Mono.Xml2.XmlTextReader::closeInput
	bool ___closeInput_49;
	// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::entityHandling
	int32_t ___entityHandling_50;
	// System.Xml.NameTable Mono.Xml2.XmlTextReader::whitespacePool
	NameTable_t2030 * ___whitespacePool_51;
	// System.Char[] Mono.Xml2.XmlTextReader::whitespaceCache
	CharU5BU5D_t557* ___whitespaceCache_52;
	// Mono.Xml2.XmlTextReader/DtdInputStateStack Mono.Xml2.XmlTextReader::stateStack
	DtdInputStateStack_t2091 * ___stateStack_53;
};
struct XmlTextReader_t2086_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map51
	Dictionary_2_t154 * ___U3CU3Ef__switchU24map51_54;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map52
	Dictionary_2_t154 * ___U3CU3Ef__switchU24map52_55;
};
