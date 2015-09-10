#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t3668;
// System.Xml.Schema.XmlSchemaParticle
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle.h"
// System.Xml.Schema.XmlSchemaGroupRef
struct  XmlSchemaGroupRef_t3669  : public XmlSchemaParticle_t3640
{
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaGroupRef::schema
	XmlSchema_t3635 * ___schema_27;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroupRef::refName
	XmlQualifiedName_t3426 * ___refName_28;
	// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroupRef::referencedGroup
	XmlSchemaGroup_t3668 * ___referencedGroup_29;
	// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::busy
	bool ___busy_30;
};
