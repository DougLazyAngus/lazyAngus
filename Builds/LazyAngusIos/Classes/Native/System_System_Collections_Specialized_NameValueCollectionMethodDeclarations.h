#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t1429;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Collections.ArrayList
struct ArrayList_t1426;
// System.String[]
struct StringU5BU5D_t45;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C" void NameValueCollection__ctor_m6827 (NameValueCollection_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameValueCollection__ctor_m6828 (NameValueCollection_t1429 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern "C" String_t* NameValueCollection_get_Item_m6829 (NameValueCollection_t1429 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern "C" void NameValueCollection_set_Item_m6830 (NameValueCollection_t1429 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C" void NameValueCollection_Add_m6831 (NameValueCollection_t1429 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C" String_t* NameValueCollection_Get_m6832 (NameValueCollection_t1429 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern "C" String_t* NameValueCollection_Get_m6833 (NameValueCollection_t1429 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C" String_t* NameValueCollection_AsSingleString_m6834 (Object_t * __this /* static, unused */, ArrayList_t1426 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C" String_t* NameValueCollection_GetKey_m6835 (NameValueCollection_t1429 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern "C" StringU5BU5D_t45* NameValueCollection_GetValues_m6836 (NameValueCollection_t1429 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::AsStringArray(System.Collections.ArrayList)
extern "C" StringU5BU5D_t45* NameValueCollection_AsStringArray_m6837 (Object_t * __this /* static, unused */, ArrayList_t1426 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern "C" void NameValueCollection_Remove_m6838 (NameValueCollection_t1429 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern "C" void NameValueCollection_Set_m6839 (NameValueCollection_t1429 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C" void NameValueCollection_InvalidateCachedArrays_m6840 (NameValueCollection_t1429 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
