#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t3989;
// System.String
struct String_t;
// System.Uri
struct Uri_t699;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m13764 (NetworkCredential_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m13765 (NetworkCredential_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m13766 (NetworkCredential_t3989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t3989 * NetworkCredential_GetCredential_m13767 (NetworkCredential_t3989 * __this, Uri_t699 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
