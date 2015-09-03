#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlWriter
struct XmlWriter_t3369;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3368;
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlWriter::.ctor()
extern "C" void XmlWriter__ctor_m13534 (XmlWriter_t3369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C" void XmlWriter_System_IDisposable_Dispose_m13535 (XmlWriter_t3369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C" String_t* XmlWriter_get_XmlLang_m13536 (XmlWriter_t3369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C" int32_t XmlWriter_get_XmlSpace_m13537 (XmlWriter_t3369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Close()
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C" void XmlWriter_Dispose_m13538 (XmlWriter_t3369 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWriter::LookupPrefix(System.String)
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C" void XmlWriter_WriteAttribute_m13539 (XmlWriter_t3369 * __this, XmlReader_t3368 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C" void XmlWriter_WriteAttributeString_m12064 (XmlWriter_t3369 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C" void XmlWriter_WriteAttributeString_m13540 (XmlWriter_t3369 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteCData(System.String)
// System.Void System.Xml.XmlWriter::WriteComment(System.String)
// System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C" void XmlWriter_WriteElementString_m12069 (XmlWriter_t3369 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteEndAttribute()
// System.Void System.Xml.XmlWriter::WriteEndElement()
// System.Void System.Xml.XmlWriter::WriteEntityRef(System.String)
// System.Void System.Xml.XmlWriter::WriteFullEndElement()
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C" void XmlWriter_WriteNode_m13541 (XmlWriter_t3369 * __this, XmlReader_t3368 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C" void XmlWriter_WriteStartElement_m12065 (XmlWriter_t3369 * __this, String_t* ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteString(System.String)
// System.Void System.Xml.XmlWriter::WriteWhitespace(System.String)
