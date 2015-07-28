#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t3906;
// System.Object
struct Object_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3908;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2860;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t3905;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C" void NameObjectCollectionBase__ctor_m13062 (NameObjectCollectionBase_t3906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase__ctor_m13063 (NameObjectCollectionBase_t3906 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m13064 (NameObjectCollectionBase_t3906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m13065 (NameObjectCollectionBase_t3906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m13066 (NameObjectCollectionBase_t3906 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C" void NameObjectCollectionBase_Init_m13067 (NameObjectCollectionBase_t3906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C" KeysCollection_t3908 * NameObjectCollectionBase_get_Keys_m13068 (NameObjectCollectionBase_t3906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C" Object_t * NameObjectCollectionBase_GetEnumerator_m13069 (NameObjectCollectionBase_t3906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase_GetObjectData_m13070 (NameObjectCollectionBase_t3906 * __this, SerializationInfo_t2860 * ___info, StreamingContext_t2861  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C" int32_t NameObjectCollectionBase_get_Count_m13071 (NameObjectCollectionBase_t3906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C" void NameObjectCollectionBase_OnDeserialization_m13072 (NameObjectCollectionBase_t3906 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C" bool NameObjectCollectionBase_get_IsReadOnly_m13073 (NameObjectCollectionBase_t3906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseAdd_m13074 (NameObjectCollectionBase_t3906 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m13075 (NameObjectCollectionBase_t3906 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m13076 (NameObjectCollectionBase_t3906 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C" String_t* NameObjectCollectionBase_BaseGetKey_m13077 (NameObjectCollectionBase_t3906 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern "C" void NameObjectCollectionBase_BaseRemove_m13078 (NameObjectCollectionBase_t3906 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseSet_m13079 (NameObjectCollectionBase_t3906 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C" _Item_t3905 * NameObjectCollectionBase_FindFirstMatchedItem_m13080 (NameObjectCollectionBase_t3906 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern "C" bool NameObjectCollectionBase_Equals_m13081 (NameObjectCollectionBase_t3906 * __this, String_t* ___s1, String_t* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
