#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t3645;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3644;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3450;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3448;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3635;
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t3710;
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"

// System.Void System.Xml.Schema.XmlSchemaAttribute::.ctor()
extern "C" void XmlSchemaAttribute__ctor_m14099 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaAttribute::get_ParentIsSchema()
extern "C" bool XmlSchemaAttribute_get_ParentIsSchema_m14100 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_DefaultValue()
extern "C" String_t* XmlSchemaAttribute_get_DefaultValue_m14101 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_FixedValue()
extern "C" String_t* XmlSchemaAttribute_get_FixedValue_m14102 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaAttribute::get_Form()
extern "C" int32_t XmlSchemaAttribute_get_Form_m14103 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_Name()
extern "C" String_t* XmlSchemaAttribute_get_Name_m14104 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_RefName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaAttribute_get_RefName_m14105 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_SchemaTypeName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaAttribute_get_SchemaTypeName_m14106 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::get_SchemaType()
extern "C" XmlSchemaSimpleType_t3644 * XmlSchemaAttribute_get_SchemaType_m14107 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::get_Use()
extern "C" int32_t XmlSchemaAttribute_get_Use_m14108 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::get_QualifiedName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaAttribute_get_QualifiedName_m14109 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaAttribute::get_AttributeType()
extern "C" Object_t * XmlSchemaAttribute_get_AttributeType_m14110 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_ValidatedDefaultValue()
extern "C" String_t* XmlSchemaAttribute_get_ValidatedDefaultValue_m14111 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaAttribute::get_ValidatedFixedValue()
extern "C" String_t* XmlSchemaAttribute_get_ValidatedFixedValue_m14112 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::get_ValidatedUse()
extern "C" int32_t XmlSchemaAttribute_get_ValidatedUse_m14113 (XmlSchemaAttribute_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttribute::SetParent(System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaAttribute_SetParent_m14114 (XmlSchemaAttribute_t3645 * __this, XmlSchemaObject_t3450 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttribute::Compile(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttribute_Compile_m14115 (XmlSchemaAttribute_t3645 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaAttribute::CompileCommon(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Boolean)
extern "C" void XmlSchemaAttribute_CompileCommon_m14116 (XmlSchemaAttribute_t3645 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, bool ___refIsNotPresent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaAttribute::Validate(System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema)
extern "C" int32_t XmlSchemaAttribute_Validate_m14117 (XmlSchemaAttribute_t3645 * __this, ValidationEventHandler_t3448 * ___h, XmlSchema_t3635 * ___schema, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.XmlSchemaAttribute::Read(System.Xml.Schema.XmlSchemaReader,System.Xml.Schema.ValidationEventHandler)
extern "C" XmlSchemaAttribute_t3645 * XmlSchemaAttribute_Read_m14118 (Object_t * __this /* static, unused */, XmlSchemaReader_t3710 * ___reader, ValidationEventHandler_t3448 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
