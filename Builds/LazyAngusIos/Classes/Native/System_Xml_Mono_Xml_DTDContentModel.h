#pragma once
#include <stdint.h>
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3447;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3449;
// System.String
struct String_t;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t3470;
// Mono.Xml.DTDNode
#include "System_Xml_Mono_Xml_DTDNode.h"
// Mono.Xml.DTDContentOrderType
#include "System_Xml_Mono_Xml_DTDContentOrderType.h"
// Mono.Xml.DTDOccurence
#include "System_Xml_Mono_Xml_DTDOccurence.h"
// Mono.Xml.DTDContentModel
struct  DTDContentModel_t3471  : public DTDNode_t3463
{
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDContentModel::root
	DTDObjectModel_t3447 * ___root_5;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDContentModel::compiledAutomata
	DTDAutomata_t3449 * ___compiledAutomata_6;
	// System.String Mono.Xml.DTDContentModel::ownerElementName
	String_t* ___ownerElementName_7;
	// System.String Mono.Xml.DTDContentModel::elementName
	String_t* ___elementName_8;
	// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::orderType
	int32_t ___orderType_9;
	// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::childModels
	DTDContentModelCollection_t3470 * ___childModels_10;
	// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::occurence
	int32_t ___occurence_11;
};
