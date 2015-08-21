#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t4044;
// System.String
struct String_t;
// System.Uri
struct Uri_t755;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m14075 (NetworkCredential_t4044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m14076 (NetworkCredential_t4044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m14077 (NetworkCredential_t4044 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t4044 * NetworkCredential_GetCredential_m14078 (NetworkCredential_t4044 * __this, Uri_t755 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
