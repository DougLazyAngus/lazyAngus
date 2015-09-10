#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaParticle/EmptyParticle
struct EmptyParticle_t3688;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3640;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3633;
// System.Collections.ArrayList
struct ArrayList_t723;

// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::.ctor()
extern "C" void EmptyParticle__ctor_m14467 (EmptyParticle_t3688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle/EmptyParticle::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3640 * EmptyParticle_GetOptimizedParticle_m14468 (EmptyParticle_t3688 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool EmptyParticle_ParticleEquals_m14469 (EmptyParticle_t3688 * __this, XmlSchemaParticle_t3640 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool EmptyParticle_ValidateDerivationByRestriction_m14470 (EmptyParticle_t3688 * __this, XmlSchemaParticle_t3640 * ___baseParticle, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_CheckRecursion_m14471 (EmptyParticle_t3688 * __this, int32_t ___depth, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_ValidateUniqueParticleAttribution_m14472 (EmptyParticle_t3688 * __this, XmlSchemaObjectTable_t3633 * ___qnames, ArrayList_t723 * ___nsNames, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_ValidateUniqueTypeAttribution_m14473 (EmptyParticle_t3688 * __this, XmlSchemaObjectTable_t3633 * ___labels, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
