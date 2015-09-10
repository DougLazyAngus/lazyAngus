#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t3493;
// System.Xml.XmlParserContext
struct XmlParserContext_t3498;
// System.Xml.XmlReader
struct XmlReader_t3379;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3469;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"

// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader)
extern "C" void EntityResolvingXmlReader__ctor_m12808 (EntityResolvingXmlReader_t3493 * __this, XmlReader_t3379 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader,System.Boolean)
extern "C" void EntityResolvingXmlReader__ctor_m12809 (EntityResolvingXmlReader_t3493 * __this, XmlReader_t3379 * ___entityContainer, bool ___inside_attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t3498 * EntityResolvingXmlReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m12810 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::get_Current()
extern "C" XmlReader_t3379 * EntityResolvingXmlReader_get_Current_m12811 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_AttributeCount()
extern "C" int32_t EntityResolvingXmlReader_get_AttributeCount_m12812 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_BaseURI()
extern "C" String_t* EntityResolvingXmlReader_get_BaseURI_m12813 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_CanResolveEntity()
extern "C" bool EntityResolvingXmlReader_get_CanResolveEntity_m12814 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_Depth()
extern "C" int32_t EntityResolvingXmlReader_get_Depth_m12815 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_EOF()
extern "C" bool EntityResolvingXmlReader_get_EOF_m12816 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_HasValue()
extern "C" bool EntityResolvingXmlReader_get_HasValue_m12817 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsDefault()
extern "C" bool EntityResolvingXmlReader_get_IsDefault_m12818 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsEmptyElement()
extern "C" bool EntityResolvingXmlReader_get_IsEmptyElement_m12819 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_LocalName()
extern "C" String_t* EntityResolvingXmlReader_get_LocalName_m12820 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Name()
extern "C" String_t* EntityResolvingXmlReader_get_Name_m12821 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_NamespaceURI()
extern "C" String_t* EntityResolvingXmlReader_get_NamespaceURI_m12822 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.EntityResolvingXmlReader::get_NameTable()
extern "C" XmlNameTable_t3469 * EntityResolvingXmlReader_get_NameTable_m12823 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.EntityResolvingXmlReader::get_NodeType()
extern "C" int32_t EntityResolvingXmlReader_get_NodeType_m12824 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::get_ParserContext()
extern "C" XmlParserContext_t3498 * EntityResolvingXmlReader_get_ParserContext_m12825 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Prefix()
extern "C" String_t* EntityResolvingXmlReader_get_Prefix_m12826 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.EntityResolvingXmlReader::get_ReadState()
extern "C" int32_t EntityResolvingXmlReader_get_ReadState_m12827 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Value()
extern "C" String_t* EntityResolvingXmlReader_get_Value_m12828 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_XmlLang()
extern "C" String_t* EntityResolvingXmlReader_get_XmlLang_m12829 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.EntityResolvingXmlReader::get_XmlSpace()
extern "C" int32_t EntityResolvingXmlReader_get_XmlSpace_m12830 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::CopyProperties(Mono.Xml.EntityResolvingXmlReader)
extern "C" void EntityResolvingXmlReader_CopyProperties_m12831 (EntityResolvingXmlReader_t3493 * __this, EntityResolvingXmlReader_t3493 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::get_EntityHandling()
extern "C" int32_t EntityResolvingXmlReader_get_EntityHandling_m12832 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C" void EntityResolvingXmlReader_set_EntityHandling_m12833 (EntityResolvingXmlReader_t3493 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LineNumber()
extern "C" int32_t EntityResolvingXmlReader_get_LineNumber_m12834 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LinePosition()
extern "C" int32_t EntityResolvingXmlReader_get_LinePosition_m12835 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Close()
extern "C" void EntityResolvingXmlReader_Close_m12836 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String)
extern "C" String_t* EntityResolvingXmlReader_GetAttribute_m12837 (EntityResolvingXmlReader_t3493 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String,System.String)
extern "C" String_t* EntityResolvingXmlReader_GetAttribute_m12838 (EntityResolvingXmlReader_t3493 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::LookupNamespace(System.String)
extern "C" String_t* EntityResolvingXmlReader_LookupNamespace_m12839 (EntityResolvingXmlReader_t3493 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.Int32)
extern "C" void EntityResolvingXmlReader_MoveToAttribute_m12840 (EntityResolvingXmlReader_t3493 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String)
extern "C" bool EntityResolvingXmlReader_MoveToAttribute_m12841 (EntityResolvingXmlReader_t3493 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String,System.String)
extern "C" bool EntityResolvingXmlReader_MoveToAttribute_m12842 (EntityResolvingXmlReader_t3493 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToElement()
extern "C" bool EntityResolvingXmlReader_MoveToElement_m12843 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToFirstAttribute()
extern "C" bool EntityResolvingXmlReader_MoveToFirstAttribute_m12844 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToNextAttribute()
extern "C" bool EntityResolvingXmlReader_MoveToNextAttribute_m12845 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::Read()
extern "C" bool EntityResolvingXmlReader_Read_m12846 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::ReadAttributeValue()
extern "C" bool EntityResolvingXmlReader_ReadAttributeValue_m12847 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::ResolveEntity()
extern "C" void EntityResolvingXmlReader_ResolveEntity_m12848 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::DoResolveEntity()
extern "C" void EntityResolvingXmlReader_DoResolveEntity_m12849 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Skip()
extern "C" void EntityResolvingXmlReader_Skip_m12850 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::HasLineInfo()
extern "C" bool EntityResolvingXmlReader_HasLineInfo_m12851 (EntityResolvingXmlReader_t3493 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
