#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t1554;
// System.String
struct String_t;
// System.Uri
struct Uri_t603;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m7729 (NetworkCredential_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m7730 (NetworkCredential_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m7731 (NetworkCredential_t1554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t1554 * NetworkCredential_GetCredential_m7732 (NetworkCredential_t1554 * __this, Uri_t603 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
