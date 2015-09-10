#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3435;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3634;
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
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaChoice::.ctor()
extern "C" void XmlSchemaChoice__ctor_m14136 (XmlSchemaChoice_t3435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaChoice::get_Items()
extern "C" XmlSchemaObjectCollection_t3634 * XmlSchemaChoice_get_Items_m14137 (XmlSchemaChoice_t3435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaChoice_SetParent_m14138 (XmlSchemaChoice_t3435 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaChoice_Compile_m14139 (XmlSchemaChoice_t3435 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaChoice::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3640 * XmlSchemaChoice_GetOptimizedParticle_m14140 (XmlSchemaChoice_t3435 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaChoice_Validate_m14141 (XmlSchemaChoice_t3435 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaChoice::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaChoice_ValidateDerivationByRestriction_m14142 (XmlSchemaChoice_t3435 * __this, XmlSchemaParticle_t3640 * ___baseParticle, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaChoice::GetMinEffectiveTotalRange()
extern "C" Decimal_t770  XmlSchemaChoice_GetMinEffectiveTotalRange_m14143 (XmlSchemaChoice_t3435 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaChoice_ValidateUniqueParticleAttribution_m14144 (XmlSchemaChoice_t3435 * __this, XmlSchemaObjectTable_t3633 * ___qnames, ArrayList_t723 * ___nsNames, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaChoice_ValidateUniqueTypeAttribution_m14145 (XmlSchemaChoice_t3435 * __this, XmlSchemaObjectTable_t3633 * ___labels, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaChoice System.Xml.Schema.XmlSchemaChoice::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaChoice_t3435 * XmlSchemaChoice_Read_m14146 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
