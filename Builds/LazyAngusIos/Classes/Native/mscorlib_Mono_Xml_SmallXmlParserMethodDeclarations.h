#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t4825;
// System.Exception
struct Exception_t57;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t3372;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t4824;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t4823;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
extern "C" void SmallXmlParser__ctor_m19895 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
extern "C" Exception_t57 * SmallXmlParser_Error_m19896 (SmallXmlParser_t4825 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
extern "C" Exception_t57 * SmallXmlParser_UnexpectedEndError_m19897 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
extern "C" bool SmallXmlParser_IsNameChar_m19898 (SmallXmlParser_t4825 * __this, uint16_t ___c, bool ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
extern "C" bool SmallXmlParser_IsWhitespace_m19899 (SmallXmlParser_t4825 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
extern "C" void SmallXmlParser_SkipWhitespaces_m19900 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
extern "C" void SmallXmlParser_HandleWhitespaces_m19901 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
extern "C" void SmallXmlParser_SkipWhitespaces_m19902 (SmallXmlParser_t4825 * __this, bool ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
extern "C" int32_t SmallXmlParser_Peek_m19903 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
extern "C" int32_t SmallXmlParser_Read_m19904 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
extern "C" void SmallXmlParser_Expect_m19905 (SmallXmlParser_t4825 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
extern "C" String_t* SmallXmlParser_ReadUntil_m19906 (SmallXmlParser_t4825 * __this, uint16_t ___until, bool ___handleReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
extern "C" String_t* SmallXmlParser_ReadName_m19907 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
extern "C" void SmallXmlParser_Parse_m19908 (SmallXmlParser_t4825 * __this, TextReader_t3372 * ___input, Object_t * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
extern "C" void SmallXmlParser_Cleanup_m19909 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
extern "C" void SmallXmlParser_ReadContent_m19910 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
extern "C" void SmallXmlParser_HandleBufferedContent_m19911 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
extern "C" void SmallXmlParser_ReadCharacters_m19912 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
extern "C" void SmallXmlParser_ReadReference_m19913 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
extern "C" int32_t SmallXmlParser_ReadCharacterReference_m19914 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
extern "C" void SmallXmlParser_ReadAttribute_m19915 (SmallXmlParser_t4825 * __this, AttrListImpl_t4823 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
extern "C" void SmallXmlParser_ReadCDATASection_m19916 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
extern "C" void SmallXmlParser_ReadComment_m19917 (SmallXmlParser_t4825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
