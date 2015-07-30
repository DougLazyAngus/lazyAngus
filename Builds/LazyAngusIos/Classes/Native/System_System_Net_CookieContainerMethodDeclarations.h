#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieContainer
struct CookieContainer_t3973;
// System.Net.Cookie
struct Cookie_t3969;
// System.String
struct String_t;
// System.Uri
struct Uri_t707;
// System.Net.CookieCollection
struct CookieCollection_t3972;

// System.Void System.Net.CookieContainer::.ctor()
extern "C" void CookieContainer__ctor_m13465 (CookieContainer_t3973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
extern "C" void CookieContainer_AddCookie_m13466 (CookieContainer_t3973 * __this, Cookie_t3969 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
extern "C" int32_t CookieContainer_CountDomain_m13467 (CookieContainer_t3973 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
extern "C" void CookieContainer_RemoveOldest_m13468 (CookieContainer_t3973 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
extern "C" void CookieContainer_CheckExpiration_m13469 (CookieContainer_t3973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
extern "C" void CookieContainer_Cook_m13470 (CookieContainer_t3973 * __this, Uri_t707 * ___uri, Cookie_t3969 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
extern "C" void CookieContainer_Add_m13471 (CookieContainer_t3973 * __this, Uri_t707 * ___uri, Cookie_t3969 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern "C" String_t* CookieContainer_GetCookieHeader_m13472 (CookieContainer_t3973 * __this, Uri_t707 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
extern "C" bool CookieContainer_CheckDomain_m13473 (Object_t * __this /* static, unused */, String_t* ___domain, String_t* ___host, bool ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
extern "C" CookieCollection_t3972 * CookieContainer_GetCookies_m13474 (CookieContainer_t3973 * __this, Uri_t707 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
extern "C" bool CookieContainer_IsNullOrEmpty_m13475 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
