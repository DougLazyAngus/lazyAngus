#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct CryptoHandler_t5249;
// System.Collections.Hashtable
struct Hashtable_t710;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t4825;
// System.String
struct String_t;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t5418;

// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::.ctor(System.Collections.Hashtable,System.Collections.Hashtable)
extern "C" void CryptoHandler__ctor_m23266 (CryptoHandler_t5249 * __this, Hashtable_t710 * ___algorithms, Hashtable_t710 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void CryptoHandler_OnStartParsing_m23267 (CryptoHandler_t5249 * __this, SmallXmlParser_t4825 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C" void CryptoHandler_OnEndParsing_m23268 (CryptoHandler_t5249 * __this, SmallXmlParser_t4825 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig/CryptoHandler::Get(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C" String_t* CryptoHandler_Get_m23269 (CryptoHandler_t5249 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void CryptoHandler_OnStartElement_m23270 (CryptoHandler_t5249 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndElement(System.String)
extern "C" void CryptoHandler_OnEndElement_m23271 (CryptoHandler_t5249 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnProcessingInstruction(System.String,System.String)
extern "C" void CryptoHandler_OnProcessingInstruction_m23272 (CryptoHandler_t5249 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnChars(System.String)
extern "C" void CryptoHandler_OnChars_m23273 (CryptoHandler_t5249 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnIgnorableWhitespace(System.String)
extern "C" void CryptoHandler_OnIgnorableWhitespace_m23274 (CryptoHandler_t5249 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
