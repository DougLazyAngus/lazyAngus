#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3637;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t3638;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3420;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3649;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaValidity
#include "System_Xml_System_Xml_Schema_XmlSchemaValidity.h"
// System.Xml.Schema.XmlSchemaInfo
struct  XmlSchemaInfo_t3666  : public Object_t
{
	// System.Boolean System.Xml.Schema.XmlSchemaInfo::isDefault
	bool ___isDefault_0;
	// System.Boolean System.Xml.Schema.XmlSchemaInfo::isNil
	bool ___isNil_1;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaInfo::memberType
	XmlSchemaSimpleType_t3637 * ___memberType_2;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaInfo::attr
	XmlSchemaAttribute_t3638 * ___attr_3;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaInfo::elem
	XmlSchemaElement_t3420 * ___elem_4;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaInfo::type
	XmlSchemaType_t3649 * ___type_5;
	// System.Xml.Schema.XmlSchemaValidity System.Xml.Schema.XmlSchemaInfo::validity
	int32_t ___validity_6;
};
