#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3625;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaGroup
struct  XmlSchemaGroup_t3657  : public XmlSchemaAnnotated_t3628
{
	// System.String System.Xml.Schema.XmlSchemaGroup::name
	String_t* ___name_16;
	// System.Xml.Schema.XmlSchemaGroupBase System.Xml.Schema.XmlSchemaGroup::particle
	XmlSchemaGroupBase_t3625 * ___particle_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroup::qualifiedName
	XmlQualifiedName_t3415 * ___qualifiedName_18;
	// System.Boolean System.Xml.Schema.XmlSchemaGroup::isCircularDefinition
	bool ___isCircularDefinition_19;
};
