#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t2338;
// System.Collections.Stack
struct Stack_t1219;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t2339  : public SmallXmlParser_t2340
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t2338 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t2338 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1219 * ___stack_15;
};
