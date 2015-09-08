#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3489;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t3405;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t3410;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaXPath
struct  XmlSchemaXPath_t3663  : public XmlSchemaAnnotated_t3632
{
	// System.String System.Xml.Schema.XmlSchemaXPath::xpath
	String_t* ___xpath_16;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.XmlSchemaXPath::nsmgr
	XmlNamespaceManager_t3489 * ___nsmgr_17;
	// System.Boolean System.Xml.Schema.XmlSchemaXPath::isSelector
	bool ___isSelector_18;
	// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::compiledExpression
	XsdIdentityPathU5BU5D_t3405* ___compiledExpression_19;
	// Mono.Xml.Schema.XsdIdentityPath System.Xml.Schema.XmlSchemaXPath::currentPath
	XsdIdentityPath_t3410 * ___currentPath_20;
};
struct XmlSchemaXPath_t3663_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaXPath::<>f__switch$map4A
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map4A_21;
};
