#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3644;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.String[]
struct StringU5BU5D_t75;
// System.Text.RegularExpressions.Regex[]
struct RegexU5BU5D_t3696;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaSimpleTypeContent
#include "System_Xml_System_Xml_Schema_XmlSchemaSimpleTypeContent.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct  XmlSchemaSimpleTypeRestriction_t3697  : public XmlSchemaSimpleTypeContent_t3694
{
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::baseType
	XmlSchemaSimpleType_t3644 * ___baseType_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::baseTypeName
	XmlQualifiedName_t3426 * ___baseTypeName_18;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::facets
	XmlSchemaObjectCollection_t3634 * ___facets_19;
	// System.String[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::enumarationFacetValues
	StringU5BU5D_t75* ___enumarationFacetValues_20;
	// System.String[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::patternFacetValues
	StringU5BU5D_t75* ___patternFacetValues_21;
	// System.Text.RegularExpressions.Regex[] System.Xml.Schema.XmlSchemaSimpleTypeRestriction::rexPatterns
	RegexU5BU5D_t3696* ___rexPatterns_22;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::lengthFacet
	Decimal_t770  ___lengthFacet_23;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxLengthFacet
	Decimal_t770  ___maxLengthFacet_24;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minLengthFacet
	Decimal_t770  ___minLengthFacet_25;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::fractionDigitsFacet
	Decimal_t770  ___fractionDigitsFacet_26;
	// System.Decimal System.Xml.Schema.XmlSchemaSimpleTypeRestriction::totalDigitsFacet
	Decimal_t770  ___totalDigitsFacet_27;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxInclusiveFacet
	Object_t * ___maxInclusiveFacet_28;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::maxExclusiveFacet
	Object_t * ___maxExclusiveFacet_29;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minInclusiveFacet
	Object_t * ___minInclusiveFacet_30;
	// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::minExclusiveFacet
	Object_t * ___minExclusiveFacet_31;
	// System.Xml.Schema.XmlSchemaFacet/Facet System.Xml.Schema.XmlSchemaSimpleTypeRestriction::fixedFacets
	int32_t ___fixedFacets_32;
};
struct XmlSchemaSimpleTypeRestriction_t3697_StaticFields{
	// System.Globalization.NumberStyles System.Xml.Schema.XmlSchemaSimpleTypeRestriction::lengthStyle
	int32_t ___lengthStyle_33;
	// System.Xml.Schema.XmlSchemaFacet/Facet System.Xml.Schema.XmlSchemaSimpleTypeRestriction::listFacets
	int32_t ___listFacets_34;
};
