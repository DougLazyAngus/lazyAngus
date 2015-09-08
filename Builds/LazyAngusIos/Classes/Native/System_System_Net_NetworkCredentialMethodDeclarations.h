#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t4368;
// System.String
struct String_t;
// System.Uri
struct Uri_t772;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m16767 (NetworkCredential_t4368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m16768 (NetworkCredential_t4368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m16769 (NetworkCredential_t4368 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t4368 * NetworkCredential_GetCredential_m16770 (NetworkCredential_t4368 * __this, Uri_t772 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
