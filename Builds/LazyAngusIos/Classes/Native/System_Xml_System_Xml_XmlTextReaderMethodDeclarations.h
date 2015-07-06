#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextReader
struct XmlTextReader_t2070;
// System.Xml.XmlParserContext
struct XmlParserContext_t2050;
// System.Xml.XmlReader
struct XmlReader_t2055;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1981;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2054;
// System.Xml.XmlResolver
struct XmlResolver_t1980;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t2061;
// System.IO.TextReader
struct TextReader_t2034;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"

// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m9987 (XmlTextReader_t2070 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t2050 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C" void XmlTextReader__ctor_m9988 (XmlTextReader_t2070 * __this, XmlTextReader_t2061 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t2050 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m9989 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C" XmlReader_t2055 * XmlTextReader_get_Current_m9990 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m9991 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m9992 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C" bool XmlTextReader_get_CanResolveEntity_m9993 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m9994 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m9995 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m9996 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m9997 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m9998 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m9999 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m10000 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t1981 * XmlTextReader_get_NameTable_m10001 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m10002 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C" XmlParserContext_t2050 * XmlTextReader_get_ParserContext_m10003 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m10004 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m10005 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t2054 * XmlTextReader_get_Settings_m10006 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Value()
extern "C" String_t* XmlTextReader_get_Value_m10007 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m10008 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m10009 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m10010 (XmlTextReader_t2070 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m10011 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m10012 (XmlTextReader_t2070 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" void XmlTextReader_set_Conformance_m10013 (XmlTextReader_t2070 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t1980 * XmlTextReader_get_Resolver_m10014 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C" void XmlTextReader_CopyProperties_m10015 (XmlTextReader_t2070 * __this, XmlTextReader_t2070 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m10016 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m10017 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m10018 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m10019 (XmlTextReader_t2070 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C" int32_t XmlTextReader_get_WhitespaceHandling_m10020 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" void XmlTextReader_set_WhitespaceHandling_m10021 (XmlTextReader_t2070 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlTextReader_set_XmlResolver_m10022 (XmlTextReader_t2070 * __this, XmlResolver_t1980 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C" void XmlTextReader_SkipTextDeclaration_m10023 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m10024 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m10025 (XmlTextReader_t2070 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C" void XmlTextReader_MoveToAttribute_m10026 (XmlTextReader_t2070 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m10027 (XmlTextReader_t2070 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m10028 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m10029 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m10030 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m10031 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m10032 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C" void XmlTextReader_ResolveEntity_m10033 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C" void XmlTextReader_CloseEntity_m10034 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m10035 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C" TextReader_t2034 * XmlTextReader_GetRemainder_m10036 (XmlTextReader_t2070 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
