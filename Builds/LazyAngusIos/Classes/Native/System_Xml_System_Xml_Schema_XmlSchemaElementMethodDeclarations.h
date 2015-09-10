#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3427;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3656;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3640;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3633;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void System.Xml.Schema.XmlSchemaElement::.ctor()
extern "C" void XmlSchemaElement__ctor_m14251 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::InitPostCompileInformations()
extern "C" void XmlSchemaElement_InitPostCompileInformations_m14252 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_IsAbstract()
extern "C" bool XmlSchemaElement_get_IsAbstract_m14253 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_IsAbstract(System.Boolean)
extern "C" void XmlSchemaElement_set_IsAbstract_m14254 (XmlSchemaElement_t3427 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" void XmlSchemaElement_set_Final_m14255 (XmlSchemaElement_t3427 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_Name(System.String)
extern "C" void XmlSchemaElement_set_Name_m14256 (XmlSchemaElement_t3427 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_IsNillable()
extern "C" bool XmlSchemaElement_get_IsNillable_m14257 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_IsNillable(System.Boolean)
extern "C" void XmlSchemaElement_set_IsNillable_m14258 (XmlSchemaElement_t3427 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_RefName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaElement_get_RefName_m14259 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_SubstitutionGroup()
extern "C" XmlQualifiedName_t3426 * XmlSchemaElement_get_SubstitutionGroup_m14260 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_SchemaTypeName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaElement_get_SchemaTypeName_m14261 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_SchemaTypeName(System.Xml.XmlQualifiedName)
extern "C" void XmlSchemaElement_set_SchemaTypeName_m14262 (XmlSchemaElement_t3427 * __this, XmlQualifiedName_t3426 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::get_SchemaType()
extern "C" XmlSchemaType_t3656 * XmlSchemaElement_get_SchemaType_m14263 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::set_SchemaType(System.Xml.Schema.XmlSchemaType)
extern "C" void XmlSchemaElement_set_SchemaType_m14264 (XmlSchemaElement_t3427 * __this, XmlSchemaType_t3656 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaElement::get_Constraints()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchemaElement_get_Constraints_m14265 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::get_QualifiedName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaElement_get_QualifiedName_m14266 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaElement::get_ElementType()
extern "C" Object_t * XmlSchemaElement_get_ElementType_m14267 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::get_BlockResolved()
extern "C" int32_t XmlSchemaElement_get_BlockResolved_m14268 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::get_FinalResolved()
extern "C" int32_t XmlSchemaElement_get_FinalResolved_m14269 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_ActualIsNillable()
extern "C" bool XmlSchemaElement_get_ActualIsNillable_m14270 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::get_ActualIsAbstract()
extern "C" bool XmlSchemaElement_get_ActualIsAbstract_m14271 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaElement::get_ValidatedDefaultValue()
extern "C" String_t* XmlSchemaElement_get_ValidatedDefaultValue_m14272 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaElement::get_ValidatedFixedValue()
extern "C" String_t* XmlSchemaElement_get_ValidatedFixedValue_m14273 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Xml.Schema.XmlSchemaElement::get_SubstitutingElements()
extern "C" ArrayList_t723 * XmlSchemaElement_get_SubstitutingElements_m14274 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaElement_SetParent_m14275 (XmlSchemaElement_t3427 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaElement::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaElement_Compile_m14276 (XmlSchemaElement_t3427 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaElement::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3640 * XmlSchemaElement_GetOptimizedParticle_m14277 (XmlSchemaElement_t3427 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::AddSubstElementRecursively(System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaElement)
extern "C" void XmlSchemaElement_AddSubstElementRecursively_m14278 (XmlSchemaElement_t3427 * __this, XmlSchemaObjectCollection_t3634 * ___col, XmlSchemaElement_t3427 * ___el, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::FillSubstitutionElementInfo()
extern "C" void XmlSchemaElement_FillSubstitutionElementInfo_m14279 (XmlSchemaElement_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaElement::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaElement_Validate_m14280 (XmlSchemaElement_t3427 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaElement_ParticleEquals_m14281 (XmlSchemaElement_t3427 * __this, XmlSchemaParticle_t3640 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaElement_ValidateDerivationByRestriction_m14282 (XmlSchemaElement_t3427 * __this, XmlSchemaParticle_t3640 * ___baseParticle, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaElement::ValidateDerivationByRestrictionNameAndTypeOK(System.Xml.Schema.XmlSchemaElement,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaElement_ValidateDerivationByRestrictionNameAndTypeOK_m14283 (XmlSchemaElement_t3427 * __this, XmlSchemaElement_t3427 * ___baseElement, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaElement_CheckRecursion_m14284 (XmlSchemaElement_t3427 * __this, int32_t ___depth, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaElement_ValidateUniqueParticleAttribution_m14285 (XmlSchemaElement_t3427 * __this, XmlSchemaObjectTable_t3633 * ___qnames, ArrayList_t723 * ___nsNames, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaElement_ValidateUniqueTypeAttribution_m14286 (XmlSchemaElement_t3427 * __this, XmlSchemaObjectTable_t3633 * ___labels, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaElement::ValidateElementDefaultValidImmediate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaElement_ValidateElementDefaultValidImmediate_m14287 (XmlSchemaElement_t3427 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.XmlSchemaElement::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaElement_t3427 * XmlSchemaElement_Read_m14288 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
