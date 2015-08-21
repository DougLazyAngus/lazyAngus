#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t4444;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t752;
// System.Collections.Hashtable
struct Hashtable_t694;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2917;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t782;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
extern "C" void SyncHashtable__ctor_m16954 (SyncHashtable_t4444 * __this, Hashtable_t694 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyncHashtable__ctor_m16955 (SyncHashtable_t4444 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m16956 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyncHashtable_GetObjectData_m16957 (SyncHashtable_t4444 * __this, SerializationInfo_t2917 * ___info, StreamingContext_t2918  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
extern "C" int32_t SyncHashtable_get_Count_m16958 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsSynchronized()
extern "C" bool SyncHashtable_get_IsSynchronized_m16959 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
extern "C" Object_t * SyncHashtable_get_SyncRoot_m16960 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
extern "C" Object_t * SyncHashtable_get_Keys_m16961 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
extern "C" Object_t * SyncHashtable_get_Values_m16962 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
extern "C" Object_t * SyncHashtable_get_Item_m16963 (SyncHashtable_t4444 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
extern "C" void SyncHashtable_set_Item_m16964 (SyncHashtable_t4444 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
extern "C" void SyncHashtable_CopyTo_m16965 (SyncHashtable_t4444 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
extern "C" void SyncHashtable_Add_m16966 (SyncHashtable_t4444 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
extern "C" void SyncHashtable_Clear_m16967 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
extern "C" bool SyncHashtable_Contains_m16968 (SyncHashtable_t4444 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
extern "C" Object_t * SyncHashtable_GetEnumerator_m16969 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
extern "C" void SyncHashtable_Remove_m16970 (SyncHashtable_t4444 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
extern "C" bool SyncHashtable_ContainsKey_m16971 (SyncHashtable_t4444 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
extern "C" Object_t * SyncHashtable_Clone_m16972 (SyncHashtable_t4444 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
