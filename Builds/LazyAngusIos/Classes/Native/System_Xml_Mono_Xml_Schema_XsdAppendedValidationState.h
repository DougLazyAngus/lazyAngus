﻿#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3420;
// Mono.Xml.Schema.XsdValidationState
#include "System_Xml_Mono_Xml_Schema_XsdValidationState.h"
// Mono.Xml.Schema.XsdAppendedValidationState
struct  XsdAppendedValidationState_t3430  : public XsdValidationState_t3420
{
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::head
	XsdValidationState_t3420 * ___head_3;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::rest
	XsdValidationState_t3420 * ___rest_4;
};