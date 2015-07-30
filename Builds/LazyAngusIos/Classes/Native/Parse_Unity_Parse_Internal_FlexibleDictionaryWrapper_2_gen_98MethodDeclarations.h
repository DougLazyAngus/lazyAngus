#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>
struct FlexibleDictionaryWrapper_2_t1896;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1158;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9108;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7167;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t7559;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7165;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m50972_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m50972(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m50972_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50973_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50973(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50973_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m50974_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m50974(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m50974_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m50975_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m50975(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m50975_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50976_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50976(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50976_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m50977_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m50977(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m50977_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m50978_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m50978(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m50978_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m50979_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m50979(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m50979_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m50980_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m50980(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m50980_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m50981_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m50981(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m50981_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m50982_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m50982(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m50982_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m50983_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m50983(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m50983_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m50984_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2U5BU5D_t7559* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m50984(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2U5BU5D_t7559*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m50984_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m50985_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m50985(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m50985_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50986_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50986(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50986_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m50987_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, KeyValuePair_2_t7160  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m50987(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1896 *, KeyValuePair_2_t7160 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m50987_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m50988_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m50988(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m50988_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50989_gshared (FlexibleDictionaryWrapper_2_t1896 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50989(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1896 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m50989_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50990_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50990(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m50990_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7160  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50991_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7171  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50991(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7160  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7171 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m50991_gshared)(__this /* static, unused */, ___pair, method)
