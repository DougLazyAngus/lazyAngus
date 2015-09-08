#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaUtil
struct XmlSchemaUtil_t3702;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3626;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3443;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3419;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3441;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t714;
// System.Xml.XmlParserContext
struct XmlParserContext_t3491;
// System.Xml.XmlReader
struct XmlReader_t3372;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t3413;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t75;
// System.Xml.XmlAttribute
struct XmlAttribute_t739;
// System.Exception
struct Exception_t57;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3628;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3627;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3634;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3639;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t3638;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3439;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t3648;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
extern "C" void XmlSchemaUtil__cctor_m14614 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaUtil_AddToTable_m14615 (Object_t * __this /* static, unused */, XmlSchemaObjectTable_t3626 * ___table, XmlSchemaObject_t3443 * ___obj, XmlQualifiedName_t3419 * ___qname, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaUtil_CompileID_m14616 (Object_t * __this /* static, unused */, String_t* ___id, XmlSchemaObject_t3443 * ___xso, Hashtable_t714 * ___idCollection, ValidationEventHandler_t3441 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
extern "C" bool XmlSchemaUtil_CheckAnyUri_m14617 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
extern "C" bool XmlSchemaUtil_CheckNormalizedString_m14618 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
extern "C" bool XmlSchemaUtil_CheckNCName_m14619 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
extern "C" bool XmlSchemaUtil_CheckQName_m14620 (Object_t * __this /* static, unused */, XmlQualifiedName_t3419 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
extern "C" XmlParserContext_t3491 * XmlSchemaUtil_GetParserContext_m14621 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
extern "C" bool XmlSchemaUtil_IsBuiltInDatatypeName_m14622 (Object_t * __this /* static, unused */, XmlQualifiedName_t3419 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
extern "C" bool XmlSchemaUtil_AreSchemaDatatypeEqual_m14623 (Object_t * __this /* static, unused */, XsdAnySimpleType_t3413 * ___st1, Object_t * ___v1, XsdAnySimpleType_t3413 * ___st2, Object_t * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
extern "C" bool XmlSchemaUtil_IsValidQName_m14624 (Object_t * __this /* static, unused */, String_t* ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
extern "C" StringU5BU5D_t75* XmlSchemaUtil_SplitList_m14625 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaUtil_ReadUnhandledAttribute_m14626 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, XmlSchemaObject_t3443 * ___xso, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C" void XmlSchemaUtil_ParseWsdlArrayType_m14627 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, XmlAttribute_t739 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" bool XmlSchemaUtil_ReadBoolAttribute_m14628 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, Exception_t57 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" int32_t XmlSchemaUtil_ReadDerivationAttribute_m14629 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, Exception_t57 ** ___innerExcpetion, String_t* ___name, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" int32_t XmlSchemaUtil_AddFlag_m14630 (Object_t * __this /* static, unused */, int32_t ___dst, int32_t ___add, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadFormAttribute_m14631 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, Exception_t57 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadProcessingAttribute_m14632 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, Exception_t57 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadUseAttribute_m14633 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, Exception_t57 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" XmlQualifiedName_t3419 * XmlSchemaUtil_ReadQNameAttribute_m14634 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, Exception_t57 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
extern "C" XmlQualifiedName_t3419 * XmlSchemaUtil_ToQName_m14635 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, String_t* ___qnamestr, Exception_t57 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
extern "C" int32_t XmlSchemaUtil_ValidateAttributesResolved_m14636 (Object_t * __this /* static, unused */, XmlSchemaObjectTable_t3626 * ___attributesResolved, ValidationEventHandler_t3441 * ___h, XmlSchema_t3628 * ___schema, XmlSchemaObjectCollection_t3627 * ___attributes, XmlSchemaAnyAttribute_t3634 * ___anyAttribute, XmlSchemaAnyAttribute_t3634 ** ___anyAttributeUse, XmlSchemaAttributeGroup_t3639 * ___redefined, bool ___skipEquivalent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
extern "C" bool XmlSchemaUtil_AreAttributesEqual_m14637 (Object_t * __this /* static, unused */, XmlSchemaAttribute_t3638 * ___one, XmlSchemaAttribute_t3638 * ___another, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaUtil::FindAttributeDeclaration(System.String,System.Xml.Schema.XmlSchemaSet,System.Xml.Schema.XmlSchemaComplexType,System.Xml.XmlQualifiedName)
extern "C" XmlSchemaObject_t3443 * XmlSchemaUtil_FindAttributeDeclaration_m14638 (Object_t * __this /* static, unused */, String_t* ___ns, XmlSchemaSet_t3439 * ___schemas, XmlSchemaComplexType_t3648 * ___cType, XmlQualifiedName_t3419 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AttributeWildcardItemValid(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.XmlQualifiedName,System.String)
extern "C" bool XmlSchemaUtil_AttributeWildcardItemValid_m14639 (Object_t * __this /* static, unused */, XmlSchemaAnyAttribute_t3634 * ___anyAttr, XmlQualifiedName_t3419 * ___qname, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
