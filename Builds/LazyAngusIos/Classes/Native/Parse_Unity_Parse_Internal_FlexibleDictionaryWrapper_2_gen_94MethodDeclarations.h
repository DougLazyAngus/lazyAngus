#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>
struct FlexibleDictionaryWrapper_2_t1973;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1241;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9849;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t7785;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8217;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7823;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_70.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56297_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56297(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56297_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56298_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56298(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56298_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56299_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56299(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56299_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56300_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56300(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56300_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56301_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56301(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56301_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56302_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56302(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56302_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56303_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56303(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56303_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56304_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56304(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56304_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56305_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56305(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56305_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56306_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56306(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56306_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56307_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56307(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56307_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56308_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56308(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56308_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56309_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2U5BU5D_t8217* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56309(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2U5BU5D_t8217*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56309_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56310_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56310(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56310_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56311_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56311(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56311_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56312_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, KeyValuePair_2_t7818  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56312(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1973 *, KeyValuePair_2_t7818 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56312_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56313_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56313(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56313_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56314_gshared (FlexibleDictionaryWrapper_2_t1973 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56314(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1973 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56314_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56315_gshared (Object_t * __this /* static, unused */, int16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56315(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56315_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7818  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56316_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7789  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56316(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7818  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7789 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56316_gshared)(__this /* static, unused */, ___pair, method)
