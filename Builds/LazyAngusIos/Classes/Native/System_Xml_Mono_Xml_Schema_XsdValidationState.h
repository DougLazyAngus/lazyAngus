#pragma once
#include <stdint.h>
// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t3419;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t3418;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdValidationState
struct  XsdValidationState_t3420  : public Object_t
{
	// System.Int32 Mono.Xml.Schema.XsdValidationState::occured
	int32_t ___occured_1;
	// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::manager
	XsdParticleStateManager_t3418 * ___manager_2;
};
struct XsdValidationState_t3420_StaticFields{
	// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::invalid
	XsdInvalidValidationState_t3419 * ___invalid_0;
};
