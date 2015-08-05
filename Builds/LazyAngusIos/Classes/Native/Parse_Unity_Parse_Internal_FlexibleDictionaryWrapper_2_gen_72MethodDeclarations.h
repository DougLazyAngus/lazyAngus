#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>
struct FlexibleDictionaryWrapper_2_t1873;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1161;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t9109;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t7170;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t7432;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t7150;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C" void FlexibleDictionaryWrapper_2__ctor_m49441_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m49441(__this, ___toWrap, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m49441_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Add(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49442_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49442(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49442_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::ContainsKey(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_ContainsKey_m49443_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m49443(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m49443_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_Keys()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Keys_m49444_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m49444(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m49444_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Remove(System.String)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49445_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49445(__this, ___key, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49445_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::TryGetValue(System.String,TOut&)
extern "C" bool FlexibleDictionaryWrapper_2_TryGetValue_m49446_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m49446(__this, ___key, ___value, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m49446_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_Values()
extern "C" Object_t* FlexibleDictionaryWrapper_2_get_Values_m49447_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49447(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49447_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_Item(System.String)
extern "C" uint16_t FlexibleDictionaryWrapper_2_get_Item_m49448_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m49448(__this, ___key, method) (( uint16_t (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m49448_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::set_Item(System.String,TOut)
extern "C" void FlexibleDictionaryWrapper_2_set_Item_m49449_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m49449(__this, ___key, ___value, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m49449_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" void FlexibleDictionaryWrapper_2_Add_m49450_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m49450(__this, ___item, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m49450_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Clear()
extern "C" void FlexibleDictionaryWrapper_2_Clear_m49451_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m49451(__this, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m49451_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Contains_m49452_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m49452(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m49452_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C" void FlexibleDictionaryWrapper_2_CopyTo_m49453_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2U5BU5D_t7432* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m49453(__this, ___array, ___arrayIndex, method) (( void (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2U5BU5D_t7432*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m49453_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_Count()
extern "C" int32_t FlexibleDictionaryWrapper_2_get_Count_m49454_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m49454(__this, method) (( int32_t (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m49454_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::get_IsReadOnly()
extern "C" bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49455_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49455(__this, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49455_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C" bool FlexibleDictionaryWrapper_2_Remove_m49456_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, KeyValuePair_2_t7145  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m49456(__this, ___item, method) (( bool (*) (FlexibleDictionaryWrapper_2_t1873 *, KeyValuePair_2_t7145 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m49456_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::GetEnumerator()
extern "C" Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m49457_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m49457(__this, method) (( Object_t* (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m49457_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49458_gshared (FlexibleDictionaryWrapper_2_t1873 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49458(__this, method) (( Object_t * (*) (FlexibleDictionaryWrapper_2_t1873 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m49458_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::<get_Values>b__0(TIn)
extern "C" uint16_t FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49459_gshared (Object_t * __this /* static, unused */, int64_t ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49459(__this /* static, unused */, ___item, method) (( uint16_t (*) (Object_t * /* static, unused */, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_U3Cget_ValuesU3Eb__0_m49459_gshared)(__this /* static, unused */, ___item, method)
// System.Collections.Generic.KeyValuePair`2<System.String,TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int64>::<CopyTo>b__2(System.Collections.Generic.KeyValuePair`2<System.String,TIn>)
extern "C" KeyValuePair_2_t7145  FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49460_gshared (Object_t * __this /* static, unused */, KeyValuePair_2_t7174  ___pair, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49460(__this /* static, unused */, ___pair, method) (( KeyValuePair_2_t7145  (*) (Object_t * /* static, unused */, KeyValuePair_2_t7174 , const MethodInfo*))FlexibleDictionaryWrapper_2_U3CCopyToU3Eb__2_m49460_gshared)(__this /* static, unused */, ___pair, method)
