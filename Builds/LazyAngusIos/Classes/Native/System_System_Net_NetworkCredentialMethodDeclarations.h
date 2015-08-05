#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t4001;
// System.String
struct String_t;
// System.Uri
struct Uri_t710;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m13842 (NetworkCredential_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m13843 (NetworkCredential_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m13844 (NetworkCredential_t4001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t4001 * NetworkCredential_GetCredential_m13845 (NetworkCredential_t4001 * __this, Uri_t710 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
