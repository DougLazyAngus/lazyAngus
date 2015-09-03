#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaGroupBase
struct XmlSchemaGroupBase_t3625;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3629;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3428;

// System.Void System.Xml.Schema.XmlSchemaGroupBase::.ctor()
extern "C" void XmlSchemaGroupBase__ctor_m14258 (XmlSchemaGroupBase_t3625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_Items()
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaGroupBase::get_CompiledItems()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchemaGroupBase_get_CompiledItems_m14259 (XmlSchemaGroupBase_t3625 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CopyOptimizedItems(System.Xml.Schema.XmlSchemaGroupBase)
extern "C" void XmlSchemaGroupBase_CopyOptimizedItems_m14260 (XmlSchemaGroupBase_t3625 * __this, XmlSchemaGroupBase_t3625 * ___gb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaGroupBase_ParticleEquals_m14261 (XmlSchemaGroupBase_t3625 * __this, XmlSchemaParticle_t3629 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaGroupBase::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaGroupBase_CheckRecursion_m14262 (XmlSchemaGroupBase_t3625 * __this, int32_t ___depth, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateNSRecurseCheckCardinality(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaGroupBase_ValidateNSRecurseCheckCardinality_m14263 (XmlSchemaGroupBase_t3625 * __this, XmlSchemaAny_t3428 * ___any, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateRecurse(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaGroupBase_ValidateRecurse_m14264 (XmlSchemaGroupBase_t3625 * __this, XmlSchemaGroupBase_t3625 * ___baseGroup, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaGroupBase::ValidateSeqRecurseMapSumCommon(System.Xml.Schema.XmlSchemaGroupBase,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean,System.Boolean,System.Boolean)
extern "C" bool XmlSchemaGroupBase_ValidateSeqRecurseMapSumCommon_m14265 (XmlSchemaGroupBase_t3625 * __this, XmlSchemaGroupBase_t3625 * ___baseGroup, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___isLax, bool ___isMapAndSum, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
