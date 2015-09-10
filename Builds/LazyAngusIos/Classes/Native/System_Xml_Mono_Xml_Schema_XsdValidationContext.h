#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t3431;
// System.Collections.Stack
struct Stack_t2925;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Xml.Schema.XsdValidationContext
struct  XsdValidationContext_t3428  : public Object_t
{
	// System.Object Mono.Xml.Schema.XsdValidationContext::xsi_type
	Object_t * ___xsi_type_0;
	// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdValidationContext::State
	XsdValidationState_t3431 * ___State_1;
	// System.Collections.Stack Mono.Xml.Schema.XsdValidationContext::element_stack
	Stack_t2925 * ___element_stack_2;
};
