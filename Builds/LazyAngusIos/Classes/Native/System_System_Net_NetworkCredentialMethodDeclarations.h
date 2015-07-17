#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t2032;
// System.String
struct String_t;
// System.Uri
struct Uri_t654;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m10535 (NetworkCredential_t2032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m10536 (NetworkCredential_t2032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m10537 (NetworkCredential_t2032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t2032 * NetworkCredential_GetCredential_m10538 (NetworkCredential_t2032 * __this, Uri_t654 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
