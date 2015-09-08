#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaParticle/EmptyParticle
struct EmptyParticle_t3678;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3630;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3438;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3625;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3623;
// System.Collections.ArrayList
struct ArrayList_t713;

// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::.ctor()
extern "C" void EmptyParticle__ctor_m14410 (EmptyParticle_t3678 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle/EmptyParticle::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3630 * EmptyParticle_GetOptimizedParticle_m14411 (EmptyParticle_t3678 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool EmptyParticle_ParticleEquals_m14412 (EmptyParticle_t3678 * __this, XmlSchemaParticle_t3630 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool EmptyParticle_ValidateDerivationByRestriction_m14413 (EmptyParticle_t3678 * __this, XmlSchemaParticle_t3630 * ___baseParticle, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_CheckRecursion_m14414 (EmptyParticle_t3678 * __this, int32_t ___depth, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_ValidateUniqueParticleAttribution_m14415 (EmptyParticle_t3678 * __this, XmlSchemaObjectTable_t3623 * ___qnames, ArrayList_t713 * ___nsNames, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaParticle/EmptyParticle::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void EmptyParticle_ValidateUniqueTypeAttribution_m14416 (EmptyParticle_t3678 * __this, XmlSchemaObjectTable_t3623 * ___labels, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
