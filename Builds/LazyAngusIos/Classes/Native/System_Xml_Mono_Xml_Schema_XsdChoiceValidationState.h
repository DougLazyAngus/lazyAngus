#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3424;
// Mono.Xml.Schema.XsdValidationState
#include "System_Xml_Mono_Xml_Schema_XsdValidationState.h"
// Mono.Xml.Schema.XsdChoiceValidationState
struct  XsdChoiceValidationState_t3425  : public XsdValidationState_t3420
{
	// System.Xml.Schema.XmlSchemaChoice Mono.Xml.Schema.XsdChoiceValidationState::choice
	XmlSchemaChoice_t3424 * ___choice_3;
	// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::emptiable
	bool ___emptiable_4;
	// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::emptiableComputed
	bool ___emptiableComputed_5;
};
