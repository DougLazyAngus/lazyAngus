#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t3426;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3629;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3622;
// System.Collections.ArrayList
struct ArrayList_t712;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Xml.Schema.XmlSchemaAll::.ctor()
extern "C" void XmlSchemaAll__ctor_m13962 (XmlSchemaAll_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAll::get_Items()
extern "C" XmlSchemaObjectCollection_t3623 * XmlSchemaAll_get_Items_m13963 (XmlSchemaAll_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::get_Emptiable()
extern "C" bool XmlSchemaAll_get_Emptiable_m13964 (XmlSchemaAll_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaAll_SetParent_m13965 (XmlSchemaAll_t3426 * __this, XmlSchemaObject_t3439 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAll_Compile_m13966 (XmlSchemaAll_t3426 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAll::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3629 * XmlSchemaAll_GetOptimizedParticle_m13967 (XmlSchemaAll_t3426 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAll::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAll_Validate_m13968 (XmlSchemaAll_t3426 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ComputeEmptiable()
extern "C" void XmlSchemaAll_ComputeEmptiable_m13969 (XmlSchemaAll_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAll::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaAll_ValidateDerivationByRestriction_m13970 (XmlSchemaAll_t3426 * __this, XmlSchemaParticle_t3629 * ___baseParticle, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaAll::GetMinEffectiveTotalRange()
extern "C" Decimal_t759  XmlSchemaAll_GetMinEffectiveTotalRange_m13971 (XmlSchemaAll_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAll_ValidateUniqueParticleAttribution_m13972 (XmlSchemaAll_t3426 * __this, XmlSchemaObjectTable_t3622 * ___qnames, ArrayList_t712 * ___nsNames, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAll::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAll_ValidateUniqueTypeAttribution_m13973 (XmlSchemaAll_t3426 * __this, XmlSchemaObjectTable_t3622 * ___labels, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAll System.Xml.Schema.XmlSchemaAll::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAll_t3426 * XmlSchemaAll_Read_m13974 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
