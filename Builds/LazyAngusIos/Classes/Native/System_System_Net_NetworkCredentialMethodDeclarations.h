#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t4063;
// System.String
struct String_t;
// System.Uri
struct Uri_t771;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m14236 (NetworkCredential_t4063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m14237 (NetworkCredential_t4063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m14238 (NetworkCredential_t4063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t4063 * NetworkCredential_GetCredential_m14239 (NetworkCredential_t4063 * __this, Uri_t771 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
