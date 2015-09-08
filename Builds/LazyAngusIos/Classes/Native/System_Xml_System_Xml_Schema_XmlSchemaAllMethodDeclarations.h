#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3427;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3624;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3440;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3438;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3625;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3630;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3623;
// System.Collections.ArrayList
struct ArrayList_t713;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3700;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaAll::.ctor()
extern "C" void XmlSchemaAll__ctor_m13975 (XmlSchemaAll_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAll::get_Items()
extern "C" XmlSchemaObjectCollection_t3624 * XmlSchemaAll_get_Items_m13976 (XmlSchemaAll_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::get_Emptiable()
extern "C" bool XmlSchemaAll_get_Emptiable_m13977 (XmlSchemaAll_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaAll_SetParent_m13978 (XmlSchemaAll_t3427 * __this, XmlSchemaObject_t3440 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAll_Compile_m13979 (XmlSchemaAll_t3427 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAll::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3630 * XmlSchemaAll_GetOptimizedParticle_m13980 (XmlSchemaAll_t3427 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAll_Validate_m13981 (XmlSchemaAll_t3427 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ComputeEmptiable()
extern "C" void XmlSchemaAll_ComputeEmptiable_m13982 (XmlSchemaAll_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaAll_ValidateDerivationByRestriction_m13983 (XmlSchemaAll_t3427 * __this, XmlSchemaParticle_t3630 * ___baseParticle, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaAll::GetMinEffectiveTotalRange()
extern "C" Decimal_t760  XmlSchemaAll_GetMinEffectiveTotalRange_m13984 (XmlSchemaAll_t3427 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAll_ValidateUniqueParticleAttribution_m13985 (XmlSchemaAll_t3427 * __this, XmlSchemaObjectTable_t3623 * ___qnames, ArrayList_t713 * ___nsNames, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAll_ValidateUniqueTypeAttribution_m13986 (XmlSchemaAll_t3427 * __this, XmlSchemaObjectTable_t3623 * ___labels, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAll System.Xml.Schema.XmlSchemaAll::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAll_t3427 * XmlSchemaAll_Read_m13987 (Object_t * __this /* static, unused */, XmlSchemaReader_t3700 * ___reader, ValidationEventHandler_t3438 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
