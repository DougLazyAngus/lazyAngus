﻿#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3422;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// Mono.Xml.Schema.XsdValidationState
#include "System_Xml_Mono_Xml_Schema_XsdValidationState.h"
// Mono.Xml.Schema.XsdSequenceValidationState
struct  XsdSequenceValidationState_t3423  : public XsdValidationState_t3420
{
	// System.Xml.Schema.XmlSchemaSequence Mono.Xml.Schema.XsdSequenceValidationState::seq
	XmlSchemaSequence_t3422 * ___seq_3;
	// System.Int32 Mono.Xml.Schema.XsdSequenceValidationState::current
	int32_t ___current_4;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdSequenceValidationState::currentAutomata
	XsdValidationState_t3420 * ___currentAutomata_5;
	// System.Boolean Mono.Xml.Schema.XsdSequenceValidationState::emptiable
	bool ___emptiable_6;
};