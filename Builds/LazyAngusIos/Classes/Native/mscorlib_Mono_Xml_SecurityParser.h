#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t4375;
// System.Collections.Stack
struct Stack_t2845;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t4376  : public SmallXmlParser_t4377
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t4375 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t4375 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2845 * ___stack_15;
};
