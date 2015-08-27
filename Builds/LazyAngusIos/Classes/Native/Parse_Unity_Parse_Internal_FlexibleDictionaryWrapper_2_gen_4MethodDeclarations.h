#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1856;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1214;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1224;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t7219;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1413;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1400;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m46612_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m46612(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m46612_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46613_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46613(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46613_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m46614_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m46614(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m46614_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m46615_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m46615(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m46615_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46616_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46616(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46616_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m46617_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m46617(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m46617_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m46618_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m46618(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m46618_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Item(System.String)
extern "C" Object_t * FlexibleDictionaryWrapper_2_get_Item_m46619_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m46619(__this, ___key, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m46619_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m46620_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m46620(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m46620_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m46621_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m46621(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m46621_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m46622_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m46622(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m46622_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m46623_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m46623(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m46623_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m46624_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2U5BU5D_t1413* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m46624(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2U5BU5D_t1413*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m46624_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m46625_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m46625(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m46625_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m46626_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m46626(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m46626_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m46627_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, KeyValuePair_2_t778  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m46627(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1856 *, KeyValuePair_2_t778 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m46627_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46628_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46628(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46628_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46629_gshared (FlexibleDictionaryWrapper_2_t1856 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46629(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1856 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m46629_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::<get_Values>b__0(TIn)
extern "C" Object_t * FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46630_gshared (Object_t * __this /* static, unused */, uint16_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46630(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m46630_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt16>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t778  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46631_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7223  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46631(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t778  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7223 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m46631_gshared)(__this /* static, unused */, ___pair, method)
