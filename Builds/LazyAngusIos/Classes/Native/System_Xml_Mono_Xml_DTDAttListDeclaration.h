﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1413;
// System.Collections.ArrayList
struct ArrayList_t1426;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDAttListDeclaration
struct  DTDAttListDeclaration_t1993  : public DTDNode_t1982
{
	// System.String Mono.Xml.DTDAttListDeclaration::name
	String_t* ___name_5;
	// System.Collections.Hashtable Mono.Xml.DTDAttListDeclaration::attributeOrders
	Hashtable_t1413 * ___attributeOrders_6;
	// System.Collections.ArrayList Mono.Xml.DTDAttListDeclaration::attributes
	ArrayList_t1426 * ___attributes_7;
};