#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1274;
// System.Collections.ArrayList
struct ArrayList_t3109;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDAttListDeclaration
struct  DTDAttListDeclaration_t3143  : public DTDNode_t3132
{
	// System.String Mono.Xml.DTDAttListDeclaration::name
	String_t* ___name_5;
	// System.Collections.Hashtable Mono.Xml.DTDAttListDeclaration::attributeOrders
	Hashtable_t1274 * ___attributeOrders_6;
	// System.Collections.ArrayList Mono.Xml.DTDAttListDeclaration::attributes
	ArrayList_t3109 * ___attributes_7;
};
