#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.PlatformHooks/SettingsWrapper
struct SettingsWrapper_t1265;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1168;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1359;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1346;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// Parse.PlatformHooks/SettingsWrapper Parse.PlatformHooks/SettingsWrapper::get_Wrapper()
extern "C" SettingsWrapper_t1265 * SettingsWrapper_get_Wrapper_m6843 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::.ctor()
extern "C" void SettingsWrapper__ctor_m6844 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.PlatformHooks/SettingsWrapper::Load()
extern "C" String_t* SettingsWrapper_Load_m6845 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Save()
extern "C" void SettingsWrapper_Save_m6846 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Add(System.String,System.Object)
extern "C" void SettingsWrapper_Add_m6847 (SettingsWrapper_t1265 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::ContainsKey(System.String)
extern "C" bool SettingsWrapper_ContainsKey_m6848 (SettingsWrapper_t1265 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.PlatformHooks/SettingsWrapper::get_Keys()
extern "C" Object_t* SettingsWrapper_get_Keys_m6849 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Remove(System.String)
extern "C" bool SettingsWrapper_Remove_m6850 (SettingsWrapper_t1265 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::TryGetValue(System.String,System.Object&)
extern "C" bool SettingsWrapper_TryGetValue_m6851 (SettingsWrapper_t1265 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> Parse.PlatformHooks/SettingsWrapper::get_Values()
extern "C" Object_t* SettingsWrapper_get_Values_m6852 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.PlatformHooks/SettingsWrapper::get_Item(System.String)
extern "C" Object_t * SettingsWrapper_get_Item_m6853 (SettingsWrapper_t1265 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::set_Item(System.String,System.Object)
extern "C" void SettingsWrapper_set_Item_m6854 (SettingsWrapper_t1265 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" void SettingsWrapper_Add_m6855 (SettingsWrapper_t1265 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::Clear()
extern "C" void SettingsWrapper_Clear_m6856 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool SettingsWrapper_Contains_m6857 (SettingsWrapper_t1265 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.PlatformHooks/SettingsWrapper::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C" void SettingsWrapper_CopyTo_m6858 (SettingsWrapper_t1265 * __this, KeyValuePair_2U5BU5D_t1359* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.PlatformHooks/SettingsWrapper::get_Count()
extern "C" int32_t SettingsWrapper_get_Count_m6859 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::get_IsReadOnly()
extern "C" bool SettingsWrapper_get_IsReadOnly_m6860 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.PlatformHooks/SettingsWrapper::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool SettingsWrapper_Remove_m6861 (SettingsWrapper_t1265 * __this, KeyValuePair_2_t727  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.PlatformHooks/SettingsWrapper::GetEnumerator()
extern "C" Object_t* SettingsWrapper_GetEnumerator_m6862 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.PlatformHooks/SettingsWrapper::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SettingsWrapper_System_Collections_IEnumerable_GetEnumerator_m6863 (SettingsWrapper_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
