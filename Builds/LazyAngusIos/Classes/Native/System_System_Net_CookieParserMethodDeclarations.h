#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieParser
struct CookieParser_t4381;
// System.String
struct String_t;

// System.Void System.Net.CookieParser::.ctor(System.String)
extern "C" void CookieParser__ctor_m16702 (CookieParser_t4381 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieParser::.ctor(System.String,System.Int32)
extern "C" void CookieParser__ctor_m16703 (CookieParser_t4381 * __this, String_t* ___header, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieParser::GetNextNameValue(System.String&,System.String&)
extern "C" bool CookieParser_GetNextNameValue_m16704 (CookieParser_t4381 * __this, String_t** ___name, String_t** ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieParser::GetCookieName()
extern "C" String_t* CookieParser_GetCookieName_m16705 (CookieParser_t4381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieParser::GetCookieValue()
extern "C" String_t* CookieParser_GetCookieValue_m16706 (CookieParser_t4381 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
