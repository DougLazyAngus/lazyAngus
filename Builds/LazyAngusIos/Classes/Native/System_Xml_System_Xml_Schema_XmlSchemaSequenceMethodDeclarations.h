#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t3426;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3627;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3443;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3633;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3626;
// System.Collections.ArrayList
struct ArrayList_t716;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3703;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaSequence::.ctor()
extern "C" void XmlSchemaSequence__ctor_m14473 (XmlSchemaSequence_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaSequence::get_Items()
extern "C" XmlSchemaObjectCollection_t3627 * XmlSchemaSequence_get_Items_m14474 (XmlSchemaSequence_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaSequence_SetParent_m14475 (XmlSchemaSequence_t3426 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSequence::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSequence_Compile_m14476 (XmlSchemaSequence_t3426 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaSequence::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3633 * XmlSchemaSequence_GetOptimizedParticle_m14477 (XmlSchemaSequence_t3426 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaSequence::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaSequence_Validate_m14478 (XmlSchemaSequence_t3426 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaSequence::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaSequence_ValidateDerivationByRestriction_m14479 (XmlSchemaSequence_t3426 * __this, XmlSchemaParticle_t3633 * ___baseParticle, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaSequence::GetMinEffectiveTotalRange()
extern "C" Decimal_t763  XmlSchemaSequence_GetMinEffectiveTotalRange_m14480 (XmlSchemaSequence_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSequence_ValidateUniqueParticleAttribution_m14481 (XmlSchemaSequence_t3426 * __this, XmlSchemaObjectTable_t3626 * ___qnames, ArrayList_t716 * ___nsNames, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::ValidateUPAOnHeadingOptionalComponents(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSequence_ValidateUPAOnHeadingOptionalComponents_m14482 (XmlSchemaSequence_t3426 * __this, XmlSchemaObjectTable_t3626 * ___qnames, ArrayList_t716 * ___nsNames, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::ValidateUPAOnItems(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSequence_ValidateUPAOnItems_m14483 (XmlSchemaSequence_t3426 * __this, XmlSchemaObjectTable_t3626 * ___qnames, ArrayList_t716 * ___nsNames, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaSequence::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaSequence_ValidateUniqueTypeAttribution_m14484 (XmlSchemaSequence_t3426 * __this, XmlSchemaObjectTable_t3626 * ___labels, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSequence System.Xml.Schema.XmlSchemaSequence::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaSequence_t3426 * XmlSchemaSequence_Read_m14485 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
