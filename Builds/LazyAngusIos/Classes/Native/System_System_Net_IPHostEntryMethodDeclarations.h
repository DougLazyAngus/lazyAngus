#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPHostEntry
struct IPHostEntry_t1522;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t1461;
// System.String[]
struct StringU5BU5D_t45;
// System.String
struct String_t;

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m7485 (IPHostEntry_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t1461* IPHostEntry_get_AddressList_m7486 (IPHostEntry_t1522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m7487 (IPHostEntry_t1522 * __this, IPAddressU5BU5D_t1461* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m7488 (IPHostEntry_t1522 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m7489 (IPHostEntry_t1522 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
