#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t3497;
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t3493;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3454;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.XmlParserContext
struct XmlParserContext_t3498;
// System.Object
struct Object_t;
// System.Xml.XmlResolver
struct XmlResolver_t3444;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t3494;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3631;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t3482;
// Mono.Xml.DTDValidatingReader/AttributeSlot
struct AttributeSlot_t3492;
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
extern "C" void DTDValidatingReader__ctor_m12747 (DTDValidatingReader_t3497 * __this, XmlReader_t3379 * ___reader, XmlValidatingReader_t3494 * ___validatingReader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C" bool DTDValidatingReader_System_Xml_IXmlLineInfo_HasLineInfo_m12748 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::get_Source()
extern "C" EntityResolvingXmlReader_t3493 * DTDValidatingReader_get_Source_m12749 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::get_DTD()
extern "C" DTDObjectModel_t3454 * DTDValidatingReader_get_DTD_m12750 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.DTDValidatingReader::get_EntityHandling()
extern "C" int32_t DTDValidatingReader_get_EntityHandling_m12751 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" void DTDValidatingReader_set_EntityHandling_m12752 (DTDValidatingReader_t3497 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::Close()
extern "C" void DTDValidatingReader_Close_m12753 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String)
extern "C" int32_t DTDValidatingReader_GetAttributeIndex_m12754 (DTDValidatingReader_t3497 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::GetAttributeIndex(System.String,System.String)
extern "C" int32_t DTDValidatingReader_GetAttributeIndex_m12755 (DTDValidatingReader_t3497 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String)
extern "C" String_t* DTDValidatingReader_GetAttribute_m12756 (DTDValidatingReader_t3497 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::GetAttribute(System.String,System.String)
extern "C" String_t* DTDValidatingReader_GetAttribute_m12757 (DTDValidatingReader_t3497 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::LookupNamespace(System.String)
extern "C" String_t* DTDValidatingReader_LookupNamespace_m12758 (DTDValidatingReader_t3497 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::MoveToAttribute(System.Int32)
extern "C" void DTDValidatingReader_MoveToAttribute_m12759 (DTDValidatingReader_t3497 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String)
extern "C" bool DTDValidatingReader_MoveToAttribute_m12760 (DTDValidatingReader_t3497 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToAttribute(System.String,System.String)
extern "C" bool DTDValidatingReader_MoveToAttribute_m12761 (DTDValidatingReader_t3497 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToElement()
extern "C" bool DTDValidatingReader_MoveToElement_m12762 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToFirstAttribute()
extern "C" bool DTDValidatingReader_MoveToFirstAttribute_m12763 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::MoveToNextAttribute()
extern "C" bool DTDValidatingReader_MoveToNextAttribute_m12764 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::Read()
extern "C" bool DTDValidatingReader_Read_m12765 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadContent()
extern "C" bool DTDValidatingReader_ReadContent_m12766 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ProcessContent()
extern "C" bool DTDValidatingReader_ProcessContent_m12767 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::FillAttributes()
extern "C" void DTDValidatingReader_FillAttributes_m12768 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateText()
extern "C" void DTDValidatingReader_ValidateText_m12769 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateWhitespaceNode()
extern "C" void DTDValidatingReader_ValidateWhitespaceNode_m12770 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.String,System.Xml.Schema.XmlSeverityType)
extern "C" void DTDValidatingReader_HandleError_m12771 (DTDValidatingReader_t3497 * __this, String_t* ___message, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::HandleError(System.Xml.Schema.XmlSchemaException,System.Xml.Schema.XmlSeverityType)
extern "C" void DTDValidatingReader_HandleError_m12772 (DTDValidatingReader_t3497 * __this, XmlSchemaException_t3631 * ___ex, int32_t ___severity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C" void DTDValidatingReader_ValidateAttributes_m12773 (DTDValidatingReader_t3497 * __this, DTDAttListDeclaration_t3482 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDValidatingReader/AttributeSlot Mono.Xml.DTDValidatingReader::GetAttributeSlot()
extern "C" AttributeSlot_t3492 * DTDValidatingReader_GetAttributeSlot_m12774 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::DtdValidateAttributes(Mono.Xml.DTDAttListDeclaration,System.Boolean)
extern "C" void DTDValidatingReader_DtdValidateAttributes_m12775 (DTDValidatingReader_t3497 * __this, DTDAttListDeclaration_t3482 * ___decl, bool ___validate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ReadDoctype()
extern "C" void DTDValidatingReader_ReadDoctype_m12776 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessStartElement()
extern "C" void DTDValidatingReader_ProcessStartElement_m12777 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ProcessEndElement()
extern "C" void DTDValidatingReader_ProcessEndElement_m12778 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::VerifyDeclaredAttributes(Mono.Xml.DTDAttListDeclaration)
extern "C" void DTDValidatingReader_VerifyDeclaredAttributes_m12779 (DTDValidatingReader_t3497 * __this, DTDAttListDeclaration_t3482 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::ReadAttributeValue()
extern "C" bool DTDValidatingReader_ReadAttributeValue_m12780 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::ResolveEntity()
extern "C" void DTDValidatingReader_ResolveEntity_m12781 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_AttributeCount()
extern "C" int32_t DTDValidatingReader_get_AttributeCount_m12782 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_BaseURI()
extern "C" String_t* DTDValidatingReader_get_BaseURI_m12783 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_CanResolveEntity()
extern "C" bool DTDValidatingReader_get_CanResolveEntity_m12784 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_Depth()
extern "C" int32_t DTDValidatingReader_get_Depth_m12785 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_EOF()
extern "C" bool DTDValidatingReader_get_EOF_m12786 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_HasValue()
extern "C" bool DTDValidatingReader_get_HasValue_m12787 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsDefault()
extern "C" bool DTDValidatingReader_get_IsDefault_m12788 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDValidatingReader::get_IsEmptyElement()
extern "C" bool DTDValidatingReader_get_IsEmptyElement_m12789 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String)
extern "C" String_t* DTDValidatingReader_get_Item_m12790 (DTDValidatingReader_t3497 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Item(System.String,System.String)
extern "C" String_t* DTDValidatingReader_get_Item_m12791 (DTDValidatingReader_t3497 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LineNumber()
extern "C" int32_t DTDValidatingReader_get_LineNumber_m12792 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDValidatingReader::get_LinePosition()
extern "C" int32_t DTDValidatingReader_get_LinePosition_m12793 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_LocalName()
extern "C" String_t* DTDValidatingReader_get_LocalName_m12794 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Name()
extern "C" String_t* DTDValidatingReader_get_Name_m12795 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_NamespaceURI()
extern "C" String_t* DTDValidatingReader_get_NamespaceURI_m12796 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDValidatingReader::get_NameTable()
extern "C" XmlNameTable_t3469 * DTDValidatingReader_get_NameTable_m12797 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.DTDValidatingReader::get_NodeType()
extern "C" int32_t DTDValidatingReader_get_NodeType_m12798 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.DTDValidatingReader::get_ParserContext()
extern "C" XmlParserContext_t3498 * DTDValidatingReader_get_ParserContext_m12799 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Prefix()
extern "C" String_t* DTDValidatingReader_get_Prefix_m12800 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.DTDValidatingReader::get_ReadState()
extern "C" int32_t DTDValidatingReader_get_ReadState_m12801 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.DTDValidatingReader::get_SchemaType()
extern "C" Object_t * DTDValidatingReader_get_SchemaType_m12802 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::FilterNormalization(System.String,System.String)
extern "C" String_t* DTDValidatingReader_FilterNormalization_m12803 (DTDValidatingReader_t3497 * __this, String_t* ___attrName, String_t* ___rawValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_Value()
extern "C" String_t* DTDValidatingReader_get_Value_m12804 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDValidatingReader::get_XmlLang()
extern "C" String_t* DTDValidatingReader_get_XmlLang_m12805 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDValidatingReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDValidatingReader_set_XmlResolver_m12806 (DTDValidatingReader_t3497 * __this, XmlResolver_t3444 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.DTDValidatingReader::get_XmlSpace()
extern "C" int32_t DTDValidatingReader_get_XmlSpace_m12807 (DTDValidatingReader_t3497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
