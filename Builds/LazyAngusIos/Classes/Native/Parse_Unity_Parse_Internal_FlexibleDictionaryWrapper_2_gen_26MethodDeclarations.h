#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1824;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t9030;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t7149;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t7215;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t7107;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46830_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46830(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1824 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46830_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46832_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46832(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1824 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46832_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46834_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46834(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1824 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46834_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46836_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46836(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1824 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46836_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46838_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46838(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1824 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46838_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46840_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46840(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1824 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46840_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46842_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46842(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1824 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46842_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Item(System.String)
extern "C" uint8_t FlexibleDictionaryWrapper_2_get_Item_m46844_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46844(__this, ___key, method) (( uint8_t (*) (FlexibleDictionaryWrapper_2_t1824 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46844_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46846_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46846(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1824 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46846_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46848_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46848(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1824 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46848_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46850_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46850(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1824 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46850_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46852_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46852(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1824 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46852_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46854_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, KeyValuePair_2U5BU5D_t7215* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46854(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1824 *, KeyValuePair_2U5BU5D_t7215*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46854_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46856_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46856(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1824 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46856_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46858_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46858(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1824 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46858_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46860_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, KeyValuePair_2_t7102  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46860(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1824 *, KeyValuePair_2_t7102 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46860_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46862_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46862(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1824 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46862_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46864_gshared (FlexibleDictionaryWrapper_2_t1824 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46864(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1824 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46864_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::<get_Values>b__0(TIn)
extern "C" uint8_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46866_gshared (Object_t * __this /* static, unused */, uint32_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46866(__this /* static, unused */, ___item, method) (( uint8_t (*) (Object_t * /* static, unused */, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46866_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7102  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46868_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7153  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46868(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7102  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7153 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46868_gshared)(__this /* static, unused */, ___pair, method)
