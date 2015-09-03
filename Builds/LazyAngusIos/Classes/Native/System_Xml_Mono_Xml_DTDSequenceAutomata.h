#pragma once
#include <stdint.h>
// Mono.Xml.DTDAutomata
struct DTDAutomata_t3445;
// Mono.Xml.DTDAutomata
#include "System_Xml_Mono_Xml_DTDAutomata.h"
// Mono.Xml.DTDSequenceAutomata
struct  DTDSequenceAutomata_t3448  : public DTDAutomata_t3445
{
	// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::left
	DTDAutomata_t3445 * ___left_1;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDSequenceAutomata::right
	DTDAutomata_t3445 * ___right_2;
	// System.Boolean Mono.Xml.DTDSequenceAutomata::hasComputedEmptiable
	bool ___hasComputedEmptiable_3;
	// System.Boolean Mono.Xml.DTDSequenceAutomata::cachedEmptiable
	bool ___cachedEmptiable_4;
};
