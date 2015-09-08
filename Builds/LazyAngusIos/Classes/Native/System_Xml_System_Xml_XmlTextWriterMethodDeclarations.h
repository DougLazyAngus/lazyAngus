#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextWriter
struct XmlTextWriter_t3386;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t3562;
// System.Char[]
struct CharU5BU5D_t715;
// System.Exception
struct Exception_t57;
// System.Xml.Formatting
#include "System_Xml_System_Xml_Formatting.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C" void XmlTextWriter__ctor_m12115 (XmlTextWriter_t3386 * __this, TextWriter_t3562 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C" void XmlTextWriter__cctor_m13559 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C" void XmlTextWriter_Initialize_m13560 (XmlTextWriter_t3386 * __this, TextWriter_t3562 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C" void XmlTextWriter_set_Formatting_m12116 (XmlTextWriter_t3386 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C" String_t* XmlTextWriter_get_XmlLang_m13561 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C" int32_t XmlTextWriter_get_XmlSpace_m13562 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern "C" String_t* XmlTextWriter_LookupPrefix_m13563 (XmlTextWriter_t3386 * __this, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Close()
extern "C" void XmlTextWriter_Close_m13564 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_WriteStartDocumentCore_m13565 (XmlTextWriter_t3386 * __this, bool ___outputStd, bool ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteDocType_m13566 (XmlTextWriter_t3386 * __this, String_t* ___name, String_t* ___pubid, String_t* ___sysid, String_t* ___subset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteStartElement_m13567 (XmlTextWriter_t3386 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C" void XmlTextWriter_CloseStartElement_m13568 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C" void XmlTextWriter_CloseStartElementCore_m13569 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C" void XmlTextWriter_WriteEndElement_m13570 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C" void XmlTextWriter_WriteFullEndElement_m13571 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C" void XmlTextWriter_WriteEndElementCore_m13572 (XmlTextWriter_t3386 * __this, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteStartAttribute_m13573 (XmlTextWriter_t3386 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C" String_t* XmlTextWriter_DetermineAttributePrefix_m13574 (XmlTextWriter_t3386 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C" String_t* XmlTextWriter_MockupPrefix_m13575 (XmlTextWriter_t3386 * __this, String_t* ___ns, bool ___skipLookup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C" void XmlTextWriter_WriteEndAttribute_m13576 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C" void XmlTextWriter_WriteComment_m13577 (XmlTextWriter_t3386 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C" void XmlTextWriter_WriteProcessingInstruction_m13578 (XmlTextWriter_t3386 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C" void XmlTextWriter_WriteWhitespace_m13579 (XmlTextWriter_t3386 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C" void XmlTextWriter_WriteCData_m13580 (XmlTextWriter_t3386 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C" void XmlTextWriter_WriteString_m13581 (XmlTextWriter_t3386 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C" void XmlTextWriter_WriteEntityRef_m13582 (XmlTextWriter_t3386 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C" void XmlTextWriter_WriteIndent_m13583 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C" void XmlTextWriter_WriteIndentEndElement_m13584 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C" void XmlTextWriter_WriteIndentAttribute_m13585 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C" bool XmlTextWriter_WriteIndentCore_m13586 (XmlTextWriter_t3386 * __this, int32_t ___nestFix, bool ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C" void XmlTextWriter_OutputAutoStartDocument_m13587 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateTopLevel_m13588 (XmlTextWriter_t3386 * __this, String_t* ___occured, bool ___allowAttribute, bool ___dontCheckXmlDecl, bool ___isCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C" void XmlTextWriter_CheckMixedContentState_m13589 (XmlTextWriter_t3386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateContent_m13590 (XmlTextWriter_t3386 * __this, String_t* ___occured, bool ___allowAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C" void XmlTextWriter_WriteEscapedString_m13591 (XmlTextWriter_t3386 * __this, String_t* ___text, bool ___isAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C" void XmlTextWriter_WriteCheckedString_m13592 (XmlTextWriter_t3386 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C" void XmlTextWriter_WriteCheckedBuffer_m13593 (XmlTextWriter_t3386 * __this, CharU5BU5D_t715* ___text, int32_t ___idx, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" void XmlTextWriter_WriteEscapedBuffer_m13594 (XmlTextWriter_t3386 * __this, CharU5BU5D_t715* ___text, int32_t ___index, int32_t ___length, bool ___isAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C" Exception_t57 * XmlTextWriter_ArgumentError_m13595 (XmlTextWriter_t3386 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C" Exception_t57 * XmlTextWriter_InvalidOperation_m13596 (XmlTextWriter_t3386 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C" Exception_t57 * XmlTextWriter_StateError_m13597 (XmlTextWriter_t3386 * __this, String_t* ___occured, const MethodInfo* method) IL2CPP_METHOD_ATTR;
