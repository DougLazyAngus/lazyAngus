#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroupRef
struct XmlSchemaGroupRef_t3662;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3419;
// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t3661;
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

// System.Void System.Xml.Schema.XmlSchemaGroupRef::.ctor()
extern "C" void XmlSchemaGroupRef__ctor_m14279 (XmlSchemaGroupRef_t3662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroupRef::get_RefName()
extern "C" XmlQualifiedName_t3419 * XmlSchemaGroupRef_get_RefName_m14280 (XmlSchemaGroupRef_t3662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroupRef::get_TargetGroup()
extern "C" XmlSchemaGroup_t3661 * XmlSchemaGroupRef_get_TargetGroup_m14281 (XmlSchemaGroupRef_t3662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaGroupRef_Compile_m14282 (XmlSchemaGroupRef_t3662 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaGroupRef_Validate_m14283 (XmlSchemaGroupRef_t3662 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaGroupRef::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3633 * XmlSchemaGroupRef_GetOptimizedParticle_m14284 (XmlSchemaGroupRef_t3662 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaGroupRef_ParticleEquals_m14285 (XmlSchemaGroupRef_t3662 * __this, XmlSchemaParticle_t3633 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaGroupRef_ValidateDerivationByRestriction_m14286 (XmlSchemaGroupRef_t3662 * __this, XmlSchemaParticle_t3633 * ___baseParticle, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaGroupRef_CheckRecursion_m14287 (XmlSchemaGroupRef_t3662 * __this, int32_t ___depth, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaGroupRef_ValidateUniqueParticleAttribution_m14288 (XmlSchemaGroupRef_t3662 * __this, XmlSchemaObjectTable_t3626 * ___qnames, ArrayList_t716 * ___nsNames, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaGroupRef_ValidateUniqueTypeAttribution_m14289 (XmlSchemaGroupRef_t3662 * __this, XmlSchemaObjectTable_t3626 * ___labels, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupRef System.Xml.Schema.XmlSchemaGroupRef::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaGroupRef_t3662 * XmlSchemaGroupRef_Read_m14290 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
