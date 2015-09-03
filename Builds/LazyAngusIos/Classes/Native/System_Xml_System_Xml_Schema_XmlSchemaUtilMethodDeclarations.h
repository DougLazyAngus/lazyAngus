#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Schema.XmlSchemaUtil
struct XmlSchemaUtil_t3698;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3622;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3439;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3415;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t3437;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Xml.XmlParserContext
struct XmlParserContext_t3487;
// System.Xml.XmlReader
struct XmlReader_t3368;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t3409;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t75;
// System.Xml.XmlAttribute
struct XmlAttribute_t735;
// System.Exception
struct Exception_t57;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3624;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t3623;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t3630;
// System.Xml.Schema.XmlSchemaAttributeGroup
struct XmlSchemaAttributeGroup_t3635;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t3634;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3435;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t3644;
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// System.Xml.Schema.XmlSchemaUse
#include "System_Xml_System_Xml_Schema_XmlSchemaUse.h"

// System.Void System.Xml.Schema.XmlSchemaUtil::.cctor()
extern "C" void XmlSchemaUtil__cctor_m14601 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::AddToTable(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.XmlSchemaObject,System.Xml.XmlQualifiedName,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaUtil_AddToTable_m14602 (Object_t * __this /* static, unused */, XmlSchemaObjectTable_t3622 * ___table, XmlSchemaObject_t3439 * ___obj, XmlQualifiedName_t3415 * ___qname, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::CompileID(System.String,System.Xml.Schema.XmlSchemaObject,System.Collections.Hashtable,System.Xml.Schema.ValidationEventHandler)
extern "C" void XmlSchemaUtil_CompileID_m14603 (Object_t * __this /* static, unused */, String_t* ___id, XmlSchemaObject_t3439 * ___xso, Hashtable_t710 * ___idCollection, ValidationEventHandler_t3437 * ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckAnyUri(System.String)
extern "C" bool XmlSchemaUtil_CheckAnyUri_m14604 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNormalizedString(System.String)
extern "C" bool XmlSchemaUtil_CheckNormalizedString_m14605 (Object_t * __this /* static, unused */, String_t* ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckNCName(System.String)
extern "C" bool XmlSchemaUtil_CheckNCName_m14606 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::CheckQName(System.Xml.XmlQualifiedName)
extern "C" bool XmlSchemaUtil_CheckQName_m14607 (Object_t * __this /* static, unused */, XmlQualifiedName_t3415 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.Schema.XmlSchemaUtil::GetParserContext(System.Xml.XmlReader)
extern "C" XmlParserContext_t3487 * XmlSchemaUtil_GetParserContext_m14608 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsBuiltInDatatypeName(System.Xml.XmlQualifiedName)
extern "C" bool XmlSchemaUtil_IsBuiltInDatatypeName_m14609 (Object_t * __this /* static, unused */, XmlQualifiedName_t3415 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreSchemaDatatypeEqual(Mono.Xml.Schema.XsdAnySimpleType,System.Object,Mono.Xml.Schema.XsdAnySimpleType,System.Object)
extern "C" bool XmlSchemaUtil_AreSchemaDatatypeEqual_m14610 (Object_t * __this /* static, unused */, XsdAnySimpleType_t3409 * ___st1, Object_t * ___v1, XsdAnySimpleType_t3409 * ___st2, Object_t * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::IsValidQName(System.String)
extern "C" bool XmlSchemaUtil_IsValidQName_m14611 (Object_t * __this /* static, unused */, String_t* ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.XmlSchemaUtil::SplitList(System.String)
extern "C" StringU5BU5D_t75* XmlSchemaUtil_SplitList_m14612 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ReadUnhandledAttribute(System.Xml.XmlReader,System.Xml.Schema.XmlSchemaObject)
extern "C" void XmlSchemaUtil_ReadUnhandledAttribute_m14613 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, XmlSchemaObject_t3439 * ___xso, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaUtil::ParseWsdlArrayType(System.Xml.XmlReader,System.Xml.XmlAttribute)
extern "C" void XmlSchemaUtil_ParseWsdlArrayType_m14614 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, XmlAttribute_t735 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::ReadBoolAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" bool XmlSchemaUtil_ReadBoolAttribute_m14615 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, Exception_t57 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::ReadDerivationAttribute(System.Xml.XmlReader,System.Exception&,System.String,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" int32_t XmlSchemaUtil_ReadDerivationAttribute_m14616 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, Exception_t57 ** ___innerExcpetion, String_t* ___name, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaUtil::AddFlag(System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" int32_t XmlSchemaUtil_AddFlag_m14617 (Object_t * __this /* static, unused */, int32_t ___dst, int32_t ___add, int32_t ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaUtil::ReadFormAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadFormAttribute_m14618 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, Exception_t57 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaUtil::ReadProcessingAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadProcessingAttribute_m14619 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, Exception_t57 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaUtil::ReadUseAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" int32_t XmlSchemaUtil_ReadUseAttribute_m14620 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, Exception_t57 ** ___innerExcpetion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ReadQNameAttribute(System.Xml.XmlReader,System.Exception&)
extern "C" XmlQualifiedName_t3415 * XmlSchemaUtil_ReadQNameAttribute_m14621 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, Exception_t57 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaUtil::ToQName(System.Xml.XmlReader,System.String,System.Exception&)
extern "C" XmlQualifiedName_t3415 * XmlSchemaUtil_ToQName_m14622 (Object_t * __this /* static, unused */, XmlReader_t3368 * ___reader, String_t* ___qnamestr, Exception_t57 ** ___innerEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.XmlSchemaUtil::ValidateAttributesResolved(System.Xml.Schema.XmlSchemaObjectTable,System.Xml.Schema.ValidationEventHandler,System.Xml.Schema.XmlSchema,System.Xml.Schema.XmlSchemaObjectCollection,System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.Schema.XmlSchemaAnyAttribute&,System.Xml.Schema.XmlSchemaAttributeGroup,System.Boolean)
extern "C" int32_t XmlSchemaUtil_ValidateAttributesResolved_m14623 (Object_t * __this /* static, unused */, XmlSchemaObjectTable_t3622 * ___attributesResolved, ValidationEventHandler_t3437 * ___h, XmlSchema_t3624 * ___schema, XmlSchemaObjectCollection_t3623 * ___attributes, XmlSchemaAnyAttribute_t3630 * ___anyAttribute, XmlSchemaAnyAttribute_t3630 ** ___anyAttributeUse, XmlSchemaAttributeGroup_t3635 * ___redefined, bool ___skipEquivalent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AreAttributesEqual(System.Xml.Schema.XmlSchemaAttribute,System.Xml.Schema.XmlSchemaAttribute)
extern "C" bool XmlSchemaUtil_AreAttributesEqual_m14624 (Object_t * __this /* static, unused */, XmlSchemaAttribute_t3634 * ___one, XmlSchemaAttribute_t3634 * ___another, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaUtil::FindAttributeDeclaration(System.String,System.Xml.Schema.XmlSchemaSet,System.Xml.Schema.XmlSchemaComplexType,System.Xml.XmlQualifiedName)
extern "C" XmlSchemaObject_t3439 * XmlSchemaUtil_FindAttributeDeclaration_m14625 (Object_t * __this /* static, unused */, String_t* ___ns, XmlSchemaSet_t3435 * ___schemas, XmlSchemaComplexType_t3644 * ___cType, XmlQualifiedName_t3415 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.XmlSchemaUtil::AttributeWildcardItemValid(System.Xml.Schema.XmlSchemaAnyAttribute,System.Xml.XmlQualifiedName,System.String)
extern "C" bool XmlSchemaUtil_AttributeWildcardItemValid_m14626 (Object_t * __this /* static, unused */, XmlSchemaAnyAttribute_t3630 * ___anyAttr, XmlQualifiedName_t3415 * ___qname, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
