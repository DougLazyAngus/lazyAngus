#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t4367;
// System.String
struct String_t;
// System.Uri
struct Uri_t771;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m16754 (NetworkCredential_t4367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m16755 (NetworkCredential_t4367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m16756 (NetworkCredential_t4367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t4367 * NetworkCredential_GetCredential_m16757 (NetworkCredential_t4367 * __this, Uri_t771 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
