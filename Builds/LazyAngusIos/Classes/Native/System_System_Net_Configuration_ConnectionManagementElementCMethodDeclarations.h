#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_t4315;
// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t4316;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3315;
// System.Object
struct Object_t;

// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern "C" void ConnectionManagementElementCollection__ctor_m16230 (ConnectionManagementElementCollection_t4315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.Int32)
extern "C" ConnectionManagementElement_t4316 * ConnectionManagementElementCollection_get_Item_m16231 (ConnectionManagementElementCollection_t4315 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.Int32,System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_set_Item_m16232 (ConnectionManagementElementCollection_t4315 * __this, int32_t ___index, ConnectionManagementElement_t4316 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.String)
extern "C" ConnectionManagementElement_t4316 * ConnectionManagementElementCollection_get_Item_m16233 (ConnectionManagementElementCollection_t4315 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.String,System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_set_Item_m16234 (ConnectionManagementElementCollection_t4315 * __this, String_t* ___name, ConnectionManagementElement_t4316 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Add(System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_Add_m16235 (ConnectionManagementElementCollection_t4315 * __this, ConnectionManagementElement_t4316 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Clear()
extern "C" void ConnectionManagementElementCollection_Clear_m16236 (ConnectionManagementElementCollection_t4315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.ConnectionManagementElementCollection::CreateNewElement()
extern "C" ConfigurationElement_t3315 * ConnectionManagementElementCollection_CreateNewElement_m16237 (ConnectionManagementElementCollection_t4315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.ConnectionManagementElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * ConnectionManagementElementCollection_GetElementKey_m16238 (ConnectionManagementElementCollection_t4315 * __this, ConfigurationElement_t3315 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.ConnectionManagementElementCollection::IndexOf(System.Net.Configuration.ConnectionManagementElement)
extern "C" int32_t ConnectionManagementElementCollection_IndexOf_m16239 (ConnectionManagementElementCollection_t4315 * __this, ConnectionManagementElement_t4316 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_Remove_m16240 (ConnectionManagementElementCollection_t4315 * __this, ConnectionManagementElement_t4316 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.String)
extern "C" void ConnectionManagementElementCollection_Remove_m16241 (ConnectionManagementElementCollection_t4315 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::RemoveAt(System.Int32)
extern "C" void ConnectionManagementElementCollection_RemoveAt_m16242 (ConnectionManagementElementCollection_t4315 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
