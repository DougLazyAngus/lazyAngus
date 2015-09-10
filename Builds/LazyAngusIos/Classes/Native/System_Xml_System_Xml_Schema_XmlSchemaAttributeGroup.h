#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3641;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3646;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3633;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaAttributeGroup
struct  XmlSchemaAttributeGroup_t3646  : public XmlSchemaAnnotated_t3639
{
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::anyAttribute
	XmlSchemaAnyAttribute_t3641 * ___anyAttribute_16;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::attributes
	XmlSchemaObjectCollection_t3634 * ___attributes_17;
	// System.String System.Xml.Schema.XmlSchemaAttributeGroup::name
	String_t* ___name_18;
	// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::redefined
	XmlSchemaAttributeGroup_t3646 * ___redefined_19;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::qualifiedName
	XmlQualifiedName_t3426 * ___qualifiedName_20;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::attributeUses
	XmlSchemaObjectTable_t3633 * ___attributeUses_21;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::anyAttributeUse
	XmlSchemaAnyAttribute_t3641 * ___anyAttributeUse_22;
	// System.Boolean System.Xml.Schema.XmlSchemaAttributeGroup::AttributeGroupRecursionCheck
	bool ___AttributeGroupRecursionCheck_23;
};
