#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.Schema.XsdValidatingReader
struct XsdValidatingReader_t3439;
// Mono.Xml.Schema.XsdValidationContext
struct XsdValidationContext_t3418;
// System.Collections.ArrayList
struct ArrayList_t713;
// System.Xml.XmlResolver
struct XmlResolver_t3434;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t3436;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3459;
// System.Xml.XmlParserContext
struct XmlParserContext_t3488;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t3486;
// System.Xml.XmlReader
struct XmlReader_t3369;
// System.Exception
struct Exception_t57;
// System.Xml.Schema.XmlSchemaValidationException
struct XmlSchemaValidationException_t3695;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3417;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t3646;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3416;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t3634;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t3470;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t3645;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t3635;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t3409;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t3413;
// System.Xml.Schema.XmlSchemaIdentityConstraint
struct XmlSchemaIdentityConstraint_t3415;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3625;
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"

// System.Void Mono.Xml.Schema.XsdValidatingReader::.ctor(System.Xml.XmlReader)
extern "C" void XsdValidatingReader__ctor_m12322 (XsdValidatingReader_t3439 * __this, XmlReader_t3369 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::.cctor()
extern "C" void XsdValidatingReader__cctor_m12323 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationContext Mono.Xml.Schema.XsdValidatingReader::get_Context()
extern "C" XsdValidationContext_t3418 * XsdValidatingReader_get_Context_m12324 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdValidatingReader::get_CurrentKeyFieldConsumers()
extern "C" ArrayList_t713 * XsdValidatingReader_get_CurrentKeyFieldConsumers_m12325 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_XsiNilDepth()
extern "C" int32_t XsdValidatingReader_get_XsiNilDepth_m12326 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XsdValidatingReader_set_XmlResolver_m12327 (XsdValidatingReader_t3439 * __this, XmlResolver_t3434 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_Schemas(System.Xml.Schema.XmlSchemaSet)
extern "C" void XsdValidatingReader_set_Schemas_m12328 (XsdValidatingReader_t3439 * __this, XmlSchemaSet_t3436 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SchemaType()
extern "C" Object_t * XsdValidatingReader_get_SchemaType_m12329 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::get_SourceReaderSchemaType()
extern "C" Object_t * XsdValidatingReader_get_SourceReaderSchemaType_m12330 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType Mono.Xml.Schema.XsdValidatingReader::get_ValidationType()
extern "C" int32_t XsdValidatingReader_get_ValidationType_m12331 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C" void XsdValidatingReader_set_ValidationType_m12332 (XsdValidatingReader_t3439 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_AttributeCount()
extern "C" int32_t XsdValidatingReader_get_AttributeCount_m12333 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_BaseURI()
extern "C" String_t* XsdValidatingReader_get_BaseURI_m12334 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_CanResolveEntity()
extern "C" bool XsdValidatingReader_get_CanResolveEntity_m12335 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_Depth()
extern "C" int32_t XsdValidatingReader_get_Depth_m12336 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_EOF()
extern "C" bool XsdValidatingReader_get_EOF_m12337 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_HasValue()
extern "C" bool XsdValidatingReader_get_HasValue_m12338 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsDefault()
extern "C" bool XsdValidatingReader_get_IsDefault_m12339 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::get_IsEmptyElement()
extern "C" bool XsdValidatingReader_get_IsEmptyElement_m12340 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String)
extern "C" String_t* XsdValidatingReader_get_Item_m12341 (XsdValidatingReader_t3439 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Item(System.String,System.String)
extern "C" String_t* XsdValidatingReader_get_Item_m12342 (XsdValidatingReader_t3439 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LineNumber()
extern "C" int32_t XsdValidatingReader_get_LineNumber_m12343 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::get_LinePosition()
extern "C" int32_t XsdValidatingReader_get_LinePosition_m12344 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_LocalName()
extern "C" String_t* XsdValidatingReader_get_LocalName_m12345 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Name()
extern "C" String_t* XsdValidatingReader_get_Name_m12346 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_NamespaceURI()
extern "C" String_t* XsdValidatingReader_get_NamespaceURI_m12347 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.Schema.XsdValidatingReader::get_NameTable()
extern "C" XmlNameTable_t3459 * XsdValidatingReader_get_NameTable_m12348 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.Schema.XsdValidatingReader::get_NodeType()
extern "C" int32_t XsdValidatingReader_get_NodeType_m12349 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.Schema.XsdValidatingReader::get_ParserContext()
extern "C" XmlParserContext_t3488 * XsdValidatingReader_get_ParserContext_m12350 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamespaceManager Mono.Xml.Schema.XsdValidatingReader::get_NamespaceManager()
extern "C" XmlNamespaceManager_t3486 * XsdValidatingReader_get_NamespaceManager_m12351 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Prefix()
extern "C" String_t* XsdValidatingReader_get_Prefix_m12352 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.Schema.XsdValidatingReader::get_ReadState()
extern "C" int32_t XsdValidatingReader_get_ReadState_m12353 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_Value()
extern "C" String_t* XsdValidatingReader_get_Value_m12354 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::get_XmlLang()
extern "C" String_t* XsdValidatingReader_get_XmlLang_m12355 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.Schema.XsdValidatingReader::get_XmlSpace()
extern "C" int32_t XsdValidatingReader_get_XmlSpace_m12356 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String)
extern "C" void XsdValidatingReader_HandleError_m12357 (XsdValidatingReader_t3439 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception)
extern "C" void XsdValidatingReader_HandleError_m12358 (XsdValidatingReader_t3439 * __this, String_t* ___error, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.String,System.Exception,System.Boolean)
extern "C" void XsdValidatingReader_HandleError_m12359 (XsdValidatingReader_t3439 * __this, String_t* ___error, Exception_t57 * ___innerException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException)
extern "C" void XsdValidatingReader_HandleError_m12360 (XsdValidatingReader_t3439 * __this, XmlSchemaValidationException_t3695 * ___schemaException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::HandleError(System.Xml.Schema.XmlSchemaValidationException,System.Boolean)
extern "C" void XsdValidatingReader_HandleError_m12361 (XsdValidatingReader_t3439 * __this, XmlSchemaValidationException_t3695 * ___schemaException, bool ___isWarning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaElement Mono.Xml.Schema.XsdValidatingReader::FindElement(System.String,System.String)
extern "C" XmlSchemaElement_t3417 * XsdValidatingReader_FindElement_m12362 (XsdValidatingReader_t3439 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaType Mono.Xml.Schema.XsdValidatingReader::FindType(System.Xml.XmlQualifiedName)
extern "C" XmlSchemaType_t3646 * XsdValidatingReader_FindType_m12363 (XsdValidatingReader_t3439 * __this, XmlQualifiedName_t3416 * ___qname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateStartElementParticle()
extern "C" void XsdValidatingReader_ValidateStartElementParticle_m12364 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementParticle()
extern "C" void XsdValidatingReader_ValidateEndElementParticle_m12365 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateCharacters()
extern "C" void XsdValidatingReader_ValidateCharacters_m12366 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContent()
extern "C" void XsdValidatingReader_ValidateEndSimpleContent_m12367 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndSimpleContentCore()
extern "C" void XsdValidatingReader_ValidateEndSimpleContentCore_m12368 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStringValid(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C" void XsdValidatingReader_AssessStringValid_m12369 (XsdValidatingReader_t3439 * __this, XmlSchemaSimpleType_t3634 * ___st, XmlSchemaDatatype_t3470 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateRestrictedSimpleTypeValue(System.Xml.Schema.XmlSchemaSimpleType,System.Xml.Schema.XmlSchemaDatatype&,System.String)
extern "C" void XsdValidatingReader_ValidateRestrictedSimpleTypeValue_m12370 (XsdValidatingReader_t3439 * __this, XmlSchemaSimpleType_t3634 * ___st, XmlSchemaDatatype_t3470 ** ___dt, String_t* ___normalized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdValidatingReader::GetXsiType(System.String)
extern "C" Object_t * XsdValidatingReader_GetXsiType_m12371 (XsdValidatingReader_t3439 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessLocalTypeDerivationOK(System.Object,System.Object,System.Xml.Schema.XmlSchemaDerivationMethod)
extern "C" void XsdValidatingReader_AssessLocalTypeDerivationOK_m12372 (XsdValidatingReader_t3439 * __this, Object_t * ___xsiType, Object_t * ___baseType, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementSchemaValidity()
extern "C" void XsdValidatingReader_AssessStartElementSchemaValidity_m12373 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidElement(System.String)
extern "C" void XsdValidatingReader_AssessElementLocallyValidElement_m12374 (XsdValidatingReader_t3439 * __this, String_t* ___xsiNilValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessStartElementLocallyValidType(System.Object)
extern "C" void XsdValidatingReader_AssessStartElementLocallyValidType_m12375 (XsdValidatingReader_t3439 * __this, Object_t * ___schemaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessElementLocallyValidComplexType(System.Xml.Schema.XmlSchemaComplexType)
extern "C" void XsdValidatingReader_AssessElementLocallyValidComplexType_m12376 (XsdValidatingReader_t3439 * __this, XmlSchemaComplexType_t3645 * ___cType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValid(System.Xml.Schema.XmlSchemaAttribute)
extern "C" void XsdValidatingReader_AssessAttributeLocallyValid_m12377 (XsdValidatingReader_t3439 * __this, XmlSchemaAttribute_t3635 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessAttributeLocallyValidUse(System.Xml.Schema.XmlSchemaAttribute)
extern "C" void XsdValidatingReader_AssessAttributeLocallyValidUse_m12378 (XsdValidatingReader_t3439 * __this, XmlSchemaAttribute_t3635 * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::AssessEndElementSchemaValidity()
extern "C" void XsdValidatingReader_AssessEndElementSchemaValidity_m12379 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateEndElementKeyConstraints()
extern "C" void XsdValidatingReader_ValidateEndElementKeyConstraints_m12380 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeySelectors()
extern "C" void XsdValidatingReader_ValidateKeySelectors_m12381 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateKeyFields()
extern "C" void XsdValidatingReader_ValidateKeyFields_m12382 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ProcessKeyEntry(Mono.Xml.Schema.XsdKeyEntry)
extern "C" void XsdValidatingReader_ProcessKeyEntry_m12383 (XsdValidatingReader_t3439 * __this, XsdKeyEntry_t3409 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdKeyTable Mono.Xml.Schema.XsdValidatingReader::CreateNewKeyTable(System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" XsdKeyTable_t3413 * XsdValidatingReader_CreateNewKeyTable_m12384 (XsdValidatingReader_t3439 * __this, XmlSchemaIdentityConstraint_t3415 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ValidateSimpleContentIdentity(System.Xml.Schema.XmlSchemaDatatype,System.String)
extern "C" void XsdValidatingReader_ValidateSimpleContentIdentity_m12385 (XsdValidatingReader_t3439 * __this, XmlSchemaDatatype_t3470 * ___dt, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndIdentityValidation(Mono.Xml.Schema.XsdKeyTable)
extern "C" void XsdValidatingReader_EndIdentityValidation_m12386 (XsdValidatingReader_t3439 * __this, XsdKeyTable_t3413 * ___seq, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::EndKeyrefValidation(Mono.Xml.Schema.XsdKeyTable,System.Xml.Schema.XmlSchemaIdentityConstraint)
extern "C" void XsdValidatingReader_EndKeyrefValidation_m12387 (XsdValidatingReader_t3439 * __this, XsdKeyTable_t3413 * ___seq, XmlSchemaIdentityConstraint_t3415 * ___targetIdent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::Close()
extern "C" void XsdValidatingReader_Close_m12388 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String)
extern "C" String_t* XsdValidatingReader_GetAttribute_m12389 (XsdValidatingReader_t3439 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName Mono.Xml.Schema.XsdValidatingReader::SplitQName(System.String)
extern "C" XmlQualifiedName_t3416 * XsdValidatingReader_SplitQName_m12390 (XsdValidatingReader_t3439 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetAttribute(System.String,System.String)
extern "C" String_t* XsdValidatingReader_GetAttribute_m12391 (XsdValidatingReader_t3439 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::GetDefaultAttribute(System.String,System.String)
extern "C" String_t* XsdValidatingReader_GetDefaultAttribute_m12392 (XsdValidatingReader_t3439 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidatingReader::FindDefaultAttribute(System.String,System.String)
extern "C" int32_t XsdValidatingReader_FindDefaultAttribute_m12393 (XsdValidatingReader_t3439 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::HasLineInfo()
extern "C" bool XsdValidatingReader_HasLineInfo_m12394 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdValidatingReader::LookupNamespace(System.String)
extern "C" String_t* XsdValidatingReader_LookupNamespace_m12395 (XsdValidatingReader_t3439 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.Int32)
extern "C" void XsdValidatingReader_MoveToAttribute_m12396 (XsdValidatingReader_t3439 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String)
extern "C" bool XsdValidatingReader_MoveToAttribute_m12397 (XsdValidatingReader_t3439 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" bool XsdValidatingReader_MoveToAttribute_m12398 (XsdValidatingReader_t3439 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToDefaultAttribute(System.String,System.String)
extern "C" bool XsdValidatingReader_MoveToDefaultAttribute_m12399 (XsdValidatingReader_t3439 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToElement()
extern "C" bool XsdValidatingReader_MoveToElement_m12400 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToFirstAttribute()
extern "C" bool XsdValidatingReader_MoveToFirstAttribute_m12401 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::MoveToNextAttribute()
extern "C" bool XsdValidatingReader_MoveToNextAttribute_m12402 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchema Mono.Xml.Schema.XsdValidatingReader::ReadExternalSchema(System.String)
extern "C" XmlSchema_t3625 * XsdValidatingReader_ReadExternalSchema_m12403 (XsdValidatingReader_t3439 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ExamineAdditionalSchema()
extern "C" void XsdValidatingReader_ExamineAdditionalSchema_m12404 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::Read()
extern "C" bool XsdValidatingReader_Read_m12405 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdValidatingReader::ReadAttributeValue()
extern "C" bool XsdValidatingReader_ReadAttributeValue_m12406 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidatingReader::ResolveEntity()
extern "C" void XsdValidatingReader_ResolveEntity_m12407 (XsdValidatingReader_t3439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
