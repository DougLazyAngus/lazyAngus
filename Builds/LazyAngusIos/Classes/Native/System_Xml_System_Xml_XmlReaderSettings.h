#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3439;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Xml.Schema.XmlSchemaValidationFlags
#include "System_Xml_System_Xml_Schema_XmlSchemaValidationFlags.h"
// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_t3538  : public Object_t
{
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_1;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlReaderSettings::schemas
	XmlSchemaSet_t3439 * ___schemas_2;
	// System.Boolean System.Xml.XmlReaderSettings::schemasNeedsInitialization
	bool ___schemasNeedsInitialization_3;
	// System.Xml.Schema.XmlSchemaValidationFlags System.Xml.XmlReaderSettings::validationFlags
	int32_t ___validationFlags_4;
};
