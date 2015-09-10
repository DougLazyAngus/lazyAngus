#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t3439;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3451;
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
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void System.Xml.Schema.XmlSchemaAny::.ctor()
extern "C" void XmlSchemaAny__ctor_m14057 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::get_AnyTypeContent()
extern "C" XmlSchemaAny_t3439 * XmlSchemaAny_get_AnyTypeContent_m14058 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_Namespace()
extern "C" String_t* XmlSchemaAny_get_Namespace_m14059 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_Namespace(System.String)
extern "C" void XmlSchemaAny_set_Namespace_m14060 (XmlSchemaAny_t3439 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ProcessContents()
extern "C" int32_t XmlSchemaAny_get_ProcessContents_m14061 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::set_ProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C" void XmlSchemaAny_set_ProcessContents_m14062 (XmlSchemaAny_t3439 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueAny()
extern "C" bool XmlSchemaAny_get_HasValueAny_m14063 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueLocal()
extern "C" bool XmlSchemaAny_get_HasValueLocal_m14064 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueOther()
extern "C" bool XmlSchemaAny_get_HasValueOther_m14065 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::get_HasValueTargetNamespace()
extern "C" bool XmlSchemaAny_get_HasValueTargetNamespace_m14066 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAny::get_ResolvedNamespaces()
extern "C" StringCollection_t3451 * XmlSchemaAny_get_ResolvedNamespaces_m14067 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::get_ResolvedProcessContents()
extern "C" int32_t XmlSchemaAny_get_ResolvedProcessContents_m14068 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAny::get_TargetNamespace()
extern "C" String_t* XmlSchemaAny_get_TargetNamespace_m14069 (XmlSchemaAny_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAny_Compile_m14070 (XmlSchemaAny_t3439 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaAny::GetOptimizedParticle(System.Boolean)
extern "C" XmlSchemaParticle_t3640 * XmlSchemaAny_GetOptimizedParticle_m14071 (XmlSchemaAny_t3439 * __this, bool ___isTop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAny::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAny_Validate_m14072 (XmlSchemaAny_t3439 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ParticleEquals(System.Xml.Schema.XmlSchemaParticle)
extern "C" bool XmlSchemaAny_ParticleEquals_m14073 (XmlSchemaAny_t3439 * __this, XmlSchemaParticle_t3640 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ExamineAttributeWildcardIntersection(System.Xml.Schema.XmlSchemaAny,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" bool XmlSchemaAny_ExamineAttributeWildcardIntersection_m14074 (XmlSchemaAny_t3439 * __this, XmlSchemaAny_t3439 * ___other, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateDerivationByRestriction(System.Xml.Schema.XmlSchemaParticle,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaAny_ValidateDerivationByRestriction_m14075 (XmlSchemaAny_t3439 * __this, XmlSchemaParticle_t3640 * ___baseParticle, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::CheckRecursion(System.Int32,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAny_CheckRecursion_m14076 (XmlSchemaAny_t3439 * __this, int32_t ___depth, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueParticleAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Collections.ArrayList,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAny_ValidateUniqueParticleAttribution_m14077 (XmlSchemaAny_t3439 * __this, XmlSchemaObjectTable_t3633 * ___qnames, ArrayList_t723 * ___nsNames, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAny::ValidateUniqueTypeAttribution(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAny_ValidateUniqueTypeAttribution_m14078 (XmlSchemaAny_t3439 * __this, XmlSchemaObjectTable_t3633 * ___labels, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAny::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" bool XmlSchemaAny_ValidateWildcardAllowsNamespaceName_m14079 (XmlSchemaAny_t3439 * __this, String_t* ___ns, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___raiseError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAny_t3439 * XmlSchemaAny_Read_m14080 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
