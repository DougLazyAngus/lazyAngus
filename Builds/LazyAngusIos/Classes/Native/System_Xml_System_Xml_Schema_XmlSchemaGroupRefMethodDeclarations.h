#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroupRef
struct XmlSchemaGroupRef_t3669;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaGroup
struct XmlSchemaGroup_t3668;
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

// System.Void System.Xml.Schema.XmlSchemaGroupRef::.ctor()
extern "C" void XmlSchemaGroupRef__ctor_m14336 (XmlSchemaGroupRef_t3669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaGroupRef::get_RefName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaGroupRef_get_RefName_m14337 (XmlSchemaGroupRef_t3669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroup System.Xml.Schema.XmlSchemaGroupRef::get_TargetGroup()
extern "C" XmlSchemaGroup_t3668 * XmlSchemaGroupRef_get_TargetGroup_m14338 (XmlSchemaGroupRef_t3669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaGroupRef_Compile_m14339 (XmlSchemaGroupRef_t3669 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaGroupRef::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaGroupRef_Validate_m14340 (XmlSchemaGroupRef_t3669 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaGroupRef::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3640 * XmlSchemaGroupRef_GetOptimizedParticle_m14341 (XmlSchemaGroupRef_t3669 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaGroupRef_ParticleEquals_m14342 (XmlSchemaGroupRef_t3669 * __this, XmlSchemaParticle_t3640 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupRef::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaGroupRef_ValidateDerivationByRestriction_m14343 (XmlSchemaGroupRef_t3669 * __this, XmlSchemaParticle_t3640 * ___baseParticle, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaGroupRef_CheckRecursion_m14344 (XmlSchemaGroupRef_t3669 * __this, int32_t ___depth, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaGroupRef_ValidateUniqueParticleAttribution_m14345 (XmlSchemaGroupRef_t3669 * __this, XmlSchemaObjectTable_t3633 * ___qnames, ArrayList_t723 * ___nsNames, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupRef::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaGroupRef_ValidateUniqueTypeAttribution_m14346 (XmlSchemaGroupRef_t3669 * __this, XmlSchemaObjectTable_t3633 * ___labels, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaGroupRef System.Xml.Schema.XmlSchemaGroupRef::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaGroupRef_t3669 * XmlSchemaGroupRef_Read_m14347 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
