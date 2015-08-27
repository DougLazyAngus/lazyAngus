#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t4424;
// System.Collections.Stack
struct Stack_t2898;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t4425  : public SmallXmlParser_t4426
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t4424 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t4424 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2898 * ___stack_15;
};
