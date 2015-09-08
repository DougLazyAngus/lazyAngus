#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1967;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1234;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t9842;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7789;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t8210;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t7816;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m56283_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m56283(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m56283_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56284_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56284(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56284_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m56285_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m56285(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m56285_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m56286_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m56286(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m56286_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56287_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56287(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56287_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m56288_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m56288(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m56288_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m56289_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m56289(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m56289_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Item(System.String)
extern "C" uint32_t FlexibleDictionaryWrapper_2_get_Item_m56290_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m56290(__this, ___key, method) (( uint32_t (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m56290_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m56291_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m56291(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m56291_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m56292_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56292(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56292_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m56293_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m56293(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m56293_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m56294_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m56294(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m56294_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m56295_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, KeyValuePair_2U5BU5D_t8210* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56295(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1967 *, KeyValuePair_2U5BU5D_t8210*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56295_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m56296_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m56296(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m56296_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m56297_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m56297(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m56297_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m56298_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, KeyValuePair_2_t7811  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m56298(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1967 *, KeyValuePair_2_t7811 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m56298_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m56299_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m56299(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m56299_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56300_gshared (FlexibleDictionaryWrapper_2_t1967 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56300(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1967 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m56300_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<get_Values>b__0(TIn)
extern "C" uint32_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56301_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56301(__this /* static, unused */, ___item, method) (( uint32_t (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m56301_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7811  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56302_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7793  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56302(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7811  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7793 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m56302_gshared)(__this /* static, unused */, ___pair, method)
