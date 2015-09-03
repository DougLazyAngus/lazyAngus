#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3630;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3635;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3622;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaAttributeGroup
struct  XmlSchemaAttributeGroup_t3635  : public XmlSchemaAnnotated_t3628
{
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::anyAttribute
	XmlSchemaAnyAttribute_t3630 * ___anyAttribute_16;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::attributes
	XmlSchemaObjectCollection_t3623 * ___attributes_17;
	// System.String System.Xml.Schema.XmlSchemaAttributeGroup::name
	String_t* ___name_18;
	// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::redefined
	XmlSchemaAttributeGroup_t3635 * ___redefined_19;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::qualifiedName
	XmlQualifiedName_t3415 * ___qualifiedName_20;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::attributeUses
	XmlSchemaObjectTable_t3622 * ___attributeUses_21;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::anyAttributeUse
	XmlSchemaAnyAttribute_t3630 * ___anyAttributeUse_22;
	// System.Boolean System.Xml.Schema.XmlSchemaAttributeGroup::AttributeGroupRecursionCheck
	bool ___AttributeGroupRecursionCheck_23;
};
