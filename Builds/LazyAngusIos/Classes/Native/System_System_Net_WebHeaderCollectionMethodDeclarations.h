#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1482;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1425;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t45;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
extern "C" void WebHeaderCollection__ctor_m7700 (WebHeaderCollection_t1482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection__ctor_m7701 (WebHeaderCollection_t1482 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
extern "C" void WebHeaderCollection__ctor_m7702 (WebHeaderCollection_t1482 * __this, bool ___internallyCreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
extern "C" void WebHeaderCollection__cctor_m7703 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m7704 (WebHeaderCollection_t1482 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String)
extern "C" void WebHeaderCollection_Add_m7705 (WebHeaderCollection_t1482 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C" void WebHeaderCollection_Add_m7706 (WebHeaderCollection_t1482 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C" void WebHeaderCollection_AddWithoutValidate_m7707 (WebHeaderCollection_t1482 * __this, String_t* ___headerName, String_t* ___headerValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::GetValues(System.String)
extern "C" StringU5BU5D_t45* WebHeaderCollection_GetValues_m7708 (WebHeaderCollection_t1482 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C" bool WebHeaderCollection_IsRestricted_m7709 (Object_t * __this /* static, unused */, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C" void WebHeaderCollection_OnDeserialization_m7710 (WebHeaderCollection_t1482 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Remove(System.String)
extern "C" void WebHeaderCollection_Remove_m7711 (WebHeaderCollection_t1482 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
extern "C" void WebHeaderCollection_Set_m7712 (WebHeaderCollection_t1482 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
extern "C" String_t* WebHeaderCollection_ToString_m7713 (WebHeaderCollection_t1482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_GetObjectData_m7714 (WebHeaderCollection_t1482 * __this, SerializationInfo_t1220 * ___serializationInfo, StreamingContext_t1221  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
extern "C" int32_t WebHeaderCollection_get_Count_m7715 (WebHeaderCollection_t1482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
extern "C" KeysCollection_t1425 * WebHeaderCollection_get_Keys_m7716 (WebHeaderCollection_t1482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern "C" String_t* WebHeaderCollection_Get_m7717 (WebHeaderCollection_t1482 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.String)
extern "C" String_t* WebHeaderCollection_Get_m7718 (WebHeaderCollection_t1482 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C" String_t* WebHeaderCollection_GetKey_m7719 (WebHeaderCollection_t1482 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern "C" Object_t * WebHeaderCollection_GetEnumerator_m7720 (WebHeaderCollection_t1482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::SetInternal(System.String)
extern "C" void WebHeaderCollection_SetInternal_m7721 (WebHeaderCollection_t1482 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::SetInternal(System.String,System.String)
extern "C" void WebHeaderCollection_SetInternal_m7722 (WebHeaderCollection_t1482 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::RemoveAndAdd(System.String,System.String)
extern "C" void WebHeaderCollection_RemoveAndAdd_m7723 (WebHeaderCollection_t1482 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::RemoveInternal(System.String)
extern "C" void WebHeaderCollection_RemoveInternal_m7724 (WebHeaderCollection_t1482 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsMultiValue(System.String)
extern "C" bool WebHeaderCollection_IsMultiValue_m7725 (Object_t * __this /* static, unused */, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C" bool WebHeaderCollection_IsHeaderValue_m7726 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C" bool WebHeaderCollection_IsHeaderName_m7727 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
