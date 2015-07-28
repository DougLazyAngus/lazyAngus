﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Dns
struct Dns_t3973;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t75;
// System.Net.IPHostEntry
struct IPHostEntry_t3991;

// System.Void System.Net.Dns::.cctor()
extern "C" void Dns__cctor_m13470 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByName_internal_m13471 (Object_t * __this /* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t75** ___h_aliases, StringU5BU5D_t75** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C" IPHostEntry_t3991 * Dns_hostent_to_IPHostEntry_m13472 (Object_t * __this /* static, unused */, String_t* ___h_name, StringU5BU5D_t75* ___h_aliases, StringU5BU5D_t75* ___h_addrlist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C" IPHostEntry_t3991 * Dns_GetHostByName_m13473 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
