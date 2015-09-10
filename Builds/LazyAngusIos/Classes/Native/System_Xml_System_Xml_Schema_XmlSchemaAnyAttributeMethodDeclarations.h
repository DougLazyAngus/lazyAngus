#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3641;
// System.String
struct String_t;
// System.Collections.Specialized.StringCollection
struct StringCollection_t3451;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"

// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::.ctor()
extern "C" void XmlSchemaAnyAttribute__ctor_m14081 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_Namespace()
extern "C" String_t* XmlSchemaAnyAttribute_get_Namespace_m14082 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueAny()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueAny_m14083 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueLocal()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueLocal_m14084 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueOther()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueOther_m14085 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::get_HasValueTargetNamespace()
extern "C" bool XmlSchemaAnyAttribute_get_HasValueTargetNamespace_m14086 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringCollection System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedNamespaces()
extern "C" StringCollection_t3451 * XmlSchemaAnyAttribute_get_ResolvedNamespaces_m14087 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::get_ResolvedProcessContents()
extern "C" int32_t XmlSchemaAnyAttribute_get_ResolvedProcessContents_m14088 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAnyAttribute::get_TargetNamespace()
extern "C" String_t* XmlSchemaAnyAttribute_get_TargetNamespace_m14089 (XmlSchemaAnyAttribute_t3641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnyAttribute_Compile_m14090 (XmlSchemaAnyAttribute_t3641 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAnyAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAnyAttribute_Validate_m14091 (XmlSchemaAnyAttribute_t3641 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardSubset(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" void XmlSchemaAnyAttribute_ValidateWildcardSubset_m14092 (XmlSchemaAnyAttribute_t3641 * __this, XmlSchemaAnyAttribute_t3641 * ___other, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAnyAttribute::ValidateWildcardAllowsNamespaceName(System.String,System.Xml.Schema.XmlSchema)
extern "C" bool XmlSchemaAnyAttribute_ValidateWildcardAllowsNamespaceName_m14093 (XmlSchemaAnyAttribute_t3641 * __this, String_t* ___ns, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAnyAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAnyAttribute_t3641 * XmlSchemaAnyAttribute_Read_m14094 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
