﻿#pragma once
#include <stdint.h>
// System.Collections.Stack
struct Stack_t1221;
// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t2076;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlParserInput
struct  XmlParserInput_t2025  : public Object_t
{
	// System.Collections.Stack System.Xml.XmlParserInput::sourceStack
	Stack_t1221 * ___sourceStack_0;
	// System.Xml.XmlParserInput/XmlParserInputSource System.Xml.XmlParserInput::source
	XmlParserInputSource_t2076 * ___source_1;
	// System.Boolean System.Xml.XmlParserInput::has_peek
	bool ___has_peek_2;
	// System.Int32 System.Xml.XmlParserInput::peek_char
	int32_t ___peek_char_3;
	// System.Boolean System.Xml.XmlParserInput::allowTextDecl
	bool ___allowTextDecl_4;
};