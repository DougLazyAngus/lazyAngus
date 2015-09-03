#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3428;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3440;
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
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void System.Xml.Schema.XmlSchemaAny::.ctor()
extern "C" void XmlSchemaAny__ctor_m13987 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::get_AnyTypeContent()
extern "C" XmlSchemaAny_t3428 * XmlSchemaAny_get_AnyTypeContent_m13988 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_Namespace()
extern "C" String_t* XmlSchemaAny_get_Namespace_m13989 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_Namespace(System.String)
extern "C" void XmlSchemaAny_set_Namespace_m13990 (XmlSchemaAny_t3428 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ProcessContents()
extern "C" int32_t XmlSchemaAny_get_ProcessContents_m13991 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_ProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C" void XmlSchemaAny_set_ProcessContents_m13992 (XmlSchemaAny_t3428 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueAny()
extern "C" bool XmlSchemaAny_get_HasValueAny_m13993 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueLocal()
extern "C" bool XmlSchemaAny_get_HasValueLocal_m13994 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueOther()
extern "C" bool XmlSchemaAny_get_HasValueOther_m13995 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueTargetNamespace()
extern "C" bool XmlSchemaAny_get_HasValueTargetNamespace_m13996 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAny::get_ResolvedNamespaces()
extern "C" StringCollection_t3440 * XmlSchemaAny_get_ResolvedNamespaces_m13997 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ResolvedProcessContents()
extern "C" int32_t XmlSchemaAny_get_ResolvedProcessContents_m13998 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_TargetNamespace()
extern "C" String_t* XmlSchemaAny_get_TargetNamespace_m13999 (XmlSchemaAny_t3428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAny_Compile_m14000 (XmlSchemaAny_t3428 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAny::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3629 * XmlSchemaAny_GetOptimizedParticle_m14001 (XmlSchemaAny_t3428 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAny_Validate_m14002 (XmlSchemaAny_t3428 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaAny_ParticleEquals_m14003 (XmlSchemaAny_t3428 * __this, XmlSchemaParticle_t3629 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" bool XmlSchemaAny_ExamineAttributeWildcardIntersection_m14004 (XmlSchemaAny_t3428 * __this, XmlSchemaAny_t3428 * ___other, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaAny_ValidateDerivationByRestriction_m14005 (XmlSchemaAny_t3428 * __this, XmlSchemaParticle_t3629 * ___baseParticle, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAny_CheckRecursion_m14006 (XmlSchemaAny_t3428 * __this, int32_t ___depth, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAny_ValidateUniqueParticleAttribution_m14007 (XmlSchemaAny_t3428 * __this, XmlSchemaObjectTable_t3622 * ___qnames, ArrayList_t712 * ___nsNames, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAny_ValidateUniqueTypeAttribution_m14008 (XmlSchemaAny_t3428 * __this, XmlSchemaObjectTable_t3622 * ___labels, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaAny_ValidateWildcardAllowsNamespaceName_m14009 (XmlSchemaAny_t3428 * __this, String_t* ___ns, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAny_t3428 * XmlSchemaAny_Read_m14010 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
