#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t2340;
// System.Collections.Stack
struct Stack_t1221;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t2341  : public SmallXmlParser_t2342
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t2340 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t2340 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1221 * ___stack_15;
};
