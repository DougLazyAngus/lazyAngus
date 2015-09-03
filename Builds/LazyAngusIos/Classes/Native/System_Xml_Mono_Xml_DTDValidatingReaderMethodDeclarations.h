#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t3486;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t3482;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3443;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3458;
// System.Xml.XmlParserContext
struct XmlParserContext_t3487;
// System.Object
struct Object_t;
// System.Xml.XmlResolver
struct XmlResolver_t3433;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t3483;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3620;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t3471;
// Mono.Xml.DTDValidatingReader/AttributeSlot
struct AttributeSlot_t3481;
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"

// System.Void Mono.Xml.DTDValidatingReader::.ctor(System.Xml.XmlReader,System.Xml.XmlValidatingReader)
extern "C" void DTDValidatingReader__ctor_m12677 (DTDValidatingReader_t3486 * __this, XmlReader_t3368 * ___reader, XmlValidatingReader_t3483 * ___validatingReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C" bool DTDValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m12678 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::get_Source()
extern "C" EntityResolvingXmlReader_t3482 * DTDValidatingReader_get_Source_m12679 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::get_DTD()
extern "C" DTDObjectModel_t3443 * DTDValidatingReader_get_DTD_m12680 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.DTDValidatingReader::get_EntityHandling()
extern "C" int32_t DTDValidatingReader_get_EntityHandling_m12681 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" void DTDValidatingReader_set_EntityHandling_m12682 (DTDValidatingReader_t3486 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::Close()
extern "C" void DTDValidatingReader_Close_m12683 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String)
extern "C" int32_t DTDValidatingReader_GetAttributeIndex_m12684 (DTDValidatingReader_t3486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String,System.String)
extern "C" int32_t DTDValidatingReader_GetAttributeIndex_m12685 (DTDValidatingReader_t3486 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String)
extern "C" String_t* DTDValidatingReader_GetAttribute_m12686 (DTDValidatingReader_t3486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String,System.String)
extern "C" String_t* DTDValidatingReader_GetAttribute_m12687 (DTDValidatingReader_t3486 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::LookupNamespace(System.String)
extern "C" String_t* DTDValidatingReader_LookupNamespace_m12688 (DTDValidatingReader_t3486 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::MoveToAttribute(System.Int32)
extern "C" void DTDValidatingReader_MoveToAttribute_m12689 (DTDValidatingReader_t3486 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String)
extern "C" bool DTDValidatingReader_MoveToAttribute_m12690 (DTDValidatingReader_t3486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" bool DTDValidatingReader_MoveToAttribute_m12691 (DTDValidatingReader_t3486 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToElement()
extern "C" bool DTDValidatingReader_MoveToElement_m12692 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToFirstAttribute()
extern "C" bool DTDValidatingReader_MoveToFirstAttribute_m12693 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToNextAttribute()
extern "C" bool DTDValidatingReader_MoveToNextAttribute_m12694 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::Read()
extern "C" bool DTDValidatingReader_Read_m12695 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadContent()
extern "C" bool DTDValidatingReader_ReadContent_m12696 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ProcessContent()
extern "C" bool DTDValidatingReader_ProcessContent_m12697 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::FillAttributes()
extern "C" void DTDValidatingReader_FillAttributes_m12698 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateText()
extern "C" void DTDValidatingReader_ValidateText_m12699 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateWhitespaceNode()
extern "C" void DTDValidatingReader_ValidateWhitespaceNode_m12700 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.String,System.Xml.Schema.XmlSeverityType)
extern "C" void DTDValidatingReader_HandleError_m12701 (DTDValidatingReader_t3486 * __this, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.Xml.Schema.XmlSchemaException,System.Xml.Schema.XmlSeverityType)
extern "C" void DTDValidatingReader_HandleError_m12702 (DTDValidatingReader_t3486 * __this, XmlSchemaException_t3620 * ___ex, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C" void DTDValidatingReader_ValidateAttributes_m12703 (DTDValidatingReader_t3486 * __this, DTDAttListDeclaration_t3471 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDValidatingReader/AttributeSlot Mono.Xml.DTDValidatingReader::GetAttributeSlot()
extern "C" AttributeSlot_t3481 * DTDValidatingReader_GetAttributeSlot_m12704 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::DtdValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C" void DTDValidatingReader_DtdValidateAttributes_m12705 (DTDValidatingReader_t3486 * __this, DTDAttListDeclaration_t3471 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ReadDoctype()
extern "C" void DTDValidatingReader_ReadDoctype_m12706 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessStartElement()
extern "C" void DTDValidatingReader_ProcessStartElement_m12707 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessEndElement()
extern "C" void DTDValidatingReader_ProcessEndElement_m12708 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::VerifyDeclaredAttributes(Mono.Xml.DTDAttListDeclaration)
extern "C" void DTDValidatingReader_VerifyDeclaredAttributes_m12709 (DTDValidatingReader_t3486 * __this, DTDAttListDeclaration_t3471 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadAttributeValue()
extern "C" bool DTDValidatingReader_ReadAttributeValue_m12710 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ResolveEntity()
extern "C" void DTDValidatingReader_ResolveEntity_m12711 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_AttributeCount()
extern "C" int32_t DTDValidatingReader_get_AttributeCount_m12712 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_BaseURI()
extern "C" String_t* DTDValidatingReader_get_BaseURI_m12713 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_CanResolveEntity()
extern "C" bool DTDValidatingReader_get_CanResolveEntity_m12714 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_Depth()
extern "C" int32_t DTDValidatingReader_get_Depth_m12715 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_EOF()
extern "C" bool DTDValidatingReader_get_EOF_m12716 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_HasValue()
extern "C" bool DTDValidatingReader_get_HasValue_m12717 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsDefault()
extern "C" bool DTDValidatingReader_get_IsDefault_m12718 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsEmptyElement()
extern "C" bool DTDValidatingReader_get_IsEmptyElement_m12719 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String)
extern "C" String_t* DTDValidatingReader_get_Item_m12720 (DTDValidatingReader_t3486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String,System.String)
extern "C" String_t* DTDValidatingReader_get_Item_m12721 (DTDValidatingReader_t3486 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LineNumber()
extern "C" int32_t DTDValidatingReader_get_LineNumber_m12722 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LinePosition()
extern "C" int32_t DTDValidatingReader_get_LinePosition_m12723 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_LocalName()
extern "C" String_t* DTDValidatingReader_get_LocalName_m12724 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Name()
extern "C" String_t* DTDValidatingReader_get_Name_m12725 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_NamespaceURI()
extern "C" String_t* DTDValidatingReader_get_NamespaceURI_m12726 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDValidatingReader::get_NameTable()
extern "C" XmlNameTable_t3458 * DTDValidatingReader_get_NameTable_m12727 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.DTDValidatingReader::get_NodeType()
extern "C" int32_t DTDValidatingReader_get_NodeType_m12728 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C" XmlParserContext_t3487 * DTDValidatingReader_get_ParserContext_m12729 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Prefix()
extern "C" String_t* DTDValidatingReader_get_Prefix_m12730 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.DTDValidatingReader::get_ReadState()
extern "C" int32_t DTDValidatingReader_get_ReadState_m12731 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDValidatingReader::get_SchemaType()
extern "C" Object_t * DTDValidatingReader_get_SchemaType_m12732 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::FilterNormalization(System.String,System.String)
extern "C" String_t* DTDValidatingReader_FilterNormalization_m12733 (DTDValidatingReader_t3486 * __this, String_t* ___attrName, String_t* ___rawValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Value()
extern "C" String_t* DTDValidatingReader_get_Value_m12734 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_XmlLang()
extern "C" String_t* DTDValidatingReader_get_XmlLang_m12735 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDValidatingReader_set_XmlResolver_m12736 (DTDValidatingReader_t3486 * __this, XmlResolver_t3433 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.DTDValidatingReader::get_XmlSpace()
extern "C" int32_t DTDValidatingReader_get_XmlSpace_m12737 (DTDValidatingReader_t3486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
