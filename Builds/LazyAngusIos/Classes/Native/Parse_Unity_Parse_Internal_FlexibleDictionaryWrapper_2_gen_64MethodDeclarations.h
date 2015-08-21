#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>
struct FlexibleDictionaryWrapper_2_t1913;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1211;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9207;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t820;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7507;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7225;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49625_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49625(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49625_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49626_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49626(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49626_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49627_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49627(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49627_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49628_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49628(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49628_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49629_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49629(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49629_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49630_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49630(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49630_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49631_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49631(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49631_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49632_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49632(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49632_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49633_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49633(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49633_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49634_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49634(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49634_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49635_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49635(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49635_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49636_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49636(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49636_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49637_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2U5BU5D_t7507* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49637(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2U5BU5D_t7507*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49637_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49638_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49638(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49638_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49639_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49639(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49639_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49640_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, KeyValuePair_2_t7220  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49640(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1913 *, KeyValuePair_2_t7220 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49640_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49641_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49641(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49641_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49642_gshared (FlexibleDictionaryWrapper_2_t1913 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49642(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1913 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49642_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49643_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49643(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49643_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7220  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49644_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t775  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49644(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7220  (*) (Object_t * /* static, unused */, KeyValuePair_2_t775 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49644_gshared)(__this /* static, unused */, ___pair, method)
