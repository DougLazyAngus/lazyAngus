#pragma once
#include <stdint.h>
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1569;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t1587;
// System.String
struct String_t;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDElementDeclaration
struct  DTDElementDeclaration_t1588  : public DTDNode_t1579
{
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDElementDeclaration::root
	DTDObjectModel_t1569 * ___root_5;
	// Mono.Xml.DTDContentModel Mono.Xml.DTDElementDeclaration::contentModel
	DTDContentModel_t1587 * ___contentModel_6;
	// System.String Mono.Xml.DTDElementDeclaration::name
	String_t* ___name_7;
	// System.Boolean Mono.Xml.DTDElementDeclaration::isEmpty
	bool ___isEmpty_8;
	// System.Boolean Mono.Xml.DTDElementDeclaration::isAny
	bool ___isAny_9;
	// System.Boolean Mono.Xml.DTDElementDeclaration::isMixedContent
	bool ___isMixedContent_10;
};
