#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPHostEntry
struct IPHostEntry_t4002;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3951;
// System.String[]
struct StringU5BU5D_t75;
// System.String
struct String_t;

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m13816 (IPHostEntry_t4002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t3951* IPHostEntry_get_AddressList_m13817 (IPHostEntry_t4002 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m13818 (IPHostEntry_t4002 * __this, IPAddressU5BU5D_t3951* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m13819 (IPHostEntry_t4002 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m13820 (IPHostEntry_t4002 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
