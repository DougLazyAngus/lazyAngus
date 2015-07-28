#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>
struct FlexibleDictionaryWrapper_2_t1816;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1151;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9029;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t757;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7214;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7106;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46148_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46148(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1816 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46148_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46150_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46150(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1816 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46150_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46152_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46152(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1816 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46152_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46154_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46154(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46154_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46156_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46156(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1816 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46156_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46158_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46158(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1816 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46158_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46160_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46160(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46160_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46162_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46162(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1816 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46162_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46164_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46164(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1816 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46164_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46166_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46166(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1816 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46166_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46168_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46168(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46168_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46170_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46170(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1816 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46170_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46172_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, KeyValuePair_2U5BU5D_t7214* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46172(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1816 *, KeyValuePair_2U5BU5D_t7214*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46172_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46174_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46174(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46174_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46176_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46176(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46176_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46178_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, KeyValuePair_2_t7101  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46178(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1816 *, KeyValuePair_2_t7101 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46178_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46180_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46180(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46180_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46182_gshared (FlexibleDictionaryWrapper_2_t1816 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46182(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1816 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46182_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46184_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46184(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46184_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7101  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46186_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t719  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46186(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7101  (*) (Object_t * /* static, unused */, KeyValuePair_2_t719 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46186_gshared)(__this /* static, unused */, ___pair, method)
