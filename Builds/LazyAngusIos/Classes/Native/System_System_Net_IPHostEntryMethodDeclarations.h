#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPHostEntry
struct IPHostEntry_t3998;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3947;
// System.String[]
struct StringU5BU5D_t75;
// System.String
struct String_t;

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m13785 (IPHostEntry_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t3947* IPHostEntry_get_AddressList_m13786 (IPHostEntry_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m13787 (IPHostEntry_t3998 * __this, IPAddressU5BU5D_t3947* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m13788 (IPHostEntry_t3998 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m13789 (IPHostEntry_t3998 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
