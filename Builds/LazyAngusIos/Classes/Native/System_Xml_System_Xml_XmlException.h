﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t45;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Xml.XmlException
struct  XmlException_t2029  : public SystemException_t1701
{
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_11;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_12;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_13;
	// System.String System.Xml.XmlException::res
	String_t* ___res_14;
	// System.String[] System.Xml.XmlException::messages
	StringU5BU5D_t45* ___messages_15;
};
