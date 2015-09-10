#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3480;
// System.Collections.ArrayList
struct ArrayList_t723;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDAttributeOccurenceType
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType.h"
// Mono.Xml.DTDAttributeDefinition
struct  DTDAttributeDefinition_t3481  : public DTDNode_t3470
{
	// System.String Mono.Xml.DTDAttributeDefinition::name
	String_t* ___name_5;
	// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::datatype
	XmlSchemaDatatype_t3480 * ___datatype_6;
	// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::enumeratedLiterals
	ArrayList_t723 * ___enumeratedLiterals_7;
	// System.String Mono.Xml.DTDAttributeDefinition::unresolvedDefault
	String_t* ___unresolvedDefault_8;
	// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::enumeratedNotations
	ArrayList_t723 * ___enumeratedNotations_9;
	// Mono.Xml.DTDAttributeOccurenceType Mono.Xml.DTDAttributeDefinition::occurenceType
	int32_t ___occurenceType_10;
	// System.String Mono.Xml.DTDAttributeDefinition::resolvedDefaultValue
	String_t* ___resolvedDefaultValue_11;
};
