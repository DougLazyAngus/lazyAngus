#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t2034;
// System.String
struct String_t;
// System.Uri
struct Uri_t656;

// System.String System.Net.NetworkCredential::get_Domain()
extern "C" String_t* NetworkCredential_get_Domain_m10546 (NetworkCredential_t2034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
extern "C" String_t* NetworkCredential_get_UserName_m10547 (NetworkCredential_t2034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
extern "C" String_t* NetworkCredential_get_Password_m10548 (NetworkCredential_t2034 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
extern "C" NetworkCredential_t2034 * NetworkCredential_GetCredential_m10549 (NetworkCredential_t2034 * __this, Uri_t656 * ___uri, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
