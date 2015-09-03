#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaParticle/EmptyParticle
struct EmptyParticle_t3677;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3629;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3622;
// System.Collections.ArrayList
struct ArrayList_t712;

// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::.ctor()
extern "C" void EmptyParticle__ctor_m14397 (EmptyParticle_t3677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle/EmptyParticle::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3629 * EmptyParticle_GetOptimizedParticle_m14398 (EmptyParticle_t3677 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool EmptyParticle_ParticleEquals_m14399 (EmptyParticle_t3677 * __this, XmlSchemaParticle_t3629 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool EmptyParticle_ValidateDerivationByRestriction_m14400 (EmptyParticle_t3677 * __this, XmlSchemaParticle_t3629 * ___baseParticle, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_CheckRecursion_m14401 (EmptyParticle_t3677 * __this, int32_t ___depth, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_ValidateUniqueParticleAttribution_m14402 (EmptyParticle_t3677 * __this, XmlSchemaObjectTable_t3622 * ___qnames, ArrayList_t712 * ___nsNames, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_ValidateUniqueTypeAttribution_m14403 (EmptyParticle_t3677 * __this, XmlSchemaObjectTable_t3622 * ___labels, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
