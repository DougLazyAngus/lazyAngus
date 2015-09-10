#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct CryptoHandler_t5260;
// System.Collections.Hashtable
struct Hashtable_t721;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t4836;
// System.String
struct String_t;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t5429;

// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::.ctor(System.Collections.Hashtable,System.Collections.Hashtable)
extern "C" void CryptoHandler__ctor_m23336 (CryptoHandler_t5260 * __this, Hashtable_t721 * ___algorithms, Hashtable_t721 * ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C" void CryptoHandler_OnStartParsing_m23337 (CryptoHandler_t5260 * __this, SmallXmlParser_t4836 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C" void CryptoHandler_OnEndParsing_m23338 (CryptoHandler_t5260 * __this, SmallXmlParser_t4836 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig/CryptoHandler::Get(Mono.Xml.SmallXmlParser/IAttrList,System.String)
extern "C" String_t* CryptoHandler_Get_m23339 (CryptoHandler_t5260 * __this, Object_t * ___attrs, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C" void CryptoHandler_OnStartElement_m23340 (CryptoHandler_t5260 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnEndElement(System.String)
extern "C" void CryptoHandler_OnEndElement_m23341 (CryptoHandler_t5260 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnProcessingInstruction(System.String,System.String)
extern "C" void CryptoHandler_OnProcessingInstruction_m23342 (CryptoHandler_t5260 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnChars(System.String)
extern "C" void CryptoHandler_OnChars_m23343 (CryptoHandler_t5260 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig/CryptoHandler::OnIgnorableWhitespace(System.String)
extern "C" void CryptoHandler_OnIgnorableWhitespace_m23344 (CryptoHandler_t5260 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
