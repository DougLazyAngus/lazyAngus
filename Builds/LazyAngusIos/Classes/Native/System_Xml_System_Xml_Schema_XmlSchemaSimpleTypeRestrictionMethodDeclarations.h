#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSimpleTypeRestriction
struct XmlSchemaSimpleTypeRestriction_t3686;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3633;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t3651;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaTotalDigitsFacet
struct XmlSchemaTotalDigitsFacet_t3690;
// System.Xml.Schema.XmlSchemaFractionDigitsFacet
struct XmlSchemaFractionDigitsFacet_t3655;
// System.Xml.Schema.XmlSchemaLengthFacet
struct XmlSchemaLengthFacet_t3665;
// System.Xml.Schema.XmlSchemaMaxLengthFacet
struct XmlSchemaMaxLengthFacet_t3668;
// System.Xml.Schema.XmlSchemaMinLengthFacet
struct XmlSchemaMinLengthFacet_t3671;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t3409;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3391;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Xml.Schema.XmlSchemaFacet/Facet
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet.h"

// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.ctor()
extern "C" void XmlSchemaSimpleTypeRestriction__ctor_m14529 (XmlSchemaSimpleTypeRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::.cctor()
extern "C" void XmlSchemaSimpleTypeRestriction__cctor_m14530 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseTypeName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaSimpleTypeRestriction_get_BaseTypeName_m14531 (XmlSchemaSimpleTypeRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_BaseType()
extern "C" XmlSchemaSimpleType_t3633 * XmlSchemaSimpleTypeRestriction_get_BaseType_m14532 (XmlSchemaSimpleTypeRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSimpleTypeRestriction::get_Facets()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchemaSimpleTypeRestriction_get_Facets_m14533 (XmlSchemaSimpleTypeRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSimpleTypeRestriction_SetParent_m14534 (XmlSchemaSimpleTypeRestriction_t3686 * __this, XmlSchemaObject_t3439 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeRestriction_Compile_m14535 (XmlSchemaSimpleTypeRestriction_t3686 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::IsAllowedFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C" bool XmlSchemaSimpleTypeRestriction_IsAllowedFacet_m14536 (XmlSchemaSimpleTypeRestriction_t3686 * __this, XmlSchemaFacet_t3651 * ___xsf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSimpleTypeRestriction_Validate_m14537 (XmlSchemaSimpleTypeRestriction_t3686 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSimpleTypeRestriction_ValidateActualType_m14538 (XmlSchemaSimpleTypeRestriction_t3686 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::GetActualType(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" Object_t * XmlSchemaSimpleTypeRestriction_GetActualType_m14539 (XmlSchemaSimpleTypeRestriction_t3686 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkTotalDigitsFacet(System.Xml.Schema.XmlSchemaTotalDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkTotalDigitsFacet_m14540 (XmlSchemaSimpleTypeRestriction_t3686 * __this, XmlSchemaTotalDigitsFacet_t3690 * ___totf, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkFractionDigitsFacet(System.Xml.Schema.XmlSchemaFractionDigitsFacet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkFractionDigitsFacet_m14541 (XmlSchemaSimpleTypeRestriction_t3686 * __this, XmlSchemaFractionDigitsFacet_t3655 * ___fracf, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinMaxFacet(System.Xml.Schema.XmlSchemaFacet,System.Object&,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMinMaxFacet_m14542 (XmlSchemaSimpleTypeRestriction_t3686 * __this, XmlSchemaFacet_t3651 * ___facet, Object_t ** ___baseFacet, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkLengthFacet(System.Xml.Schema.XmlSchemaLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkLengthFacet_m14543 (XmlSchemaSimpleTypeRestriction_t3686 * __this, XmlSchemaLengthFacet_t3665 * ___lf, int32_t ___facetsDefined, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMaxLengthFacet(System.Xml.Schema.XmlSchemaMaxLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMaxLengthFacet_m14544 (XmlSchemaSimpleTypeRestriction_t3686 * __this, XmlSchemaMaxLengthFacet_t3668 * ___maxlf, int32_t ___facetsDefined, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSimpleTypeRestriction::checkMinLengthFacet(System.Xml.Schema.XmlSchemaMinLengthFacet,System.Xml.Schema.XmlSchemaFacet/Facet,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaSimpleTypeRestriction_checkMinLengthFacet_m14545 (XmlSchemaSimpleTypeRestriction_t3686 * __this, XmlSchemaMinLengthFacet_t3671 * ___minlf, int32_t ___facetsDefined, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType System.Xml.Schema.XmlSchemaSimpleTypeRestriction::getDatatype()
extern "C" XsdAnySimpleType_t3409 * XmlSchemaSimpleTypeRestriction_getDatatype_m14546 (XmlSchemaSimpleTypeRestriction_t3686 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithDatatype(System.String)
extern "C" Object_t * XmlSchemaSimpleTypeRestriction_ValidateValueWithDatatype_m14547 (XmlSchemaSimpleTypeRestriction_t3686 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateValueWithFacets_m14548 (XmlSchemaSimpleTypeRestriction_t3686 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacets_m14549 (XmlSchemaSimpleTypeRestriction_t3686 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateListValueWithFacetsCore_m14550 (XmlSchemaSimpleTypeRestriction_t3686 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacets(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacets_m14551 (XmlSchemaSimpleTypeRestriction_t3686 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSimpleTypeRestriction::ValidateNonListValueWithFacetsCore(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C" bool XmlSchemaSimpleTypeRestriction_ValidateNonListValueWithFacetsCore_m14552 (XmlSchemaSimpleTypeRestriction_t3686 * __this, String_t* ___value, XmlNameTable_t3458 * ___nt, Object_t * ___nsmgr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleTypeRestriction System.Xml.Schema.XmlSchemaSimpleTypeRestriction::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSimpleTypeRestriction_t3686 * XmlSchemaSimpleTypeRestriction_Read_m14553 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
