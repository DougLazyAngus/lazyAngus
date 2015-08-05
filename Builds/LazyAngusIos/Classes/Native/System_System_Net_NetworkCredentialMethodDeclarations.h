#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t4000;
// System.String
struct String_t;
// System.Uri
struct Uri_t708;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m13834 (NetworkCredential_t4000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m13835 (NetworkCredential_t4000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m13836 (NetworkCredential_t4000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t4000 * NetworkCredential_GetCredential_m13837 (NetworkCredential_t4000 * __this, Uri_t708 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
