#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3645;
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Object
struct Object_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3469;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3633;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlTypeCode
#include "System_Xml_System_Xml_Schema_XmlTypeCode.h"

// System.Void System.Xml.Schema.XmlSchemaType::.ctor()
extern "C" void XmlSchemaType__ctor_m14565 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaType::get_Name()
extern "C" String_t* XmlSchemaType_get_Name_m14566 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Name(System.String)
extern "C" void XmlSchemaType_set_Name_m14567 (XmlSchemaType_t3645 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_Final()
extern "C" int32_t XmlSchemaType_get_Final_m14568 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaType::set_Final(System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" void XmlSchemaType_set_Final_m14569 (XmlSchemaType_t3645 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::get_QualifiedName()
extern "C" XmlQualifiedName_t3415 * XmlSchemaType_get_QualifiedName_m14570 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_FinalResolved()
extern "C" int32_t XmlSchemaType_get_FinalResolved_m14571 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Schema.XmlSchemaType::get_BaseSchemaType()
extern "C" Object_t * XmlSchemaType_get_BaseSchemaType_m14572 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::get_BaseXmlSchemaType()
extern "C" XmlSchemaType_t3645 * XmlSchemaType_get_BaseXmlSchemaType_m14573 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::get_DerivedBy()
extern "C" int32_t XmlSchemaType_get_DerivedBy_m14574 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::get_Datatype()
extern "C" XmlSchemaDatatype_t3469 * XmlSchemaType_get_Datatype_m14575 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::get_IsMixed()
extern "C" bool XmlSchemaType_get_IsMixed_m14576 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaSimpleType_t3633 * XmlSchemaType_GetBuiltInSimpleType_m14577 (Object_t * __this /* static, unused */, XmlQualifiedName_t3415 * ___qualifiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaType::GetBuiltInSimpleType(System.Xml.Schema.XmlTypeCode)
extern "C" XmlSchemaSimpleType_t3633 * XmlSchemaType_GetBuiltInSimpleType_m14578 (Object_t * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaType::ValidateRecursionCheck()
extern "C" bool XmlSchemaType_ValidateRecursionCheck_m14579 (XmlSchemaType_t3645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
