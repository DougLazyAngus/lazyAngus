#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3631;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3441;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3438;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3625;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3700;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C" void XmlSchemaAnyAttribute__ctor_m14024 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C" String_t* XmlSchemaAnyAttribute_get_Namespace_m14025 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueAny_m14026 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueLocal_m14027 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueOther_m14028 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m14029 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
extern "C" StringCollection_t3441 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m14030 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
extern "C" int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m14031 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
extern "C" String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m14032 (XmlSchemaAnyAttribute_t3631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnyAttribute_Compile_m14033 (XmlSchemaAnyAttribute_t3631 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnyAttribute_Validate_m14034 (XmlSchemaAnyAttribute_t3631 * __this, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAnyAttribute_ValidateWildcardSubset_m14035 (XmlSchemaAnyAttribute_t3631 * __this, XmlSchemaAnyAttribute_t3631 * ___other, ValidationEventHandler_t3438 * ___h, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C" bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m14036 (XmlSchemaAnyAttribute_t3631 * __this, String_t* ___ns, XmlSchema_t3625 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAnyAttribute_t3631 * XmlSchemaAnyAttribute_Read_m14037 (Object_t * __this /* static, unused */, XmlSchemaReader_t3700 * ___reader, ValidationEventHandler_t3438 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
