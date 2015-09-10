#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3656;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3480;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3644;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m14635 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaType::get_Name()
extern "C" String_t* XmlSchemaType_get_Name_m14636 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Name(System.String)
extern "C" void XmlSchemaType_set_Name_m14637 (XmlSchemaType_t3656 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_Final()
extern "C" int32_t XmlSchemaType_get_Final_m14638 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" void XmlSchemaType_set_Final_m14639 (XmlSchemaType_t3656 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t3426 * XmlSchemaType_get_QualifiedName_m14640 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_FinalResolved()
extern "C" int32_t XmlSchemaType_get_FinalResolved_m14641 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaType::get_BaseSchemaType()
extern "C" Object_t * XmlSchemaType_get_BaseSchemaType_m14642 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::get_BaseXmlSchemaType()
extern "C" XmlSchemaType_t3656 * XmlSchemaType_get_BaseXmlSchemaType_m14643 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_DerivedBy()
extern "C" int32_t XmlSchemaType_get_DerivedBy_m14644 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::get_Datatype()
extern "C" XmlSchemaDatatype_t3480 * XmlSchemaType_get_Datatype_m14645 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::get_IsMixed()
extern "C" bool XmlSchemaType_get_IsMixed_m14646 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t3644 * XmlSchemaType_GetBuiltInSimpleType_m14647 (Object_t * __this /* static, unused */, XmlQualifiedName_t3426 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode)
extern "C" XmlSchemaSimpleType_t3644 * XmlSchemaType_GetBuiltInSimpleType_m14648 (Object_t * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::ValidateRecursionCheck()
extern "C" bool XmlSchemaType_ValidateRecursionCheck_m14649 (XmlSchemaType_t3656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
