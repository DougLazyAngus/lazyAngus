#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t4838;
// System.Collections.Stack
struct Stack_t2925;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t4839  : public SmallXmlParser_t4836
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t4838 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t4838 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2925 * ___stack_15;
};
