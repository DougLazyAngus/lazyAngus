#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlReader
struct XmlReader_t1655;
// System.String
struct String_t;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1653;
// System.Xml.XmlNameTable
struct XmlNameTable_t1579;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t1611;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1654;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C" void XmlReader__ctor_m8218 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C" void XmlReader_System_IDisposable_Dispose_m8219 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_AttributeCount()
// System.String System.Xml.XmlReader::get_BaseURI()
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C" XmlReaderBinarySupport_t1653 * XmlReader_get_Binary_m8220 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C" bool XmlReader_get_CanResolveEntity_m8221 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_Depth()
// System.Boolean System.Xml.XmlReader::get_EOF()
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C" bool XmlReader_get_HasAttributes_m8222 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_IsEmptyElement()
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C" bool XmlReader_get_IsDefault_m8223 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C" String_t* XmlReader_get_Item_m8224 (XmlReader_t1655 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_LocalName()
// System.String System.Xml.XmlReader::get_Name()
extern "C" String_t* XmlReader_get_Name_m8225 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_NamespaceURI()
// System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable()
// System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType()
// System.String System.Xml.XmlReader::get_Prefix()
// System.Xml.ReadState System.Xml.XmlReader::get_ReadState()
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C" Object_t * XmlReader_get_SchemaInfo_m8226 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" XmlReaderSettings_t1654 * XmlReader_get_Settings_m8227 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Value()
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C" int32_t XmlReader_get_XmlSpace_m8228 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Close()
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C" void XmlReader_Dispose_m8229 (XmlReader_t1655 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::GetAttribute(System.String)
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C" void XmlReader_MoveToAttribute_m8230 (XmlReader_t1655 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String)
// System.Boolean System.Xml.XmlReader::MoveToElement()
// System.Boolean System.Xml.XmlReader::MoveToFirstAttribute()
// System.Boolean System.Xml.XmlReader::MoveToNextAttribute()
// System.Boolean System.Xml.XmlReader::Read()
// System.Boolean System.Xml.XmlReader::ReadAttributeValue()
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C" String_t* XmlReader_ReadOuterXml_m8231 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ResolveEntity()
// System.Void System.Xml.XmlReader::Skip()
extern "C" void XmlReader_Skip_m8232 (XmlReader_t1655 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
