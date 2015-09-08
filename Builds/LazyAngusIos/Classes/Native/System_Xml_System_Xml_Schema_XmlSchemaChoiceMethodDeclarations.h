#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t3428;
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

// System.Void System.Xml.Schema.XmlSchemaChoice::.ctor()
extern "C" void XmlSchemaChoice__ctor_m14079 (XmlSchemaChoice_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaChoice::get_Items()
extern "C" XmlSchemaObjectCollection_t3627 * XmlSchemaChoice_get_Items_m14080 (XmlSchemaChoice_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaChoice_SetParent_m14081 (XmlSchemaChoice_t3428 * __this, XmlSchemaObject_t3443 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaChoice_Compile_m14082 (XmlSchemaChoice_t3428 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaChoice::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3633 * XmlSchemaChoice_GetOptimizedParticle_m14083 (XmlSchemaChoice_t3428 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaChoice::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaChoice_Validate_m14084 (XmlSchemaChoice_t3428 * __this, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaChoice::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaChoice_ValidateDerivationByRestriction_m14085 (XmlSchemaChoice_t3428 * __this, XmlSchemaParticle_t3633 * ___baseParticle, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.Schema.XmlSchemaChoice::GetMinEffectiveTotalRange()
extern "C" Decimal_t763  XmlSchemaChoice_GetMinEffectiveTotalRange_m14086 (XmlSchemaChoice_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaChoice_ValidateUniqueParticleAttribution_m14087 (XmlSchemaChoice_t3428 * __this, XmlSchemaObjectTable_t3626 * ___qnames, ArrayList_t716 * ___nsNames, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaChoice::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaChoice_ValidateUniqueTypeAttribution_m14088 (XmlSchemaChoice_t3428 * __this, XmlSchemaObjectTable_t3626 * ___labels, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaChoice System.Xml.Schema.XmlSchemaChoice::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaChoice_t3428 * XmlSchemaChoice_Read_m14089 (Object_t * __this /* static, unused */, XmlSchemaReader_t3703 * ___reader, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
