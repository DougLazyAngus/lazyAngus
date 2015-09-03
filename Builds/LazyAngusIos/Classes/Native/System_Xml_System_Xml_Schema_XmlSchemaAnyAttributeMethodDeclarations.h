#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3630;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3440;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3699;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C" void XmlSchemaAnyAttribute__ctor_m14011 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C" String_t* XmlSchemaAnyAttribute_get_Namespace_m14012 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueAny_m14013 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueLocal_m14014 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueOther_m14015 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m14016 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
extern "C" StringCollection_t3440 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m14017 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
extern "C" int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m14018 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
extern "C" String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m14019 (XmlSchemaAnyAttribute_t3630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnyAttribute_Compile_m14020 (XmlSchemaAnyAttribute_t3630 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnyAttribute_Validate_m14021 (XmlSchemaAnyAttribute_t3630 * __this, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAnyAttribute_ValidateWildcardSubset_m14022 (XmlSchemaAnyAttribute_t3630 * __this, XmlSchemaAnyAttribute_t3630 * ___other, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C" bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m14023 (XmlSchemaAnyAttribute_t3630 * __this, String_t* ___ns, XmlSchema_t3624 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAnyAttribute_t3630 * XmlSchemaAnyAttribute_Read_m14024 (Object_t * __this /* static, unused */, XmlSchemaReader_t3699 * ___reader, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
