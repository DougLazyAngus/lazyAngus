#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlReader
struct XmlReader_t2055;
// System.String
struct String_t;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t2053;
// System.Xml.XmlNameTable
struct XmlNameTable_t1981;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2013;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2054;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C" void XmlReader__ctor_m9819 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C" void XmlReader_System_IDisposable_Dispose_m9820 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_AttributeCount()
// System.String System.Xml.XmlReader::get_BaseURI()
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C" XmlReaderBinarySupport_t2053 * XmlReader_get_Binary_m9821 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C" bool XmlReader_get_CanResolveEntity_m9822 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_Depth()
// System.Boolean System.Xml.XmlReader::get_EOF()
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C" bool XmlReader_get_HasAttributes_m9823 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_IsEmptyElement()
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C" bool XmlReader_get_IsDefault_m9824 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C" String_t* XmlReader_get_Item_m9825 (XmlReader_t2055 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_LocalName()
// System.String System.Xml.XmlReader::get_Name()
extern "C" String_t* XmlReader_get_Name_m9826 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_NamespaceURI()
// System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable()
// System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType()
// System.String System.Xml.XmlReader::get_Prefix()
// System.Xml.ReadState System.Xml.XmlReader::get_ReadState()
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C" Object_t * XmlReader_get_SchemaInfo_m9827 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" XmlReaderSettings_t2054 * XmlReader_get_Settings_m9828 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Value()
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C" int32_t XmlReader_get_XmlSpace_m9829 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Close()
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C" void XmlReader_Dispose_m9830 (XmlReader_t2055 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::GetAttribute(System.String)
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C" void XmlReader_MoveToAttribute_m9831 (XmlReader_t2055 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String)
// System.Boolean System.Xml.XmlReader::MoveToElement()
// System.Boolean System.Xml.XmlReader::MoveToFirstAttribute()
// System.Boolean System.Xml.XmlReader::MoveToNextAttribute()
// System.Boolean System.Xml.XmlReader::Read()
// System.Boolean System.Xml.XmlReader::ReadAttributeValue()
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C" String_t* XmlReader_ReadOuterXml_m9832 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ResolveEntity()
// System.Void System.Xml.XmlReader::Skip()
extern "C" void XmlReader_Skip_m9833 (XmlReader_t2055 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
