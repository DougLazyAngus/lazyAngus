#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3640;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3633;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
extern "C" void XmlSchemaParticle__ctor_m14474 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
extern "C" XmlSchemaParticle_t3640 * XmlSchemaParticle_get_Empty_m14475 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
extern "C" String_t* XmlSchemaParticle_get_MinOccursString_m14476 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
extern "C" void XmlSchemaParticle_set_MinOccursString_m14477 (XmlSchemaParticle_t3640 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
extern "C" String_t* XmlSchemaParticle_get_MaxOccursString_m14478 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
extern "C" void XmlSchemaParticle_set_MaxOccursString_m14479 (XmlSchemaParticle_t3640 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
extern "C" Decimal_t770  XmlSchemaParticle_get_MinOccurs_m14480 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
extern "C" void XmlSchemaParticle_set_MinOccurs_m14481 (XmlSchemaParticle_t3640 * __this, Decimal_t770  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
extern "C" Decimal_t770  XmlSchemaParticle_get_MaxOccurs_m14482 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
extern "C" void XmlSchemaParticle_set_MaxOccurs_m14483 (XmlSchemaParticle_t3640 * __this, Decimal_t770  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
extern "C" Decimal_t770  XmlSchemaParticle_get_ValidatedMinOccurs_m14484 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
extern "C" Decimal_t770  XmlSchemaParticle_get_ValidatedMaxOccurs_m14485 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3640 * XmlSchemaParticle_GetOptimizedParticle_m14486 (XmlSchemaParticle_t3640 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
extern "C" XmlSchemaParticle_t3640 * XmlSchemaParticle_GetShallowClone_m14487 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_CompileOccurence_m14488 (XmlSchemaParticle_t3640 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C" void XmlSchemaParticle_CopyInfo_m14489 (XmlSchemaParticle_t3640 * __this, XmlSchemaParticle_t3640 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaParticle_ValidateOccurenceRangeOK_m14490 (XmlSchemaParticle_t3640 * __this, XmlSchemaParticle_t3640 * ___other, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
extern "C" Decimal_t770  XmlSchemaParticle_GetMinEffectiveTotalRange_m14491 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
extern "C" Decimal_t770  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m14492 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
extern "C" bool XmlSchemaParticle_ValidateIsEmptiable_m14493 (XmlSchemaParticle_t3640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaParticle_ValidateDerivationByRestriction_m14494 (XmlSchemaParticle_t3640 * __this, XmlSchemaParticle_t3640 * ___baseParticle, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_ValidateUniqueParticleAttribution_m14495 (XmlSchemaParticle_t3640 * __this, XmlSchemaObjectTable_t3633 * ___qnames, ArrayList_t723 * ___nsNames, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_ValidateUniqueTypeAttribution_m14496 (XmlSchemaParticle_t3640 * __this, XmlSchemaObjectTable_t3633 * ___labels, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_CheckRecursion_m14497 (XmlSchemaParticle_t3640 * __this, int32_t ___depth, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaParticle_ParticleEquals_m14498 (XmlSchemaParticle_t3640 * __this, XmlSchemaParticle_t3640 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
