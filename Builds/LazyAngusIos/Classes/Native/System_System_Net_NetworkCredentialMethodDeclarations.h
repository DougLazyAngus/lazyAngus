#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t3997;
// System.String
struct String_t;
// System.Uri
struct Uri_t707;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m13811 (NetworkCredential_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m13812 (NetworkCredential_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m13813 (NetworkCredential_t3997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t3997 * NetworkCredential_GetCredential_m13814 (NetworkCredential_t3997 * __this, Uri_t707 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
