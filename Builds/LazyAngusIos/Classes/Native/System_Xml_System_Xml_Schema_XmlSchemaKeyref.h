#pragma once
#include <stdint.h>
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3419;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3418;
// System.Xml.Schema.XmlSchemaIdentityConstraint
#include "System_Xml_System_Xml_Schema_XmlSchemaIdentityConstraint.h"
// System.Xml.Schema.XmlSchemaKeyref
struct  XmlSchemaKeyref_t3668  : public XmlSchemaIdentityConstraint_t3418
{
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaKeyref::refer
	XmlQualifiedName_t3419 * ___refer_21;
	// System.Xml.Schema.XmlSchemaIdentityConstraint System.Xml.Schema.XmlSchemaKeyref::target
	XmlSchemaIdentityConstraint_t3418 * ___target_22;
};
