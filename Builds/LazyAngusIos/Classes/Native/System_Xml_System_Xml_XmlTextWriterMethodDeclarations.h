#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextWriter
struct XmlTextWriter_t1677;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t1674;
// System.Char[]
struct CharU5BU5D_t606;
// System.Exception
struct Exception_t27;
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C" void XmlTextWriter__ctor_m8425 (XmlTextWriter_t1677 * __this, TextWriter_t1674 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C" void XmlTextWriter__cctor_m8426 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C" void XmlTextWriter_Initialize_m8427 (XmlTextWriter_t1677 * __this, TextWriter_t1674 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C" String_t* XmlTextWriter_get_XmlLang_m8428 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C" int32_t XmlTextWriter_get_XmlSpace_m8429 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern "C" String_t* XmlTextWriter_LookupPrefix_m8430 (XmlTextWriter_t1677 * __this, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Close()
extern "C" void XmlTextWriter_Close_m8431 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_WriteStartDocumentCore_m8432 (XmlTextWriter_t1677 * __this, bool ___outputStd, bool ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteDocType_m8433 (XmlTextWriter_t1677 * __this, String_t* ___name, String_t* ___pubid, String_t* ___sysid, String_t* ___subset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteStartElement_m8434 (XmlTextWriter_t1677 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C" void XmlTextWriter_CloseStartElement_m8435 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C" void XmlTextWriter_CloseStartElementCore_m8436 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C" void XmlTextWriter_WriteEndElement_m8437 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C" void XmlTextWriter_WriteFullEndElement_m8438 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C" void XmlTextWriter_WriteEndElementCore_m8439 (XmlTextWriter_t1677 * __this, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteStartAttribute_m8440 (XmlTextWriter_t1677 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C" String_t* XmlTextWriter_DetermineAttributePrefix_m8441 (XmlTextWriter_t1677 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C" String_t* XmlTextWriter_MockupPrefix_m8442 (XmlTextWriter_t1677 * __this, String_t* ___ns, bool ___skipLookup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C" void XmlTextWriter_WriteEndAttribute_m8443 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C" void XmlTextWriter_WriteComment_m8444 (XmlTextWriter_t1677 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C" void XmlTextWriter_WriteProcessingInstruction_m8445 (XmlTextWriter_t1677 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C" void XmlTextWriter_WriteWhitespace_m8446 (XmlTextWriter_t1677 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C" void XmlTextWriter_WriteCData_m8447 (XmlTextWriter_t1677 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C" void XmlTextWriter_WriteString_m8448 (XmlTextWriter_t1677 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C" void XmlTextWriter_WriteEntityRef_m8449 (XmlTextWriter_t1677 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C" void XmlTextWriter_WriteIndent_m8450 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C" void XmlTextWriter_WriteIndentEndElement_m8451 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C" void XmlTextWriter_WriteIndentAttribute_m8452 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C" bool XmlTextWriter_WriteIndentCore_m8453 (XmlTextWriter_t1677 * __this, int32_t ___nestFix, bool ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C" void XmlTextWriter_OutputAutoStartDocument_m8454 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateTopLevel_m8455 (XmlTextWriter_t1677 * __this, String_t* ___occured, bool ___allowAttribute, bool ___dontCheckXmlDecl, bool ___isCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C" void XmlTextWriter_CheckMixedContentState_m8456 (XmlTextWriter_t1677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateContent_m8457 (XmlTextWriter_t1677 * __this, String_t* ___occured, bool ___allowAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C" void XmlTextWriter_WriteEscapedString_m8458 (XmlTextWriter_t1677 * __this, String_t* ___text, bool ___isAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C" void XmlTextWriter_WriteCheckedString_m8459 (XmlTextWriter_t1677 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C" void XmlTextWriter_WriteCheckedBuffer_m8460 (XmlTextWriter_t1677 * __this, CharU5BU5D_t606* ___text, int32_t ___idx, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" void XmlTextWriter_WriteEscapedBuffer_m8461 (XmlTextWriter_t1677 * __this, CharU5BU5D_t606* ___text, int32_t ___index, int32_t ___length, bool ___isAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C" Exception_t27 * XmlTextWriter_ArgumentError_m8462 (XmlTextWriter_t1677 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C" Exception_t27 * XmlTextWriter_InvalidOperation_m8463 (XmlTextWriter_t1677 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C" Exception_t27 * XmlTextWriter_StateError_m8464 (XmlTextWriter_t1677 * __this, String_t* ___occured, const MethodInfo* method) IL2CPP_METHOD_ATTR;
