#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t4440;
// System.Collections.Stack
struct Stack_t2914;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t4441  : public SmallXmlParser_t4442
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t4440 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t4440 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t2914 * ___stack_15;
};
