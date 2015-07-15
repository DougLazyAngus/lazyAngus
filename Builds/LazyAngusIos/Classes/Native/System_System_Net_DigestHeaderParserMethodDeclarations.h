#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DigestHeaderParser
struct DigestHeaderParser_t1517;
// System.String
struct String_t;

// System.Void System.Net.DigestHeaderParser::.ctor(System.String)
extern "C" void DigestHeaderParser__ctor_m7362 (DigestHeaderParser_t1517 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestHeaderParser::.cctor()
extern "C" void DigestHeaderParser__cctor_m7363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Realm()
extern "C" String_t* DigestHeaderParser_get_Realm_m7364 (DigestHeaderParser_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Opaque()
extern "C" String_t* DigestHeaderParser_get_Opaque_m7365 (DigestHeaderParser_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Nonce()
extern "C" String_t* DigestHeaderParser_get_Nonce_m7366 (DigestHeaderParser_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Algorithm()
extern "C" String_t* DigestHeaderParser_get_Algorithm_m7367 (DigestHeaderParser_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_QOP()
extern "C" String_t* DigestHeaderParser_get_QOP_m7368 (DigestHeaderParser_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestHeaderParser::Parse()
extern "C" bool DigestHeaderParser_Parse_m7369 (DigestHeaderParser_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestHeaderParser::SkipWhitespace()
extern "C" void DigestHeaderParser_SkipWhitespace_m7370 (DigestHeaderParser_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::GetKey()
extern "C" String_t* DigestHeaderParser_GetKey_m7371 (DigestHeaderParser_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestHeaderParser::GetKeywordAndValue(System.String&,System.String&)
extern "C" bool DigestHeaderParser_GetKeywordAndValue_m7372 (DigestHeaderParser_t1517 * __this, String_t** ___key, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
