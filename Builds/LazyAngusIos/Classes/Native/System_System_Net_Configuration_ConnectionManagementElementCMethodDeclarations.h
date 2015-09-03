#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_t4314;
// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t4315;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.Object
struct Object_t;

// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern "C" void ConnectionManagementElementCollection__ctor_m16217 (ConnectionManagementElementCollection_t4314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.Int32)
extern "C" ConnectionManagementElement_t4315 * ConnectionManagementElementCollection_get_Item_m16218 (ConnectionManagementElementCollection_t4314 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.Int32,System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_set_Item_m16219 (ConnectionManagementElementCollection_t4314 * __this, int32_t ___index, ConnectionManagementElement_t4315 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.String)
extern "C" ConnectionManagementElement_t4315 * ConnectionManagementElementCollection_get_Item_m16220 (ConnectionManagementElementCollection_t4314 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.String,System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_set_Item_m16221 (ConnectionManagementElementCollection_t4314 * __this, String_t* ___name, ConnectionManagementElement_t4315 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Add(System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_Add_m16222 (ConnectionManagementElementCollection_t4314 * __this, ConnectionManagementElement_t4315 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Clear()
extern "C" void ConnectionManagementElementCollection_Clear_m16223 (ConnectionManagementElementCollection_t4314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.ConnectionManagementElementCollection::CreateNewElement()
extern "C" ConfigurationElement_t3314 * ConnectionManagementElementCollection_CreateNewElement_m16224 (ConnectionManagementElementCollection_t4314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.ConnectionManagementElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * ConnectionManagementElementCollection_GetElementKey_m16225 (ConnectionManagementElementCollection_t4314 * __this, ConfigurationElement_t3314 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.ConnectionManagementElementCollection::IndexOf(System.Net.Configuration.ConnectionManagementElement)
extern "C" int32_t ConnectionManagementElementCollection_IndexOf_m16226 (ConnectionManagementElementCollection_t4314 * __this, ConnectionManagementElement_t4315 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.Net.Configuration.ConnectionManagementElement)
extern "C" void ConnectionManagementElementCollection_Remove_m16227 (ConnectionManagementElementCollection_t4314 * __this, ConnectionManagementElement_t4315 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.String)
extern "C" void ConnectionManagementElementCollection_Remove_m16228 (ConnectionManagementElementCollection_t4314 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::RemoveAt(System.Int32)
extern "C" void ConnectionManagementElementCollection_RemoveAt_m16229 (ConnectionManagementElementCollection_t4314 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
