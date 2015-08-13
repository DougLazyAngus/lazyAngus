#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t696;
// System.Collections.ArrayList
struct ArrayList_t698;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDAttListDeclaration
struct  DTDAttListDeclaration_t3193  : public DTDNode_t3182
{
	// System.String Mono.Xml.DTDAttListDeclaration::name
	String_t* ___name_5;
	// System.Collections.Hashtable Mono.Xml.DTDAttListDeclaration::attributeOrders
	Hashtable_t696 * ___attributeOrders_6;
	// System.Collections.ArrayList Mono.Xml.DTDAttListDeclaration::attributes
	ArrayList_t698 * ___attributes_7;
};
