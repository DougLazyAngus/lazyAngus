#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3630;
// System.String
struct String_t;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3438;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3625;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3623;
// System.Collections.ArrayList
struct ArrayList_t713;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaParticle::.ctor()
extern "C" void XmlSchemaParticle__ctor_m14417 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::get_Empty()
extern "C" XmlSchemaParticle_t3630 * XmlSchemaParticle_get_Empty_m14418 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MinOccursString()
extern "C" String_t* XmlSchemaParticle_get_MinOccursString_m14419 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccursString(System.String)
extern "C" void XmlSchemaParticle_set_MinOccursString_m14420 (XmlSchemaParticle_t3630 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaParticle::get_MaxOccursString()
extern "C" String_t* XmlSchemaParticle_get_MaxOccursString_m14421 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccursString(System.String)
extern "C" void XmlSchemaParticle_set_MaxOccursString_m14422 (XmlSchemaParticle_t3630 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MinOccurs()
extern "C" Decimal_t760  XmlSchemaParticle_get_MinOccurs_m14423 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MinOccurs(System.Decimal)
extern "C" void XmlSchemaParticle_set_MinOccurs_m14424 (XmlSchemaParticle_t3630 * __this, Decimal_t760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_MaxOccurs()
extern "C" Decimal_t760  XmlSchemaParticle_get_MaxOccurs_m14425 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::set_MaxOccurs(System.Decimal)
extern "C" void XmlSchemaParticle_set_MaxOccurs_m14426 (XmlSchemaParticle_t3630 * __this, Decimal_t760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMinOccurs()
extern "C" Decimal_t760  XmlSchemaParticle_get_ValidatedMinOccurs_m14427 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::get_ValidatedMaxOccurs()
extern "C" Decimal_t760  XmlSchemaParticle_get_ValidatedMaxOccurs_m14428 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3630 * XmlSchemaParticle_GetOptimizedParticle_m14429 (XmlSchemaParticle_t3630 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::GetShallowClone()
extern "C" XmlSchemaParticle_t3630 * XmlSchemaParticle_GetShallowClone_m14430 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CompileOccurence(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_CompileOccurence_m14431 (XmlSchemaParticle_t3630 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CopyInfo(System.Xml.Schema.XmlSchemaParticle)
extern "C" void XmlSchemaParticle_CopyInfo_m14432 (XmlSchemaParticle_t3630 * __this, XmlSchemaParticle_t3630 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateOccurenceRangeOK(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaParticle_ValidateOccurenceRangeOK_m14433 (XmlSchemaParticle_t3630 * __this, XmlSchemaParticle_t3630 * ___other, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRange()
extern "C" Decimal_t760  XmlSchemaParticle_GetMinEffectiveTotalRange_m14434 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaParticle::GetMinEffectiveTotalRangeAllAndSequence()
extern "C" Decimal_t760  XmlSchemaParticle_GetMinEffectiveTotalRangeAllAndSequence_m14435 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateIsEmptiable()
extern "C" bool XmlSchemaParticle_ValidateIsEmptiable_m14436 (XmlSchemaParticle_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaParticle_ValidateDerivationByRestriction_m14437 (XmlSchemaParticle_t3630 * __this, XmlSchemaParticle_t3630 * ___baseParticle, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_ValidateUniqueParticleAttribution_m14438 (XmlSchemaParticle_t3630 * __this, XmlSchemaObjectTable_t3623 * ___qnames, ArrayList_t713 * ___nsNames, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_ValidateUniqueTypeAttribution_m14439 (XmlSchemaParticle_t3630 * __this, XmlSchemaObjectTable_t3623 * ___labels, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaParticle_CheckRecursion_m14440 (XmlSchemaParticle_t3630 * __this, int32_t ___depth, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaParticle_ParticleEquals_m14441 (XmlSchemaParticle_t3630 * __this, XmlSchemaParticle_t3630 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
