#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t4312;
// System.Net.Configuration.BypassElement
struct BypassElement_t4313;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.Object
struct Object_t;

// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern "C" void BypassElementCollection__ctor_m16199 (BypassElementCollection_t4312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.Int32)
extern "C" BypassElement_t4313 * BypassElementCollection_get_Item_m16200 (BypassElementCollection_t4312 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.Int32,System.Net.Configuration.BypassElement)
extern "C" void BypassElementCollection_set_Item_m16201 (BypassElementCollection_t4312 * __this, int32_t ___index, BypassElement_t4313 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.String)
extern "C" BypassElement_t4313 * BypassElementCollection_get_Item_m16202 (BypassElementCollection_t4312 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.String,System.Net.Configuration.BypassElement)
extern "C" void BypassElementCollection_set_Item_m16203 (BypassElementCollection_t4312 * __this, String_t* ___name, BypassElement_t4313 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.BypassElementCollection::get_ThrowOnDuplicate()
extern "C" bool BypassElementCollection_get_ThrowOnDuplicate_m16204 (BypassElementCollection_t4312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Add(System.Net.Configuration.BypassElement)
extern "C" void BypassElementCollection_Add_m16205 (BypassElementCollection_t4312 * __this, BypassElement_t4313 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Clear()
extern "C" void BypassElementCollection_Clear_m16206 (BypassElementCollection_t4312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.BypassElementCollection::CreateNewElement()
extern "C" ConfigurationElement_t3314 * BypassElementCollection_CreateNewElement_m16207 (BypassElementCollection_t4312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.BypassElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C" Object_t * BypassElementCollection_GetElementKey_m16208 (BypassElementCollection_t4312 * __this, ConfigurationElement_t3314 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.BypassElementCollection::IndexOf(System.Net.Configuration.BypassElement)
extern "C" int32_t BypassElementCollection_IndexOf_m16209 (BypassElementCollection_t4312 * __this, BypassElement_t4313 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.Net.Configuration.BypassElement)
extern "C" void BypassElementCollection_Remove_m16210 (BypassElementCollection_t4312 * __this, BypassElement_t4313 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.String)
extern "C" void BypassElementCollection_Remove_m16211 (BypassElementCollection_t4312 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::RemoveAt(System.Int32)
extern "C" void BypassElementCollection_RemoveAt_m16212 (BypassElementCollection_t4312 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
