#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t3484;
// System.Xml.XmlParserContext
struct XmlParserContext_t3488;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3459;
// System.Xml.XmlResolver
struct XmlResolver_t3434;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3554;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t3535;
// System.Xml.XmlReader
struct XmlReader_t3369;
// System.Object
struct Object_t;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3622;
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
extern "C" void XmlValidatingReader__ctor_m13494 (XmlValidatingReader_t3484 * __this, XmlReader_t3369 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlValidatingReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t3488 * XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m13495 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
extern "C" int32_t XmlValidatingReader_get_AttributeCount_m13496 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
extern "C" String_t* XmlValidatingReader_get_BaseURI_m13497 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
extern "C" bool XmlValidatingReader_get_CanResolveEntity_m13498 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
extern "C" int32_t XmlValidatingReader_get_Depth_m13499 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlValidatingReader::get_EntityHandling()
extern "C" int32_t XmlValidatingReader_get_EntityHandling_m13500 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" void XmlValidatingReader_set_EntityHandling_m13501 (XmlValidatingReader_t3484 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_EOF()
extern "C" bool XmlValidatingReader_get_EOF_m13502 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_HasValue()
extern "C" bool XmlValidatingReader_get_HasValue_m13503 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
extern "C" bool XmlValidatingReader_get_IsDefault_m13504 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
extern "C" bool XmlValidatingReader_get_IsEmptyElement_m13505 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
extern "C" int32_t XmlValidatingReader_get_LineNumber_m13506 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
extern "C" int32_t XmlValidatingReader_get_LinePosition_m13507 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_LocalName()
extern "C" String_t* XmlValidatingReader_get_LocalName_m13508 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Name()
extern "C" String_t* XmlValidatingReader_get_Name_m13509 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C" bool XmlValidatingReader_get_Namespaces_m13510 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
extern "C" String_t* XmlValidatingReader_get_NamespaceURI_m13511 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
extern "C" XmlNameTable_t3459 * XmlValidatingReader_get_NameTable_m13512 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
extern "C" int32_t XmlValidatingReader_get_NodeType_m13513 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Prefix()
extern "C" String_t* XmlValidatingReader_get_Prefix_m13514 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
extern "C" int32_t XmlValidatingReader_get_ReadState_m13515 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C" XmlResolver_t3434 * XmlValidatingReader_get_Resolver_m13516 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C" XmlSchemaCollection_t3554 * XmlValidatingReader_get_Schemas_m13517 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReader::get_Settings()
extern "C" XmlReaderSettings_t3535 * XmlValidatingReader_get_Settings_m13518 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C" int32_t XmlValidatingReader_get_ValidationType_m13519 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C" void XmlValidatingReader_set_ValidationType_m13520 (XmlValidatingReader_t3484 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Value()
extern "C" String_t* XmlValidatingReader_get_Value_m13521 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_XmlLang()
extern "C" String_t* XmlValidatingReader_get_XmlLang_m13522 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlValidatingReader::get_XmlSpace()
extern "C" int32_t XmlValidatingReader_get_XmlSpace_m13523 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::Close()
extern "C" void XmlValidatingReader_Close_m13524 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
extern "C" String_t* XmlValidatingReader_GetAttribute_m13525 (XmlValidatingReader_t3484 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlValidatingReader_GetAttribute_m13526 (XmlValidatingReader_t3484 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::HasLineInfo()
extern "C" bool XmlValidatingReader_HasLineInfo_m13527 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
extern "C" String_t* XmlValidatingReader_LookupNamespace_m13528 (XmlValidatingReader_t3484 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
extern "C" void XmlValidatingReader_MoveToAttribute_m13529 (XmlValidatingReader_t3484 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
extern "C" bool XmlValidatingReader_MoveToAttribute_m13530 (XmlValidatingReader_t3484 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlValidatingReader_MoveToAttribute_m13531 (XmlValidatingReader_t3484 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
extern "C" bool XmlValidatingReader_MoveToElement_m13532 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
extern "C" bool XmlValidatingReader_MoveToFirstAttribute_m13533 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
extern "C" bool XmlValidatingReader_MoveToNextAttribute_m13534 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::Read()
extern "C" bool XmlValidatingReader_Read_m13535 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
extern "C" bool XmlValidatingReader_ReadAttributeValue_m13536 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
extern "C" void XmlValidatingReader_ResolveEntity_m13537 (XmlValidatingReader_t3484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::OnValidationEvent(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C" void XmlValidatingReader_OnValidationEvent_m13538 (XmlValidatingReader_t3484 * __this, Object_t * ___o, ValidationEventArgs_t3622 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
