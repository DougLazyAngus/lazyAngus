#pragma once
#include <stdint.h>
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3449;
// Mono.Xml.DTDAutomata
#include "System_Xml_Mono_Xml_DTDAutomata.h"
// Mono.Xml.DTDSequenceAutomata
struct  DTDSequenceAutomata_t3452  : public DTDAutomata_t3449
{
	// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::left
	DTDAutomata_t3449 * ___left_1;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::right
	DTDAutomata_t3449 * ___right_2;
	// System.Boolean Mono.Xml.DTDSequenceAutomata::hasComputedEmptiable
	bool ___hasComputedEmptiable_3;
	// System.Boolean Mono.Xml.DTDSequenceAutomata::cachedEmptiable
	bool ___cachedEmptiable_4;
};
