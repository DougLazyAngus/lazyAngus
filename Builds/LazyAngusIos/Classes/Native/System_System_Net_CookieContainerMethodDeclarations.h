#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieContainer
struct CookieContainer_t2007;
// System.Net.Cookie
struct Cookie_t2003;
// System.String
struct String_t;
// System.Uri
struct Uri_t655;
// System.Net.CookieCollection
struct CookieCollection_t2006;

// System.Void System.Net.CookieContainer::.ctor()
extern "C" void CookieContainer__ctor_m10197 (CookieContainer_t2007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
extern "C" void CookieContainer_AddCookie_m10198 (CookieContainer_t2007 * __this, Cookie_t2003 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
extern "C" int32_t CookieContainer_CountDomain_m10199 (CookieContainer_t2007 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
extern "C" void CookieContainer_RemoveOldest_m10200 (CookieContainer_t2007 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
extern "C" void CookieContainer_CheckExpiration_m10201 (CookieContainer_t2007 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
extern "C" void CookieContainer_Cook_m10202 (CookieContainer_t2007 * __this, Uri_t655 * ___uri, Cookie_t2003 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
extern "C" void CookieContainer_Add_m10203 (CookieContainer_t2007 * __this, Uri_t655 * ___uri, Cookie_t2003 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern "C" String_t* CookieContainer_GetCookieHeader_m10204 (CookieContainer_t2007 * __this, Uri_t655 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
extern "C" bool CookieContainer_CheckDomain_m10205 (Object_t * __this /* static, unused */, String_t* ___domain, String_t* ___host, bool ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
extern "C" CookieCollection_t2006 * CookieContainer_GetCookies_m10206 (CookieContainer_t2007 * __this, Uri_t655 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
extern "C" bool CookieContainer_IsNullOrEmpty_m10207 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
