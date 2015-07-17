#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t2392;
// System.Collections.Stack
struct Stack_t1273;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t2393  : public SmallXmlParser_t2394
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t2392 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t2392 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1273 * ___stack_15;
};
