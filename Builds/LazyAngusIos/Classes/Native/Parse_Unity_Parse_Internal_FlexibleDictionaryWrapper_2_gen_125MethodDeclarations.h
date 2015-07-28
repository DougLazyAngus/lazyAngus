#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1917;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1152;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t9103;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t7171;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t7682;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t7180;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m52522_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m52522(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m52522_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52523_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52523(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52523_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m52524_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m52524(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m52524_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m52525_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m52525(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m52525_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52526_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52526(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52526_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m52527_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m52527(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m52527_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m52528_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m52528(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m52528_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Item(System.String)
extern "C" uint64_t FlexibleDictionaryWrapper_2_get_Item_m52529_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m52529(__this, ___key, method) (( uint64_t (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m52529_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m52530_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m52530(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m52530_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m52531_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m52531(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m52531_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m52532_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m52532(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m52532_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m52533_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m52533(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m52533_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m52534_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2U5BU5D_t7682* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m52534(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2U5BU5D_t7682*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m52534_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m52535_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m52535(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m52535_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m52536_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m52536(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m52536_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m52537_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, KeyValuePair_2_t7175  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m52537(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1917 *, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m52537_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m52538_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m52538(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m52538_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52539_gshared (FlexibleDictionaryWrapper_2_t1917 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52539(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1917 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m52539_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<get_Values>b__0(TIn)
extern "C" uint64_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52540_gshared (Object_t * __this /* static, unused */, uint64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52540(__this /* static, unused */, ___item, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m52540_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7175  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52541_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7175  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52541(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7175  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7175 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m52541_gshared)(__this /* static, unused */, ___pair, method)
