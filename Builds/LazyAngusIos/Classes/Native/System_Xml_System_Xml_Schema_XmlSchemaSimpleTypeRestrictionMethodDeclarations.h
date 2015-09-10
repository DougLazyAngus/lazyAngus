#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct XmlSchemaSimpleTypeRestriction_t3697;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3644;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t3662;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaTotalDigitsFacet
struct XmlSchemaTotalDigitsFacet_t3701;
// System.Xml.Schema.XmlSchemaFractionDigitsFacet
struct XmlSchemaFractionDigitsFacet_t3666;
// System.Xml.Schema.XmlSchemaLengthFacet
struct XmlSchemaLengthFacet_t3676;
// System.Xml.Schema.XmlSchemaMaxLengthFacet
struct XmlSchemaMaxLengthFacet_t3679;
// System.Xml.Schema.XmlSchemaMinLengthFacet
struct XmlSchemaMinLengthFacet_t3682;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t3420;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3402;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.ctor()
extern "C" void XmlSchemaSimpleTypeRestriction__ctor_m14599 (XmlSchemaSimpleTypeRestriction_t3697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.cctor()
extern "C" void XmlSchemaSimpleTypeRestriction__cctor_m14600 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseTypeName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaSimpleTypeRestriction_get_BaseTypeName_m14601 (XmlSchemaSimpleTypeRestriction_t3697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseType()
extern "C" XmlSchemaSimpleType_t3644 * XmlSchemaSimpleTypeRestriction_get_BaseType_m14602 (XmlSchemaSimpleTypeRestriction_t3697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_Facets()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchemaSimpleTypeRestriction_get_Facets_m14603 (XmlSchemaSimpleTypeRestriction_t3697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleTypeRestriction_SetParent_m14604 (XmlSchemaSimpleTypeRestriction_t3697 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeRestriction_Compile_m14605 (XmlSchemaSimpleTypeRestriction_t3697 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::IsAllowedFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C" bool XmlSchemaSimpleTypeRestriction_IsAllowedFacet_m14606 (XmlSchemaSimpleTypeRestriction_t3697 * __this, XmlSchemaFacet_t3662 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeRestriction_Validate_m14607 (XmlSchemaSimpleTypeRestriction_t3697 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSimpleTypeRestriction_ValidateActualType_m14608 (XmlSchemaSimpleTypeRestriction_t3697 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::GetActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" Object_t * XmlSchemaSimpleTypeRestriction_GetActualType_m14609 (XmlSchemaSimpleTypeRestriction_t3697 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkTotalDigitsFacet(System.Xml.Schema.XmlSchemaTotalDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkTotalDigitsFacet_m14610 (XmlSchemaSimpleTypeRestriction_t3697 * __this, XmlSchemaTotalDigitsFacet_t3701 * ___totf, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkFractionDigitsFacet(System.Xml.Schema.XmlSchemaFractionDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkFractionDigitsFacet_m14611 (XmlSchemaSimpleTypeRestriction_t3697 * __this, XmlSchemaFractionDigitsFacet_t3666 * ___fracf, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinMaxFacet(System.Xml.Schema.XmlSchemaFacet,System.Object&,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMinMaxFacet_m14612 (XmlSchemaSimpleTypeRestriction_t3697 * __this, XmlSchemaFacet_t3662 * ___facet, Object_t ** ___baseFacet, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkLengthFacet(System.Xml.Schema.XmlSchemaLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkLengthFacet_m14613 (XmlSchemaSimpleTypeRestriction_t3697 * __this, XmlSchemaLengthFacet_t3676 * ___lf, int32_t ___facetsDefined, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMaxLengthFacet(System.Xml.Schema.XmlSchemaMaxLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMaxLengthFacet_m14614 (XmlSchemaSimpleTypeRestriction_t3697 * __this, XmlSchemaMaxLengthFacet_t3679 * ___maxlf, int32_t ___facetsDefined, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinLengthFacet(System.Xml.Schema.XmlSchemaMinLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMinLengthFacet_m14615 (XmlSchemaSimpleTypeRestriction_t3697 * __this, XmlSchemaMinLengthFacet_t3682 * ___minlf, int32_t ___facetsDefined, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::getDatatype()
extern "C" XsdAnySimpleType_t3420 * XmlSchemaSimpleTypeRestriction_getDatatype_m14616 (XmlSchemaSimpleTypeRestriction_t3697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithDatatype(System.String)
extern "C" Object_t * XmlSchemaSimpleTypeRestriction_ValidateValueWithDatatype_m14617 (XmlSchemaSimpleTypeRestriction_t3697 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateValueWithFacets_m14618 (XmlSchemaSimpleTypeRestriction_t3697 * __this, String_t* ___value, XmlNameTable_t3469 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacets_m14619 (XmlSchemaSimpleTypeRestriction_t3697 * __this, String_t* ___value, XmlNameTable_t3469 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacetsCore_m14620 (XmlSchemaSimpleTypeRestriction_t3697 * __this, String_t* ___value, XmlNameTable_t3469 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacets_m14621 (XmlSchemaSimpleTypeRestriction_t3697 * __this, String_t* ___value, XmlNameTable_t3469 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacetsCore_m14622 (XmlSchemaSimpleTypeRestriction_t3697 * __this, String_t* ___value, XmlNameTable_t3469 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeRestriction System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleTypeRestriction_t3697 * XmlSchemaSimpleTypeRestriction_Read_m14623 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
