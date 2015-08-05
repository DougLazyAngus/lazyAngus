#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlWriter
struct XmlWriter_t3234;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3209;
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlWriter::.ctor()
extern "C" void XmlWriter__ctor_m11174 (XmlWriter_t3234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C" void XmlWriter_System_IDisposable_Dispose_m11175 (XmlWriter_t3234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C" String_t* XmlWriter_get_XmlLang_m11176 (XmlWriter_t3234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C" int32_t XmlWriter_get_XmlSpace_m11177 (XmlWriter_t3234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Close()
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C" void XmlWriter_Dispose_m11178 (XmlWriter_t3234 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWriter::LookupPrefix(System.String)
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C" void XmlWriter_WriteAttribute_m11179 (XmlWriter_t3234 * __this, XmlReader_t3209 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteCData(System.String)
// System.Void System.Xml.XmlWriter::WriteComment(System.String)
// System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteEndAttribute()
// System.Void System.Xml.XmlWriter::WriteEndElement()
// System.Void System.Xml.XmlWriter::WriteEntityRef(System.String)
// System.Void System.Xml.XmlWriter::WriteFullEndElement()
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C" void XmlWriter_WriteNode_m11180 (XmlWriter_t3234 * __this, XmlReader_t3209 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteString(System.String)
// System.Void System.Xml.XmlWriter::WriteWhitespace(System.String)
