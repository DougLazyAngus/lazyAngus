#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3426;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3402;
// System.Xml.XmlReader
struct XmlReader_t3379;

// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C" void XmlQualifiedName__ctor_m13335 (XmlQualifiedName_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
extern "C" void XmlQualifiedName__ctor_m13336 (XmlQualifiedName_t3426 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C" void XmlQualifiedName__ctor_m13337 (XmlQualifiedName_t3426 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.cctor()
extern "C" void XmlQualifiedName__cctor_m13338 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
extern "C" bool XmlQualifiedName_get_IsEmpty_m13339 (XmlQualifiedName_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C" String_t* XmlQualifiedName_get_Name_m13340 (XmlQualifiedName_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C" String_t* XmlQualifiedName_get_Namespace_m13341 (XmlQualifiedName_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
extern "C" bool XmlQualifiedName_Equals_m13342 (XmlQualifiedName_t3426 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
extern "C" int32_t XmlQualifiedName_GetHashCode_m13343 (XmlQualifiedName_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::ToString()
extern "C" String_t* XmlQualifiedName_ToString_m13344 (XmlQualifiedName_t3426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.IXmlNamespaceResolver,System.Boolean)
extern "C" XmlQualifiedName_t3426 * XmlQualifiedName_Parse_m13345 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___resolver, bool ___considerDefaultNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.XmlReader)
extern "C" XmlQualifiedName_t3426 * XmlQualifiedName_Parse_m13346 (Object_t * __this /* static, unused */, String_t* ___name, XmlReader_t3379 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" bool XmlQualifiedName_op_Equality_m13347 (Object_t * __this /* static, unused */, XmlQualifiedName_t3426 * ___a, XmlQualifiedName_t3426 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" bool XmlQualifiedName_op_Inequality_m13348 (Object_t * __this /* static, unused */, XmlQualifiedName_t3426 * ___a, XmlQualifiedName_t3426 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
