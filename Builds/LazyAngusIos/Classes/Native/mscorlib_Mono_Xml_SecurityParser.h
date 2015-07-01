#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t2293;
// System.Collections.Stack
struct Stack_t1171;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t2294  : public SmallXmlParser_t2295
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t2293 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t2293 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1171 * ___stack_15;
};
