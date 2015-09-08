#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t4342;
// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t4343;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3318;
// System.Object
struct Object_t;

// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
extern "C" void WebRequestModuleElementCollection__ctor_m16371 (WebRequestModuleElementCollection_t4342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.Int32)
extern "C" WebRequestModuleElement_t4343 * WebRequestModuleElementCollection_get_Item_m16372 (WebRequestModuleElementCollection_t4342 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.Int32,System.Net.Configuration.WebRequestModuleElement)
extern "C" void WebRequestModuleElementCollection_set_Item_m16373 (WebRequestModuleElementCollection_t4342 * __this, int32_t ___index, WebRequestModuleElement_t4343 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.WebRequestModuleElement System.Net.Configuration.WebRequestModuleElementCollection::get_Item(System.String)
extern "C" WebRequestModuleElement_t4343 * WebRequestModuleElementCollection_get_Item_m16374 (WebRequestModuleElementCollection_t4342 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::set_Item(System.String,System.Net.Configuration.WebRequestModuleElement)
extern "C" void WebRequestModuleElementCollection_set_Item_m16375 (WebRequestModuleElementCollection_t4342 * __this, String_t* ___name, WebRequestModuleElement_t4343 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Add(System.Net.Configuration.WebRequestModuleElement)
extern "C" void WebRequestModuleElementCollection_Add_m16376 (WebRequestModuleElementCollection_t4342 * __this, WebRequestModuleElement_t4343 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Clear()
extern "C" void WebRequestModuleElementCollection_Clear_m16377 (WebRequestModuleElementCollection_t4342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.WebRequestModuleElementCollection::CreateNewElement()
extern "C" ConfigurationElement_t3318 * WebRequestModuleElementCollection_CreateNewElement_m16378 (WebRequestModuleElementCollection_t4342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.WebRequestModuleElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * WebRequestModuleElementCollection_GetElementKey_m16379 (WebRequestModuleElementCollection_t4342 * __this, ConfigurationElement_t3318 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.WebRequestModuleElementCollection::IndexOf(System.Net.Configuration.WebRequestModuleElement)
extern "C" int32_t WebRequestModuleElementCollection_IndexOf_m16380 (WebRequestModuleElementCollection_t4342 * __this, WebRequestModuleElement_t4343 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.Net.Configuration.WebRequestModuleElement)
extern "C" void WebRequestModuleElementCollection_Remove_m16381 (WebRequestModuleElementCollection_t4342 * __this, WebRequestModuleElement_t4343 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::Remove(System.String)
extern "C" void WebRequestModuleElementCollection_Remove_m16382 (WebRequestModuleElementCollection_t4342 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::RemoveAt(System.Int32)
extern "C" void WebRequestModuleElementCollection_RemoveAt_m16383 (WebRequestModuleElementCollection_t4342 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
