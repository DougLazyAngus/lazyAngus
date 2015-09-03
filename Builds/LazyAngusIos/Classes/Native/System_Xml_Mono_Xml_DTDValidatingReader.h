﻿#pragma once
#include <stdint.h>
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t3482;
// System.Xml.XmlTextReader
struct XmlTextReader_t3344;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t3483;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// System.Xml.XmlResolver
struct XmlResolver_t3433;
// System.String
struct String_t;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t3484;
// System.Collections.Stack
struct Stack_t2914;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3445;
// System.Collections.ArrayList
struct ArrayList_t712;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3485;
// System.Text.StringBuilder
struct StringBuilder_t261;
// System.Char[]
struct CharU5BU5D_t711;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// Mono.Xml.DTDValidatingReader
struct  DTDValidatingReader_t3486  : public XmlReader_t3368
{
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t3482 * ___reader_2;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t3344 * ___sourceTextReader_3;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t3483 * ___validatingReader_4;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t3443 * ___dtd_5;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_t3433 * ___resolver_6;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement_7;
	// Mono.Xml.DTDValidatingReader/AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t3484* ___attributes_8;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount_9;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute_10;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute_11;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t2914 * ___elementStack_12;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t2914 * ___automataStack_13;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope_14;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone_15;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t3445 * ___currentAutomata_16;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t3445 * ___previousAutomata_17;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t712 * ___idList_18;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t712 * ___missingIDReferences_19;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t3485 * ___nsmgr_20;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue_21;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue_22;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue_23;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace_24;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace_25;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText_26;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t2914 * ___attributeValueEntityStack_27;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t261 * ___valueBuilder_28;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t711* ___whitespaceChars_29;
};
struct DTDValidatingReader_t3486_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switch$map2A
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map2A_30;
};