#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>
struct FlexibleDictionaryWrapper_2_t1794;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1162;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t7109;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1353;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1340;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m45622_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m45622(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1794 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m45622_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45623_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45623(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1794 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45623_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m45624_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m45624(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1794 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m45624_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m45625_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m45625(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m45625_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45626_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45626(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1794 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45626_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m45627_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m45627(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1794 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m45627_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m45628_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m45628(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m45628_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m45629_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45629(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1794 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45629_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m45630_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m45630(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1794 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m45630_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m45631_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m45631(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1794 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m45631_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m45632_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m45632(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m45632_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m45633_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m45633(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1794 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m45633_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m45634_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, KeyValuePair_2U5BU5D_t1353* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m45634(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1794 *, KeyValuePair_2U5BU5D_t1353*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m45634_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m45635_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m45635(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m45635_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m45636_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m45636(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m45636_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m45637_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, KeyValuePair_2_t720  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m45637(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1794 *, KeyValuePair_2_t720 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m45637_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m45638_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m45638(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m45638_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45639_gshared (FlexibleDictionaryWrapper_2_t1794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45639(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m45639_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45640_gshared (Object_t * __this /* static, unused */, int8_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45640(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m45640_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t720  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45641_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7113  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45641(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t720  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7113 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m45641_gshared)(__this /* static, unused */, ___pair, method)
