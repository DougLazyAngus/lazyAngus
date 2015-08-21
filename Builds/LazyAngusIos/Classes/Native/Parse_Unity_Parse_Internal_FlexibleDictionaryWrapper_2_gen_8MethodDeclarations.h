#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1857;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1221;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7256;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1410;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1397;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46805_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46805(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46805_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46806_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46806(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46806_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46807_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46807(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46807_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46808_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46808(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46808_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46809_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46809(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46809_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46810_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46810(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46810_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46811_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46811(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46811_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46812_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46812(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46812_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46813_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46813(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46813_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46814_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46814(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46814_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46815_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46815(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46815_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46816_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46816(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46816_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46817_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, KeyValuePair_2U5BU5D_t1410* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46817(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1857 *, KeyValuePair_2U5BU5D_t1410*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46817_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46818_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46818(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46818_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46819_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46819(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46819_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46820_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, KeyValuePair_2_t775  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46820(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1857 *, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46820_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46821_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46821(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46821_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46822_gshared (FlexibleDictionaryWrapper_2_t1857 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46822(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1857 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46822_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46823_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46823(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46823_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t775  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46824_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7260  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46824(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t775  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7260 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46824_gshared)(__this /* static, unused */, ___pair, method)
